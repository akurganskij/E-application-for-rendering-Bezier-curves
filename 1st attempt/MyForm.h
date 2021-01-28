#pragma once
#include<vector>
#include<cmath>
#include<string>

std::vector<double> cordx;
std::vector<double> cordy;
std::vector<std::vector<double>> ncordx;
std::vector<std::vector<double>> ncordy;
std::vector<double> beziercordx;
std::vector<double> beziercordy;
int points=0;

namespace My1stattempt {

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
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;







	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(177, 325);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 24);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Amount of points:";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button3->AutoSize = true;
			this->button3->Location = System::Drawing::Point(1, 240);
			this->button3->MaximumSize = System::Drawing::Size(170, 68);
			this->button3->MinimumSize = System::Drawing::Size(170, 68);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 68);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(1, 80);
			this->button2->MaximumSize = System::Drawing::Size(170, 68);
			this->button2->MinimumSize = System::Drawing::Size(170, 68);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 68);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Build with lines";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(68, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button1->AutoSize = true;
			this->button1->Location = System::Drawing::Point(1, 160);
			this->button1->MaximumSize = System::Drawing::Size(170, 68);
			this->button1->MinimumSize = System::Drawing::Size(170, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 68);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Build";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(2, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(665, 321);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::Color::White;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(666, 323);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool thc1 = false, thc2 = false;
	System::Threading::Thread^ th1;
	System::Threading::Thread^ th2;
	private: void BuildLine1() {
		Graphics^ g = pictureBox1->CreateGraphics();
		g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
		Pen^ pen2 = gcnew Pen(Brushes::Black);
		pen2->Width = 2.0f;
		for (int i = 1; i < points; ++i) {
			Point a, b;
			a.X = cordx[i - 1];
			a.Y = cordy[i - 1];
			b.X = cordx[i];
			b.Y = cordy[i];
			g->DrawLine(pen2, a, b);
		}
	}
	private: void Newcord(int j, double t) {
		double lambda = t / (1 - t);
		for (int i = 0; i < points-1; ++i) {
			ncordx[j][i] = (ncordx[j][i] + lambda * ncordx[j-1][i + 1])/(1+lambda);
			ncordy[j][i] = (ncordy[j][i] + lambda * ncordy[j-1][i + 1])/(1+lambda);
		}
	}
	private: void BuildLine2(int j) {
		Graphics^ g = pictureBox1->CreateGraphics();
		g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
		Pen^ pen2 = gcnew Pen(Brushes::Green);
		pen2->Width = 2.0f;
		Point a, b;
		for (int i = 1; i <= points - j; ++i) {
			a.X = ncordx[j][i - 1];
			a.Y = ncordy[j][i - 1];
			b.X = ncordx[j][i];
			b.Y = ncordy[j][i];
			g->DrawLine(pen2, a, b);
		}
	}
	private: void FindBezier(double t) {
		double lambda = t / (1 - t);
		beziercordx.push_back((ncordx[points-1][0] + lambda * ncordx[points-1][1]) / (1 + lambda));
		beziercordy.push_back((ncordy[points-1][0] + lambda * ncordy[points-1][1]) / (1 + lambda));
	}
	private: void DrawBezier() {
		Graphics^ g = pictureBox1->CreateGraphics();
		g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
		Pen^ pen1 = gcnew Pen(Brushes::Red, 4);
		Point a, b;
		for (int i = 1; i < beziercordx.size(); ++i) {
			a.X = beziercordx[i - 1];
			a.Y = beziercordy[i - 1];
			b.X = beziercordx[i];
			b.Y = beziercordy[i];
			g->DrawLine(pen1, a, b);
		}
	}
	private: void DrawEllipses() {
		Graphics^ g = pictureBox1->CreateGraphics();
		g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
		Pen^ pen1 = gcnew Pen(Brushes::Black);
		pen1->Width = 5.0f;
		for (int i = 0; i < points; ++i) {
			g->DrawEllipse(pen1, cordx[i], cordy[i], 5, 5);
		}
	}
	private: void workofbuttonbuild() {
		try {
			if (points < 2) {
				String^ s = "Exception 1: Not enough points. Put at least 2 points";
				throw s;
			}
			if (points > 20) {
				String^ s = "Exception 2: Too much points. Put less points";
				throw s;
			}
			Graphics^ g = pictureBox1->CreateGraphics();
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
			g->Clear(Color::White);
			DrawEllipses();
			BuildLine1();
			ncordx.resize(points);
			ncordy.resize(points);
			for (int i = points; i > 1; --i) {
				ncordx[points - i].resize(i);
				ncordy[points - i].resize(i);
			}
			ncordx[0] = cordx;
			ncordy[0] = cordy;
			ncordx[1] = cordx;
			ncordy[1] = cordy;

			beziercordx.clear();
			beziercordy.clear();
			for (double i = 0.0f; i < 1; i += 0.004) {
				for (int j = 2; j < points; ++j) {
					ncordx[j] = ncordx[j - 1];
					ncordy[j] = ncordy[j - 1];
					Newcord(j, i);
					BuildLine2(j);
				}
				FindBezier(i);
				DrawBezier();
				_sleep(60);
				g->Clear(Color::White);
				DrawEllipses();
				BuildLine1();
			}
			DrawBezier();
		}
		catch (String^ s) {
			MessageBox::Show(s);
		}
	}
	private: void workofbuttonbuildwithcurves() {
		try {
			if (points < 2) {
				String^ s = "Exception 1: Not enough points. Put at least 2 points";
				throw s;
			}
			if (points > 30) {
				String^ s = "Exception 2: Too much points. Put less points";
				throw s;
			}
			Graphics^ g = pictureBox1->CreateGraphics();
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
			g->Clear(Color::White);
			DrawEllipses();
			BuildLine1();
			ncordx.resize(points);
			ncordy.resize(points);
			for (int i = points; i > 1; --i) {
				ncordx[points - i].resize(i);
				ncordy[points - i].resize(i);
			}
			ncordx[0] = cordx;
			ncordy[0] = cordy;
			ncordx[1] = cordx;
			ncordy[1] = cordy;

			beziercordx.clear();
			beziercordy.clear();
			for (double i = 0.0f; i < 1; i += 0.003) {
				for (int j = 2; j < points; ++j) {
					ncordx[j] = ncordx[j - 1];
					ncordy[j] = ncordy[j - 1];
					Newcord(j, i);
					BuildLine2(j);
				}
				FindBezier(i);
				DrawBezier();
				_sleep(30);
			}
		}
		catch (String^ s) {
			MessageBox::Show(s);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		th1 = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(this, &MyForm::workofbuttonbuild));
		th1->Start();
		thc1 = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		th2 = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(this, &MyForm::workofbuttonbuildwithcurves));
		th2->Start();
		thc2 = true;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	Graphics^ g = pictureBox1->CreateGraphics();
	g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
	g->Clear(Color::White);
	points = 0;
	label1->Text = points.ToString();
	cordx.clear();
	cordy.clear();
	ncordx.clear();
	ncordy.clear();
	if (thc1) {
		th1->Abort();
		thc1 = false;
	}
	if (thc2) {
		th2->Abort();
		thc2 = false;
	}
}
private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	cordx.push_back(e->X);
	cordy.push_back(e->Y);
	Graphics^ g = pictureBox1->CreateGraphics();;
	g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
	Pen^ pen1 = gcnew Pen(Brushes::Black);
	pen1->Width = 5.0f;
	g->DrawEllipse(pen1, e->X, e->Y, 5, 5);
	points++;
	label1->Text = points.ToString();
	BuildLine1();

}
};
}