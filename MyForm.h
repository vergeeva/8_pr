#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
#include "Header.h"

namespace My8pr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//dict = gcnew Dictionary <int, Dictionary <String^, String^>^>;
			dict_1 = gcnew Dictionary <String^, List <String^>^>;
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		Dictionary <int, Dictionary <String^, String^>^>^ dict;
		Dictionary <String^, List <String^>^>^ dict_1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Interests;
	private: System::Windows::Forms::TextBox^ NameTB;



	private: System::Windows::Forms::TextBox^ LastName;
	private: System::Windows::Forms::TextBox^ Activities;



	private: System::Windows::Forms::TextBox^ Patronymic;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ tb06;
	private: System::Windows::Forms::TextBox^ tb07;





	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ tb05;

	private: System::Windows::Forms::TextBox^ tb04;



	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ tb03;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tb02;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tb1;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ d3;

	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ d4;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ d2;

	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ d1;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ w3;


	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ w4;
	private: System::Windows::Forms::TextBox^ w6;


	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::TextBox^ w2;

	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::TextBox^ w5;

	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::TextBox^ w1;

	private: System::Windows::Forms::Button^ button3;





private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;









	private: System::Windows::Forms::Panel^ panel1;







	public:

	protected:

		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		//void Take_From(String^ fileName, Dictionary <int, Dictionary <String^, String^>^>^ d)
		//{
		//	StreamReader^ SR = gcnew StreamReader(fileName);
		//	String^ str = gcnew String("");
		//	while (str = SR->ReadLine()) {
		//		Dictionary <String^, String^>^ temp = gcnew Dictionary <String^, String^>;
		//		String ^p = gcnew String("");
		//		int e;
		//		p = str->Substring(0, str->IndexOf("!"));
		//		
		//		temp->Add("Фамилия", p);

		//		p = str->Substring(str->IndexOf("!")+1, str->IndexOf("@")- str->IndexOf("!")-1);
		//		temp->Add("Имя", p);

		//		p = str->Substring(str->IndexOf("@") + 1, str->IndexOf("#") - str->IndexOf("@") - 1);
		//		temp->Add("Отчество", p);
		//		
		//		p = str->Substring(str->IndexOf("#") + 1, str->IndexOf("%") - str->IndexOf("#") - 1);
		//		temp->Add("Род занятий", p);

		//		p = str->Substring(str->IndexOf("%") + 1, str->IndexOf("^") - str->IndexOf("%") - 1);
		//		temp->Add("Интересы", p);

		//		e = Convert::ToInt32(str->Substring(str->IndexOf("^") + 1));
		//		d->Add(e, temp);
		//	}
		//	SR->Close();
		//}

		//void Update_File(String^ fileName, Dictionary <int, Dictionary <String^, String^>^>^ d)
		//{
		//	StreamWriter^ SR = gcnew StreamWriter(fileName);
		//	String^ str = gcnew String("");
		//	int counter = 0;
		//	for each (KeyValuePair<int, Dictionary <String^, String^>^> ^ var in d)
		//	{
		//		String^ Line = gcnew String("");
		//		counter = 0;
		//		for each (KeyValuePair<String^, String^>^ v in var->Value)
		//		{				
		//			switch (counter)
		//			{
		//			case(0): 
		//			{
		//				Line += v->Value + "!";
		//				break;
		//			}
		//			case(1):
		//			{
		//				Line += v->Value + "@";
		//				break;
		//			}
		//			case(2):
		//			{
		//				Line += v->Value + "#";
		//				break;
		//			}
		//			case(3):
		//			{
		//				Line += v->Value + "%";
		//				break;
		//			}
		//			case(4):
		//			{
		//				Line += v->Value + "^";
		//				break;
		//			}
		//			default:
		//				break;
		//			}
		//			counter++;
		//		}
		//		Line += var->Key + "\n";
		//		SR->Write(Line);
		//	}
		//	SR->Close();
		//}

		//void Look_Dict(Dictionary <int, Dictionary <String^, String^>^>^ d, System::Windows::Forms::DataGridView^ D)
		//{
		//	int i, j;
		//	D->RowCount = d->Count + 1;
		//	D->ColumnCount = 5;
		//	i = 1;
		//	for each (KeyValuePair<int, Dictionary <String^, String^>^> ^ var in d)
		//	{
		//		j = 0;
		//		for each (KeyValuePair<String^, String^> ^ v in var->Value)
		//		{
		//			D->Rows[i]->Cells[j]->Value = v->Value;
		//			D->Rows[0]->Cells[j]->Value = v->Key;
		//			j++;
		//		}
		//		i++;
		//	}
		//	
		//}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tb06 = (gcnew System::Windows::Forms::TextBox());
			this->tb07 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tb05 = (gcnew System::Windows::Forms::TextBox());
			this->tb04 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tb03 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tb02 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->d3 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->d4 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->d2 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->d1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->w3 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->w4 = (gcnew System::Windows::Forms::TextBox());
			this->w6 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->w2 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->w5 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->w1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Interests = (gcnew System::Windows::Forms::TextBox());
			this->NameTB = (gcnew System::Windows::Forms::TextBox());
			this->LastName = (gcnew System::Windows::Forms::TextBox());
			this->Activities = (gcnew System::Windows::Forms::TextBox());
			this->Patronymic = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 5);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(703, 212);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Фамилия";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Имя";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Отчество";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Сфера деятельности";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Интересы";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(733, 28);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(251, 25);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(730, 5);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Выберите гостя:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(733, 89);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(251, 25);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(730, 67);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Выберите шаблон:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->tb06);
			this->groupBox1->Controls->Add(this->tb07);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->tb05);
			this->groupBox1->Controls->Add(this->tb04);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->tb03);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->tb02);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->tb1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 230);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(703, 342);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Бизнес-конференция";
			// 
			// tb06
			// 
			this->tb06->Location = System::Drawing::Point(220, 235);
			this->tb06->Name = L"tb06";
			this->tb06->Size = System::Drawing::Size(242, 34);
			this->tb06->TabIndex = 17;
			// 
			// tb07
			// 
			this->tb07->Location = System::Drawing::Point(97, 278);
			this->tb07->Name = L"tb07";
			this->tb07->Size = System::Drawing::Size(249, 34);
			this->tb07->TabIndex = 16;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 278);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 27);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Адрес:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 240);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(209, 27);
			this->label16->TabIndex = 14;
			this->label16->Text = L"Место проведения:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 240);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 27);
			this->label15->TabIndex = 13;
			// 
			// tb05
			// 
			this->tb05->Location = System::Drawing::Point(367, 188);
			this->tb05->Name = L"tb05";
			this->tb05->Size = System::Drawing::Size(146, 34);
			this->tb05->TabIndex = 12;
			// 
			// tb04
			// 
			this->tb04->Location = System::Drawing::Point(238, 188);
			this->tb04->Name = L"tb04";
			this->tb04->Size = System::Drawing::Size(123, 34);
			this->tb04->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 191);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(219, 27);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Встреча состоится в";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(496, 137);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(18, 27);
			this->label13->TabIndex = 9;
			this->label13->Text = L".";
			// 
			// tb03
			// 
			this->tb03->Location = System::Drawing::Point(222, 134);
			this->tb03->Name = L"tb03";
			this->tb03->Size = System::Drawing::Size(267, 34);
			this->tb03->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(120, 139);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(96, 27);
			this->label12->TabIndex = 7;
			this->label12->Text = L"по теме:";
			// 
			// tb02
			// 
			this->tb02->Location = System::Drawing::Point(371, 73);
			this->tb02->Name = L"tb02";
			this->tb02->Size = System::Drawing::Size(281, 34);
			this->tb02->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 82);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(359, 27);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Приглашаем вас на конференцию";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(577, 28);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 27);
			this->label10->TabIndex = 4;
			this->label10->Text = L",";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(172, 28);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(399, 34);
			this->textBox7->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 27);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Уважаем";
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(111, 28);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(32, 34);
			this->tb1->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox4.BackgroundImage")));
			this->groupBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox4->Controls->Add(this->label32);
			this->groupBox4->Controls->Add(this->d3);
			this->groupBox4->Controls->Add(this->label30);
			this->groupBox4->Controls->Add(this->label31);
			this->groupBox4->Controls->Add(this->d4);
			this->groupBox4->Controls->Add(this->label34);
			this->groupBox4->Controls->Add(this->d2);
			this->groupBox4->Controls->Add(this->label35);
			this->groupBox4->Controls->Add(this->label36);
			this->groupBox4->Controls->Add(this->label38);
			this->groupBox4->Controls->Add(this->label39);
			this->groupBox4->Controls->Add(this->label40);
			this->groupBox4->Controls->Add(this->textBox26);
			this->groupBox4->Controls->Add(this->label41);
			this->groupBox4->Controls->Add(this->d1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(12, 583);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(703, 342);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"День рождения";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(55, 164);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(514, 27);
			this->label32->TabIndex = 22;
			this->label32->Text = L"Бери с собой хорошее настроение! Будет весело!";
			// 
			// d3
			// 
			this->d3->Location = System::Drawing::Point(434, 124);
			this->d3->Name = L"d3";
			this->d3->Size = System::Drawing::Size(246, 34);
			this->d3->TabIndex = 21;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(120, 210);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(331, 27);
			this->label30->TabIndex = 20;
			this->label30->Text = L"С наилучишими пожеланиями,";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(321, 125);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(113, 27);
			this->label31->TabIndex = 18;
			this->label31->Text = L"по адресу";
			// 
			// d4
			// 
			this->d4->Location = System::Drawing::Point(154, 240);
			this->d4->Name = L"d4";
			this->d4->Size = System::Drawing::Size(249, 34);
			this->d4->TabIndex = 16;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(6, 240);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(0, 27);
			this->label34->TabIndex = 13;
			// 
			// d2
			// 
			this->d2->Location = System::Drawing::Point(186, 120);
			this->d2->Name = L"d2";
			this->d2->Size = System::Drawing::Size(123, 34);
			this->d2->TabIndex = 11;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(55, 125);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(131, 27);
			this->label35->TabIndex = 10;
			this->label35->Text = L"состоится в";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(589, 164);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(18, 27);
			this->label36->TabIndex = 9;
			this->label36->Text = L".";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(32, 78);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(620, 27);
			this->label38->TabIndex = 5;
			this->label38->Text = L"Приглашаю тебя на день рождения, празднование которого";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(550, 33);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(20, 27);
			this->label39->TabIndex = 4;
			this->label39->Text = L"!";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(120, 33);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(18, 27);
			this->label40->TabIndex = 3;
			this->label40->Text = L",";
			// 
			// textBox26
			// 
			this->textBox26->Enabled = false;
			this->textBox26->Location = System::Drawing::Point(143, 28);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(401, 34);
			this->textBox26->TabIndex = 2;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(6, 31);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(74, 27);
			this->label41->TabIndex = 1;
			this->label41->Text = L"Дорог";
			// 
			// d1
			// 
			this->d1->Location = System::Drawing::Point(82, 28);
			this->d1->Name = L"d1";
			this->d1->Size = System::Drawing::Size(32, 34);
			this->d1->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->w3);
			this->groupBox3->Controls->Add(this->label37);
			this->groupBox3->Controls->Add(this->w4);
			this->groupBox3->Controls->Add(this->w6);
			this->groupBox3->Controls->Add(this->label42);
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Controls->Add(this->label44);
			this->groupBox3->Controls->Add(this->w2);
			this->groupBox3->Controls->Add(this->label45);
			this->groupBox3->Controls->Add(this->label46);
			this->groupBox3->Controls->Add(this->w5);
			this->groupBox3->Controls->Add(this->label47);
			this->groupBox3->Controls->Add(this->label48);
			this->groupBox3->Controls->Add(this->label49);
			this->groupBox3->Controls->Add(this->label50);
			this->groupBox3->Controls->Add(this->textBox31);
			this->groupBox3->Controls->Add(this->label51);
			this->groupBox3->Controls->Add(this->w1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(1090, 225);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(715, 347);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Свадьба";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(304, 300);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(134, 27);
			this->label33->TabIndex = 20;
			this->label33->Text = L"С любовью,";
			// 
			// w3
			// 
			this->w3->Location = System::Drawing::Point(143, 158);
			this->w3->Name = L"w3";
			this->w3->Size = System::Drawing::Size(349, 34);
			this->w3->TabIndex = 19;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(405, 125);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(212, 27);
			this->label37->TabIndex = 18;
			this->label37->Text = L"в ЗАГСе по адресу:";
			// 
			// w4
			// 
			this->w4->Location = System::Drawing::Point(403, 193);
			this->w4->Name = L"w4";
			this->w4->Size = System::Drawing::Size(277, 34);
			this->w4->TabIndex = 17;
			// 
			// w6
			// 
			this->w6->Location = System::Drawing::Point(434, 294);
			this->w6->Name = L"w6";
			this->w6->Size = System::Drawing::Size(249, 34);
			this->w6->TabIndex = 16;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(6, 240);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(113, 27);
			this->label42->TabIndex = 15;
			this->label42->Text = L"по адресу";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(6, 193);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(388, 27);
			this->label43->TabIndex = 14;
			this->label43->Text = L"Свадебный банкет будет проходить в";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(6, 240);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(0, 27);
			this->label44->TabIndex = 13;
			// 
			// w2
			// 
			this->w2->Location = System::Drawing::Point(274, 120);
			this->w2->Name = L"w2";
			this->w2->Size = System::Drawing::Size(123, 34);
			this->w2->TabIndex = 11;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(55, 125);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(200, 27);
			this->label45->TabIndex = 10;
			this->label45->Text = L"которое состоится";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(532, 128);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(18, 27);
			this->label46->TabIndex = 9;
			this->label46->Text = L".";
			// 
			// w5
			// 
			this->w5->Location = System::Drawing::Point(125, 237);
			this->w5->Name = L"w5";
			this->w5->Size = System::Drawing::Size(194, 34);
			this->w5->TabIndex = 8;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(6, 294);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(251, 27);
			this->label47->TabIndex = 7;
			this->label47->Text = L"Будем рады видеть вас!";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(31, 87);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(653, 27);
			this->label48->TabIndex = 5;
			this->label48->Text = L"Приглашаем вас на торжество, посвященное бракосочетанию,";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(553, 33);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(20, 27);
			this->label49->TabIndex = 4;
			this->label49->Text = L"!";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(120, 33);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(18, 27);
			this->label50->TabIndex = 3;
			this->label50->Text = L",";
			// 
			// textBox31
			// 
			this->textBox31->Enabled = false;
			this->textBox31->Location = System::Drawing::Point(143, 28);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(406, 34);
			this->textBox31->TabIndex = 2;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(6, 31);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(74, 27);
			this->label51->TabIndex = 1;
			this->label51->Text = L"Дорог";
			// 
			// w1
			// 
			this->w1->Location = System::Drawing::Point(82, 28);
			this->w1->Name = L"w1";
			this->w1->Size = System::Drawing::Size(32, 34);
			this->w1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->Interests);
			this->groupBox2->Controls->Add(this->NameTB);
			this->groupBox2->Controls->Add(this->LastName);
			this->groupBox2->Controls->Add(this->Activities);
			this->groupBox2->Controls->Add(this->Patronymic);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(733, 133);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(290, 268);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Добавление";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(58, 226);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(187, 29);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Очистить поля";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(58, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 29);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Interests
			// 
			this->Interests->Location = System::Drawing::Point(98, 151);
			this->Interests->Name = L"Interests";
			this->Interests->Size = System::Drawing::Size(170, 25);
			this->Interests->TabIndex = 9;
			// 
			// NameTB
			// 
			this->NameTB->Location = System::Drawing::Point(98, 64);
			this->NameTB->Name = L"NameTB";
			this->NameTB->Size = System::Drawing::Size(170, 25);
			this->NameTB->TabIndex = 8;
			// 
			// LastName
			// 
			this->LastName->Location = System::Drawing::Point(98, 34);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(170, 25);
			this->LastName->TabIndex = 7;
			// 
			// Activities
			// 
			this->Activities->Location = System::Drawing::Point(98, 121);
			this->Activities->Name = L"Activities";
			this->Activities->Size = System::Drawing::Size(170, 25);
			this->Activities->TabIndex = 6;
			// 
			// Patronymic
			// 
			this->Patronymic->Location = System::Drawing::Point(98, 94);
			this->Patronymic->Name = L"Patronymic";
			this->Patronymic->Size = System::Drawing::Size(170, 25);
			this->Patronymic->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 17);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Род занятий";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Интересы";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Отчество";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Фамилия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Имя";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(1068, 67);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 106);
			this->panel1->TabIndex = 22;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PeachPuff;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(756, 526);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(254, 40);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Сохранить приглашение";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 604);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Генератор приглашений";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//Загрузка формы
		groupBox4->Hide();
		groupBox1->Hide();
		comboBox2->Text = "На свадьбу";
		comboBox2->Items->Add("На свадьбу");
		comboBox2->Items->Add("На день рождения");
		comboBox2->Items->Add("На бизнес-конференцию");
		groupBox3->Show();

		Take_From("Text.txt", dict_1);
		Look_Dict(dict_1, dataGridView1);
		Update_File("Text.txt", dict_1);

		for each (KeyValuePair <String^, List <String^>^>^ var in dict_1)
		{
			String^ Line = gcnew String("");
			for (int i = 0; i < 3; i++)
			{
				Line += var->Value[i] + " ";
			}
			comboBox1->Items->Add(Line);
			if (var->Value->Count > 0) comboBox1->Text = var->Value[0] + " " + var->Value[1] + " " + var->Value[2];
		}
		
		this->groupBox3->Location = System::Drawing::Point(12, 224);
		textBox31->Text = comboBox1->Text;
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//Добавить человека в список
	if (LastName->Text != "" && NameTB->Text != "" && Patronymic->Text != "" && Activities->Text != "" && Interests->Text != "")
	{
		List <String^>^ temp = gcnew List <String^>;
		String^ p = gcnew String("");
		String^ Key = gcnew String("");
		Key = LastName->Text + NameTB->Text + Patronymic->Text;
		if (!(dict_1->ContainsKey(Key)))
		{
			p = LastName->Text;
			temp->Add(p);

			p = NameTB->Text;
			temp->Add(p);

			p = Patronymic->Text;
			temp->Add(p);

			p = Activities->Text;
			temp->Add(p);

			p = Interests->Text;
			temp->Add(p);

			dict_1->Add(Key, temp);
			Key = LastName->Text + " " + NameTB->Text + " " + Patronymic->Text;
			comboBox1->Items->Add(Key);
			delete Key;
		}
		else MessageBox::Show("Этот человек уже в списке", "Предупреждение");
		Update_File("Text.txt", dict_1);
		Look_Dict(dict_1, dataGridView1);
	}
	else MessageBox::Show("Заполните все необходимые поля", "Предупреждение");
}

