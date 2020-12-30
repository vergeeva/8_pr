#pragma once
//Текст задания. Вариант 2
//Время от времени фирма «Рога и копыта» устраивает презентации, 
//на которые приглашаются разные нужные лица.База данных нужных лиц хранится в форме таблицы с
//полями, например:
//Имя Фирма Сфера деятельности Круг интересов И так далее.
//Разработать приложение – генератор приглашений.Форма приглашения задана в
//шаблонах.Можно выбрать шаблон.Далее необходимо задать название мероприятия,
//представить инструмент для выбора нужных лиц, которым разослать приглашения.

void Take_From(String^ fileName, Dictionary <String^, List <String^>^>^ d)
{
	StreamReader^ SR = gcnew StreamReader(fileName);
	String^ str = gcnew String("");

	while (str = SR->ReadLine()) {

		List <String^>^ temp = gcnew List <String^>(5);
		String^ p = gcnew String("");
		String^ e;
		p = str->Substring(0, str->IndexOf("!"));

		temp->Add(p);

		p = str->Substring(str->IndexOf("!") + 1, str->IndexOf("@") - str->IndexOf("!") - 1);
		temp->Add(p);

		p = str->Substring(str->IndexOf("@") + 1, str->IndexOf("#") - str->IndexOf("@") - 1);
		temp->Add(p);

		p = str->Substring(str->IndexOf("#") + 1, str->IndexOf("%") - str->IndexOf("#") - 1);
		temp->Add(p);

		p = str->Substring(str->IndexOf("%") + 1, str->IndexOf("^") - str->IndexOf("%") - 1);
		temp->Add(p);

		e = str->Substring(str->IndexOf("^") + 1);
		d->Add(e, temp);
	}
	SR->Close();
}

void Look_Dict(Dictionary <String^, List <String^>^>^ d, System::Windows::Forms::DataGridView^ D)
{
	D->RowCount = d->Count;
	int i = 0;
	for each (KeyValuePair <String^, List <String^>^> ^ var in d)
	{
		for (int j = 0; j < var->Value->Count; j++)
		{
			D->Rows[i]->Cells[j]->Value = var->Value[j];
		}
		i++;
	}
}

void Update_File(String^ fileName, Dictionary <String^, List <String^>^>^ d)
{
	StreamWriter^ SR = gcnew StreamWriter(fileName);
	String^ str = gcnew String("");
	for each (KeyValuePair <String^, List <String^>^> ^ v in d)
	{
		String^ Line = gcnew String("");
		int counter = 0;
		for (int i = 0; i < v->Value->Count; i++)
		{
			switch (counter)
			{
			case(0):
			{
				Line += v->Value[i] + "!";
				break;
			}
			case(1):
			{
				Line += v->Value[i] + "@";
				break;
			}
			case(2):
			{
				Line += v->Value[i] + "#";
				break;
			}
			case(3):
			{
				Line += v->Value[i] + "%";
				break;
			}
			case(4):
			{
				Line += v->Value[i] + "^";
				break;
			}
			default:
				break;
			}
			counter++;
		}
		Line += Convert::ToString(v->Key)+ "\n";
		SR->Write(Line);
	}
	SR->Close();
}


String^ Invitation(String^ Name, int key, List <String^>^ data) //Имя приглашенного, ключ приглашения,  
{																//данные в окнах,которые заполнял пользователь
	String^ Inv = gcnew String(""); //Текст приглашения
	switch (key)
	{
	case(1): //Свадьба
	{
		Inv += "Приглашение на свадьбу\n" + "Дорог" + data[0] + ", " + Name + ",\n";
		Inv += "Приглашаем вас на торжество, посвященное бракосочетанию, \nкоторое состоится " + data[1] + "\n";
		Inv += "в ЗАГСе по адресу: " + data[2] + "\nСвадебный банкет будет проходить в " + data[3] + "\n";
		Inv += "по адресу: " + data[4] + "\n" + "Будем рады видеть вас! С любовью, " + data[5];
		break;
	}
	case(2): //Бизнес-конференция
	{
		Inv += "Приглашение на бизнес-конференцию\n" + "Уважаем" + data[0] + ", " + Name + ",\n";
		Inv += "Приглашаем вас на конференцию " + data[1] + "\n" + "по теме:" + data[2] + ".\n";
		Inv += "Встреча состоится в " + data[3] + " " + data[4] + "\n";
		Inv += "Место проведения: " + data[5] + "\n" + "Адрес: " + data[6];
		break;
	}
	case(3): //День рождения
	{
		Inv += "Приглашение на день рождения\n" + "Дорог" + data[0] + ", " + Name + ",\n";
		Inv += "Приглашаю тебя на день рождения, празднование которого\nсостоится в " + data[1] + "\n" + "по адресу:" + data[2] + ".\n";
		Inv += "Бери с собой хорошее настроение! будет весело!\nС наилучшими пожеланиями, " + data[3] + "<3";
		break;
	}

	case(0): 
	{
		Inv = "Нет приглашений на данный момент";
		break;
	}
	default:
		break;
	}
	return Inv;
}