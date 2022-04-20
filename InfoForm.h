#pragma once
#include "SetingsForm.h"
#include <fstream>
#include <limits>

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для InfoForm
	/// </summary>
	public ref class InfoForm : public System::Windows::Forms::Form
	{
	public:
		InfoForm(void)
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
		~InfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelLvlinfo;
	protected:
	private: void GetLvlinfo();
	private: System::Windows::Forms::Button^ buttonClose;
	private: System::Windows::Forms::Button^ buttonDelResRus;
	private: System::Windows::Forms::Button^ buttonDelResEng;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoForm::typeid));
			this->labelLvlinfo = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->buttonDelResRus = (gcnew System::Windows::Forms::Button());
			this->buttonDelResEng = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelLvlinfo
			// 
			this->labelLvlinfo->AutoSize = true;
			this->labelLvlinfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLvlinfo->Location = System::Drawing::Point(13, 13);
			this->labelLvlinfo->Name = L"labelLvlinfo";
			this->labelLvlinfo->Size = System::Drawing::Size(166, 20);
			this->labelLvlinfo->TabIndex = 0;
			this->labelLvlinfo->Text = L"Лучшие результаты:";
			// 
			// buttonClose
			// 
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClose->Location = System::Drawing::Point(420, 252);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(145, 34);
			this->buttonClose->TabIndex = 1;
			this->buttonClose->Text = L"Закрыть";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &InfoForm::buttonClose_Click);
			// 
			// buttonDelResRus
			// 
			this->buttonDelResRus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelResRus->Location = System::Drawing::Point(12, 212);
			this->buttonDelResRus->Name = L"buttonDelResRus";
			this->buttonDelResRus->Size = System::Drawing::Size(282, 34);
			this->buttonDelResRus->TabIndex = 2;
			this->buttonDelResRus->Text = L"Удалить результаты для русского языка";
			this->buttonDelResRus->UseVisualStyleBackColor = true;
			this->buttonDelResRus->Click += gcnew System::EventHandler(this, &InfoForm::buttonDelResRus_Click);
			// 
			// buttonDelResEng
			// 
			this->buttonDelResEng->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelResEng->Location = System::Drawing::Point(12, 252);
			this->buttonDelResEng->Name = L"buttonDelResEng";
			this->buttonDelResEng->Size = System::Drawing::Size(282, 34);
			this->buttonDelResEng->TabIndex = 3;
			this->buttonDelResEng->Text = L"Удалить результаты для английского языка";
			this->buttonDelResEng->UseVisualStyleBackColor = true;
			this->buttonDelResEng->Click += gcnew System::EventHandler(this, &InfoForm::buttonDelResEng_Click);
			// 
			// InfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 298);
			this->Controls->Add(this->buttonDelResEng);
			this->Controls->Add(this->buttonDelResRus);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->labelLvlinfo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"InfoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Информация";
			this->Shown += gcnew System::EventHandler(this, &InfoForm::InfoForm_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void InfoForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		GetLvlinfo();	
	}

	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void buttonDelResRus_Click(System::Object^ sender, System::EventArgs^ e) {
		FILE* fileRus = fopen("Files\\LevelsResRus.txt", "w+t");
		fprintf(fileRus, "%s", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0");
		fclose(fileRus);

		GetLvlinfo();

		this->Close();
	}

	private: System::Void buttonDelResEng_Click(System::Object^ sender, System::EventArgs^ e) {
		FILE* fileEng = fopen("Files\\LevelsResEng.txt", "w+t");
		fprintf(fileEng, "%s", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0");
		fclose(fileEng);

		GetLvlinfo();

		this->Close();
	}

	};
}
