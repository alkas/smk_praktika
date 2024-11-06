#pragma once

#include "frAutorius.h"
#include "frSkaiciuotuvas.h"
#include "MyForm.h"

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ autoriusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->autoriusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(63, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"MyForm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->autoriusToolStripMenuItem,
					this->ExitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(212, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// autoriusToolStripMenuItem
			// 
			this->autoriusToolStripMenuItem->Name = L"autoriusToolStripMenuItem";
			this->autoriusToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->autoriusToolStripMenuItem->Text = L"Autorius";
			this->autoriusToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::autoriusToolStripMenuItem_Click);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->ExitToolStripMenuItem->Text = L"Išeiti";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::ExitToolStripMenuItem_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(212, 206);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnSkaiciuotuvas);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"mainForm";
			this->Text = L"Pradžia";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSkaiciuotuvas_Click(System::Object^ sender, System::EventArgs^ e) {
		frSkaiciuotuvas^ form2 = gcnew frSkaiciuotuvas();
		form2->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ form3 = gcnew MyForm();
		form3->Show();
	}
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void autoriusToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frAutorius^ forma = gcnew frAutorius();
		forma->Show();
	}
};
}
