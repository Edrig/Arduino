#pragma once
#include <windows.h>
namespace test3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		Form1(void)
		{
			InitializeComponent();
			findPorts();
			
				 // disable this text field
			
				 this->textBox2->Enabled = false;
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
	private: System::IO::Ports::SerialPort^  _serialPort;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;

	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->_serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// _serialPort
			// 
			this->_serialPort->PortName = L"COM5";
			this->_serialPort->ReadTimeout = 500;
			this->_serialPort->WriteTimeout = 500;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(36, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Send";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox1->Location = System::Drawing::Point(35, 140);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(261, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Enter Here";
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(395, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(102, 28);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(395, 98);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 62);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Init Port";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->AllowDrop = true;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"9600", L"38400", L"115200"});
			this->comboBox2->Location = System::Drawing::Point(395, 64);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(102, 28);
			this->comboBox2->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(196, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 62);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Read";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(160, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 26);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Received Here";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(37, 32);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 32);
			this->progressBar1->TabIndex = 9;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(395, 167);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 62);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Close Port";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Port Status";
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->ovalShape1});
			this->shapeContainer1->Size = System::Drawing::Size(545, 262);
			this->shapeContainer1->TabIndex = 12;
			this->shapeContainer1->TabStop = false;
			// 
			// ovalShape1
			// 
			this->ovalShape1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Sphere;
			this->ovalShape1->Location = System::Drawing::Point(145, 86);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->Size = System::Drawing::Size(40, 41);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(318, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"COM Ports";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(318, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Baud Rate";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(35, 189);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"ON";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(36, 228);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 16;
			this->button6->Text = L"OFF";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(129, 228);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 18;
			this->button7->Text = L"OFF";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(129, 189);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 17;
			this->button8->Text = L"ON";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(227, 227);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 20;
			this->button9->Text = L"OFF";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(227, 188);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 19;
			this->button10->Text = L"ON";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(545, 262);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->shapeContainer1);
			this->Name = L"Form1";
			this->Text = L"Uart Gui v1.1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

    // find available ports
	private: void findPorts(void)
			 {
			// get port names
		    array<Object^>^ objectArray = SerialPort::GetPortNames();
			// add string array to combobox
			this->comboBox1->Items->AddRange( objectArray );
			 
			 }
    // Send button
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 // add sender name
				 String^ name = this->_serialPort->PortName;
				 // grab text and store in send buffer
				 String^ message = this->textBox1->Text;
				 // write to serial
				 if(this->_serialPort->IsOpen)
					//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
					this->_serialPort->WriteLine(message);
				 else
					this->textBox1->Text="Port Not Opened";
			 }
	// Init button------------------------------------
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->textBox2->Text=String::Empty;
				if(this->comboBox1->Text==String::Empty || this->comboBox2->Text==String::Empty)
					this->textBox1->Text="Please Select Port Settings";
				else {
					try{
					   // make sure port isn't open	
					if(!this->_serialPort->IsOpen){
						this->_serialPort->PortName=this->comboBox1->Text;
					 //this->textBox1->Text=this->comboBox1->Text;
						this->_serialPort->BaudRate=Int32::Parse(this->comboBox2->Text);
					 //this->textBox1->Text=this->comboBox2->Text;
						this->textBox1->Text="Enter Message Here";
					 //open serial port 
						this->_serialPort->Open();
						this->progressBar1->Value=100;
					}
					else
						this->textBox1->Text="Port isn't openned";
					}
					catch(UnauthorizedAccessException^){
						this->textBox1->Text="UnauthorizedAccess";
					}
				 }
						
				 
		
			 }
	// Read button --------------------------------------
    //this will start the asyn for backgroundwork
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		
		  // check if port is ready for reading
		  if(this->_serialPort->IsOpen){
			  // Reset the text in the result label.
			  this->textBox2->Text = String::Empty;
			  
			  // this will read manually
			  try{
			  this->textBox2->Text=this->_serialPort->ReadLine();
			  }
			  catch(TimeoutException^){
			   this->textBox2->Text="Timeout Exception";
			  }
			  // Disable the init button
			  // the asynchronous operation is done.
			  this->button2->Enabled = false;

			  this->ovalShape1->FillColor= Color::Green;
		  }
		  else
			  // give error warning
			 this->textBox2->Text="Port Not Opened";

    }
	// progress bar -------------------------------------------
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {}

	// close port button
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 //close serialPort
				 this->_serialPort->Close();
				 // update progress bar
				 this->progressBar1->Value=0;
				 // Enable read button
				 this->button2->Enabled = true;
				 // Enable the init button
				 this->button3->Enabled = true;
				 // ovalShape
				 this->ovalShape1->FillColor= Color::Red;
					

		 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				// add sender name
				 String^ name = this->_serialPort->PortName;
				 // grab text and store in send buffer
				 String^ message = this->textBox1->Text;
				 // write to serial
				 if(this->_serialPort->IsOpen)
					//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
					this->_serialPort->Write("e");
				 else
					this->textBox1->Text="Port Not Opened";			 
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				// add sender name
				 String^ name = this->_serialPort->PortName;
				 // grab text and store in send buffer
				 String^ message = this->textBox1->Text;
				 // write to serial
				 if(this->_serialPort->IsOpen)
					//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
					this->_serialPort->Write("d");
				 else
					this->textBox1->Text="Port Not Opened";			 
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		 				// add sender name
				 String^ name = this->_serialPort->PortName;
				 // grab text and store in send buffer
				 String^ message = this->textBox1->Text;
				 // write to serial
				 if(this->_serialPort->IsOpen)
					//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
					this->_serialPort->Write("z");
				 else
					this->textBox1->Text="Port Not Opened";	
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		 				// add sender name
				 String^ name = this->_serialPort->PortName;
				 // grab text and store in send buffer
				 String^ message = this->textBox1->Text;
				 // write to serial
				 if(this->_serialPort->IsOpen)
					//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
					this->_serialPort->Write("s");
				 else
					this->textBox1->Text="Port Not Opened";	
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		 				// add sender name
				 String^ name = this->_serialPort->PortName;
				 // grab text and store in send buffer
				 String^ message = this->textBox1->Text;
				 // write to serial
				 if(this->_serialPort->IsOpen)
					//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
					this->_serialPort->Write("a");
				 else
					this->textBox1->Text="Port Not Opened";	
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 				// add sender name
				 String^ name = this->_serialPort->PortName;
				 // grab text and store in send buffer
				 String^ message = this->textBox1->Text;
				 // write to serial
				 if(this->_serialPort->IsOpen)
					//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
					this->_serialPort->Write("q");
				 else
					this->textBox1->Text="Port Not Opened";	
		 }
};
}

