#pragma once
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//VP-Adding MySqL connection
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			//VP-set focus on personal_no text box
			notext->Focus();
			//VP- Restrict entry of text in no text and gendertext to max value
			notext->MaxLength = 10;
			gendertext->MaxLength = 1;
			hobbiestext->MaxLength = 1000;
			langtext->MaxLength = 40;
			//VP- Display date and time
			DateTime datetime = DateTime::Now;
			lbl_datetime->Text = datetime.ToString();
			//VP- start timer1 tick for current date and time
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ notext;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ nametext;
	private: System::Windows::Forms::TextBox^ gendertext;
	private: System::Windows::Forms::TextBox^ langtext;
	private: System::Windows::Forms::TextBox^ hobbiestext;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btn_Save;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ searchtext;
	private: System::Windows::Forms::Button^ btn_Search;

	private: System::Windows::Forms::Label^ status_lbl;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Label^ lbl_Gender;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lbl_datetime;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ProgressBar^ pbarstatus;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->notext = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nametext = (gcnew System::Windows::Forms::TextBox());
			this->gendertext = (gcnew System::Windows::Forms::TextBox());
			this->langtext = (gcnew System::Windows::Forms::TextBox());
			this->hobbiestext = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->searchtext = (gcnew System::Windows::Forms::TextBox());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->status_lbl = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->lbl_Gender = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pbarstatus = (gcnew System::Windows::Forms::ProgressBar());
			this->lbl_datetime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// notext
			// 
			this->notext->BackColor = System::Drawing::SystemColors::Info;
			this->notext->ForeColor = System::Drawing::Color::Green;
			this->notext->Location = System::Drawing::Point(186, 37);
			this->notext->Name = L"notext";
			this->notext->Size = System::Drawing::Size(172, 20);
			this->notext->TabIndex = 0;
			this->notext->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::notext_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(33, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Personal No";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(33, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(33, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Gender";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(33, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Familiar Languages";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(33, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Hobbies";
			// 
			// nametext
			// 
			this->nametext->BackColor = System::Drawing::SystemColors::Info;
			this->nametext->ForeColor = System::Drawing::Color::Green;
			this->nametext->Location = System::Drawing::Point(186, 94);
			this->nametext->Name = L"nametext";
			this->nametext->Size = System::Drawing::Size(172, 20);
			this->nametext->TabIndex = 9;
			// 
			// gendertext
			// 
			this->gendertext->BackColor = System::Drawing::SystemColors::Info;
			this->gendertext->ForeColor = System::Drawing::Color::Green;
			this->gendertext->Location = System::Drawing::Point(186, 142);
			this->gendertext->Name = L"gendertext";
			this->gendertext->Size = System::Drawing::Size(43, 20);
			this->gendertext->TabIndex = 10;
			// 
			// langtext
			// 
			this->langtext->BackColor = System::Drawing::SystemColors::Info;
			this->langtext->ForeColor = System::Drawing::Color::Green;
			this->langtext->Location = System::Drawing::Point(186, 194);
			this->langtext->Name = L"langtext";
			this->langtext->Size = System::Drawing::Size(172, 20);
			this->langtext->TabIndex = 11;
			// 
			// hobbiestext
			// 
			this->hobbiestext->BackColor = System::Drawing::SystemColors::Info;
			this->hobbiestext->ForeColor = System::Drawing::Color::Green;
			this->hobbiestext->Location = System::Drawing::Point(186, 254);
			this->hobbiestext->Multiline = true;
			this->hobbiestext->Name = L"hobbiestext";
			this->hobbiestext->Size = System::Drawing::Size(407, 147);
			this->hobbiestext->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(30, 271);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Max 1000 characters";
			// 
			// btn_Save
			// 
			this->btn_Save->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Save->ForeColor = System::Drawing::Color::Maroon;
			this->btn_Save->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn_Save->Location = System::Drawing::Point(235, 25);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(101, 28);
			this->btn_Save->TabIndex = 14;
			this->btn_Save->Text = L"SAVE";
			this->btn_Save->UseVisualStyleBackColor = true;
			this->btn_Save->Click += gcnew System::EventHandler(this, &Form1::btn_Save_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(19, 139);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(192, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Enter Name to search record";
			// 
			// searchtext
			// 
			this->searchtext->BackColor = System::Drawing::SystemColors::Info;
			this->searchtext->Location = System::Drawing::Point(229, 139);
			this->searchtext->Name = L"searchtext";
			this->searchtext->Size = System::Drawing::Size(136, 24);
			this->searchtext->TabIndex = 16;
			// 
			// btn_Search
			// 
			this->btn_Search->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Search->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btn_Search->Location = System::Drawing::Point(235, 69);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(101, 28);
			this->btn_Search->TabIndex = 17;
			this->btn_Search->Text = L"SEARCH";
			this->btn_Search->UseVisualStyleBackColor = true;
			this->btn_Search->Click += gcnew System::EventHandler(this, &Form1::btn_Search_Click);
			// 
			// status_lbl
			// 
			this->status_lbl->AutoSize = true;
			this->status_lbl->Location = System::Drawing::Point(19, 72);
			this->status_lbl->Name = L"status_lbl";
			this->status_lbl->Size = System::Drawing::Size(0, 16);
			this->status_lbl->TabIndex = 18;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// lbl_Gender
			// 
			this->lbl_Gender->AutoSize = true;
			this->lbl_Gender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_Gender->Location = System::Drawing::Point(95, 144);
			this->lbl_Gender->Name = L"lbl_Gender";
			this->lbl_Gender->Size = System::Drawing::Size(45, 13);
			this->lbl_Gender->TabIndex = 19;
			this->lbl_Gender->Text = L"(M/F/T)";
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->groupBox1->Controls->Add(this->pbarstatus);
			this->groupBox1->Controls->Add(this->btn_Save);
			this->groupBox1->Controls->Add(this->btn_Search);
			this->groupBox1->Controls->Add(this->status_lbl);
			this->groupBox1->Controls->Add(this->searchtext);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Green;
			this->groupBox1->Location = System::Drawing::Point(378, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(371, 188);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ACTION";
			// 
			// pbarstatus
			// 
			this->pbarstatus->Location = System::Drawing::Point(22, 25);
			this->pbarstatus->Name = L"pbarstatus";
			this->pbarstatus->Size = System::Drawing::Size(100, 23);
			this->pbarstatus->TabIndex = 19;
			this->pbarstatus->Visible = false;
			// 
			// lbl_datetime
			// 
			this->lbl_datetime->AutoSize = true;
			this->lbl_datetime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_datetime->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lbl_datetime->Location = System::Drawing::Point(593, 4);
			this->lbl_datetime->Name = L"lbl_datetime";
			this->lbl_datetime->Size = System::Drawing::Size(0, 15);
			this->lbl_datetime->TabIndex = 21;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(30, 220);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"(C/C++, C#, VB, Delphi)";
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(771, 421);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lbl_datetime);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lbl_Gender);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->hobbiestext);
			this->Controls->Add(this->langtext);
			this->Controls->Add(this->gendertext);
			this->Controls->Add(this->nametext);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->notext);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Name = L"Form1";
			this->Text = L"Database";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		//VP- the connection string which has information to connect to database
		String^ constring = "datasource= localhost;port=3306;username=root;password=type your sql root user password";
		//VP- SQL Query to perform action on table
		String^ myQuery = L"select * from example.candidateinfo where (Name LIKE'%" + this->searchtext->Text + "%');";
		//VP- Initialize connection object
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		//VP- Initialize command/query object
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand(myQuery, conDatabase);
		//VP- Initialize command reader object
		MySqlDataReader^ myReader;
		//VP- If search text box is empty
		if (searchtext->Text == "")
		{
			MessageBox::Show("No input to search", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			try {
				conDatabase->Open();
				//VP-Execute the query using Reader
				myReader = cmdDatabase->ExecuteReader();
				//VP- If nothing to fetch
				if (!(myReader->Read()))
				{

					//VP- If no record found
					MessageBox::Show("Record not found. Try again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					status_lbl->ResetText();
				}
				else
				{
					//VP- make progress bar visible and start time tick
					timer2->Start();
					pbarstatus->Visible = true;
					//VP- Fetches record by column(index)
					notext->Text = myReader->GetString(0);
					nametext->Text = myReader->GetString(1);
					gendertext->Text = myReader->GetString(2);
					langtext->Text = myReader->GetString(3);
					hobbiestext->Text = myReader->GetString(4);
					status_lbl->Text = "Record found";
				}
        //VP- Set cursor on search textbox
				searchtext->Focus();
        //VP- Close connection to database
				conDatabase->Close();
			}
			catch (Exception^ exp)
			{
				MessageBox::Show(exp->Message);
			}
		}
	}
	private: System::Void btn_Save_Click(System::Object^ sender, System::EventArgs^ e) {
    //VP- the connection string which has information to connect to database
		String^ constring = L"datasource= localhost;port=3306;username=root;password=type your sql root user password";
    //VP- Initialize connection object
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		//VP- Initialize command/query object
		MySqlCommand^ cmdDatabase;
		//VP- Duplicate flag
		bool bDuplicate_count = false;
		if ((notext->Text == "") || (nametext->Text == "") || (gendertext->Text == "") || (langtext->Text == "") || (hobbiestext->Text == ""))
		{
			MessageBox::Show("Please provide all the fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			notext->Focus();
			status_lbl->ResetText();
		}
		//VP- If personal no is less than 10 digits then show error
		else if(notext->TextLength < 10)
		{
			MessageBox::Show("Personal no must have 10 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			notext->Focus();
			status_lbl->ResetText();
		}
		else
		{
			String^ myQuery = L"select * from example.candidateinfo where (Name='" + this->nametext->Text + "' or Personal_No='" + this->notext->Text + "') ;";
      //VP- Assign sql query to command object
			cmdDatabase = gcnew MySqlCommand(myQuery, conDatabase);
			//VP- Initialize command reader object
			MySqlDataReader^ myReader;
			try {
				conDatabase->Open();
				//VP- Execute the command
				myReader = cmdDatabase->ExecuteReader();
				//VP-Check for duplicate records
				while (myReader->Read())
				{
					if ((nametext->Text == (myReader->GetString(1))) || (notext->Text ==(myReader->GetString(0))))
					{
						MessageBox::Show("Cannot Save!Duplicate Record already exists\nBoth Name and No should be unique", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						notext->Focus();
						bDuplicate_count = true;
						status_lbl->ResetText();
					}
					break;
				}
				//VP- If no duplicate record found
				if (!bDuplicate_count)
				{
					//VP- make progress bar visible and start timer2 tick
					timer2->Start();
					pbarstatus->Visible = true;
					//Close previous command reader
					myReader->Close();
					//Store date into table
					String^ saveQuery = L"insert into example.candidateinfo values('" + this->notext->Text + "','" + this->nametext->Text + "','" + this->gendertext->Text + "','" + this->langtext->Text + "','" + this->hobbiestext->Text + "');";
					//VP-Initialize new command Reader
					cmdDatabase = gcnew MySqlCommand(saveQuery, conDatabase);
					//VP-Execute query
					myReader = cmdDatabase->ExecuteReader();
					//VP- Reset all text boxes after successful save
					notext->ResetText();
					nametext->ResetText();
					gendertext->ResetText();
					langtext->ResetText();
					hobbiestext->ResetText();
					status_lbl->Text = "Record Saved";
					notext->Focus();
				}
			}
			catch (Exception^ exp)
			{
				MessageBox::Show(exp->Message);
			}
		}
		//VP- close the database connection
		conDatabase->Close();
	}
	//VP- Added functionality to show current date and time
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		DateTime datetime = DateTime::Now;
		lbl_datetime->Text = datetime.ToString();
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		/*VP-If Progress bar is visible then increment it to max
		and then make it invisible*/
		if ((this->pbarstatus->Visible) == true)
		{
			pbarstatus->Increment(15);
			if (pbarstatus->Value == 100)
			{
				timer2->Stop();
				pbarstatus->Visible = false;
				//VP- Reset the progress bar to default
				pbarstatus->Value = 0;
			}
		}
	}
	private: System::Void notext_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar >= '0' && e->KeyChar <= '9' || e->KeyChar == 8)
		//The  character 8 represents a backspace
		{
			//Do not reject the input
			e->Handled = false;
		}
		else
		{
			//Reject the input
			e->Handled = true; 
		}
	}
};
}

