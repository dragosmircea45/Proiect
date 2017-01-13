#include <iostream>
#include <Windows.h>
#pragma once
using namespace std;
namespace Convertor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_viteza;
	private: System::Windows::Forms::TextBox^  txt_input_lungime;
	private: System::Windows::Forms::TextBox^  txt_output_lungime;
	private: System::Windows::Forms::ComboBox^  Lungime_in;
	private: System::Windows::Forms::ComboBox^  lungime_out;




	private: System::Windows::Forms::Button^  btn_convert_lungime;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_convert_arie;
	private: System::Windows::Forms::Label^  Arie;
	private: System::Windows::Forms::TextBox^  txt_arie_input;
	private: System::Windows::Forms::TextBox^  txt_arie_out;

	private: System::Windows::Forms::ComboBox^  combo_arie_in;
	private: System::Windows::Forms::ComboBox^  combo_arie_out;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txt_temp_in;

	private: System::Windows::Forms::TextBox^  txt_temp_out;

	private: System::Windows::Forms::ComboBox^  combo_temp_in;
	private: System::Windows::Forms::ComboBox^  combo_temp_out;


	private: System::Windows::Forms::Button^  btn_convert_temp;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txt_timp_in;
	private: System::Windows::Forms::ComboBox^  combo_timp_in;
	private: System::Windows::Forms::Button^  btn_convert_timp;
	private: System::Windows::Forms::TextBox^  txt_timp_out;
	private: System::Windows::Forms::ComboBox^  combo_timp_out;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txt_masa_in;
	private: System::Windows::Forms::ComboBox^  combo_masa_in;
	private: System::Windows::Forms::ComboBox^  combo_masa_out;
	private: System::Windows::Forms::TextBox^  txt_masa_out;
	private: System::Windows::Forms::Button^  btn_convert_masa;
	private: System::Windows::Forms::TextBox^  textBox2;



	protected: 









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
			this->btn_viteza = (gcnew System::Windows::Forms::Button());
			this->txt_input_lungime = (gcnew System::Windows::Forms::TextBox());
			this->txt_output_lungime = (gcnew System::Windows::Forms::TextBox());
			this->Lungime_in = (gcnew System::Windows::Forms::ComboBox());
			this->lungime_out = (gcnew System::Windows::Forms::ComboBox());
			this->btn_convert_lungime = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_convert_arie = (gcnew System::Windows::Forms::Button());
			this->Arie = (gcnew System::Windows::Forms::Label());
			this->txt_arie_input = (gcnew System::Windows::Forms::TextBox());
			this->txt_arie_out = (gcnew System::Windows::Forms::TextBox());
			this->combo_arie_in = (gcnew System::Windows::Forms::ComboBox());
			this->combo_arie_out = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_temp_in = (gcnew System::Windows::Forms::TextBox());
			this->txt_temp_out = (gcnew System::Windows::Forms::TextBox());
			this->combo_temp_in = (gcnew System::Windows::Forms::ComboBox());
			this->combo_temp_out = (gcnew System::Windows::Forms::ComboBox());
			this->btn_convert_temp = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_timp_in = (gcnew System::Windows::Forms::TextBox());
			this->combo_timp_in = (gcnew System::Windows::Forms::ComboBox());
			this->btn_convert_timp = (gcnew System::Windows::Forms::Button());
			this->txt_timp_out = (gcnew System::Windows::Forms::TextBox());
			this->combo_timp_out = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_masa_in = (gcnew System::Windows::Forms::TextBox());
			this->combo_masa_in = (gcnew System::Windows::Forms::ComboBox());
			this->combo_masa_out = (gcnew System::Windows::Forms::ComboBox());
			this->txt_masa_out = (gcnew System::Windows::Forms::TextBox());
			this->btn_convert_masa = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_viteza
			// 
			this->btn_viteza->Location = System::Drawing::Point(669, 406);
			this->btn_viteza->Name = L"btn_viteza";
			this->btn_viteza->Size = System::Drawing::Size(101, 29);
			this->btn_viteza->TabIndex = 0;
			this->btn_viteza->Text = L"Exit";
			this->btn_viteza->UseVisualStyleBackColor = true;
			this->btn_viteza->Click += gcnew System::EventHandler(this, &Form1::btn_exit_Click);
			// 
			// txt_input_lungime
			// 
			this->txt_input_lungime->Location = System::Drawing::Point(109, 95);
			this->txt_input_lungime->Name = L"txt_input_lungime";
			this->txt_input_lungime->Size = System::Drawing::Size(100, 20);
			this->txt_input_lungime->TabIndex = 1;
			this->txt_input_lungime->Text = L"1";
			// 
			// txt_output_lungime
			// 
			this->txt_output_lungime->Location = System::Drawing::Point(466, 94);
			this->txt_output_lungime->Name = L"txt_output_lungime";
			this->txt_output_lungime->ReadOnly = true;
			this->txt_output_lungime->Size = System::Drawing::Size(100, 20);
			this->txt_output_lungime->TabIndex = 2;
			// 
			// Lungime_in
			// 
			this->Lungime_in->FormattingEnabled = true;
			this->Lungime_in->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Centimetri", L"Metri", L"Kilometri", L"Mile", 
				L"Picioare", L"Yarzi"});
			this->Lungime_in->Location = System::Drawing::Point(228, 94);
			this->Lungime_in->Name = L"Lungime_in";
			this->Lungime_in->Size = System::Drawing::Size(121, 21);
			this->Lungime_in->TabIndex = 3;
			this->Lungime_in->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// lungime_out
			// 
			this->lungime_out->FormattingEnabled = true;
			this->lungime_out->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Centimetri", L"Metri", L"Kilometri", L"Mile", 
				L"Picioare", L"Yarzi"});
			this->lungime_out->Location = System::Drawing::Point(594, 90);
			this->lungime_out->Name = L"lungime_out";
			this->lungime_out->Size = System::Drawing::Size(121, 21);
			this->lungime_out->TabIndex = 4;
			// 
			// btn_convert_lungime
			// 
			this->btn_convert_lungime->Location = System::Drawing::Point(369, 94);
			this->btn_convert_lungime->Name = L"btn_convert_lungime";
			this->btn_convert_lungime->Size = System::Drawing::Size(75, 23);
			this->btn_convert_lungime->TabIndex = 5;
			this->btn_convert_lungime->Text = L"Convert!";
			this->btn_convert_lungime->UseVisualStyleBackColor = true;
			this->btn_convert_lungime->Click += gcnew System::EventHandler(this, &Form1::btn_convert_lungime_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Lungime";
			// 
			// btn_convert_arie
			// 
			this->btn_convert_arie->Location = System::Drawing::Point(369, 154);
			this->btn_convert_arie->Name = L"btn_convert_arie";
			this->btn_convert_arie->Size = System::Drawing::Size(75, 23);
			this->btn_convert_arie->TabIndex = 7;
			this->btn_convert_arie->Text = L"Convert!";
			this->btn_convert_arie->UseVisualStyleBackColor = true;
			this->btn_convert_arie->Click += gcnew System::EventHandler(this, &Form1::btn_convert_arie_Click);
			// 
			// Arie
			// 
			this->Arie->AutoSize = true;
			this->Arie->Location = System::Drawing::Point(34, 164);
			this->Arie->Name = L"Arie";
			this->Arie->Size = System::Drawing::Size(25, 13);
			this->Arie->TabIndex = 8;
			this->Arie->Text = L"Arie";
			// 
			// txt_arie_input
			// 
			this->txt_arie_input->Location = System::Drawing::Point(109, 157);
			this->txt_arie_input->Name = L"txt_arie_input";
			this->txt_arie_input->Size = System::Drawing::Size(100, 20);
			this->txt_arie_input->TabIndex = 9;
			this->txt_arie_input->Text = L"1";
			// 
			// txt_arie_out
			// 
			this->txt_arie_out->Location = System::Drawing::Point(466, 157);
			this->txt_arie_out->Name = L"txt_arie_out";
			this->txt_arie_out->ReadOnly = true;
			this->txt_arie_out->Size = System::Drawing::Size(100, 20);
			this->txt_arie_out->TabIndex = 10;
			// 
			// combo_arie_in
			// 
			this->combo_arie_in->FormattingEnabled = true;
			this->combo_arie_in->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Cm2", L"m2", L"km2", L"In2", L"ft2", L"yd2"});
			this->combo_arie_in->Location = System::Drawing::Point(228, 156);
			this->combo_arie_in->Name = L"combo_arie_in";
			this->combo_arie_in->Size = System::Drawing::Size(121, 21);
			this->combo_arie_in->TabIndex = 11;
			// 
			// combo_arie_out
			// 
			this->combo_arie_out->FormattingEnabled = true;
			this->combo_arie_out->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Cm2", L"m2", L"km2", L"In2", L"ft2", L"yd2"});
			this->combo_arie_out->Location = System::Drawing::Point(594, 156);
			this->combo_arie_out->Name = L"combo_arie_out";
			this->combo_arie_out->Size = System::Drawing::Size(121, 21);
			this->combo_arie_out->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 236);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Temperatura";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// txt_temp_in
			// 
			this->txt_temp_in->Location = System::Drawing::Point(109, 229);
			this->txt_temp_in->Name = L"txt_temp_in";
			this->txt_temp_in->Size = System::Drawing::Size(100, 20);
			this->txt_temp_in->TabIndex = 14;
			this->txt_temp_in->Text = L"1";
			// 
			// txt_temp_out
			// 
			this->txt_temp_out->Location = System::Drawing::Point(466, 228);
			this->txt_temp_out->Name = L"txt_temp_out";
			this->txt_temp_out->ReadOnly = true;
			this->txt_temp_out->Size = System::Drawing::Size(100, 20);
			this->txt_temp_out->TabIndex = 15;
			// 
			// combo_temp_in
			// 
			this->combo_temp_in->FormattingEnabled = true;
			this->combo_temp_in->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"°C", L"°F", L" K"});
			this->combo_temp_in->Location = System::Drawing::Point(228, 228);
			this->combo_temp_in->Name = L"combo_temp_in";
			this->combo_temp_in->Size = System::Drawing::Size(121, 21);
			this->combo_temp_in->TabIndex = 16;
			// 
			// combo_temp_out
			// 
			this->combo_temp_out->FormattingEnabled = true;
			this->combo_temp_out->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"°C", L"°F", L" K"});
			this->combo_temp_out->Location = System::Drawing::Point(594, 229);
			this->combo_temp_out->Name = L"combo_temp_out";
			this->combo_temp_out->Size = System::Drawing::Size(121, 21);
			this->combo_temp_out->TabIndex = 17;
			// 
			// btn_convert_temp
			// 
			this->btn_convert_temp->Location = System::Drawing::Point(369, 226);
			this->btn_convert_temp->Name = L"btn_convert_temp";
			this->btn_convert_temp->Size = System::Drawing::Size(75, 23);
			this->btn_convert_temp->TabIndex = 18;
			this->btn_convert_temp->Text = L"Convert!";
			this->btn_convert_temp->UseVisualStyleBackColor = true;
			this->btn_convert_temp->Click += gcnew System::EventHandler(this, &Form1::btn_convert_temp_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 295);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Timp";
			// 
			// txt_timp_in
			// 
			this->txt_timp_in->Location = System::Drawing::Point(109, 288);
			this->txt_timp_in->Name = L"txt_timp_in";
			this->txt_timp_in->Size = System::Drawing::Size(100, 20);
			this->txt_timp_in->TabIndex = 20;
			this->txt_timp_in->Text = L"1";
			// 
			// combo_timp_in
			// 
			this->combo_timp_in->FormattingEnabled = true;
			this->combo_timp_in->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Secunde", L"Minute", L"Ore", L"Zile"});
			this->combo_timp_in->Location = System::Drawing::Point(228, 287);
			this->combo_timp_in->Name = L"combo_timp_in";
			this->combo_timp_in->Size = System::Drawing::Size(121, 21);
			this->combo_timp_in->TabIndex = 21;
			// 
			// btn_convert_timp
			// 
			this->btn_convert_timp->Location = System::Drawing::Point(369, 285);
			this->btn_convert_timp->Name = L"btn_convert_timp";
			this->btn_convert_timp->Size = System::Drawing::Size(75, 23);
			this->btn_convert_timp->TabIndex = 22;
			this->btn_convert_timp->Text = L"Convert!";
			this->btn_convert_timp->UseVisualStyleBackColor = true;
			this->btn_convert_timp->Click += gcnew System::EventHandler(this, &Form1::btn_convert_timp_Click);
			// 
			// txt_timp_out
			// 
			this->txt_timp_out->Location = System::Drawing::Point(466, 288);
			this->txt_timp_out->Name = L"txt_timp_out";
			this->txt_timp_out->ReadOnly = true;
			this->txt_timp_out->Size = System::Drawing::Size(100, 20);
			this->txt_timp_out->TabIndex = 23;
			// 
			// combo_timp_out
			// 
			this->combo_timp_out->FormattingEnabled = true;
			this->combo_timp_out->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Secunde", L"Minute", L"Ore", L"Zile"});
			this->combo_timp_out->Location = System::Drawing::Point(594, 288);
			this->combo_timp_out->Name = L"combo_timp_out";
			this->combo_timp_out->Size = System::Drawing::Size(121, 21);
			this->combo_timp_out->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 360);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Masa";
			// 
			// txt_masa_in
			// 
			this->txt_masa_in->Location = System::Drawing::Point(109, 353);
			this->txt_masa_in->Name = L"txt_masa_in";
			this->txt_masa_in->Size = System::Drawing::Size(100, 20);
			this->txt_masa_in->TabIndex = 26;
			this->txt_masa_in->Text = L"1";
			// 
			// combo_masa_in
			// 
			this->combo_masa_in->FormattingEnabled = true;
			this->combo_masa_in->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Miligrame", L"Grame", L"Kilograme", L"Tone"});
			this->combo_masa_in->Location = System::Drawing::Point(228, 352);
			this->combo_masa_in->Name = L"combo_masa_in";
			this->combo_masa_in->Size = System::Drawing::Size(121, 21);
			this->combo_masa_in->TabIndex = 27;
			// 
			// combo_masa_out
			// 
			this->combo_masa_out->FormattingEnabled = true;
			this->combo_masa_out->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Miligrame", L"Grame", L"Kilograme", L"Tone"});
			this->combo_masa_out->Location = System::Drawing::Point(594, 352);
			this->combo_masa_out->Name = L"combo_masa_out";
			this->combo_masa_out->Size = System::Drawing::Size(121, 21);
			this->combo_masa_out->TabIndex = 28;
			// 
			// txt_masa_out
			// 
			this->txt_masa_out->Location = System::Drawing::Point(466, 353);
			this->txt_masa_out->Name = L"txt_masa_out";
			this->txt_masa_out->ReadOnly = true;
			this->txt_masa_out->Size = System::Drawing::Size(100, 20);
			this->txt_masa_out->TabIndex = 29;
			// 
			// btn_convert_masa
			// 
			this->btn_convert_masa->Location = System::Drawing::Point(369, 350);
			this->btn_convert_masa->Name = L"btn_convert_masa";
			this->btn_convert_masa->Size = System::Drawing::Size(75, 23);
			this->btn_convert_masa->TabIndex = 30;
			this->btn_convert_masa->Text = L"Convert!";
			this->btn_convert_masa->UseVisualStyleBackColor = true;
			this->btn_convert_masa->Click += gcnew System::EventHandler(this, &Form1::btn_convert_masa_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(347, 25);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 25);
			this->textBox2->TabIndex = 32;
			this->textBox2->Text = L"CONVERTOR";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(792, 447);
			this->ControlBox = false;
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->btn_convert_masa);
			this->Controls->Add(this->txt_masa_out);
			this->Controls->Add(this->combo_masa_out);
			this->Controls->Add(this->combo_masa_in);
			this->Controls->Add(this->txt_masa_in);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->combo_timp_out);
			this->Controls->Add(this->txt_timp_out);
			this->Controls->Add(this->btn_convert_timp);
			this->Controls->Add(this->combo_timp_in);
			this->Controls->Add(this->txt_timp_in);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_convert_temp);
			this->Controls->Add(this->combo_temp_out);
			this->Controls->Add(this->combo_temp_in);
			this->Controls->Add(this->txt_temp_out);
			this->Controls->Add(this->txt_temp_in);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->combo_arie_out);
			this->Controls->Add(this->combo_arie_in);
			this->Controls->Add(this->txt_arie_out);
			this->Controls->Add(this->txt_arie_input);
			this->Controls->Add(this->Arie);
			this->Controls->Add(this->btn_convert_arie);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_convert_lungime);
			this->Controls->Add(this->lungime_out);
			this->Controls->Add(this->Lungime_in);
			this->Controls->Add(this->txt_output_lungime);
			this->Controls->Add(this->txt_input_lungime);
			this->Controls->Add(this->btn_viteza);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"Convertor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_exit_Click(System::Object^  sender, System::EventArgs^  e) {
				this->Close();
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		 }

