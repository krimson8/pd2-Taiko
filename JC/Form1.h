#pragma once
#include <cstdlib>
#include <ctime>

namespace JC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  lane;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  john;

	private: System::Windows::Forms::Timer^  move;
	private: System::Windows::Forms::Timer^  counter;
	private: System::Windows::Forms::Label^  L;

	private: System::Windows::Forms::Label^  A;
	private: System::Windows::Forms::Label^  tiktik;



	private: System::Windows::Forms::Timer^  countdown;

	private: System::Windows::Forms::Timer^  new_drum;
	private: System::Windows::Forms::Label^  combocount;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  scoring;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;



	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->scoring = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->combocount = (gcnew System::Windows::Forms::Label());
			this->L = (gcnew System::Windows::Forms::Label());
			this->A = (gcnew System::Windows::Forms::Label());
			this->tiktik = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->john = (gcnew System::Windows::Forms::PictureBox());
			this->lane = (gcnew System::Windows::Forms::PictureBox());
			this->move = (gcnew System::Windows::Forms::Timer(this->components));
			this->counter = (gcnew System::Windows::Forms::Timer(this->components));
			this->countdown = (gcnew System::Windows::Forms::Timer(this->components));
			this->new_drum = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->john))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lane))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(487, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(243, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"START NEW";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Salmon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(487, 452);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(243, 58);
			this->button2->TabIndex = 1;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 561);
			this->panel1->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightCoral;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(784, 561);
			this->panel3->TabIndex = 8;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(51, 452);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(375, 58);
			this->button6->TabIndex = 1;
			this->button6->Text = L"John Cena SUCKS";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(51, 380);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(324, 66);
			this->button5->TabIndex = 8;
			this->button5->Text = L"RESTART";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->axWindowsMediaPlayer1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->scoring);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->combocount);
			this->panel2->Controls->Add(this->L);
			this->panel2->Controls->Add(this->A);
			this->panel2->Controls->Add(this->tiktik);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->john);
			this->panel2->Controls->Add(this->lane);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(784, 561);
			this->panel2->TabIndex = 2;
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(36, 184);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(75, 23);
			this->axWindowsMediaPlayer1->TabIndex = 8;
			this->axWindowsMediaPlayer1->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Salmon;
			this->button4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(464, 452);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(266, 46);
			this->button4->TabIndex = 7;
			this->button4->Text = L"I GIVE UP";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Salmon;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(101, 452);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(347, 46);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Let me REST";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// scoring
			// 
			this->scoring->BackColor = System::Drawing::Color::White;
			this->scoring->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->scoring->Location = System::Drawing::Point(216, 293);
			this->scoring->Name = L"scoring";
			this->scoring->Size = System::Drawing::Size(134, 108);
			this->scoring->TabIndex = 5;
			this->scoring->Text = L"0";
			this->scoring->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(356, 328);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 38);
			this->label3->TabIndex = 5;
			this->label3->Text = L"PTS";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(258, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 38);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Combo X";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// combocount
			// 
			this->combocount->BackColor = System::Drawing::Color::White;
			this->combocount->Font = (gcnew System::Drawing::Font(L"Mistral", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combocount->Location = System::Drawing::Point(356, 206);
			this->combocount->Name = L"combocount";
			this->combocount->Size = System::Drawing::Size(122, 99);
			this->combocount->TabIndex = 5;
			this->combocount->Text = L" 0";
			this->combocount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// L
			// 
			this->L->BackColor = System::Drawing::Color::White;
			this->L->Font = (gcnew System::Drawing::Font(L"Papyrus", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L->Location = System::Drawing::Point(495, 323);
			this->L->Name = L"L";
			this->L->Size = System::Drawing::Size(186, 78);
			this->L->TabIndex = 4;
			this->L->Text = L"L for HEAD";
			// 
			// A
			// 
			this->A->BackColor = System::Drawing::Color::White;
			this->A->Font = (gcnew System::Drawing::Font(L"Papyrus", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A->Location = System::Drawing::Point(495, 227);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(186, 78);
			this->A->TabIndex = 4;
			this->A->Text = L"A for";
			// 
			// tiktik
			// 
			this->tiktik->BackColor = System::Drawing::Color::White;
			this->tiktik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tiktik->Location = System::Drawing::Point(93, 227);
			this->tiktik->Name = L"tiktik";
			this->tiktik->Size = System::Drawing::Size(104, 156);
			this->tiktik->TabIndex = 4;
			this->tiktik->Text = L"35";
			this->tiktik->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(140, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(10, 100);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(706, 328);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(706, 243);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// john
			// 
			this->john->Location = System::Drawing::Point(645, 72);
			this->john->Name = L"john";
			this->john->Size = System::Drawing::Size(50, 50);
			this->john->TabIndex = 2;
			this->john->TabStop = false;
			this->john->Visible = false;
			// 
			// lane
			// 
			this->lane->BackColor = System::Drawing::Color::DarkRed;
			this->lane->Location = System::Drawing::Point(50, 50);
			this->lane->Name = L"lane";
			this->lane->Size = System::Drawing::Size(680, 100);
			this->lane->TabIndex = 0;
			this->lane->TabStop = false;
			// 
			// move
			// 
			this->move->Enabled = true;
			this->move->Interval = 10;
			this->move->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// counter
			// 
			this->counter->Tick += gcnew System::EventHandler(this, &Form1::counter_Tick);
			// 
			// countdown
			// 
			this->countdown->Interval = 1000;
			this->countdown->Tick += gcnew System::EventHandler(this, &Form1::countdown_Tick);
			// 
			// new_drum
			// 
			this->new_drum->Interval = 300;
			this->new_drum->Tick += gcnew System::EventHandler(this, &Form1::new_drum_Tick);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"John Cena Rage";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->john))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lane))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	int rum , easy , CD = 30, combo = 0, multi , score = 0 , pausing = 0;

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		axWindowsMediaPlayer1->URL = "theme.mp3";
		axWindowsMediaPlayer1->Ctlcontrols->play();
		
		panel2->Parent = this;
		panel3->Parent = this;
		button1->Parent = panel1;
		button2->Parent = panel1;
		tiktik->Text = CD.ToString();
		scoring->Text = score.ToString();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		panel1->Visible = false;
		move->Enabled = true;
		counter->Enabled = true;
		countdown->Enabled = true;
		new_drum->Enabled = true;
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::ExitThread();
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		for each(Control ^pC in lane->Controls) {
			if (pC->GetType() == System::Windows::Forms::PictureBox::typeid) {
				pC->Location = Point(pC->Location.X - 3, pC->Location.Y);
				if (pC->Location.X <= 30) {
					score --;
					combo = 0;
					combocount->Text = combo.ToString();
					scoring->Text = score.ToString();
					lane->Controls->Remove(pC);
				}
			}
		}
	}
	System::ComponentModel::ComponentResourceManager^  resources1 = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
	private: System::Void new_drum_Tick(System::Object^  sender, System::EventArgs^  e) {
		rum = rand() % 3 + 1;
		switch (rum) {
		case 1:
			PictureBox^ new1;
			new1 = (gcnew System::Windows::Forms::PictureBox());
			new1->BackColor = Color::Black;
			new1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources1->GetObject(L"pictureBox1.BackgroundImage")));
			new1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			new1->Location = Point(660, 25);
			new1->Size = System::Drawing::Size(50, 50);
			lane->Controls->Add(new1);
			break;
		case 2:
			PictureBox^ new2;
			new2 = (gcnew System::Windows::Forms::PictureBox());
			new2->BackColor = Color::Orange;
			new2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources1->GetObject(L"pictureBox2.BackgroundImage")));
			new2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			new2->Location = Point(660, 25);
			new2->Size = System::Drawing::Size(50, 50);
			lane->Controls->Add(new2);
			break;
		default:
		break;
		}
	}
	private: System::Void countdown_Tick(System::Object^  sender, System::EventArgs^  e) {
		CD -= 1;
		tiktik->Text = CD.ToString();
		if (CD == 0)
		{
			new_drum->Enabled = false;
			move->Enabled = false;
			countdown->Enabled = false;
			panel2->Visible = false;
			panel3->Visible = true;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = false;
		panel3->Visible = true;
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if(pausing == 0)
		{
			new_drum->Enabled = false;
			move->Enabled = false;
			countdown->Enabled = false;
			pausing = 1;
		}
		else
		{
			new_drum->Enabled = true;
			move->Enabled = true;
			countdown->Enabled = true;
			pausing = 0;
		}
		

	}
	private: System::Void counter_Tick(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		switch (e->KeyCode) {
		case Keys::A:
			for each(Control ^pC in lane->Controls) {
				if (pC->GetType() == System::Windows::Forms::PictureBox::typeid)
					if (pC->Location.X <= 100 && pC->Location.X > 40 && pC->BackColor == Color::Black) {
						lane->Controls->Remove(pC);
						score += 1 * combo;
						combo += 1;
						combocount->Text = combo.ToString();
						scoring->Text = score.ToString();
						
					}
			}
		break;

		case Keys::L:
			for each(Control ^pC in lane->Controls) {
				if (pC->GetType() == System::Windows::Forms::PictureBox::typeid)
					if (pC->Location.X <= 100 && pC->Location.X > 40 && pC->BackColor == Color::Orange) {
						lane->Controls->Remove(pC);
						score += 1 * combo;
						combo += 1;
						combocount->Text = combo.ToString();
						scoring->Text = score.ToString();
						
					}
			}
			break;
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::ExitThread();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		new_drum->Enabled = true;
		move->Enabled = true;
		countdown->Enabled = true;
		combo = 0;
		score = 0;
		CD = 30;
		tiktik->Text = CD.ToString();
		scoring->Text = score.ToString();
		panel3->Visible = false;
		panel2->Visible = true;
		for(int i = 0; i < 3; ++i)
		for each(Control ^pC in lane->Controls) {
			if (pC->GetType() == System::Windows::Forms::PictureBox::typeid)
				lane->Controls->Remove(pC);
		}
	}
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Application::ExitThread();
	}
};
}

