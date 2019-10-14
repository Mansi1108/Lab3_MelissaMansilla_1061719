#pragma once
#include "Carta.h"
#include "Pila.h"

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




	protected:

	protected:



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  group7Rtxt;

	private: System::Windows::Forms::RichTextBox^  group6Rtxt;
	private: System::Windows::Forms::RichTextBox^  group5Rtxt;




	private: System::Windows::Forms::RichTextBox^  group4Rtxt;
	private: System::Windows::Forms::RichTextBox^  group3Rtxt;

	private: System::Windows::Forms::RichTextBox^  group2Rtxt;


	private: System::Windows::Forms::RichTextBox^  group1Rtxt;

	private: System::Windows::Forms::Button^  moverbtn;
	private: System::Windows::Forms::Label^  mazolbl;

	private: System::Windows::Forms::TextBox^  mazotxt;
	private: System::Windows::Forms::Button^  sigbtn;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::ComboBox^  CBOr;
	private: System::Windows::Forms::ComboBox^  CBDes;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  CBcant;

	private: System::Windows::Forms::Label^  label11;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->group7Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group6Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group5Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group4Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group3Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group2Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->group1Rtxt = (gcnew System::Windows::Forms::RichTextBox());
			this->moverbtn = (gcnew System::Windows::Forms::Button());
			this->mazolbl = (gcnew System::Windows::Forms::Label());
			this->mazotxt = (gcnew System::Windows::Forms::TextBox());
			this->sigbtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->CBOr = (gcnew System::Windows::Forms::ComboBox());
			this->CBDes = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->CBcant = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(253, 420);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Grupo Origen:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(521, 420);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Grupo Destino:";
			// 
			// group7Rtxt
			// 
			this->group7Rtxt->Location = System::Drawing::Point(30, 68);
			this->group7Rtxt->Name = L"group7Rtxt";
			this->group7Rtxt->ReadOnly = true;
			this->group7Rtxt->Size = System::Drawing::Size(125, 301);
			this->group7Rtxt->TabIndex = 6;
			this->group7Rtxt->Text = L"";
			// 
			// group6Rtxt
			// 
			this->group6Rtxt->Location = System::Drawing::Point(161, 68);
			this->group6Rtxt->Name = L"group6Rtxt";
			this->group6Rtxt->ReadOnly = true;
			this->group6Rtxt->Size = System::Drawing::Size(125, 301);
			this->group6Rtxt->TabIndex = 7;
			this->group6Rtxt->Text = L"";
			// 
			// group5Rtxt
			// 
			this->group5Rtxt->Location = System::Drawing::Point(292, 68);
			this->group5Rtxt->Name = L"group5Rtxt";
			this->group5Rtxt->ReadOnly = true;
			this->group5Rtxt->Size = System::Drawing::Size(125, 301);
			this->group5Rtxt->TabIndex = 8;
			this->group5Rtxt->Text = L"";
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
			// group3Rtxt
			// 
			this->group3Rtxt->CausesValidation = false;
			this->group3Rtxt->Location = System::Drawing::Point(554, 68);
			this->group3Rtxt->Name = L"group3Rtxt";
			this->group3Rtxt->ReadOnly = true;
			this->group3Rtxt->Size = System::Drawing::Size(125, 301);
			this->group3Rtxt->TabIndex = 10;
			this->group3Rtxt->Text = L"";
			// 
			// group2Rtxt
			// 
			this->group2Rtxt->ForeColor = System::Drawing::Color::Black;
			this->group2Rtxt->Location = System::Drawing::Point(685, 68);
			this->group2Rtxt->Name = L"group2Rtxt";
			this->group2Rtxt->ReadOnly = true;
			this->group2Rtxt->Size = System::Drawing::Size(125, 301);
			this->group2Rtxt->TabIndex = 11;
			this->group2Rtxt->Text = L"";
			// 
			// group1Rtxt
			// 
			this->group1Rtxt->Location = System::Drawing::Point(816, 68);
			this->group1Rtxt->Name = L"group1Rtxt";
			this->group1Rtxt->ReadOnly = true;
			this->group1Rtxt->Size = System::Drawing::Size(125, 301);
			this->group1Rtxt->TabIndex = 12;
			this->group1Rtxt->Text = L"";
			// 
			// moverbtn
			// 
			this->moverbtn->Location = System::Drawing::Point(808, 420);
			this->moverbtn->Name = L"moverbtn";
			this->moverbtn->Size = System::Drawing::Size(119, 42);
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
			// sigbtn
			// 
			this->sigbtn->Location = System::Drawing::Point(257, 19);
			this->sigbtn->Name = L"sigbtn";
			this->sigbtn->Size = System::Drawing::Size(109, 36);
			this->sigbtn->TabIndex = 16;
			this->sigbtn->Text = L"Siguiente";
			this->sigbtn->UseVisualStyleBackColor = true;
			this->sigbtn->Click += gcnew System::EventHandler(this, &MyForm::sigbtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 372);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Grupo7";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(188, 372);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Grupo 6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(318, 372);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 20);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Grupo 5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(453, 372);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Grupo 4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(582, 372);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 20);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Grupo 3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(710, 372);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 20);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Grupo 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(853, 372);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Grupo 1";
			// 
			// CBOr
			// 
			this->CBOr->FormattingEnabled = true;
			this->CBOr->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
			this->CBOr->Location = System::Drawing::Point(368, 417);
			this->CBOr->Name = L"CBOr";
			this->CBOr->Size = System::Drawing::Size(121, 28);
			this->CBOr->TabIndex = 25;
			// 
			// CBDes
			// 
			this->CBDes->FormattingEnabled = true;
			this->CBDes->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
			this->CBDes->Location = System::Drawing::Point(650, 417);
			this->CBDes->Name = L"CBDes";
			this->CBDes->Size = System::Drawing::Size(121, 28);
			this->CBDes->TabIndex = 26;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(211, 459);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(185, 20);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Seleccionar y no escribir*";
			// 
			// CBcant
			// 
			this->CBcant->FormattingEnabled = true;
			this->CBcant->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
			this->CBcant->Location = System::Drawing::Point(125, 422);
			this->CBcant->Name = L"CBcant";
			this->CBcant->Size = System::Drawing::Size(121, 28);
			this->CBcant->TabIndex = 29;
			this->CBcant->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(10, 425);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(98, 20);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Cant. Cartas\r\n";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 487);
			this->Controls->Add(this->CBcant);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->CBDes);
			this->Controls->Add(this->CBOr);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->sigbtn);
			this->Controls->Add(this->mazolbl);
			this->Controls->Add(this->mazotxt);
			this->Controls->Add(this->moverbtn);
			this->Controls->Add(this->group1Rtxt);
			this->Controls->Add(this->group2Rtxt);
			this->Controls->Add(this->group3Rtxt);
			this->Controls->Add(this->group4Rtxt);
			this->Controls->Add(this->group5Rtxt);
			this->Controls->Add(this->group6Rtxt);
			this->Controls->Add(this->group7Rtxt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Solitario Simple";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*Ayuda de mischa tobias, para la realizacion del proyecto.*/
		Pila* pila = new Pila();
		Pila* pilaAux = new Pila();
		Pila* pila1 = new Pila();
		Pila* pila2 = new Pila();
		Pila* pila3 = new Pila();
		Pila* pila4 = new Pila();
		Pila* pila5 = new Pila();
		Pila* pila6 = new Pila();
		Pila* pila7 = new Pila();
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void moverbtn_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int x = Convert::ToInt16(CBcant->SelectedItem);
	int pilaOrigen = Convert::ToInt16(CBOr->SelectedItem);
	int pilaDestino = Convert::ToInt16(CBDes->SelectedItem);

	switch (pilaOrigen)
	{
	case 1:
		switch (pilaDestino)
		{
		case 2:
			MovimientoC(pila2, pila1, x);
			break;
		case 3:
			MovimientoC(pila3, pila1, x);
			break;
		case 4:
			MovimientoC(pila4, pila1, x);
			break;
		case 5:
			MovimientoC(pila5, pila1, x);
			break;
		case 6:
			MovimientoC(pila6, pila1, x);
			break;
		case 7:
			MovimientoC(pila7, pila1, x);
			break;
		}
		break;

	case 2:
		switch (pilaDestino)
		{
		case 1:
			MovimientoC(pila1, pila2, x);
			break;
		case 3:
			MovimientoC(pila3, pila2, x);
			break;
		case 4:
			MovimientoC(pila4, pila2, x);
			break;
		case 5:
			MovimientoC(pila5, pila2, x);
			break;
		case 6:
			MovimientoC(pila6, pila2, x);
			break;
		case 7:
			MovimientoC(pila7, pila2, x);
			break;
		}
		break;

	case 3:
		switch (pilaDestino)
		{
		case 1:
			MovimientoC(pila1, pila3, x);
			break;
		case 2:
			MovimientoC(pila2, pila3, x);
			break;
		case 4:
			MovimientoC(pila4, pila3, x);
			break;
		case 5:
			MovimientoC(pila5, pila3, x);
			break;
		case 6:
			MovimientoC(pila6, pila3, x);
			break;
		case 7:
			MovimientoC(pila7, pila3, x);
			break;
		}
		break;

	case 4:
		switch (pilaDestino)
		{
		case 1:
			MovimientoC(pila1, pila4, x);
			break;
		case 2:
			MovimientoC(pila2, pila4, x);
			break;
		case 3:
			MovimientoC(pila3, pila4, x);
			break;
		case 5:
			MovimientoC(pila5, pila4, x);
			break;
		case 6:
			MovimientoC(pila6, pila4, x);
			break;
		case 7:
			MovimientoC(pila7, pila4, x);
			break;
		}
		break;

	case 5:
		switch (pilaDestino)
		{
		case 1:
			MovimientoC(pila1, pila5, x);
			break;
		case 2:
			MovimientoC(pila2, pila5, x);
			break;
		case 3:
			MovimientoC(pila3, pila5, x);
			break;
		case 4:
			MovimientoC(pila4, pila5, x);
			break;
		case 6:
			MovimientoC(pila6, pila5, x);
			break;
		case 7:
			MovimientoC(pila7, pila5, x);
			break;
		}
		break;

	case 6:
		switch (pilaDestino)
		{
		case 1:
			MovimientoC(pila1, pila6, x);
			break;
		case 2:
			MovimientoC(pila2, pila6, x);
			break;
		case 3:
			MovimientoC(pila3, pila6, x);
			break;
		case 4:
			MovimientoC(pila4, pila6, x);
			break;
		case 5:
			MovimientoC(pila5, pila6, x);
			break;
		case 7:
			MovimientoC(pila7, pila6, x);
			break;
		}
		break;

	case 7:
		switch (pilaDestino)
		{
		case 1:
			MovimientoC(pila1, pila7, x);
			break;
		case 2:
			MovimientoC(pila2, pila7, x);
			break;
		case 3:
			MovimientoC(pila3, pila7, x);
			break;
		case 4:
			MovimientoC(pila4, pila7, x);
			break;
		case 5:
			MovimientoC(pila5, pila7, x);
			break;
		case 6:
			MovimientoC(pila6, pila7, x);
			break;
		}
		break;
	}

	Cambio();
	Ganar();
}
private: System::Void crearbtn_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MovimientoCartas(Pila* grupoDestino, Pila* grupoOrigen, int numCartas)
{
}
private: System::Void poslbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void sigbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	if (pila->NElementos > 0)
	{
		pila7->Apilar(pila->Desapilar());
		if (pila->NElementos > 0)
		{
			pila6->Apilar(pila->Desapilar());
			if (pila->NElementos > 0)
			{
				pila5->Apilar(pila->Desapilar());
				if (pila->NElementos > 0)
				{
					pila4->Apilar(pila->Desapilar());
					if (pila->NElementos > 0)
					{
						pila3->Apilar(pila->Desapilar());
						if (pila->NElementos > 0)
						{
							pila2->Apilar(pila->Desapilar());
							if (pila->NElementos > 0)
							{
								pila1->Apilar(pila->Desapilar());
							}
							else
							{
								MessageBox::Show("No hay más cartas en el mazo");
							}
						}
						else
						{
							MessageBox::Show("No hay más cartas en el mazo");
						}
					}
					else
					{
						MessageBox::Show("No hay más cartas en el mazo");
					}
				}
				else
				{
					MessageBox::Show("No hay más cartas en el mazo");
				}
			}
			else
			{
				MessageBox::Show("No hay más cartas en el mazo");
			}
		}
		else
		{
			MessageBox::Show("No hay más cartas en el mazo");
		}
	}
	else
	{
		MessageBox::Show("No hay más cartas en el mazo");
	}

	Cambio();
}
public: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	//Cracion de variables y random
	Random^ random = gcnew Random();
	Carta * carta1 = new Carta;
	int randomGene;
	int valor = 1;
	int pos = 0;
	char color = 'R';
	Carta * VC[52];
	int cartasAlmacenadas[52];
	
	/*assignacion de color. El proposito del for es que cree una nueva carta, recibiendo el color y valor,
	en el cual cuando el vector vaya por la posicion 0, este le asigne su valor de 1, y hasta que llegue a la carta
	25 este se tornara como carta negra en la segunda mitad del vector.*/
	for (int i = 0; i < 52; i++)
	{
		carta1->Color = color;
		carta1->numero = (i+1);
		if (i > 25) 
		{
			color = 'N';
		}
		VC[i] = carta1;
	}

	/*Es el que apila el vector a la pila central, verificando cuales estan en uso y cuales no.*/
	while (pila->NElementos < 52)
	{
		randomGene = random->Next(0, 52);
		randomGene = randomGene % 52;
		if (Usadas(randomGene, cartasAlmacenadas))
		{
			pila->Apilar(*VC[randomGene]);
			cartasAlmacenadas[pos] = randomGene;
			pos++;
		}
	}
	/*es el que se encarga de rellenar cada pila con diferentes cantidades, y el resto guardarlas en la pila central,
	en otras palabras el maso.*/
	while (pila1->NElementos < 1 || pila2->NElementos < 2 || pila3->NElementos < 3 || pila4->NElementos < 4 || pila5->NElementos < 5 || pila6->NElementos < 6 || pila7->NElementos < 7)
	{
		if (pila7->NElementos < 7)
		{
			pila7->Apilar(pila->Desapilar());
		}
		else if (pila6->NElementos < 6)
		{
			pila6->Apilar(pila->Desapilar());
		}
		else if (pila5->NElementos < 5)
		{
			pila5->Apilar(pila->Desapilar());
		}
		else if (pila4->NElementos < 4)
		{
			pila4->Apilar(pila->Desapilar());
		}
		else if (pila3->NElementos < 3)
		{
			pila3->Apilar(pila->Desapilar());
		}
		else if (pila2->NElementos < 2)
		{
			pila2->Apilar(pila->Desapilar());
		}
		else
		{
			pila1->Apilar(pila->Desapilar());
		}
	}
	Cambio();
}
		/*Verificacion de cuales estan siendo usadas y cuales no.*/
	private: System::Boolean Usadas(int valor, int cartasAlma[]) {

			for (int i = 0; i < 52; i++)
			{
				if (cartasAlma[i] == valor) 
				{
					return false;
				}
			}
			return true;
		}
	
	/*Es el metodo de cambio en el cual muestra la cima de cada carta concatenando el valor y color de la carta.*/
	private: System::Void Cambio() {
		System::String^ t = "";
		for (int i = 0; i < pila7->NElementos; i++)
		{
			if (i < (pila7->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila7->ObtenerCima())->Color == 'N')
				{
					t += ((&pila7->ObtenerCima())->numero).ToString() + "N";
					group7Rtxt->Text = t;
				}
				else
				{
					t += ((&pila7->ObtenerCima())->numero).ToString() + "R";
					group7Rtxt->Text = t;
				}

			}
		}

		if (pila7->NElementos == 0)
		{
			group7Rtxt->Text = t;
		}

		t = "";

		for (int i = 0; i < pila6->NElementos; i++)
		{
			if (i < (pila6->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila6->ObtenerCima())->Color == 'N')
				{
					t += ((&pila6->ObtenerCima())->numero).ToString() + "N";
					group6Rtxt->Text = t;
				}
				else
				{
					t += ((&pila6->ObtenerCima())->numero).ToString() + "R";
					group6Rtxt->Text = t;
				}

			}
		}

		if (pila6->NElementos == 0)
		{
			group6Rtxt->Text = t;
		}

		t = "";

		for (int i = 0; i < pila5->NElementos; i++)
		{
			if (i < (pila5->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila5->ObtenerCima())->Color == 'N')
				{
					t += ((&pila5->ObtenerCima())->numero).ToString() + "N";
					group5Rtxt->Text = t;
				}
				else
				{
					t += ((&pila5->ObtenerCima())->numero).ToString() + "R";
					group5Rtxt->Text = t;
				}

			}
		}

		if (pila5->NElementos == 0)
		{
			group5Rtxt->Text = t;
		}

		t = "";

		for (int i = 0; i < pila4->NElementos; i++)
		{
			if (i < (pila4->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila4->ObtenerCima())->Color == 'N')
				{
					t += ((&pila4->ObtenerCima())->numero).ToString() + "N";
					group4Rtxt->Text = t;
				}
				else
				{
					t += ((&pila4->ObtenerCima())->numero).ToString() + "R";
					group4Rtxt->Text = t;
				}

			}
		}

		if (pila4->NElementos == 0)
		{
			group4Rtxt->Text = t;
		}

		t = "";

		for (int i = 0; i < pila3->NElementos; i++)
		{
			if (i < (pila3->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila3->ObtenerCima())->Color == 'N')
				{
					t += ((&pila3->ObtenerCima())->numero).ToString() + "N";
					group3Rtxt->Text = t;
				}
				else
				{
					t += ((&pila3->ObtenerCima())->numero).ToString() + "R";
					group3Rtxt->Text = t;
				}

			}
		}

		if (pila3->NElementos == 0)
		{
			group3Rtxt->Text = t;
		}

		t = "";

		for (int i = 0; i < pila2->NElementos; i++)
		{
			if (i < (pila2->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila2->ObtenerCima())->Color == 'N')
				{
					t += ((&pila2->ObtenerCima())->numero).ToString() + "N";
					group2Rtxt->Text = t;
				}
				else
				{
					t += ((&pila6->ObtenerCima())->numero).ToString() + "R";
					group2Rtxt->Text = t;
				}

			}
		}

		if (pila2->NElementos == 0)
		{
			group2Rtxt->Text = t;
		}

		t = "";

		for (int i = 0; i < pila1->NElementos; i++)
		{
			if (i < (pila1->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila1->ObtenerCima())->Color == 'N')
				{
					t += ((&pila1->ObtenerCima())->numero).ToString() + "N";
					group1Rtxt->Text = t;
				}
				else
				{
					t += ((&pila1->ObtenerCima())->numero).ToString() + "R";
					group1Rtxt->Text = t;
				}

			}
		}

		if (pila1->NElementos == 0)
		{
			group1Rtxt->Text = t;
		}

		t = "";

		if (pila->NElementos == 0)
		{
			mazotxt->Text = t;
		}
		else
		{
			if ((&pila->ObtenerCima())->Color == 'N')
			{
				t += ((&pila->ObtenerCima())->numero).ToString() + "N";
			}
			else
			{
				t += ((&pila->ObtenerCima())->numero).ToString() + "R";
			}

			mazotxt->Text = t;
		}
	}
	private: System::Void Ganar() {
		if (Orden(pila7))
		{
			MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		}
		else if (Orden(pila6))
		{
			MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		}
		else if (Orden(pila5))
		{
			MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		}
		else if (Orden(pila4))
		{
			MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		}
		else if (Orden(pila3))
		{
			MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		}
		else if (Orden(pila2))
		{
			MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		}
		else if (Orden(pila1))
		{
			MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		}
	}
	/*Este procedimiento verificara el orden de la pila, la cual si la carta menor se adjjutan a la mayor
	esta se completara si no, no se hara*/
	private: System::Boolean Orden(Pila* pila) {
		Carta* CComp = new Carta();
		Carta* CComp2 = new Carta();
		Nodo* nodCarta2 = new Nodo();
		nodCarta2 = (pila->head2)->Siguiente;
		CComp = &pila->ObtenerCima();
		CComp2 = &nodCarta2->valor;
		int COr = 0;

		if (pila->NElementos < 5)
		{
			return false;
		}

		for (int i = 0; i < 4; i++)
		{
			if (CComp->numero == CComp2->numero - 1 && MayMen(CComp, CComp2))
			{
				COr++;
				CComp = CComp2;
				nodCarta2 = nodCarta2->Siguiente;
				CComp2 = &nodCarta2->valor;
			}
			else
			{
				i = 4;
				COr = 0;
			}
		}

		if (COr == 5)
		{
			return true;
		}

		return false;
	}
	private: System::Boolean MayMen(Carta* CMenor, Carta* CMayor) {
		if (CMenor->numero < CMayor->numero)
		{
			if (CMenor->Color != CMayor->Color)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	/*Este procedimiento es el que hace posible el movimiento de las cartas entre los mazos con sus diferentes validaciones
	ademas verificando el estado de la pila, y si es posible o no el movimiento.*/
	private: System::Void MovimientoC(Pila* pilaDestino, Pila* pilaOrigen, int noCar)
	{
		int cont = 0;

		if (noCar <= pilaOrigen->NElementos)
		{
			if (MayMen(&pilaOrigen->ObtenerCima(), &pilaDestino->ObtenerCima()))
			{
				pilaAux->Apilar(pilaOrigen->Desapilar());
				for (int i = 0; i < noCar - 1; i++)
				{
					if (MayMen(&pilaAux->ObtenerCima(), &pilaOrigen->ObtenerCima()))
					{
						pilaAux->Apilar(pilaOrigen->Desapilar());
						cont++;
					}
					else
					{
						i = noCar;
						for (int i = 0; i < cont; i++)
						{
							pilaOrigen->Apilar(pilaAux->Desapilar());
						}
						MessageBox::Show("No es posible");
					}
				}

				for (int i = 0; i < noCar; i++)
				{
					pilaDestino->Apilar(pilaAux->Desapilar());
				}
			}
			else
			{
				MessageBox::Show("No es posible");
			}
		}
		else
		{
			MessageBox::Show("La pila esta vacia.");
		}
	}

private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};

}