private: System::Void btn_convert_lungime_Click(System::Object^  sender, System::EventArgs^  e) {
			 double input, output;
			 

			  int selectedIn = Lungime_in->SelectedIndex;
			  int selectedOut = lungime_out->SelectedIndex;
			  

			   if((selectedIn==-1 && selectedOut==-1) || selectedIn== -1 || selectedOut == -1){

				 MessageBox::Show("Nu ati selectat ambele unitati de masura!");
			 }
			   else
			 if(selectedIn==selectedOut){
				 MessageBox::Show("Va rog nu selectati aceeasi unitate de masura!");
			 }	
			 input=0;
			 input=System::Convert::ToDouble ( txt_input_lungime->Text );
	
			 switch(selectedIn){
			 case 0:
				 if(selectedOut==1)
					 output = input/100;
				 txt_output_lungime->Text=  Convert::ToString(output);

				 if(selectedOut==2)
					 output = input/100000;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==3)
					 output = input*0.0000062137;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==4)
					 output = input*0.0328084;
				 txt_output_lungime->Text=  Convert::ToString(output);
				   if(selectedOut==5)
					 output = input*0.0109361;
				 txt_output_lungime->Text=  Convert::ToString(output);
				 break;
			 case 1:
				
				 if(selectedOut==0)
					 output = input*100;
				 txt_output_lungime->Text=  Convert::ToString(output);

				 if(selectedOut==2)
					 output = input*1000;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==3)
					 output = input*1600;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==4)
					 output = input*3.28083;
				 txt_output_lungime->Text=  Convert::ToString(output);
				   if(selectedOut==5)
					 output = input*0.000621371192;
				 txt_output_lungime->Text=  Convert::ToString(output);
				 break;
				  case 2:				
				 if(selectedOut==0)
					 output = input*100000;
				 txt_output_lungime->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*1000;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==3)
					 output = input/1.6;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==4)
					 output = input*3280.84;
				 txt_output_lungime->Text=  Convert::ToString(output);
				   if(selectedOut==5)
					 output = input*1093.6133333333;
				 txt_output_lungime->Text=  Convert::ToString(output);
				 break;

				 case 3:				
				 if(selectedOut==0)
					 output = input*160000;
				 txt_output_lungime->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*1600;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==2)
					 output = input/1.6;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==4)
					 output = input*5280;
				 txt_output_lungime->Text=  Convert::ToString(output);
				   if(selectedOut==5)
					 output = input*1760;
				 txt_output_lungime->Text=  Convert::ToString(output);
				 break;
				  case 4:				
				 if(selectedOut==0)
					 output = input*30.48;
				 txt_output_lungime->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*0.3048;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==2)
					 output = input*0.0003048;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==3)
					 output = input*0.00018939;
				 txt_output_lungime->Text=  Convert::ToString(output);
				   if(selectedOut==5)
					 output = input*0.3333332424176393;
				 txt_output_lungime->Text=  Convert::ToString(output);
				 break;

				  case 5:				
				 if(selectedOut==0)
					 output = input*91.44002494;
				 txt_output_lungime->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*0.9144002494;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==2)
					 output = input*0.0009144002494;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==3)
					 output = input*0.0005681819731517935;
				 txt_output_lungime->Text=  Convert::ToString(output);
				   if(selectedOut==4)
					 output = input*3.0000008182414697;
				 txt_output_lungime->Text=  Convert::ToString(output);
				 break;
			 }
			


			  
		 }
		 private: System::Void btn_convert_arie_Click(System::Object^  sender, System::EventArgs^  e) {


					   double input, output;
			 

			  int selectedIn = combo_arie_in->SelectedIndex;
			  int selectedOut = combo_arie_out->SelectedIndex;
			

			   if((selectedIn==-1 && selectedOut==-1) || selectedIn== -1 || selectedOut == -1){
				 MessageBox::Show("Nu ati selectat ambele unitati de masura!");
			 }
			   else
			 if(selectedIn==selectedOut){
				 MessageBox::Show("Va rog nu selectati aceeasi unitate de masura!");
			 }	
			 input=0;
			 input=System::Convert::ToDouble ( txt_arie_input->Text );
	
			 switch(selectedIn){
			 case 0:
				 if(selectedOut==1)
					 output = input*0.0001;
				 txt_arie_out->Text=  Convert::ToString(output);

				 if(selectedOut==2)
					 output = input/10000000000;
				  txt_arie_out->Text=  Convert::ToString(output);
				  if(selectedOut==3)
					 output = input*0.15499070055796654;
					txt_arie_out->Text=  Convert::ToString(output);
				  if(selectedOut==4)
					 output = input*0.0001195989394042597;
				  txt_arie_out->Text=  Convert::ToString(output);
				   if(selectedOut==5)
					 output = input*0.0109361;
				  txt_arie_out->Text=  Convert::ToString(output);
				 break;
			 case 1:
				
				 if(selectedOut==0)
					 output = input*10000;
				  txt_arie_out->Text=  Convert::ToString(output);

				 if(selectedOut==2)
					 output = input*0.000001;
				  txt_arie_out->Text=  Convert::ToString(output);
				  if(selectedOut==3)
					 output = input*1549.907005;
				  txt_arie_out->Text=  Convert::ToString(output);
				  if(selectedOut==4)
					 output = input*10.76426264;
				  txt_arie_out->Text=  Convert::ToString(output);
				   if(selectedOut==5)
					 output = input*1.19598939404;
				  txt_arie_out->Text=  Convert::ToString(output);
				 break;
				  case 2:				
				 if(selectedOut==0)
					 output = input*10000000000;
				  txt_arie_out->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input/0.000001;
				  txt_arie_out->Text=  Convert::ToString(output);
				  if(selectedOut==3)
					 output = input*1550003100;
				  txt_arie_out->Text=  Convert::ToString(output);
				  if(selectedOut==4)
					 output = input*10763910.4;
				  txt_arie_out->Text=  Convert::ToString(output);
				   if(selectedOut==5)
					 output = input*1195990.05;
				  txt_arie_out->Text=  Convert::ToString(output);
				 break;

				 case 3:				
				 if(selectedOut==0)
					 output = input*6.4516;
				  txt_arie_out->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*0.00064516;
				  txt_arie_out->Text=  Convert::ToString(output);
				  if(selectedOut==2)
					 output = input*0.00000000064516;
				  txt_arie_out->Text=  Convert::ToString(output);
				  if(selectedOut==4)
					 output = input*0.00694444444;
				  txt_arie_out->Text=  Convert::ToString(output);
				   if(selectedOut==5)
					 output = input*0.000771604938;
				  txt_arie_out->Text=  Convert::ToString(output);
				 break;

				  case 4:				
				 if(selectedOut==0)
					 output = input*929.0304;
				  txt_arie_out->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*0.09290304;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==2)
					 output = input*0.00000009290304;
				  txt_arie_out->Text=  Convert::ToString(output);
				  if(selectedOut==3)
					 output = input*144;
				  txt_arie_out->Text=  Convert::ToString(output);
				   if(selectedOut==5)
					 output = input*0.111111111;
				  txt_arie_out->Text=  Convert::ToString(output);
				 break;

				  case 5:				
				 if(selectedOut==0)
					 output = input*8361.2736;
				  txt_arie_out->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*0.83612736;
				  txt_arie_out->Text=  Convert::ToString(output);
				  if(selectedOut==2)
					 output = input*0.00000083612736;
				 txt_output_lungime->Text=  Convert::ToString(output);
				  if(selectedOut==3)
					 output = input*1296;
				  txt_arie_out->Text=  Convert::ToString(output);
				   if(selectedOut==4)
					 output = input*9;
				  txt_arie_out->Text=  Convert::ToString(output);
				 break;
			 }
			


			  



				  }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btn_convert_temp_Click(System::Object^  sender, System::EventArgs^  e) {

			 
					   double input, output;
			 

			  int selectedIn = combo_temp_in->SelectedIndex;
			  int selectedOut = combo_temp_out->SelectedIndex;
			  

			   if((selectedIn==-1 && selectedOut==-1) || selectedIn== -1 || selectedOut == -1){

				 MessageBox::Show("Nu ati selectat ambele unitati de masura!");
			 }
			   else
			 if(selectedIn==selectedOut){
				 MessageBox::Show("Va rog nu selectati aceeasi unitate de masura!");
			 }
		
			 input=0;
			 input=System::Convert::ToDouble ( txt_temp_in->Text );

			  switch(selectedIn){
			 case 0:
				 if(selectedOut==1)
					 output = (input*1.8) + 32;
				 txt_temp_out->Text=  Convert::ToString(output);

				 if(selectedOut==2)
					 output = input+273.15;
				  txt_temp_out->Text=  Convert::ToString(output);
				
				 break;

				 case 1:
				 if(selectedOut==0)
					 output = (input-32)/1.8;
				 txt_temp_out->Text=  Convert::ToString(output);

				 if(selectedOut==2)
					 output = input*9/5-459.67;
				  txt_temp_out->Text=  Convert::ToString(output);
			     break;

				 case 2:
				 if(selectedOut==0)
					 output =input-273.15;
				 txt_temp_out->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = (input+459.67)*(5/9);
				  txt_temp_out->Text=  Convert::ToString(output);
				 break;
			  }
		 }

