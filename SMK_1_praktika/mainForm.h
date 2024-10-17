#pragma once

#include "frSkaiciuotuvas.h"

namespace SMK_1_praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSkaiciuotuvas;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		// <summary>
		// Required method for Designer support - do not modify
		// the contents of this method with the code editor.
		// </summary>
		void InitializeComponent(void)
		{
			this->btnSkaiciuotuvas = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSkaiciuotuvas
			// 
			this->btnSkaiciuotuvas->Location = System::Drawing::Point(60, 100);
			this->btnSkaiciuotuvas->Name = L"btnSkaiciuotuvas";
			this->btnSkaiciuotuvas->Size = System::Drawing::Size(85, 42);
			this->btnSkaiciuotuvas->TabIndex = 0;
			this->btnSkaiciuotuvas->Text = L"Skaičiuotuvas";
			this->btnSkaiciuotuvas->UseVisualStyleBackColor = true;
			this->btnSkaiciuotuvas->Click += gcnew System::EventHandler(this, &mainForm::btnSkaiciuotuvas_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(212, 206);
			this->Controls->Add(this->btnSkaiciuotuvas);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"mainForm";
			this->Text = L"Pradžia";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSkaiciuotuvas_Click(System::Object^ sender, System::EventArgs^ e) {
		frSkaiciuotuvas^ form2 = gcnew frSkaiciuotuvas();
		form2->Show();
	}
	};
}
