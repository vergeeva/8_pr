#pragma once
//����� �������. ������� 2
//����� �� ������� ����� ����� � ������ ���������� �����������, 
//�� ������� ������������ ������ ������ ����.���� ������ ������ ��� �������� � ����� ������� �
//������, ��������:
//��� ����� ����� ������������ ���� ��������� � ��� �����.
//����������� ���������� � ��������� �����������.����� ����������� ������ �
//��������.����� ������� ������.����� ���������� ������ �������� �����������,
//����������� ���������� ��� ������ ������ ���, ������� ��������� �����������.

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


String^ Invitation(String^ Name, int key, List <String^>^ data) //��� �������������, ���� �����������,  
{																//������ � �����,������� �������� ������������
	String^ Inv = gcnew String(""); //����� �����������
	switch (key)
	{
	case(1): //�������
	{
		Inv += "����������� �� �������\n" + "�����" + data[0] + ", " + Name + ",\n";
		Inv += "���������� ��� �� ���������, ����������� ��������������, \n������� ��������� " + data[1] + "\n";
		Inv += "� ����� �� ������: " + data[2] + "\n��������� ������ ����� ��������� � " + data[3] + "\n";
		Inv += "�� ������: " + data[4] + "\n" + "����� ���� ������ ���! � �������, " + data[5];
		break;
	}
	case(2): //������-�����������
	{
		Inv += "����������� �� ������-�����������\n" + "�������" + data[0] + ", " + Name + ",\n";
		Inv += "���������� ��� �� ����������� " + data[1] + "\n" + "�� ����:" + data[2] + ".\n";
		Inv += "������� ��������� � " + data[3] + " " + data[4] + "\n";
		Inv += "����� ����������: " + data[5] + "\n" + "�����: " + data[6];
		break;
	}
	case(3): //���� ��������
	{
		Inv += "����������� �� ���� ��������\n" + "�����" + data[0] + ", " + Name + ",\n";
		Inv += "��������� ���� �� ���� ��������, ������������ ��������\n��������� � " + data[1] + "\n" + "�� ������:" + data[2] + ".\n";
		Inv += "���� � ����� ������� ����������! ����� ������!\n� ���������� �����������, " + data[3] + "<3";
		break;
	}

	case(0): 
	{
		Inv = "��� ����������� �� ������ ������";
		break;
	}
	default:
		break;
	}
	return Inv;
}