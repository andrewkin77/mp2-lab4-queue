#pragma once
#include"queue.h"

namespace grafQueue {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int MaxSize;
		int Size;
		double p;
		double q;
		int PopCount;
		int PushCount;
		int buf;

		TQueue<int>* pQueue;
		int CenterX, CenterY, Width, Height;
		Graphics^ gr;
		Random^ rndl;
		Pen^ BlackPen;
		Pen^ ClearPen;
		Pen^ ALLCLPen;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::Button^  button2;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			gr = CreateGraphics();
			rndl = gcnew Random();

			BlackPen = gcnew Pen(Color::Blue);
			BlackPen->Width = 15.0F;
			ClearPen = gcnew Pen(Color::DarkTurquoise);
			ClearPen->Width = 15.0F;
			ALLCLPen = gcnew Pen(Color::DarkTurquoise);
			ALLCLPen->Width = 500.0F;

			CenterX = 450;
			CenterY = 150;
			Width = 300;
			Height = 300;

			PopCount = 0;
			PushCount = 0;
			buf = 0;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(553, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(411, 9);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(411, 55);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(100, 11);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(-1, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Max Size";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(-1, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Starting size\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(236, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Probability of deletion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(236, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Probability of addition";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(553, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(16, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Added";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(16, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Deleted\r\n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(78, 116);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 20);
			this->label7->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(90, 159);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 20);
			this->label8->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(78, 116);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 14;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(96, 159);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 20);
			this->label10->TabIndex = 15;
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(20, 241);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(16, 207);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(95, 20);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Speed (m/s)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkTurquoise;
			this->ClientSize = System::Drawing::Size(878, 558);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Queue";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void DrawQueue() {
			int start = 360 * pQueue->GetHead() / pQueue->GetMaxSize();
			int finish = 360 * (pQueue->GetSize()) / pQueue->GetMaxSize();
			gr->DrawArc(BlackPen, CenterX, CenterY, Width, Height, start, finish);
		}
		void Clean()
		{
			int start = 360 * pQueue->GetHead() / pQueue->GetMaxSize();
			int finish = 360 * (pQueue->GetSize()) / pQueue->GetMaxSize();

			gr->DrawArc(ClearPen, CenterX, CenterY, Width, Height, start, finish);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		gr->DrawLine(ALLCLPen,200, 288, 875,288);
		MaxSize = Convert::ToInt32(textBox4->Text);
		Size = Convert::ToInt32(textBox1->Text);
		p = Convert::ToDouble(textBox2->Text);
		q = Convert::ToDouble(textBox3->Text);
		timer1->Interval = Convert::ToDouble(textBox5->Text);

		pQueue = new TQueue<int>(MaxSize);
		for (int i = 0; i < Size; i++)
		{
			pQueue->Push(i);
		}
		DrawQueue();
		timer1->Enabled = true;
			button2->Text = "Stop";
			buf = 0;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Clean();

		if (rndl->NextDouble() < p)
		{
			if (!pQueue->IsFull())
			{
				pQueue->Push(1);
				PushCount++;
			}
		}
		if (rndl->NextDouble() < q)
		{
			if (!pQueue->IsEmpty())
			{
				pQueue->Pop();
				PopCount++;
			}
		}
		DrawQueue();
		label9->Text = Convert::ToString(PushCount);
		label10->Text = Convert::ToString(PopCount);
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		timer1->Enabled = buf;
		if (!buf)
		{
			button2->Text = "Continue";
		}
		else
		{
			button2->Text = "Pause";
		}
		buf++;
		if (buf==2)
		{
			buf = 0;
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
