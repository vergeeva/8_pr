#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;

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
			dict = gcnew Dictionary <int, Dictionary <String^, String^>^>;
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;





















	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;


	public:

	protected:
		Dictionary <int, Dictionary <String^, String^>^>^ dict;
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

		void Take_From(String^ fileName, Dictionary <int, Dictionary <String^, String^>^>^ d)
		{
			StreamReader^ SR = gcnew StreamReader(fileName);
			String^ str = gcnew String("");
			while (str = SR->ReadLine()) {
				Dictionary <String^, String^>^ temp = gcnew Dictionary <String^, String^>;
				String ^p = gcnew String("");
				int e;
				p = str->Substring(0, str->IndexOf("!"));
				
				temp->Add("Фамилия", p);

				p = str->Substring(str->IndexOf("!")+1, str->IndexOf("@")- str->IndexOf("!")-1);
				temp->Add("Имя", p);

				p = str->Substring(str->IndexOf("@") + 1, str->IndexOf("#") - str->IndexOf("@") - 1);
				temp->Add("Отчество", p);
				
				p = str->Substring(str->IndexOf("#") + 1, str->IndexOf("%") - str->IndexOf("#") - 1);
				temp->Add("Род занятий", p);

				p = str->Substring(str->IndexOf("%") + 1, str->IndexOf("^") - str->IndexOf("%") - 1);
				temp->Add("Интересы", p);

				e = Convert::ToInt32(str->Substring(str->IndexOf("^") + 1));
				d->Add(e, temp);
			}
			SR->Close();
		}

		void Update_File(String^ fileName, Dictionary <int, Dictionary <String^, String^>^>^ d)
		{
			StreamWriter^ SR = gcnew StreamWriter(fileName);
			String^ str = gcnew String("");
			int counter = 0;
			for each (KeyValuePair<int, Dictionary <String^, String^>^> ^ var in d)
			{
				String^ Line = gcnew String("");
				counter = 0;
				for each (KeyValuePair<String^, String^>^ v in var->Value)
				{				
					switch (counter)
					{
					case(0): 
					{
						Line += v->Value + "!";
						break;
					}
					case(1):
					{
						Line += v->Value + "@";
						break;
					}
					case(2):
					{
						Line += v->Value + "#";
						break;
					}
					case(3):
					{
						Line += v->Value + "%";
						break;
					}
					case(4):
					{
						Line += v->Value + "^";
						break;
					}
					default:
						break;
					}
					counter++;
				}
				Line += var->Key + "\n";
				SR->Write(Line);
			}
			SR->Close();
		}

		void Look_Dict(Dictionary <int, Dictionary <String^, String^>^>^ d, System::Windows::Forms::DataGridView^ D)
		{
			int i, j;
			D->RowCount = d->Count + 1;
			D->ColumnCount = 5;
			i = 1;
			for each (KeyValuePair<int, Dictionary <String^, String^>^> ^ var in d)
			{
				j = 0;
				for each (KeyValuePair<String^, String^> ^ v in var->Value)
				{
					D->Rows[i]->Cells[j]->Value = v->Value;
					D->Rows[0]->Cells[j]->Value = v->Key;
					j++;
				}
				i++;
			}
			
		}
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 5);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(703, 209);
			this->dataGridView1->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(733, 26);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(251, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(730, 5);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Выберите гостя:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(733, 84);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(251, 24);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(730, 63);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Выберите шаблон:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 221);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(703, 322);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Бизнес-конференция";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(220, 221);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(242, 30);
			this->textBox13->TabIndex = 17;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(97, 262);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(249, 30);
			this->textBox12->TabIndex = 16;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 262);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(75, 25);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Адрес:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 226);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(193, 25);
			this->label16->TabIndex = 14;
			this->label16->Text = L"Место проведения:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 226);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 25);
			this->label15->TabIndex = 13;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(367, 177);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(146, 30);
			this->textBox11->TabIndex = 12;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(238, 177);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(123, 30);
			this->textBox10->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 180);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(207, 25);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Встреча состоится в";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(496, 129);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 25);
			this->label13->TabIndex = 9;
			this->label13->Text = L".";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(238, 126);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(251, 30);
			this->textBox9->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(120, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(96, 25);
			this->label12->TabIndex = 7;
			this->label12->Text = L"по теме:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(367, 72);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(257, 30);
			this->textBox8->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 77);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(331, 25);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Приглашаем вас на конференцию";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(577, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 25);
			this->label10->TabIndex = 4;
			this->label10->Text = L"!";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(149, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 25);
			this->label9->TabIndex = 3;
			this->label9->Text = L",";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(172, 26);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(399, 30);
			this->textBox7->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 29);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 25);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Уважаем";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(111, 26);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(32, 30);
			this->textBox6->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox4.BackgroundImage")));
			this->groupBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox4->Controls->Add(this->label32);
			this->groupBox4->Controls->Add(this->textBox28);
			this->groupBox4->Controls->Add(this->label30);
			this->groupBox4->Controls->Add(this->label31);
			this->groupBox4->Controls->Add(this->textBox23);
			this->groupBox4->Controls->Add(this->label34);
			this->groupBox4->Controls->Add(this->textBox24);
			this->groupBox4->Controls->Add(this->label35);
			this->groupBox4->Controls->Add(this->label36);
			this->groupBox4->Controls->Add(this->label38);
			this->groupBox4->Controls->Add(this->label39);
			this->groupBox4->Controls->Add(this->label40);
			this->groupBox4->Controls->Add(this->textBox26);
			this->groupBox4->Controls->Add(this->label41);
			this->groupBox4->Controls->Add(this->textBox27);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(12, 549);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(703, 322);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"День рождения";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(55, 154);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(474, 25);
			this->label32->TabIndex = 22;
			this->label32->Text = L"Бери с собой хорошее настроение! Будет весело!";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(434, 117);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(246, 30);
			this->textBox28->TabIndex = 21;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(120, 198);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(303, 25);
			this->label30->TabIndex = 20;
			this->label30->Text = L"С наилучишими пожеланиями,";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(321, 118);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(102, 25);
			this->label31->TabIndex = 18;
			this->label31->Text = L"по адресу";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(154, 226);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(249, 30);
			this->textBox23->TabIndex = 16;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(6, 226);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(0, 25);
			this->label34->TabIndex = 13;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(186, 113);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(123, 30);
			this->textBox24->TabIndex = 11;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(55, 118);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(125, 25);
			this->label35->TabIndex = 10;
			this->label35->Text = L"состоится в";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(589, 154);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(17, 25);
			this->label36->TabIndex = 9;
			this->label36->Text = L".";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(32, 73);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(574, 25);
			this->label38->TabIndex = 5;
			this->label38->Text = L"Приглашаю тебя на день рождения, празднование которого";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(550, 31);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(18, 25);
			this->label39->TabIndex = 4;
			this->label39->Text = L"!";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(120, 31);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(17, 25);
			this->label40->TabIndex = 3;
			this->label40->Text = L",";
			// 
			// textBox26
			// 
			this->textBox26->Enabled = false;
			this->textBox26->Location = System::Drawing::Point(143, 26);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(401, 30);
			this->textBox26->TabIndex = 2;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(6, 29);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(70, 25);
			this->label41->TabIndex = 1;
			this->label41->Text = L"Дорог";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(82, 26);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(32, 30);
			this->textBox27->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->textBox19);
			this->groupBox3->Controls->Add(this->label37);
			this->groupBox3->Controls->Add(this->textBox22);
			this->groupBox3->Controls->Add(this->textBox25);
			this->groupBox3->Controls->Add(this->label42);
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Controls->Add(this->label44);
			this->groupBox3->Controls->Add(this->textBox29);
			this->groupBox3->Controls->Add(this->label45);
			this->groupBox3->Controls->Add(this->label46);
			this->groupBox3->Controls->Add(this->textBox30);
			this->groupBox3->Controls->Add(this->label47);
			this->groupBox3->Controls->Add(this->label48);
			this->groupBox3->Controls->Add(this->label49);
			this->groupBox3->Controls->Add(this->label50);
			this->groupBox3->Controls->Add(this->textBox31);
			this->groupBox3->Controls->Add(this->label51);
			this->groupBox3->Controls->Add(this->textBox32);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(733, 401);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(715, 327);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Свадьба";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(304, 282);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(119, 25);
			this->label33->TabIndex = 20;
			this->label33->Text = L"С любовью,";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(143, 149);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(349, 30);
			this->textBox19->TabIndex = 19;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(405, 118);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(190, 25);
			this->label37->TabIndex = 18;
			this->label37->Text = L"в ЗАГСе по адресу:";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(403, 182);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(277, 30);
			this->textBox22->TabIndex = 17;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(434, 277);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(249, 30);
			this->textBox25->TabIndex = 16;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(6, 226);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(102, 25);
			this->label42->TabIndex = 15;
			this->label42->Text = L"по адресу";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(6, 182);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(364, 25);
			this->label43->TabIndex = 14;
			this->label43->Text = L"Свадебный банкет будет проходить в";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(6, 226);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(0, 25);
			this->label44->TabIndex = 13;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(274, 113);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(123, 30);
			this->textBox29->TabIndex = 11;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(55, 118);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(192, 25);
			this->label45->TabIndex = 10;
			this->label45->Text = L"которое состоится";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(532, 120);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(17, 25);
			this->label46->TabIndex = 9;
			this->label46->Text = L".";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(125, 223);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(194, 30);
			this->textBox30->TabIndex = 8;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(6, 277);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(237, 25);
			this->label47->TabIndex = 7;
			this->label47->Text = L"Будем рады видеть вас!";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(31, 82);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(603, 25);
			this->label48->TabIndex = 5;
			this->label48->Text = L"Приглашаем вас на торжество, посвященное бракосочетанию,";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(553, 31);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(18, 25);
			this->label49->TabIndex = 4;
			this->label49->Text = L"!";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(120, 31);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(17, 25);
			this->label50->TabIndex = 3;
			this->label50->Text = L",";
			// 
			// textBox31
			// 
			this->textBox31->Enabled = false;
			this->textBox31->Location = System::Drawing::Point(143, 26);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(406, 30);
			this->textBox31->TabIndex = 2;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(6, 29);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(70, 25);
			this->label51->TabIndex = 1;
			this->label51->Text = L"Дорог";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(82, 26);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(32, 30);
			this->textBox32->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(733, 125);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(290, 252);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Добавление";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(58, 213);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(187, 27);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Очистить поля";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(58, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 27);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(108, 142);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(170, 22);
			this->textBox5->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(108, 60);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(108, 32);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(170, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(108, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(108, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 22);
			this->textBox1->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 17);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Род занятий";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Интересы";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Отчество";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Фамилия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Имя";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(830, 516);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 27);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(1068, 63);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 100);
			this->panel1->TabIndex = 22;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 563);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
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
		groupBox4->Hide();
		groupBox1->Hide();
		comboBox2->Text = "На свадьбу";
		comboBox2->Items->Add("На свадьбу");
		comboBox2->Items->Add("На день рождения");
		comboBox2->Items->Add("На бизнес-конференцию");
		groupBox3->Show();
		Take_From("Text.txt", dict);
		Look_Dict(dict, dataGridView1);

		for each (KeyValuePair<int, Dictionary <String^, String^>^> ^ var in dict)
		{
			String^ Line = gcnew String("");
			for each (KeyValuePair<String^, String^> ^ v in var->Value)
			{
				if (v->Key == "Фамилия" || v->Key == "Имя" || v->Key == "Отчество")
				{
					Line += v->Value + " ";
				}
			}
			comboBox1->Items->Add(Line);
			comboBox1->Text = Line;
		}
		this->groupBox3->Location = System::Drawing::Point(12, 180);
		textBox31->Text = comboBox1->Text;
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox3->Text != "" && textBox4->Text != "" && textBox1->Text != "" && textBox2->Text != "" && textBox5->Text != "")
	{

		for (int i = 0; i <= dict->Count; i++)
		{
			int a = dict->ContainsKey(i);
			if (!a)
			{
				Dictionary <String^, String^>^ temp = gcnew Dictionary <String^, String^>;
				String^ p = gcnew String("");
				String^ line = gcnew String("");
				p = textBox3->Text;
				line += p + " ";
				temp->Add("Фамилия", p);

				p = textBox4->Text;
				line += p + " ";
				temp->Add("Имя", p);

				p = textBox1->Text;
				line += p;
				temp->Add("Отчество", p);

				p = textBox2->Text;
				temp->Add("Род занятий", p);

				p = textBox5->Text;
				temp->Add("Интересы", p);

				dict->Add(i, temp);
				comboBox1->Items->Add(line);
				break;
			}
		}
		Update_File("Text.txt", dict);
		Look_Dict(dict, dataGridView1);
	}
	else MessageBox::Show("Заполните все необходимые поля", "Предупреждение");
}

private: System::Void comboBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->Text == "На бизнес-конференцию")
	{
		groupBox1->Show();
		groupBox3->Hide();
		groupBox4->Hide();
		this->groupBox1->Location = System::Drawing::Point(12, 180);
	}
	if (comboBox2->Text == "На свадьбу")
	{
		groupBox3->Show();
		groupBox4->Hide();
		groupBox1->Hide();
		this->groupBox3->Location = System::Drawing::Point(12, 180);
	}
	if (comboBox2->Text == "На день рождения")
	{
		groupBox4->Show();
		groupBox1->Hide();
		groupBox3->Hide();
		this->groupBox4->Location = System::Drawing::Point(12, 180);
	} 

}
private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox7->Text = comboBox1->Text;
	textBox31->Text = comboBox1->Text;
	textBox26->Text = comboBox1->Text;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
	textBox4->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	textBox5->Text = "";
}
};
}
