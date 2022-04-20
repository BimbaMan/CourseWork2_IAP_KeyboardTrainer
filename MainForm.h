#pragma once
#include "SetingsForm.h"
#include "LevelsForm.h"
#include "InfoForm.h"
#include <Windows.h>


namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	/// 

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ labeltime;
	protected:
	private: System::Windows::Forms::Label^ labelSpeed;
	private: System::Windows::Forms::Label^ labelErr;
	private: int i = 0;
	private: int err = 0;
	private: int timerCounterSec;
	private: int timerCounterMin; 
	private: void SelectLabelColorRedEng(char letter);
	private: void SelectLabelColorRedRus(char letter);
	private: void KeyboardLanguageRus();
	private: void KeyboardLanguageEng();
	private: void LabelsColorBlack();
	private: int KeyClickHandlerRus(KeyPressEventArgs^ e, int i);
	private: int KeyClickHandlerEng(KeyPressEventArgs^ e, int i);
	private: void EditResFile(unsigned int Min, unsigned int Sec, unsigned int Speed, unsigned int Errors);
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ labelq;
	private: System::Windows::Forms::Label^ labela;
	private: System::Windows::Forms::Label^ labelz;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label0;
	private: System::Windows::Forms::Label^ labelMinus;
	private: System::Windows::Forms::Label^ labelEQ;
	private: System::Windows::Forms::Label^ labelw;
	private: System::Windows::Forms::Label^ labele;


	private: System::Windows::Forms::Label^ labels;
	private: System::Windows::Forms::Label^ labeld;


	private: System::Windows::Forms::Label^ labelx;
	private: System::Windows::Forms::Label^ labelc;
	private: System::Windows::Forms::Label^ labelr;
	private: System::Windows::Forms::Label^ labelt;




	private: System::Windows::Forms::Label^ labelf;
	private: System::Windows::Forms::Label^ labelg;
	private: System::Windows::Forms::Label^ labely;
	private: System::Windows::Forms::Label^ labelu;




	private: System::Windows::Forms::Label^ labeli;
	private: System::Windows::Forms::Label^ labelj;



	private: System::Windows::Forms::Label^ labelh;
	private: System::Windows::Forms::Label^ labelk;


	private: System::Windows::Forms::Label^ labelm;

	private: System::Windows::Forms::Label^ labeln;

	private: System::Windows::Forms::Label^ labelb;

	private: System::Windows::Forms::Label^ labelv;
	private: System::Windows::Forms::Label^ labelComma;



	private: System::Windows::Forms::Label^ labelo;
	private: System::Windows::Forms::Label^ labell;



	private: System::Windows::Forms::Label^ labelp;


	private: System::Windows::Forms::Label^ labelSQBracket1;
	private: System::Windows::Forms::Label^ labelSemicolon;


	private: System::Windows::Forms::Label^ labelSQBracket2;
	private: System::Windows::Forms::Label^ labelBackSlash;
	private: System::Windows::Forms::Label^ labelSingleQuote;




	private: System::Windows::Forms::Label^ labelDot;
private: System::Windows::Forms::Label^ labelSlash;
private: System::Windows::Forms::Label^ labelWave;



