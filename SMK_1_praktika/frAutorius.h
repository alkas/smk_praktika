#pragma once

namespace SMK_1_praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frAutorius
	/// </summary>
	public ref class frAutorius : public System::Windows::Forms::Form
	{
	public:
		frAutorius(void)
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
		~frAutorius()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblAutorius;
	private: System::Windows::Forms::Button^ btnClose;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblAutorius = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblAutorius
			// 
			this->lblAutorius->AutoSize = true;
			this->lblAutorius->Location = System::Drawing::Point(34, 43);
			this->lblAutorius->Name = L"lblAutorius";
			this->lblAutorius->Size = System::Drawing::Size(115, 13);
			this->lblAutorius->TabIndex = 0;
			this->lblAutorius->Text = L"Autorius: Erikas Stanys";
			this->lblAutorius->Click += gcnew System::EventHandler(this, &frAutorius::lblAutorius_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(52, 102);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(75, 23);
			this->btnClose->TabIndex = 1;
			this->btnClose->Text = L"Uždaryti";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &frAutorius::btnClose_Click);
			// 
			// frAutorius
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(188, 144);
			this->ControlBox = false;
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->lblAutorius);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frAutorius";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Autorius";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lblAutorius_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}