private: System::Void btn_convert_timp_Click(System::Object^  sender, System::EventArgs^  e) {
			    double input, output;
			 

			  int selectedIn = combo_timp_in->SelectedIndex;
			  int selectedOut = combo_timp_out->SelectedIndex;
			  

			   if((selectedIn==-1 && selectedOut==-1) || selectedIn== -1 || selectedOut == -1){

				 MessageBox::Show("Nu ati selectat ambele unitati de masura!");
			 }
			   else
			 if(selectedIn==selectedOut){
				 MessageBox::Show("Va rog nu selectati aceeasi unitate de masura!");
			 }
		
			 input=0;
			 input=System::Convert::ToDouble ( txt_timp_in->Text );

			  switch(selectedIn){
			 case 0:
				 if(selectedOut==1)
					 output = input*0.0166666667;
				 txt_timp_out->Text=  Convert::ToString(output);

				 if(selectedOut==2)
					 output = input*0.000277777778;
				  txt_timp_out->Text=  Convert::ToString(output);

				  if(selectedOut==3)
					 output = input*0.0000115740741;
				  txt_timp_out->Text=  Convert::ToString(output);
				
				 break;

				 case 1:
				 if(selectedOut==0)
					 output = input*60;
				 txt_timp_out->Text=  Convert::ToString(output);

				 if(selectedOut==2)
					 output = input*0.0166666667;
				  txt_timp_out->Text=  Convert::ToString(output);

				  if(selectedOut==3)
					 output = input*0.000694444444;
				  txt_timp_out->Text=  Convert::ToString(output);
			     break;

				 case 2:
				 if(selectedOut==0)
					 output =input*3600;
				 txt_timp_out->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*60;
				  txt_timp_out->Text=  Convert::ToString(output);

				  if(selectedOut==3)
					 output = input*0.0416666667;
				  txt_timp_out->Text=  Convert::ToString(output);
				 break;

				 case 3:
				 if(selectedOut==0)
					 output =input*86400;
				 txt_timp_out->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*1440;
				  txt_timp_out->Text=  Convert::ToString(output);

				  if(selectedOut==2)
					 output = input*24;
				  txt_timp_out->Text=  Convert::ToString(output);
				 break;
			  }
		 }