private: System::Windows::Forms::Label^ labelTab;
private: System::Windows::Forms::Label^ labelCaps;
private: System::Windows::Forms::Label^ labelShiftL;
private: System::Windows::Forms::Label^ labelCtrlL;
private: System::Windows::Forms::Label^ labelAltL;
private: System::Windows::Forms::Label^ labelAltR;
private: System::Windows::Forms::Label^ labelCtrlR;
private: System::Windows::Forms::Label^ labelShiftR;
private: System::Windows::Forms::Label^ labelEnter;
private: System::Windows::Forms::Label^ labelBacksp;
private: System::Windows::Forms::Label^ labelText;
private: System::Windows::Forms::Label^ labelSpace;
private: System::Windows::Forms::TextBox^ textBox;
private: System::Windows::Forms::ToolStrip^ toolStrip1;
private: System::Windows::Forms::ToolStripButton^ toolStripButtonSetings;
private: System::Windows::Forms::ToolStripButton^ toolStripButtonLevels;
private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
private: System::ComponentModel::IContainer^ components;





	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelq = (gcnew System::Windows::Forms::Label());
			this->labela = (gcnew System::Windows::Forms::Label());
			this->labelz = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label0 = (gcnew System::Windows::Forms::Label());
			this->labelMinus = (gcnew System::Windows::Forms::Label());
			this->labelEQ = (gcnew System::Windows::Forms::Label());
			this->labelw = (gcnew System::Windows::Forms::Label());
			this->labele = (gcnew System::Windows::Forms::Label());
			this->labels = (gcnew System::Windows::Forms::Label());
			this->labeld = (gcnew System::Windows::Forms::Label());
			this->labelx = (gcnew System::Windows::Forms::Label());
			this->labelc = (gcnew System::Windows::Forms::Label());
			this->labelr = (gcnew System::Windows::Forms::Label());
			this->labelt = (gcnew System::Windows::Forms::Label());
			this->labelf = (gcnew System::Windows::Forms::Label());
			this->labelg = (gcnew System::Windows::Forms::Label());
			this->labely = (gcnew System::Windows::Forms::Label());
			this->labelu = (gcnew System::Windows::Forms::Label());
			this->labeli = (gcnew System::Windows::Forms::Label());
			this->labelj = (gcnew System::Windows::Forms::Label());
			this->labelh = (gcnew System::Windows::Forms::Label());
			this->labelk = (gcnew System::Windows::Forms::Label());
			this->labelm = (gcnew System::Windows::Forms::Label());
			this->labeln = (gcnew System::Windows::Forms::Label());
			this->labelb = (gcnew System::Windows::Forms::Label());
			this->labelv = (gcnew System::Windows::Forms::Label());
			this->labelComma = (gcnew System::Windows::Forms::Label());
			this->labelo = (gcnew System::Windows::Forms::Label());
			this->labell = (gcnew System::Windows::Forms::Label());
			this->labelp = (gcnew System::Windows::Forms::Label());
			this->labelSQBracket1 = (gcnew System::Windows::Forms::Label());
			this->labelSemicolon = (gcnew System::Windows::Forms::Label());
			this->labelSQBracket2 = (gcnew System::Windows::Forms::Label());
			this->labelBackSlash = (gcnew System::Windows::Forms::Label());
			this->labelSingleQuote = (gcnew System::Windows::Forms::Label());
			this->labelDot = (gcnew System::Windows::Forms::Label());
			this->labelSlash = (gcnew System::Windows::Forms::Label());
			this->labelWave = (gcnew System::Windows::Forms::Label());
			this->labelTab = (gcnew System::Windows::Forms::Label());
			this->labelCaps = (gcnew System::Windows::Forms::Label());
			this->labelShiftL = (gcnew System::Windows::Forms::Label());
			this->labelCtrlL = (gcnew System::Windows::Forms::Label());
			this->labelAltL = (gcnew System::Windows::Forms::Label());
			this->labelAltR = (gcnew System::Windows::Forms::Label());
			this->labelCtrlR = (gcnew System::Windows::Forms::Label());
			this->labelShiftR = (gcnew System::Windows::Forms::Label());
			this->labelEnter = (gcnew System::Windows::Forms::Label());
			this->labelBacksp = (gcnew System::Windows::Forms::Label());
			this->labelText = (gcnew System::Windows::Forms::Label());
			this->labelSpace = (gcnew System::Windows::Forms::Label());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButtonSetings = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonLevels = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->labeltime = (gcnew System::Windows::Forms::Label());
			this->labelSpeed = (gcnew System::Windows::Forms::Label());
			this->labelErr = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"Sourse\\Keyboard.png";
			this->pictureBox1->Location = System::Drawing::Point(9, 188);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(645, 251);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// labelq
			// 
			this->labelq->AutoSize = true;
			this->labelq->BackColor = System::Drawing::Color::Transparent;
			this->labelq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelq->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelq.Image")));
			this->labelq->Location = System::Drawing::Point(94, 263);
			this->labelq->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelq->Name = L"labelq";
			this->labelq->Size = System::Drawing::Size(21, 18);
			this->labelq->TabIndex = 2;
			this->labelq->Text = L"Q";
			// 
			// labela
			// 
			this->labela->AutoSize = true;
			this->labela->BackColor = System::Drawing::Color::Transparent;
			this->labela->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labela->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labela.Image")));
			this->labela->Location = System::Drawing::Point(106, 306);
			this->labela->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labela->Name = L"labela";
			this->labela->Size = System::Drawing::Size(18, 18);
			this->labela->TabIndex = 3;
			this->labela->Text = L"A";
			// 
			// labelz
			// 
			this->labelz->AutoSize = true;
			this->labelz->BackColor = System::Drawing::Color::Transparent;
			this->labelz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelz->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelz.Image")));
			this->labelz->Location = System::Drawing::Point(129, 352);
			this->labelz->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelz->Name = L"labelz";
			this->labelz->Size = System::Drawing::Size(18, 18);
			this->labelz->TabIndex = 4;
			this->labelz->Text = L"Z";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(74, 211);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(119, 211);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(160, 211);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(205, 211);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(248, 211);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 18);
			this->label5->TabIndex = 9;
			this->label5->Text = L"5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(292, 211);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(331, 211);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 18);
			this->label7->TabIndex = 11;
			this->label7->Text = L"7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(378, 211);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 18);
			this->label8->TabIndex = 12;
			this->label8->Text = L"8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(422, 211);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 18);
			this->label9->TabIndex = 13;
			this->label9->Text = L"9";
			// 
			// label0
			// 
			this->label0->AutoSize = true;
			this->label0->BackColor = System::Drawing::Color::Transparent;
			this->label0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label0.Image")));
			this->label0->Location = System::Drawing::Point(465, 211);
			this->label0->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label0->Name = L"label0";
			this->label0->Size = System::Drawing::Size(17, 18);
			this->label0->TabIndex = 14;
			this->label0->Text = L"0";
			// 
			// labelMinus
			// 
			this->labelMinus->AutoSize = true;
			this->labelMinus->BackColor = System::Drawing::Color::Transparent;
			this->labelMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMinus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelMinus.Image")));
			this->labelMinus->Location = System::Drawing::Point(502, 211);
			this->labelMinus->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMinus->Name = L"labelMinus";
			this->labelMinus->Size = System::Drawing::Size(14, 18);
			this->labelMinus->TabIndex = 15;
			this->labelMinus->Text = L"-";
			// 
			// labelEQ
			// 
			this->labelEQ->AutoSize = true;
			this->labelEQ->BackColor = System::Drawing::Color::Transparent;
			this->labelEQ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelEQ->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelEQ.Image")));
			this->labelEQ->Location = System::Drawing::Point(550, 211);
			this->labelEQ->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelEQ->Name = L"labelEQ";
			this->labelEQ->Size = System::Drawing::Size(18, 18);
			this->labelEQ->TabIndex = 16;
			this->labelEQ->Text = L"=";
			// 
			// labelw
			// 
			this->labelw->AutoSize = true;
			this->labelw->BackColor = System::Drawing::Color::Transparent;
			this->labelw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelw->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelw.Image")));
			this->labelw->Location = System::Drawing::Point(136, 263);
			this->labelw->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelw->Name = L"labelw";
			this->labelw->Size = System::Drawing::Size(24, 18);
			this->labelw->TabIndex = 17;
			this->labelw->Text = L"W";
			// 
			// labele
			// 
			this->labele->AutoSize = true;
			this->labele->BackColor = System::Drawing::Color::Transparent;
			this->labele->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labele->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labele.Image")));
			this->labele->Location = System::Drawing::Point(181, 263);
			this->labele->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labele->Name = L"labele";
			this->labele->Size = System::Drawing::Size(19, 18);
			this->labele->TabIndex = 18;
			this->labele->Text = L"E";
			// 
			// labels
			// 
			this->labels->AutoSize = true;
			this->labels->BackColor = System::Drawing::Color::Transparent;
			this->labels->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labels->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labels.Image")));
			this->labels->Location = System::Drawing::Point(150, 306);
			this->labels->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labels->Name = L"labels";
			this->labels->Size = System::Drawing::Size(19, 18);
			this->labels->TabIndex = 19;
			this->labels->Text = L"S";
			// 
			// labeld
			// 
			this->labeld->AutoSize = true;
			this->labeld->BackColor = System::Drawing::Color::Transparent;
			this->labeld->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labeld->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labeld.Image")));
			this->labeld->Location = System::Drawing::Point(194, 306);
			this->labeld->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeld->Name = L"labeld";
			this->labeld->Size = System::Drawing::Size(20, 18);
			this->labeld->TabIndex = 20;
			this->labeld->Text = L"D";
			// 
			// labelx
			// 
			this->labelx->AutoSize = true;
			this->labelx->BackColor = System::Drawing::Color::Transparent;
			this->labelx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelx->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelx.Image")));
			this->labelx->Location = System::Drawing::Point(172, 352);
			this->labelx->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelx->Name = L"labelx";
			this->labelx->Size = System::Drawing::Size(19, 18);
			this->labelx->TabIndex = 21;
			this->labelx->Text = L"X";
			// 
			// labelc
			// 
			this->labelc->AutoSize = true;
			this->labelc->BackColor = System::Drawing::Color::Transparent;
			this->labelc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelc.Image")));
			this->labelc->Location = System::Drawing::Point(216, 352);
			this->labelc->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelc->Name = L"labelc";
			this->labelc->Size = System::Drawing::Size(20, 18);
			this->labelc->TabIndex = 22;
			this->labelc->Text = L"C";
			// 
			// labelr
			// 
			this->labelr->AutoSize = true;
			this->labelr->BackColor = System::Drawing::Color::Transparent;
			this->labelr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelr->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelr.Image")));
			this->labelr->Location = System::Drawing::Point(223, 263);
			this->labelr->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelr->Name = L"labelr";
			this->labelr->Size = System::Drawing::Size(20, 18);
			this->labelr->TabIndex = 23;
			this->labelr->Text = L"R";
			// 
			// labelt
			// 
			this->labelt->AutoSize = true;
			this->labelt->BackColor = System::Drawing::Color::Transparent;
			this->labelt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelt.Image")));
			this->labelt->Location = System::Drawing::Point(268, 263);
			this->labelt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelt->Name = L"labelt";
			this->labelt->Size = System::Drawing::Size(18, 18);
			this->labelt->TabIndex = 24;
			this->labelt->Text = L"T";
			// 
			// labelf
			// 
			this->labelf->AutoSize = true;
			this->labelf->BackColor = System::Drawing::Color::Transparent;
			this->labelf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelf->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelf.Image")));
			this->labelf->Location = System::Drawing::Point(236, 306);
			this->labelf->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelf->Name = L"labelf";
			this->labelf->Size = System::Drawing::Size(18, 18);
			this->labelf->TabIndex = 25;
			this->labelf->Text = L"F";
			// 
			// labelg
			// 
			this->labelg->AutoSize = true;
			this->labelg->BackColor = System::Drawing::Color::Transparent;
			this->labelg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelg.Image")));
			this->labelg->Location = System::Drawing::Point(279, 306);
			this->labelg->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelg->Name = L"labelg";
			this->labelg->Size = System::Drawing::Size(21, 18);
			this->labelg->TabIndex = 26;
			this->labelg->Text = L"G";
			// 
			// labely
			// 
			this->labely->AutoSize = true;
			this->labely->BackColor = System::Drawing::Color::Transparent;
			this->labely->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labely->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labely.Image")));
			this->labely->Location = System::Drawing::Point(313, 263);
			this->labely->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labely->Name = L"labely";
			this->labely->Size = System::Drawing::Size(18, 18);
			this->labely->TabIndex = 27;
			this->labely->Text = L"Y";
			// 
			// labelu
			// 
			this->labelu->AutoSize = true;
			this->labelu->BackColor = System::Drawing::Color::Transparent;
			this->labelu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelu.Image")));
			this->labelu->Location = System::Drawing::Point(354, 263);
			this->labelu->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelu->Name = L"labelu";
			this->labelu->Size = System::Drawing::Size(20, 18);
			this->labelu->TabIndex = 28;
			this->labelu->Text = L"U";
			// 
			// labeli
			// 
			this->labeli->AutoSize = true;
			this->labeli->BackColor = System::Drawing::Color::Transparent;
			this->labeli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labeli->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labeli.Image")));
			this->labeli->Location = System::Drawing::Point(401, 263);
			this->labeli->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeli->Name = L"labeli";
			this->labeli->Size = System::Drawing::Size(12, 18);
			this->labeli->TabIndex = 29;
			this->labeli->Text = L"I";
			// 
			// labelj
			// 
			this->labelj->AutoSize = true;
			this->labelj->BackColor = System::Drawing::Color::Transparent;
			this->labelj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelj->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelj.Image")));
			this->labelj->Location = System::Drawing::Point(367, 306);
			this->labelj->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelj->Name = L"labelj";
			this->labelj->Size = System::Drawing::Size(17, 18);
			this->labelj->TabIndex = 29;
			this->labelj->Text = L"J";
			// 
			// labelh
			// 
			this->labelh->AutoSize = true;
			this->labelh->BackColor = System::Drawing::Color::Transparent;
			this->labelh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelh.Image")));
			this->labelh->Location = System::Drawing::Point(321, 306);
			this->labelh->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelh->Name = L"labelh";
			this->labelh->Size = System::Drawing::Size(20, 18);
			this->labelh->TabIndex = 30;
			this->labelh->Text = L"H";
			// 
			// labelk
			// 
			this->labelk->AutoSize = true;
			this->labelk->BackColor = System::Drawing::Color::Transparent;
			this->labelk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelk->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelk.Image")));
			this->labelk->Location = System::Drawing::Point(409, 306);
			this->labelk->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelk->Name = L"labelk";
			this->labelk->Size = System::Drawing::Size(19, 18);
			this->labelk->TabIndex = 31;
			this->labelk->Text = L"K";
			// 
			// labelm
			// 
			this->labelm->AutoSize = true;
			this->labelm->BackColor = System::Drawing::Color::Transparent;
			this->labelm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelm.Image")));
			this->labelm->Location = System::Drawing::Point(386, 352);
			this->labelm->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelm->Name = L"labelm";
			this->labelm->Size = System::Drawing::Size(22, 18);
			this->labelm->TabIndex = 32;
			this->labelm->Text = L"M";
			// 
			// labeln
			// 
			this->labeln->AutoSize = true;
			this->labeln->BackColor = System::Drawing::Color::Transparent;
			this->labeln->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labeln->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labeln.Image")));
			this->labeln->Location = System::Drawing::Point(345, 352);
			this->labeln->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeln->Name = L"labeln";
			this->labeln->Size = System::Drawing::Size(20, 18);
			this->labeln->TabIndex = 33;
			this->labeln->Text = L"N";
			// 
			// labelb
			// 
			this->labelb->AutoSize = true;
			this->labelb->BackColor = System::Drawing::Color::Transparent;
			this->labelb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelb->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelb.Image")));
			this->labelb->Location = System::Drawing::Point(302, 352);
			this->labelb->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelb->Name = L"labelb";
			this->labelb->Size = System::Drawing::Size(19, 18);
			this->labelb->TabIndex = 34;
			this->labelb->Text = L"B";
			// 
			// labelv
			// 
			this->labelv->AutoSize = true;
			this->labelv->BackColor = System::Drawing::Color::Transparent;
			this->labelv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelv->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelv.Image")));
			this->labelv->Location = System::Drawing::Point(258, 352);
			this->labelv->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelv->Name = L"labelv";
			this->labelv->Size = System::Drawing::Size(18, 18);
			this->labelv->TabIndex = 35;
			this->labelv->Text = L"V";
			// 
			// labelComma
			// 
			this->labelComma->AutoSize = true;
			this->labelComma->BackColor = System::Drawing::Color::Transparent;
			this->labelComma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelComma->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelComma.Image")));
			this->labelComma->Location = System::Drawing::Point(433, 352);
			this->labelComma->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelComma->Name = L"labelComma";
			this->labelComma->Size = System::Drawing::Size(13, 18);
			this->labelComma->TabIndex = 36;
			this->labelComma->Text = L",";
			// 
			// labelo
			// 
			this->labelo->AutoSize = true;
			this->labelo->BackColor = System::Drawing::Color::Transparent;
			this->labelo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelo.Image")));
			this->labelo->Location = System::Drawing::Point(442, 263);
			this->labelo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelo->Name = L"labelo";
			this->labelo->Size = System::Drawing::Size(21, 18);
			this->labelo->TabIndex = 37;
			this->labelo->Text = L"O";
			// 
			// labell
			// 
			this->labell->AutoSize = true;
			this->labell->BackColor = System::Drawing::Color::Transparent;
			this->labell->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labell->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labell.Image")));
			this->labell->Location = System::Drawing::Point(453, 306);
			this->labell->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labell->Name = L"labell";
			this->labell->Size = System::Drawing::Size(17, 18);
			this->labell->TabIndex = 38;
			this->labell->Text = L"L";
			// 
			// labelp
			// 
			this->labelp->AutoSize = true;
			this->labelp->BackColor = System::Drawing::Color::Transparent;
			this->labelp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelp.Image")));
			this->labelp->Location = System::Drawing::Point(485, 263);
			this->labelp->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelp->Name = L"labelp";
			this->labelp->Size = System::Drawing::Size(19, 18);
			this->labelp->TabIndex = 39;
			this->labelp->Text = L"P";
			// 
			// labelSQBracket1
			// 
			this->labelSQBracket1->AutoSize = true;
			this->labelSQBracket1->BackColor = System::Drawing::Color::Transparent;
			this->labelSQBracket1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSQBracket1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelSQBracket1.Image")));
			this->labelSQBracket1->Location = System::Drawing::Point(530, 263);
			this->labelSQBracket1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSQBracket1->Name = L"labelSQBracket1";
			this->labelSQBracket1->Size = System::Drawing::Size(13, 18);
			this->labelSQBracket1->TabIndex = 40;
			this->labelSQBracket1->Text = L"[";
			// 
			// labelSemicolon
			// 
			this->labelSemicolon->AutoSize = true;
			this->labelSemicolon->BackColor = System::Drawing::Color::Transparent;
			this->labelSemicolon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSemicolon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelSemicolon.Image")));
			this->labelSemicolon->Location = System::Drawing::Point(491, 305);
			this->labelSemicolon->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSemicolon->Name = L"labelSemicolon";
			this->labelSemicolon->Size = System::Drawing::Size(13, 18);
			this->labelSemicolon->TabIndex = 41;
			this->labelSemicolon->Text = L";";
			// 
			// labelSQBracket2
			// 
			this->labelSQBracket2->AutoSize = true;
			this->labelSQBracket2->BackColor = System::Drawing::Color::Transparent;
			this->labelSQBracket2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSQBracket2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelSQBracket2.Image")));
			this->labelSQBracket2->Location = System::Drawing::Point(572, 263);
			this->labelSQBracket2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSQBracket2->Name = L"labelSQBracket2";
			this->labelSQBracket2->Size = System::Drawing::Size(13, 18);
			this->labelSQBracket2->TabIndex = 41;
			this->labelSQBracket2->Text = L"]";
			// 
			// labelBackSlash
			// 
			this->labelBackSlash->AutoSize = true;
			this->labelBackSlash->BackColor = System::Drawing::Color::Transparent;
			this->labelBackSlash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelBackSlash->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelBackSlash.Image")));
			this->labelBackSlash->Location = System::Drawing::Point(614, 263);
			this->labelBackSlash->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelBackSlash->Name = L"labelBackSlash";
			this->labelBackSlash->Size = System::Drawing::Size(13, 18);
			this->labelBackSlash->TabIndex = 42;
			this->labelBackSlash->Text = L"\\";
			// 
			// labelSingleQuote
			// 
			this->labelSingleQuote->AutoSize = true;
			this->labelSingleQuote->BackColor = System::Drawing::Color::Transparent;
			this->labelSingleQuote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSingleQuote->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelSingleQuote.Image")));
			this->labelSingleQuote->Location = System::Drawing::Point(542, 306);
			this->labelSingleQuote->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSingleQuote->Name = L"labelSingleQuote";
			this->labelSingleQuote->Size = System::Drawing::Size(12, 18);
			this->labelSingleQuote->TabIndex = 43;
			this->labelSingleQuote->Text = L"\'";
			// 
			// labelDot
			// 
			this->labelDot->AutoSize = true;
			this->labelDot->BackColor = System::Drawing::Color::Transparent;
			this->labelDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDot->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelDot.Image")));
			this->labelDot->Location = System::Drawing::Point(476, 352);
			this->labelDot->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDot->Name = L"labelDot";
			this->labelDot->Size = System::Drawing::Size(13, 18);
			this->labelDot->TabIndex = 44;
			this->labelDot->Text = L".";
			// 
			// labelSlash
			// 
			this->labelSlash->AutoSize = true;
			this->labelSlash->BackColor = System::Drawing::Color::Transparent;
			this->labelSlash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSlash->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelSlash.Image")));
			this->labelSlash->Location = System::Drawing::Point(524, 352);
			this->labelSlash->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSlash->Name = L"labelSlash";
			this->labelSlash->Size = System::Drawing::Size(13, 18);
			this->labelSlash->TabIndex = 45;
			this->labelSlash->Text = L"/";
			// 
			// labelWave
			// 
			this->labelWave->AutoSize = true;
			this->labelWave->BackColor = System::Drawing::Color::Transparent;
			this->labelWave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelWave->ForeColor = System::Drawing::Color::Black;
			this->labelWave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelWave.Image")));
			this->labelWave->Location = System::Drawing::Point(32, 211);
			this->labelWave->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelWave->Name = L"labelWave";
			this->labelWave->Size = System::Drawing::Size(14, 18);
			this->labelWave->TabIndex = 46;
			this->labelWave->Text = L"`";
			// 
			// labelTab
			// 
			this->labelTab->AutoSize = true;
			this->labelTab->BackColor = System::Drawing::Color::White;
			this->labelTab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTab->Location = System::Drawing::Point(32, 263);
			this->labelTab->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelTab->Name = L"labelTab";
			this->labelTab->Size = System::Drawing::Size(33, 18);
			this->labelTab->TabIndex = 47;
			this->labelTab->Text = L"Tab";
			// 
			// labelCaps
			// 
			this->labelCaps->AutoSize = true;
			this->labelCaps->BackColor = System::Drawing::Color::White;
			this->labelCaps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCaps->Location = System::Drawing::Point(32, 306);
			this->labelCaps->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCaps->Name = L"labelCaps";
			this->labelCaps->Size = System::Drawing::Size(43, 18);
			this->labelCaps->TabIndex = 48;
			this->labelCaps->Text = L"Caps";
			// 
			// labelShiftL
			// 
			this->labelShiftL->AutoSize = true;
			this->labelShiftL->BackColor = System::Drawing::Color::White;
			this->labelShiftL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelShiftL->Location = System::Drawing::Point(32, 352);
			this->labelShiftL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelShiftL->Name = L"labelShiftL";
			this->labelShiftL->Size = System::Drawing::Size(37, 18);
			this->labelShiftL->TabIndex = 49;
			this->labelShiftL->Text = L"Shift";
			// 
			// labelCtrlL
			// 
			this->labelCtrlL->AutoSize = true;
			this->labelCtrlL->BackColor = System::Drawing::Color::White;
			this->labelCtrlL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCtrlL->Location = System::Drawing::Point(32, 392);
			this->labelCtrlL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCtrlL->Name = L"labelCtrlL";
			this->labelCtrlL->Size = System::Drawing::Size(31, 18);
			this->labelCtrlL->TabIndex = 50;
			this->labelCtrlL->Text = L"Ctrl";
			// 
			// labelAltL
			// 
			this->labelAltL->AutoSize = true;
			this->labelAltL->BackColor = System::Drawing::Color::White;
			this->labelAltL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAltL->Location = System::Drawing::Point(136, 392);
			this->labelAltL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAltL->Name = L"labelAltL";
			this->labelAltL->Size = System::Drawing::Size(24, 18);
			this->labelAltL->TabIndex = 52;
			this->labelAltL->Text = L"Alt";
			// 
			// labelAltR
			// 
			this->labelAltR->AutoSize = true;
			this->labelAltR->BackColor = System::Drawing::Color::White;
			this->labelAltR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAltR->Location = System::Drawing::Point(502, 392);
			this->labelAltR->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAltR->Name = L"labelAltR";
			this->labelAltR->Size = System::Drawing::Size(24, 18);
			this->labelAltR->TabIndex = 53;
			this->labelAltR->Text = L"Alt";
			// 
			// labelCtrlR
			// 
			this->labelCtrlR->AutoSize = true;
			this->labelCtrlR->BackColor = System::Drawing::Color::White;
			this->labelCtrlR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCtrlR->Location = System::Drawing::Point(597, 392);
			this->labelCtrlR->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCtrlR->Name = L"labelCtrlR";
			this->labelCtrlR->Size = System::Drawing::Size(31, 18);
			this->labelCtrlR->TabIndex = 54;
			this->labelCtrlR->Text = L"Ctrl";
			// 
			// labelShiftR
			// 
			this->labelShiftR->AutoSize = true;
			this->labelShiftR->BackColor = System::Drawing::Color::White;
			this->labelShiftR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelShiftR->Location = System::Drawing::Point(597, 352);
			this->labelShiftR->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelShiftR->Name = L"labelShiftR";
			this->labelShiftR->Size = System::Drawing::Size(37, 18);
			this->labelShiftR->TabIndex = 55;
			this->labelShiftR->Text = L"Shift";
			// 
			// labelEnter
			// 
			this->labelEnter->AutoSize = true;
			this->labelEnter->BackColor = System::Drawing::Color::White;
			this->labelEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelEnter->Location = System::Drawing::Point(597, 306);
			this->labelEnter->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelEnter->Name = L"labelEnter";
			this->labelEnter->Size = System::Drawing::Size(43, 18);
			this->labelEnter->TabIndex = 56;
			this->labelEnter->Text = L"Enter";
			// 
			// labelBacksp
			// 
			this->labelBacksp->AutoSize = true;
			this->labelBacksp->BackColor = System::Drawing::Color::White;
			this->labelBacksp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelBacksp->Location = System::Drawing::Point(585, 211);
			this->labelBacksp->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelBacksp->Name = L"labelBacksp";
			this->labelBacksp->Size = System::Drawing::Size(58, 18);
			this->labelBacksp->TabIndex = 57;
			this->labelBacksp->Text = L"Backsp";
			// 
			// labelText
			// 
			this->labelText->AutoSize = true;
			this->labelText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelText->Location = System::Drawing::Point(34, 110);
			this->labelText->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelText->Name = L"labelText";
			this->labelText->Size = System::Drawing::Size(0, 24);
			this->labelText->TabIndex = 58;
			// 
			// labelSpace
			// 
			this->labelSpace->AutoSize = true;
			this->labelSpace->BackColor = System::Drawing::Color::Transparent;
			this->labelSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSpace->ForeColor = System::Drawing::Color::Black;
			this->labelSpace->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelSpace.Image")));
			this->labelSpace->Location = System::Drawing::Point(302, 392);
			this->labelSpace->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSpace->Name = L"labelSpace";
			this->labelSpace->Size = System::Drawing::Size(50, 18);
			this->labelSpace->TabIndex = 59;
			this->labelSpace->Text = L"Space";
			// 
			// textBox
			// 
			this->textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox->Location = System::Drawing::Point(35, 143);
			this->textBox->Margin = System::Windows::Forms::Padding(2);
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(608, 29);
			this->textBox->TabIndex = 60;
			this->textBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_KeyPress);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripButtonSetings,
					this->toolStripButtonLevels, this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(663, 25);
			this->toolStrip1->TabIndex = 61;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButtonSetings
			// 
			this->toolStripButtonSetings->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonSetings->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSetings->Name = L"toolStripButtonSetings";
			this->toolStripButtonSetings->Size = System::Drawing::Size(71, 22);
			this->toolStripButtonSetings->Tag = L"";
			this->toolStripButtonSetings->Text = L"Настройки";
			this->toolStripButtonSetings->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonSetings_Click);
			// 
			// toolStripButtonLevels
			// 
			this->toolStripButtonLevels->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonLevels->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonLevels->Name = L"toolStripButtonLevels";
			this->toolStripButtonLevels->Size = System::Drawing::Size(52, 22);
			this->toolStripButtonLevels->Text = L"Уровни";
			this->toolStripButtonLevels->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonLevels_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(85, 22);
			this->toolStripButton1->Text = L"Информация";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton1_Click);
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MainForm::timer_Tick);
			// 
			// labeltime
			// 
			this->labeltime->AutoSize = true;
			this->labeltime->Location = System::Drawing::Point(535, 25);
			this->labeltime->Name = L"labeltime";
			this->labeltime->Size = System::Drawing::Size(105, 13);
			this->labeltime->TabIndex = 62;
			this->labeltime->Text = L"Время:  0 мин.  0 с.";
			// 
			// labelSpeed
			// 
			this->labelSpeed->AutoSize = true;
			this->labelSpeed->Location = System::Drawing::Point(535, 38);
			this->labelSpeed->Name = L"labelSpeed";
			this->labelSpeed->Size = System::Drawing::Size(113, 13);
			this->labelSpeed->TabIndex = 63;
			this->labelSpeed->Text = L"Скорость: 0 зн,/мин,";
			// 
			// labelErr
			// 
			this->labelErr->AutoSize = true;
			this->labelErr->Location = System::Drawing::Point(535, 51);
			this->labelErr->Name = L"labelErr";
			this->labelErr->Size = System::Drawing::Size(59, 13);
			this->labelErr->TabIndex = 64;
			this->labelErr->Text = L"Ошибки: 0";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(663, 448);
			this->Controls->Add(this->labelErr);
			this->Controls->Add(this->labelSpeed);
			this->Controls->Add(this->labeltime);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->labelSpace);
			this->Controls->Add(this->labelText);
			this->Controls->Add(this->labelBacksp);
			this->Controls->Add(this->labelEnter);
			this->Controls->Add(this->labelShiftR);
			this->Controls->Add(this->labelCtrlR);
			this->Controls->Add(this->labelAltR);
			this->Controls->Add(this->labelAltL);
			this->Controls->Add(this->labelCtrlL);
			this->Controls->Add(this->labelShiftL);
			this->Controls->Add(this->labelCaps);
			this->Controls->Add(this->labelTab);
			this->Controls->Add(this->labelWave);
			this->Controls->Add(this->labelSlash);
			this->Controls->Add(this->labelDot);
			this->Controls->Add(this->labelSingleQuote);
			this->Controls->Add(this->labelBackSlash);
			this->Controls->Add(this->labelSQBracket2);
			this->Controls->Add(this->labelSemicolon);
			this->Controls->Add(this->labelSQBracket1);
			this->Controls->Add(this->labelp);
			this->Controls->Add(this->labell);
			this->Controls->Add(this->labelo);
			this->Controls->Add(this->labelComma);
			this->Controls->Add(this->labelv);
			this->Controls->Add(this->labelb);
			this->Controls->Add(this->labeln);
			this->Controls->Add(this->labelm);
			this->Controls->Add(this->labelk);
			this->Controls->Add(this->labelh);
			this->Controls->Add(this->labelj);
			this->Controls->Add(this->labeli);
			this->Controls->Add(this->labelu);
			this->Controls->Add(this->labely);
			this->Controls->Add(this->labelg);
			this->Controls->Add(this->labelf);
			this->Controls->Add(this->labelt);
			this->Controls->Add(this->labelr);
			this->Controls->Add(this->labelc);
			this->Controls->Add(this->labelx);
			this->Controls->Add(this->labeld);
			this->Controls->Add(this->labels);
			this->Controls->Add(this->labele);
			this->Controls->Add(this->labelw);
			this->Controls->Add(this->labelEQ);
			this->Controls->Add(this->labelMinus);
			this->Controls->Add(this->label0);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelz);
			this->Controls->Add(this->labela);
			this->Controls->Add(this->labelq);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Keyboard trainer";
			this->Shown += gcnew System::EventHandler(this, &MainForm::MainForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



		private: System::Void toolStripButtonSetings_Click(System::Object^ sender, System::EventArgs^ e) {
			labelText->Text = "";
			textBox->Clear();
			LevelsForm::LvlStr = (unsigned char*)"";
			LevelsForm::LvlChoice = 0;
			SetingsForm^ SF = gcnew SetingsForm();
			SF->ShowDialog();

			if (SetingsForm::flagRus == 1)
			{
				KeyboardLanguageRus();
			}
			else if (SetingsForm::flagEng == 1)
			{
				KeyboardLanguageEng();
			}

			textBox->Enabled = false;

			i = 0;

		}

		private: System::Void toolStripButtonLevels_Click(System::Object^ sender, System::EventArgs^ e) {
			labelText->Text = "";
			textBox->Clear();
			LevelsForm::LvlStr = (unsigned char*)"";
			LevelsForm::LvlChoice = 0;
			LevelsForm^ LF = gcnew LevelsForm();
			LF->ShowDialog();
			

			labelText->Text = gcnew System::String((char*)LevelsForm::LvlStr);

			if (LevelsForm::LvlChoice != 0)
			{
				textBox->Enabled = true;
				textBox->Focus();
			}

			i = 0;

		}

		private: System::Void textBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if ((SetingsForm::flagRus == 1) && (LevelsForm::LvlStr != (unsigned char*)""))
			{
				i = KeyClickHandlerRus(e, i);
				labelErr->Text = "Ошибки: " + err.ToString();
			}
			else if ((SetingsForm::flagEng == 1) && (LevelsForm::LvlStr != (unsigned char*)""))
			{
				i = KeyClickHandlerEng(e, i);
				labelErr->Text = "Ошибки: " + err.ToString();
			}

			if ((i>=LevelsForm::LvlStrLen) && (LevelsForm::LvlChoice != 11))
			{
				EditResFile(timerCounterMin, timerCounterSec, (int)(static_cast<double>(i) / (static_cast<double>(timerCounterMin)
					+ static_cast<double>(timerCounterSec) / 60)), err);
			}
		}

		private: System::Void MainForm_Shown(System::Object^ sender, System::EventArgs^ e) {
			if (SetingsForm::flagRus == 1)
			{
				KeyboardLanguageRus();
			}
			else if (SetingsForm::flagEng == 1)
			{
				KeyboardLanguageEng();
			}
			textBox->Enabled = false;
		}

		private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
			++timerCounterSec;
			if (timerCounterSec < 60)
			{
				labeltime->Text = "Время: " + (timerCounterMin).ToString() + " мин. " + (timerCounterSec).ToString() + " с.";
			}
			else if (timerCounterSec == 60)
			{
				++timerCounterMin;
				timerCounterSec = 0;
				labeltime->Text = "Время: " + (timerCounterMin).ToString() + " мин. " + (timerCounterSec).ToString() + " с.";
			}

			labelSpeed->Text = "Скорость: " + ((int)( static_cast<double>(i) / (static_cast<double>(timerCounterMin)
				+ static_cast<double>(timerCounterSec) / 60 ) )).ToString() + " зн./мин.";
			
		}

		private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
			InfoForm^ IF = gcnew InfoForm();
			IF->ShowDialog();
		}
};
}