private: System::Void comboBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//Какой шаблон будет показываться
	if (comboBox2->Text == "На бизнес-конференцию")
	{
		groupBox1->Show();
		groupBox3->Hide();
		groupBox4->Hide();
		this->groupBox1->Location = System::Drawing::Point(12, 224);
	}
	if (comboBox2->Text == "На свадьбу")
	{
		groupBox3->Show();
		groupBox4->Hide();
		groupBox1->Hide();
		this->groupBox3->Location = System::Drawing::Point(12, 224);
	}
	if (comboBox2->Text == "На день рождения")
	{
		groupBox4->Show();
		groupBox1->Hide();
		groupBox3->Hide();
		this->groupBox4->Location = System::Drawing::Point(12, 224);
	} 

}
private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//Присвоение ФИО гостей полям окон "шаблонов для приглашения"
	textBox7->Text = comboBox1->Text;
	textBox31->Text = comboBox1->Text;
	textBox26->Text = comboBox1->Text;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
//Почистить поля тексовых полей для удобства
	LastName->Text = "";
	NameTB->Text = "";
	Patronymic->Text = "";
	Activities->Text = "";
	Interests->Text = "";
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
//Формирование и сохранение приглашения в текстовый файл
	String^ Inv = gcnew String("");
	String^ Name = gcnew String("");
	int key = 0;
	List <String^>^ data = gcnew List <String^>;
	if (comboBox2->Text == "На бизнес-конференцию")
	{
		if (tb1->Text != "" && tb02->Text != "" && tb03->Text != "" && tb04->Text != "" && tb05->Text != "" && tb06->Text != "" && tb07->Text != "")
		{
			key = 2;
			data->Add(tb1->Text);
			data->Add(tb02->Text);
			data->Add(tb03->Text);
			data->Add(tb04->Text);
			data->Add(tb05->Text);
			data->Add(tb06->Text);
			data->Add(tb07->Text);
			MessageBox::Show("Ваш шаблон успешно сохранен");
		}
		else 	MessageBox::Show("Заполните все поля шаблона!", "Внимание!");
	}

	if (comboBox2->Text == "На свадьбу")
	{
		if (w1->Text != "" && w2->Text != "" && w3->Text != "" && w4->Text != "" && w5->Text != "" && w6->Text != "")
		{
			key = 1;
			data->Add(w1->Text);
			data->Add(w2->Text);
			data->Add(w3->Text);
			data->Add(w4->Text);
			data->Add(w5->Text);
			data->Add(w6->Text);
			MessageBox::Show("Ваш шаблон успешно сохранен");
		}
		else 	MessageBox::Show("Заполните все поля шаблона!", "Внимание!");
	}

	if (comboBox2->Text == "На день рождения")
	{
		if (d1->Text != "" && d2->Text != "" && d3->Text != "" && d4->Text != "")
		{
			key = 3;
			data->Add(d1->Text);
			data->Add(d2->Text);
			data->Add(d3->Text);
			data->Add(d4->Text);
			MessageBox::Show("Ваш шаблон успешно сохранен");
		}
		else 	MessageBox::Show("Заполните все поля шаблона!", "Внимание!");
	}

	Name = textBox7->Text;
	Inv = Invitation(Name, key, data);
	StreamWriter^ SR = gcnew StreamWriter("Текст_Приглашения.txt");
	String^ str = gcnew String("");
	SR->Write(Inv);
	SR->Close();

}
};
}