private: System::Void btn_convert_masa_Click(System::Object^  sender, System::EventArgs^  e) {

			   double input, output;
			 

			  int selectedIn = combo_masa_in->SelectedIndex;
			  int selectedOut = combo_masa_out->SelectedIndex;
			  

			   if((selectedIn==-1 && selectedOut==-1) || selectedIn== -1 || selectedOut == -1){

				 MessageBox::Show("Nu ati selectat ambele unitati de masura!");
			 }
			   else
			 if(selectedIn==selectedOut){
				 MessageBox::Show("Va rog nu selectati aceeasi unitate de masura!");
			 }
		
			 input=0;
			 input=System::Convert::ToDouble ( txt_masa_in->Text );

			  switch(selectedIn){
			 case 0:
				 if(selectedOut==1)
					 output = input*0.001;
				 txt_masa_out->Text=  Convert::ToString(output);

				 if(selectedOut==2)
					 output = input*0.0000010;
				  txt_masa_out->Text=  Convert::ToString(output);

				  if(selectedOut==3)
					 output = input*0.0000000010;
				  txt_masa_out->Text=  Convert::ToString(output);
				
				 break;

				 case 1:
				 if(selectedOut==0)
					 output = input*1000;
				 txt_masa_out->Text=  Convert::ToString(output);

				 if(selectedOut==2)
					 output = input*0.001;
				  txt_masa_out->Text=  Convert::ToString(output);

				  if(selectedOut==3)
					 output = input*0.0000010;
				  txt_masa_out->Text=  Convert::ToString(output);
			     break;

				 case 2:
				 if(selectedOut==0)
					 output =input*1000000;
				 txt_masa_out->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*1000;
				  txt_masa_out->Text=  Convert::ToString(output);

				  if(selectedOut==3)
					 output = input*0.001;
				  txt_masa_out->Text=  Convert::ToString(output);
				 break;

				 case 3:
				 if(selectedOut==0)
					 output =input*1000000000;
				 txt_masa_out->Text=  Convert::ToString(output);

				 if(selectedOut==1)
					 output = input*1000000;
				  txt_masa_out->Text=  Convert::ToString(output);

				  if(selectedOut==2)
					 output = input*1000;
				  txt_masa_out->Text=  Convert::ToString(output);
				 break;
			  }

		 }
};
		 
			}