#pragma once
#include "Kalk.h"

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>





	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		 Kalk kalku;
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		
		


	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FontDialog^  fontDialog1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;


	protected:



	protected:

	protected:
	
	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// fontDialog1
			// 
			this->fontDialog1->Apply += gcnew System::EventHandler(this, &MyForm::fontDialog1_Apply);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(16, 180);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 62);
			this->button1->TabIndex = 1;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::Info;
			this->button2->Location = System::Drawing::Point(91, 180);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 62);
			this->button2->TabIndex = 2;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::Info;
			this->button3->Location = System::Drawing::Point(165, 180);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 62);
			this->button3->TabIndex = 3;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::SystemColors::Info;
			this->button4->Location = System::Drawing::Point(240, 180);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 62);
			this->button4->TabIndex = 4;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::SystemColors::Info;
			this->button5->Location = System::Drawing::Point(315, 180);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 62);
			this->button5->TabIndex = 5;
			this->button5->Text = L"%";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->ForeColor = System::Drawing::SystemColors::Info;
			this->button6->Location = System::Drawing::Point(17, 111);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 62);
			this->button6->TabIndex = 6;
			this->button6->Tag = L"";
			this->button6->Text = L"<=";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->ForeColor = System::Drawing::SystemColors::Info;
			this->button7->Location = System::Drawing::Point(91, 111);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 62);
			this->button7->TabIndex = 7;
			this->button7->Text = L"CE";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->ForeColor = System::Drawing::SystemColors::Info;
			this->button8->Location = System::Drawing::Point(165, 111);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 62);
			this->button8->TabIndex = 8;
			this->button8->Text = L"C";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->ForeColor = System::Drawing::SystemColors::Info;
			this->button9->Location = System::Drawing::Point(240, 111);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 62);
			this->button9->TabIndex = 9;
			this->button9->Text = L"-/+";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->ForeColor = System::Drawing::SystemColors::Info;
			this->button10->Location = System::Drawing::Point(315, 111);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(67, 62);
			this->button10->TabIndex = 10;
			this->button10->Text = L"sqrt";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->ForeColor = System::Drawing::SystemColors::Info;
			this->button11->Location = System::Drawing::Point(17, 249);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(67, 62);
			this->button11->TabIndex = 11;
			this->button11->Text = L"4";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->ForeColor = System::Drawing::SystemColors::Info;
			this->button12->Location = System::Drawing::Point(92, 249);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(67, 62);
			this->button12->TabIndex = 12;
			this->button12->Text = L"5";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->ForeColor = System::Drawing::SystemColors::Info;
			this->button13->Location = System::Drawing::Point(167, 249);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 62);
			this->button13->TabIndex = 13;
			this->button13->Text = L"6";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->ForeColor = System::Drawing::SystemColors::Info;
			this->button14->Location = System::Drawing::Point(241, 249);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 62);
			this->button14->TabIndex = 14;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->ForeColor = System::Drawing::SystemColors::Info;
			this->button15->Location = System::Drawing::Point(316, 249);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(67, 62);
			this->button15->TabIndex = 15;
			this->button15->Text = L"1/x";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->ForeColor = System::Drawing::SystemColors::Info;
			this->button16->Location = System::Drawing::Point(17, 318);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(67, 62);
			this->button16->TabIndex = 16;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->ForeColor = System::Drawing::SystemColors::Info;
			this->button17->Location = System::Drawing::Point(92, 318);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(67, 62);
			this->button17->TabIndex = 17;
			this->button17->Text = L"2";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->ForeColor = System::Drawing::SystemColors::Info;
			this->button18->Location = System::Drawing::Point(167, 318);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(67, 62);
			this->button18->TabIndex = 18;
			this->button18->Text = L"3";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->ForeColor = System::Drawing::SystemColors::Info;
			this->button19->Location = System::Drawing::Point(240, 318);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(67, 62);
			this->button19->TabIndex = 19;
			this->button19->Text = L"-";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->ForeColor = System::Drawing::SystemColors::Info;
			this->button20->Location = System::Drawing::Point(315, 318);
			this->button20->Margin = System::Windows::Forms::Padding(4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(67, 130);
			this->button20->TabIndex = 20;
			this->button20->Text = L"=";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->ForeColor = System::Drawing::SystemColors::Info;
			this->button21->Location = System::Drawing::Point(17, 386);
			this->button21->Margin = System::Windows::Forms::Padding(4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(141, 62);
			this->button21->TabIndex = 21;
			this->button21->Text = L"0";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->ForeColor = System::Drawing::SystemColors::Info;
			this->button22->Location = System::Drawing::Point(165, 386);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(67, 62);
			this->button22->TabIndex = 22;
			this->button22->Text = L",";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->ForeColor = System::Drawing::SystemColors::Info;
			this->button23->Location = System::Drawing::Point(240, 386);
			this->button23->Margin = System::Windows::Forms::Padding(4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(67, 62);
			this->button23->TabIndex = 23;
			this->button23->Text = L"+";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0), true));
			this->label1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label1->Location = System::Drawing::Point(82, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->MinimumSize = System::Drawing::Size(300, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 41);
			this->label1->TabIndex = 24;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_2);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0), true));
			this->label2->ForeColor = System::Drawing::Color::Snow;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label2->Location = System::Drawing::Point(82, 49);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->MinimumSize = System::Drawing::Size(300, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 42);
			this->label2->TabIndex = 25;
			this->label2->Text = L"0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0), true));
			this->label3->ForeColor = System::Drawing::Color::Snow;
			this->label3->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label3->Location = System::Drawing::Point(18, 9);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->MinimumSize = System::Drawing::Size(65, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 82);
			this->label3->TabIndex = 26;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->ForeColor = System::Drawing::SystemColors::Info;
			this->button24->Location = System::Drawing::Point(16, 458);
			this->button24->Margin = System::Windows::Forms::Padding(4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(67, 62);
			this->button24->TabIndex = 27;
			this->button24->Tag = L"";
			this->button24->Text = L"x^y";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->ForeColor = System::Drawing::SystemColors::Info;
			this->button25->Location = System::Drawing::Point(92, 458);
			this->button25->Margin = System::Windows::Forms::Padding(4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(67, 62);
			this->button25->TabIndex = 28;
			this->button25->Tag = L"";
			this->button25->Text = L"!";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->ClientSize = System::Drawing::Size(404, 533);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::YellowGreen;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(422, 580);
			this->MinimumSize = System::Drawing::Size(422, 580);
			this->Name = L"MyForm";
			this->Text = L"Calculator v1.0 by Aretyc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void label1_Click_2(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void fontDialog1_Apply(System::Object^  sender, System::EventArgs^  e) {
	}
	
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		kalku.add("7");
		label2->Text = kalku.returnAB();;

	}
	//backspace
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.backspace();
		label2->Text = kalku.returnAB();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.add("8");
		label2->Text = kalku.returnAB();;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.add("9");
		label2->Text = kalku.returnAB();;
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.add("4");
		label2->Text = kalku.returnAB();;
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.add("5");
		label2->Text = kalku.returnAB();;
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.add("6");
		label2->Text = kalku.returnAB();;
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.add("2");
		label2->Text = kalku.returnAB();;
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.add("3");
		label2->Text = kalku.returnAB();;
	}
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.add(",");
		label2->Text = kalku.returnAB();;
	}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.add("0");
		label2->Text = kalku.returnAB();;
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.add("1");
		label2->Text = kalku.returnAB();

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.addZnak("/");
		label3->Text = kalku.retyrzZ();
		label2->Text = kalku.retyrzB();
		label1->Text = kalku.retyrzA();
		button20->BackColor = System::Drawing::Color::Maroon;
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.addZnak("*");
		label3->Text = kalku.retyrzZ();
		label2->Text = kalku.retyrzB();
		label1->Text = kalku.retyrzA();
		button20->BackColor = System::Drawing::Color::Maroon;
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.addZnak("-");
		label3->Text = kalku.retyrzZ();
		label2->Text = kalku.retyrzB();
		label1->Text = kalku.retyrzA();
		button20->BackColor = System::Drawing::Color::Maroon;
	}
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.addZnak("+");
		label3->Text = kalku.retyrzZ();
		label2->Text = kalku.retyrzB();
		label1->Text = kalku.retyrzA();
		button20->BackColor = System::Drawing::Color::Maroon;
	}

	//równe 
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.wynik();
		label3->Text = "";
		label2->Text = kalku.retyrzA();
		label1->Text = "";
		String^ temp = kalku.retyrzA();
		if (temp->Length > 15)
		{
			label2->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0), true));
		}
		else
		{
			label2->Font = (gcnew System::Drawing::Font(L"Calibri", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0), true));
		}


		button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(60)));
	}
	// procent 
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.procent();
		if(kalku.retyrzB()!=""){ label2->Text = kalku.retyrzB(); }
		
	}
	//odwrotnoœæ
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.odwrotnosc();
		label2->Text = kalku.returnAB();
	}
	//plus minus 
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.plusMinus();
		label2->Text = kalku.returnAB();

	}
	// pierwiastek
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.pierwiastek();
		label2->Text = kalku.returnAB();
	}
	//czyœci jeden 
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.cleanOne();
		label2->Text = kalku.returnAB();
	}
	//czyœci wszystko 

	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		kalku.cleanAll();
		label3->Text = kalku.retyrzZ();
		label2->Text = kalku.retyrzB();
		label1->Text = kalku.retyrzA();
	}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	kalku.addZnak("^");
	label3->Text = kalku.retyrzZ();
	label2->Text = kalku.retyrzB();
	label1->Text = kalku.retyrzA();
	button20->BackColor = System::Drawing::Color::Maroon;
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	kalku.silnia();
	label2->Text = kalku.retyrzA();
}
};
}
