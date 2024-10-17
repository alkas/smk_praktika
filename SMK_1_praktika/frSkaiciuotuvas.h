#pragma once

namespace SMK_1_praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// <summary>
	// Summary for MyForm
	// </summary>
	public ref class frSkaiciuotuvas : public System::Windows::Forms::Form
	{
	private:
		double pirmasSkaicius;
		double antrasSkaicius;
		String^ operacija;

	public:
		frSkaiciuotuvas(void)
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
		~frSkaiciuotuvas()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		// <summary>
		// Required designer variable.
		// </summary>
		System::ComponentModel::Container ^components;
		System::Windows::Forms::TableLayoutPanel^ layoutButtons;
		System::Windows::Forms::Button^ btnC;
		System::Windows::Forms::Button^ btnResult;

#pragma region Windows Form Designer generated code
		// <summary>
		// Required method for Designer support - do not modify
		// the contents of this method with the code editor.
		// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			
			// Create left panel with fixed size
			System::Windows::Forms::Panel^ leftPanel = gcnew System::Windows::Forms::Panel();
			leftPanel->Size = System::Drawing::Size(150, 0); // Fixed width of 150px, height will adjust
			leftPanel->BackColor = System::Drawing::Color::LightGray; // Optional, just to visualize the panel
			leftPanel->Dock = System::Windows::Forms::DockStyle::Left; // Dock to the left of the form

			// Create a TableLayoutPanel
			System::Windows::Forms::TableLayoutPanel^ layoutButtons = gcnew System::Windows::Forms::TableLayoutPanel();
			layoutButtons->ColumnCount = 5;
			for (int i = 0; i < 5; i++) {
				this->layoutButtons->ColumnStyles->Add(gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20));
			}
			layoutButtons->RowCount = 4;
			for (int i = 0; i < 4; i++) {
				this->layoutButtons->RowStyles->Add(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25));
			}
			layoutButtons->Dock = System::Windows::Forms::DockStyle::Fill; // Fill the entire left panel
			layoutButtons->BackColor = System::Drawing::Color::White; // Optional


			// form properties 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(338, 317);
			this->Name = L"frSkaiciuotuvas";
			this->Text = L"Skaičiuotuvas";
			this->Load += gcnew System::EventHandler(this, &frSkaiciuotuvas::frSkaiciuotuvas_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frSkaiciuotuvas_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
