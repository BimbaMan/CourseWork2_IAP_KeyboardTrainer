#pragma once
#include <string>
#include "SetingsForm.h"
#include <fstream>
#include <limits>
#include <vector>

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для LevelsForm
	/// </summary>
	public ref class LevelsForm : public System::Windows::Forms::Form
	{
	public:
		LevelsForm(void)
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
		~LevelsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	public: static unsigned short int LvlChoice = 0;
	public: static unsigned char* LvlStr;
	public: static unsigned int LvlStrLen;
	private: std::string LvlLine(int flagEng, int flagRus, short LvlNum);
	private: void ReadResFile();
	private: System::Windows::Forms::Button^ buttonLvl1;
	private: System::Windows::Forms::Button^ buttonLvl2;
	private: System::Windows::Forms::Button^ buttonLvl3;
	private: System::Windows::Forms::Button^ buttonLvl4;
	private: System::Windows::Forms::Button^ buttonLvl5;
	private: System::Windows::Forms::Button^ buttonLvl6;
	private: System::Windows::Forms::Button^ buttonLvl9;
	private: System::Windows::Forms::Button^ buttonLvl10;
	protected:

	protected:







	private: System::Windows::Forms::Button^ buttonLvl7;
	private: System::Windows::Forms::Button^ buttonLvl8;
	private: System::Windows::Forms::Button^ buttonRand;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LevelsForm::typeid));
			this->buttonLvl1 = (gcnew System::Windows::Forms::Button());
			this->buttonLvl2 = (gcnew System::Windows::Forms::Button());
			this->buttonLvl3 = (gcnew System::Windows::Forms::Button());
			this->buttonLvl4 = (gcnew System::Windows::Forms::Button());
			this->buttonLvl5 = (gcnew System::Windows::Forms::Button());
			this->buttonLvl6 = (gcnew System::Windows::Forms::Button());
			this->buttonLvl9 = (gcnew System::Windows::Forms::Button());
			this->buttonLvl10 = (gcnew System::Windows::Forms::Button());
			this->buttonLvl7 = (gcnew System::Windows::Forms::Button());
			this->buttonLvl8 = (gcnew System::Windows::Forms::Button());
			this->buttonRand = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonLvl1
			// 
			this->buttonLvl1->Location = System::Drawing::Point(13, 13);
			this->buttonLvl1->Name = L"buttonLvl1";
			this->buttonLvl1->Size = System::Drawing::Size(158, 34);
			this->buttonLvl1->TabIndex = 0;
			this->buttonLvl1->Text = L"Уровень 1";
			this->buttonLvl1->UseVisualStyleBackColor = true;
			this->buttonLvl1->Click += gcnew System::EventHandler(this, &LevelsForm::buttonLvl1_Click);
			// 
			// buttonLvl2
			// 
			this->buttonLvl2->Location = System::Drawing::Point(226, 13);
			this->buttonLvl2->Name = L"buttonLvl2";
			this->buttonLvl2->Size = System::Drawing::Size(158, 34);
			this->buttonLvl2->TabIndex = 1;
			this->buttonLvl2->Text = L"Уровень 2";
			this->buttonLvl2->UseVisualStyleBackColor = true;
			this->buttonLvl2->Click += gcnew System::EventHandler(this, &LevelsForm::buttonLvl2_Click);
			// 
			// buttonLvl3
			// 
			this->buttonLvl3->Location = System::Drawing::Point(13, 99);
			this->buttonLvl3->Name = L"buttonLvl3";
			this->buttonLvl3->Size = System::Drawing::Size(158, 34);
			this->buttonLvl3->TabIndex = 3;
			this->buttonLvl3->Text = L"Уровень 3";
			this->buttonLvl3->UseVisualStyleBackColor = true;
			this->buttonLvl3->Click += gcnew System::EventHandler(this, &LevelsForm::buttonLvl3_Click);
			// 
			// buttonLvl4
			// 
			this->buttonLvl4->Location = System::Drawing::Point(226, 99);
			this->buttonLvl4->Name = L"buttonLvl4";
			this->buttonLvl4->Size = System::Drawing::Size(158, 34);
			this->buttonLvl4->TabIndex = 2;
			this->buttonLvl4->Text = L"Уровень 4";
			this->buttonLvl4->UseVisualStyleBackColor = true;
			this->buttonLvl4->Click += gcnew System::EventHandler(this, &LevelsForm::buttonLvl4_Click);
			// 
			// buttonLvl5
			// 
			this->buttonLvl5->Location = System::Drawing::Point(13, 193);
			this->buttonLvl5->Name = L"buttonLvl5";
			this->buttonLvl5->Size = System::Drawing::Size(158, 34);
			this->buttonLvl5->TabIndex = 5;
			this->buttonLvl5->Text = L"Уровень 5";
			this->buttonLvl5->UseVisualStyleBackColor = true;
			this->buttonLvl5->Click += gcnew System::EventHandler(this, &LevelsForm::buttonLvl5_Click);
			// 
			// buttonLvl6
			// 
			this->buttonLvl6->Location = System::Drawing::Point(226, 193);
			this->buttonLvl6->Name = L"buttonLvl6";
			this->buttonLvl6->Size = System::Drawing::Size(158, 34);
			this->buttonLvl6->TabIndex = 4;
			this->buttonLvl6->Text = L"Уровень 6";
			this->buttonLvl6->UseVisualStyleBackColor = true;
			this->buttonLvl6->Click += gcnew System::EventHandler(this, &LevelsForm::buttonLvl6_Click);
			// 
			// buttonLvl9
			// 
			this->buttonLvl9->Location = System::Drawing::Point(13, 376);
			this->buttonLvl9->Name = L"buttonLvl9";
			this->buttonLvl9->Size = System::Drawing::Size(158, 34);
			this->buttonLvl9->TabIndex = 9;
			this->buttonLvl9->Text = L"Уровень 9";
			this->buttonLvl9->UseVisualStyleBackColor = true;
			this->buttonLvl9->Click += gcnew System::EventHandler(this, &LevelsForm::buttonLvl9_Click);
			// 
			// buttonLvl10
			// 
			this->buttonLvl10->Location = System::Drawing::Point(226, 376);
			this->buttonLvl10->Name = L"buttonLvl10";
			this->buttonLvl10->Size = System::Drawing::Size(158, 34);
			this->buttonLvl10->TabIndex = 8;
			this->buttonLvl10->Text = L"Уровень 10";
			this->buttonLvl10->UseVisualStyleBackColor = true;
			this->buttonLvl10->Click += gcnew System::EventHandler(this, &LevelsForm::buttonLvl10_Click);
			// 
			// buttonLvl7
			// 
			this->buttonLvl7->Location = System::Drawing::Point(13, 282);
			this->buttonLvl7->Name = L"buttonLvl7";
			this->buttonLvl7->Size = System::Drawing::Size(158, 34);
			this->buttonLvl7->TabIndex = 7;
			this->buttonLvl7->Text = L"Уровень 7";
			this->buttonLvl7->UseVisualStyleBackColor = true;
			this->buttonLvl7->Click += gcnew System::EventHandler(this, &LevelsForm::buttonLvl7_Click);
			// 
			// buttonLvl8
			// 
			this->buttonLvl8->Location = System::Drawing::Point(226, 282);
			this->buttonLvl8->Name = L"buttonLvl8";
			this->buttonLvl8->Size = System::Drawing::Size(158, 34);
			this->buttonLvl8->TabIndex = 6;
			this->buttonLvl8->Text = L"Уровень 8";
			this->buttonLvl8->UseVisualStyleBackColor = true;
			this->buttonLvl8->Click += gcnew System::EventHandler(this, &LevelsForm::buttonLvl8_Click);
			// 
			// buttonRand
			// 
			this->buttonRand->Location = System::Drawing::Point(114, 500);
			this->buttonRand->Name = L"buttonRand";
			this->buttonRand->Size = System::Drawing::Size(158, 34);
			this->buttonRand->TabIndex = 10;
			this->buttonRand->Text = L"Рандом";
			this->buttonRand->UseVisualStyleBackColor = true;
			this->buttonRand->Click += gcnew System::EventHandler(this, &LevelsForm::buttonRand_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(223, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(223, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(223, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 319);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(223, 319);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 413);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(223, 413);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 20;
			// 
			// LevelsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 546);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonRand);
			this->Controls->Add(this->buttonLvl9);
			this->Controls->Add(this->buttonLvl10);
			this->Controls->Add(this->buttonLvl7);
			this->Controls->Add(this->buttonLvl8);
			this->Controls->Add(this->buttonLvl5);
			this->Controls->Add(this->buttonLvl6);
			this->Controls->Add(this->buttonLvl3);
			this->Controls->Add(this->buttonLvl4);
			this->Controls->Add(this->buttonLvl2);
			this->Controls->Add(this->buttonLvl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"LevelsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Уровни";
			this->Shown += gcnew System::EventHandler(this, &LevelsForm::LevelsForm_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonLvl1_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 1;

			std::string line = LvlLine(SetingsForm::flagEng, SetingsForm::flagRus, LvlChoice);
			
			unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * (line.length())); //выделение памяти для массива беззнаковых чаров (+1 для элемента окончания строки)
			LvlStrLen = sizeof(unsigned char) * (line.length());
			
			strcpy((char*)LvlStr1, line.c_str());

			LvlStr = LvlStr1;

		this->Close();
	}

	private: System::Void buttonLvl2_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 2;

		std::string line = LvlLine(SetingsForm::flagEng, SetingsForm::flagRus, LvlChoice);

		unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * (line.length())); //выделение памяти для массива беззнаковых чаров (+1 для элемента окончания строки)
		LvlStrLen = sizeof(unsigned char) * (line.length());

		strcpy((char*)LvlStr1, line.c_str());

		LvlStr = LvlStr1;

		this->Close();
	}

	private: System::Void buttonLvl3_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 3;

		std::string line = LvlLine(SetingsForm::flagEng, SetingsForm::flagRus, LvlChoice);

		unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * (line.length())); //выделение памяти для массива беззнаковых чаров (+1 для элемента окончания строки)
		LvlStrLen = sizeof(unsigned char) * (line.length());

		strcpy((char*)LvlStr1, line.c_str());

		LvlStr = LvlStr1;

		this->Close();
	}

	private: System::Void buttonLvl4_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 4;

		std::string line = LvlLine(SetingsForm::flagEng, SetingsForm::flagRus, LvlChoice);

		unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * (line.length())); //выделение памяти для массива беззнаковых чаров (+1 для элемента окончания строки)
		LvlStrLen = sizeof(unsigned char) * (line.length());

		strcpy((char*)LvlStr1, line.c_str());

		LvlStr = LvlStr1;

		this->Close();
	}

	private: System::Void buttonLvl5_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 5;

		std::string line = LvlLine(SetingsForm::flagEng, SetingsForm::flagRus, LvlChoice);

		unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * (line.length())); //выделение памяти для массива беззнаковых чаров (+1 для элемента окончания строки)
		LvlStrLen = sizeof(unsigned char) * (line.length());

		strcpy((char*)LvlStr1, line.c_str());

		LvlStr = LvlStr1;

		this->Close();
	}

	private: System::Void buttonLvl6_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 6;

		std::string line = LvlLine(SetingsForm::flagEng, SetingsForm::flagRus, LvlChoice);

		unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * (line.length())); //выделение памяти для массива беззнаковых чаров (+1 для элемента окончания строки)
		LvlStrLen = sizeof(unsigned char) * (line.length());

		strcpy((char*)LvlStr1, line.c_str());

		LvlStr = LvlStr1;

		this->Close();
	}

	private: System::Void buttonLvl7_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 7;

		std::string line = LvlLine(SetingsForm::flagEng, SetingsForm::flagRus, LvlChoice);

		unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * (line.length())); //выделение памяти для массива беззнаковых чаров (+1 для элемента окончания строки)
		LvlStrLen = sizeof(unsigned char) * (line.length());

		strcpy((char*)LvlStr1, line.c_str());

		LvlStr = LvlStr1;

		this->Close();
	}

	private: System::Void buttonLvl8_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 8;

		std::string line = LvlLine(SetingsForm::flagEng, SetingsForm::flagRus, LvlChoice);

		unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * (line.length())); //выделение памяти для массива беззнаковых чаров (+1 для элемента окончания строки)
		LvlStrLen = sizeof(unsigned char) * (line.length());

		strcpy((char*)LvlStr1, line.c_str());

		LvlStr = LvlStr1;

		this->Close();
	}

	private: System::Void buttonLvl9_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 9;

		std::string line = LvlLine(SetingsForm::flagEng, SetingsForm::flagRus, LvlChoice);

		unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * (line.length())); //выделение памяти для массива беззнаковых чаров (+1 для элемента окончания строки)
		LvlStrLen = sizeof(unsigned char) * (line.length());

		strcpy((char*)LvlStr1, line.c_str());

		LvlStr = LvlStr1;

		this->Close();
	}

	private: System::Void buttonLvl10_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 10;

		std::string line = LvlLine(SetingsForm::flagEng, SetingsForm::flagRus, LvlChoice);

		unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * (line.length())); //выделение памяти для массива беззнаковых чаров (+1 для элемента окончания строки)
		LvlStrLen = sizeof(unsigned char) * (line.length());

		strcpy((char*)LvlStr1, line.c_str());

		LvlStr = LvlStr1;

		this->Close();
	}

	private: System::Void buttonRand_Click(System::Object^ sender, System::EventArgs^ e) {
		LvlChoice = 11;

		if (SetingsForm::flagEng == 1)
		{
			const int len = 50;
			srand(time(0));
			static const unsigned char alphanum[] =
				"0123456789 !@#$%^*()_+=-\[]{}|';/.,\":<>?~`"
				"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				"abcdefghijklmnopqrstuvwxyz";

			unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * len);

			for (int i = 0; i < len; ++i) {
				LvlStr1[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
			}

			LvlStr1[len] = 0;
			LvlStrLen = len;
			LvlStr = LvlStr1;
		}
		else if (SetingsForm::flagRus == 1)
		{
			const int len = 45;
			srand(time(0));
			static const unsigned char alphanum[] =
				"0123456789 !\"№;%:?*()_+/,.\=-"
				"абвгдеёжзийклмнопрстуфхцчшщъыьэюя"
				"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";

			unsigned char* LvlStr1 = (unsigned char*)malloc(sizeof(unsigned char) * len);

			for (int i = 0; i < len; ++i) {
				LvlStr1[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
			}

			LvlStr1[len] = 0;
			LvlStrLen = len;
			LvlStr = LvlStr1;
		}

		this->Close();
	}
	
	private: System::Void LevelsForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		ReadResFile();
	}

	};
}
