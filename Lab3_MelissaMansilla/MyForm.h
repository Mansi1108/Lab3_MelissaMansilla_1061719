#pragma once

namespace Lab3MelissaMansilla {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  poslbl;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  group1Rtxt;
	private: System::Windows::Forms::RichTextBox^  group2Rtxt;
	private: System::Windows::Forms::RichTextBox^  group3Rtxt;
	private: System::Windows::Forms::RichTextBox^  group4Rtxt;
	private: System::Windows::Forms::RichTextBox^  group5Rtxt;
	private: System::Windows::Forms::RichTextBox^  group6Rtxt;
	private: System::Windows::Forms::RichTextBox^  group7Rtxt;
	private: System::Windows::Forms::Button^  moverbtn;
	private: System::Windows::Forms::Label^  mazolbl;

	private: System::Windows::Forms::TextBox^  mazotxt;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->poslbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->group1Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group2Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group3Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group4Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group5Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group6Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group7Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->moverbtn = (gcnew System::Windows::Forms::Button());
			this->mazolbl = (gcnew System::Windows::Forms::Label());
			this->mazotxt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 390);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(361, 393);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 26);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(637, 393);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 26);
			this->textBox3->TabIndex = 2;
			// 
			// poslbl
			// 
			this->poslbl->AutoSize = true;
			this->poslbl->Location = System::Drawing::Point(10, 396);
			this->poslbl->Name = L"poslbl";
			this->poslbl->Size = System::Drawing::Size(72, 20);
			this->poslbl->TabIndex = 3;
			this->poslbl->Text = L"Posición:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(246, 393);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Grupo Origen:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(514, 393);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Grupo Destino:";
			// 
			// group1Rtxt
			// 
			this->group1Rtxt->Location = System::Drawing::Point(30, 68);
			this->group1Rtxt->Name = L"group1Rtxt";
			this->group1Rtxt->ReadOnly = true;
			this->group1Rtxt->Size = System::Drawing::Size(125, 301);
			this->group1Rtxt->TabIndex = 6;
			this->group1Rtxt->Text = L"";
			// 
			// group2Rtxt
			// 
			this->group2Rtxt->Location = System::Drawing::Point(161, 68);
			this->group2Rtxt->Name = L"group2Rtxt";
			this->group2Rtxt->ReadOnly = true;
			this->group2Rtxt->Size = System::Drawing::Size(125, 301);
			this->group2Rtxt->TabIndex = 7;
			this->group2Rtxt->Text = L"";
			// 
			// group3Rtxt
			// 
			this->group3Rtxt->Location = System::Drawing::Point(292, 68);
			this->group3Rtxt->Name = L"group3Rtxt";
			this->group3Rtxt->ReadOnly = true;
			this->group3Rtxt->Size = System::Drawing::Size(125, 301);
			this->group3Rtxt->TabIndex = 8;
			this->group3Rtxt->Text = L"";
			// 
			// group4Rtxt
			// 
			this->group4Rtxt->Location = System::Drawing::Point(423, 68);
			this->group4Rtxt->Name = L"group4Rtxt";
			this->group4Rtxt->ReadOnly = true;
			this->group4Rtxt->Size = System::Drawing::Size(125, 301);
			this->group4Rtxt->TabIndex = 9;
			this->group4Rtxt->Text = L"";
			// 
			// group5Rtxt
			// 
			this->group5Rtxt->CausesValidation = false;
			this->group5Rtxt->Location = System::Drawing::Point(554, 68);
			this->group5Rtxt->Name = L"group5Rtxt";
			this->group5Rtxt->ReadOnly = true;
			this->group5Rtxt->Size = System::Drawing::Size(125, 301);
			this->group5Rtxt->TabIndex = 10;
			this->group5Rtxt->Text = L"";
			// 
			// group6Rtxt
			// 
			this->group6Rtxt->Location = System::Drawing::Point(685, 68);
			this->group6Rtxt->Name = L"group6Rtxt";
			this->group6Rtxt->ReadOnly = true;
			this->group6Rtxt->Size = System::Drawing::Size(125, 301);
			this->group6Rtxt->TabIndex = 11;
			this->group6Rtxt->Text = L"";
			// 
			// group7Rtxt
			// 
			this->group7Rtxt->Location = System::Drawing::Point(816, 68);
			this->group7Rtxt->Name = L"group7Rtxt";
			this->group7Rtxt->ReadOnly = true;
			this->group7Rtxt->Size = System::Drawing::Size(125, 301);
			this->group7Rtxt->TabIndex = 12;
			this->group7Rtxt->Text = L"";
			// 
			// moverbtn
			// 
			this->moverbtn->Location = System::Drawing::Point(801, 389);
			this->moverbtn->Name = L"moverbtn";
			this->moverbtn->Size = System::Drawing::Size(119, 27);
			this->moverbtn->TabIndex = 3;
			this->moverbtn->Text = L"Mover";
			this->moverbtn->UseVisualStyleBackColor = true;
			this->moverbtn->Click += gcnew System::EventHandler(this, &MyForm::moverbtn_Click);
			// 
			// mazolbl
			// 
			this->mazolbl->AutoSize = true;
			this->mazolbl->Location = System::Drawing::Point(10, 24);
			this->mazolbl->Name = L"mazolbl";
			this->mazolbl->Size = System::Drawing::Size(95, 20);
			this->mazolbl->TabIndex = 15;
			this->mazolbl->Text = L"Carta Mazo:";
			this->mazolbl->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// mazotxt
			// 
			this->mazotxt->Location = System::Drawing::Point(111, 24);
			this->mazotxt->Name = L"mazotxt";
			this->mazotxt->ReadOnly = true;
			this->mazotxt->Size = System::Drawing::Size(140, 26);
			this->mazotxt->TabIndex = 14;
			this->mazotxt->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 455);
			this->Controls->Add(this->mazolbl);
			this->Controls->Add(this->mazotxt);
			this->Controls->Add(this->moverbtn);
			this->Controls->Add(this->group7Rtxt);
			this->Controls->Add(this->group6Rtxt);
			this->Controls->Add(this->group5Rtxt);
			this->Controls->Add(this->group4Rtxt);
			this->Controls->Add(this->group3Rtxt);
			this->Controls->Add(this->group2Rtxt);
			this->Controls->Add(this->group1Rtxt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->poslbl);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Solitario Simple";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void moverbtn_Click(System::Object^  sender, System::EventArgs^  e) 
{
	

}
};
}
