#pragma once

namespace Win32NET {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
public ref class MyForm : public System::Windows::Forms::Form
{
public:
	MyForm(void)
	{
		InitializeComponent();
		//webBrowser1->Navigate("www.ya.ru");
		//
		//TODO: добавьте код конструктора
		//
	}

protected:
	/// <summary>
	/// Освободить все используемые ресурсы.
	/// </summary>
	~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}
private: System::Windows::Forms::Label^ label1;
protected:
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::RadioButton^ radioButton5;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;


private:
	/// <summary>
	/// Обязательная переменная конструктора.
	/// </summary>
	System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Требуемый метод для поддержки конструктора — не изменяйте 
	/// содержимое этого метода с помощью редактора кода.
	/// </summary>
	void InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
		this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
		this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
		this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
		this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
		this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
		this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
		this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
		this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
		this->groupBox1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		this->SuspendLayout();
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(81, 63);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(113, 13);
		this->label1->TabIndex = 0;
		this->label1->Text = L"Всем хорошего утра!";
		// 
		// comboBox1
		// 
		this->comboBox1->FormattingEnabled = true;
		this->comboBox1->Location = System::Drawing::Point(738, 54);
		this->comboBox1->Name = L"comboBox1";
		this->comboBox1->Size = System::Drawing::Size(211, 21);
		this->comboBox1->TabIndex = 1;
		this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(341, 264);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(133, 23);
		this->button1->TabIndex = 2;
		this->button1->Text = L"Нажми меня";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		// 
		// checkBox1
		// 
		this->checkBox1->AutoSize = true;
		this->checkBox1->Location = System::Drawing::Point(84, 113);
		this->checkBox1->Name = L"checkBox1";
		this->checkBox1->Size = System::Drawing::Size(80, 17);
		this->checkBox1->TabIndex = 3;
		this->checkBox1->Text = L"checkBox1";
		this->checkBox1->UseVisualStyleBackColor = true;
		// 
		// checkBox2
		// 
		this->checkBox2->AutoSize = true;
		this->checkBox2->Location = System::Drawing::Point(84, 151);
		this->checkBox2->Name = L"checkBox2";
		this->checkBox2->Size = System::Drawing::Size(80, 17);
		this->checkBox2->TabIndex = 4;
		this->checkBox2->Text = L"checkBox2";
		this->checkBox2->UseVisualStyleBackColor = true;
		// 
		// radioButton1
		// 
		this->radioButton1->AutoSize = true;
		this->radioButton1->Location = System::Drawing::Point(84, 223);
		this->radioButton1->Name = L"radioButton1";
		this->radioButton1->Size = System::Drawing::Size(85, 17);
		this->radioButton1->TabIndex = 5;
		this->radioButton1->TabStop = true;
		this->radioButton1->Text = L"radioButton1";
		this->radioButton1->UseVisualStyleBackColor = true;
		// 
		// radioButton2
		// 
		this->radioButton2->AutoSize = true;
		this->radioButton2->Location = System::Drawing::Point(84, 263);
		this->radioButton2->Name = L"radioButton2";
		this->radioButton2->Size = System::Drawing::Size(85, 17);
		this->radioButton2->TabIndex = 6;
		this->radioButton2->TabStop = true;
		this->radioButton2->Text = L"radioButton2";
		this->radioButton2->UseVisualStyleBackColor = true;
		// 
		// radioButton3
		// 
		this->radioButton3->AutoSize = true;
		this->radioButton3->Location = System::Drawing::Point(84, 307);
		this->radioButton3->Name = L"radioButton3";
		this->radioButton3->Size = System::Drawing::Size(85, 17);
		this->radioButton3->TabIndex = 7;
		this->radioButton3->TabStop = true;
		this->radioButton3->Text = L"radioButton3";
		this->radioButton3->UseVisualStyleBackColor = true;
		// 
		// dateTimePicker1
		// 
		this->dateTimePicker1->Location = System::Drawing::Point(84, 357);
		this->dateTimePicker1->Name = L"dateTimePicker1";
		this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
		this->dateTimePicker1->TabIndex = 8;
		// 
		// groupBox1
		// 
		this->groupBox1->Controls->Add(this->radioButton4);
		this->groupBox1->Controls->Add(this->radioButton5);
		this->groupBox1->Location = System::Drawing::Point(273, 429);
		this->groupBox1->Name = L"groupBox1";
		this->groupBox1->Size = System::Drawing::Size(200, 100);
		this->groupBox1->TabIndex = 9;
		this->groupBox1->TabStop = false;
		this->groupBox1->Text = L"groupBox1";
		// 
		// radioButton4
		// 
		this->radioButton4->AutoSize = true;
		this->radioButton4->Location = System::Drawing::Point(44, 32);
		this->radioButton4->Name = L"radioButton4";
		this->radioButton4->Size = System::Drawing::Size(85, 17);
		this->radioButton4->TabIndex = 8;
		this->radioButton4->TabStop = true;
		this->radioButton4->Text = L"radioButton4";
		this->radioButton4->UseVisualStyleBackColor = true;
		// 
		// radioButton5
		// 
		this->radioButton5->AutoSize = true;
		this->radioButton5->Location = System::Drawing::Point(44, 68);
		this->radioButton5->Name = L"radioButton5";
		this->radioButton5->Size = System::Drawing::Size(85, 17);
		this->radioButton5->TabIndex = 7;
		this->radioButton5->TabStop = true;
		this->radioButton5->Text = L"radioButton5";
		this->radioButton5->UseVisualStyleBackColor = true;
		// 
		// pictureBox1
		// 
		this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
		this->pictureBox1->Location = System::Drawing::Point(562, 151);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(619, 353);
		this->pictureBox1->TabIndex = 10;
		this->pictureBox1->TabStop = false;
		// 
		// openFileDialog1
		// 
		this->openFileDialog1->FileName = L"openFileDialog1";
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1440, 560);
		this->Controls->Add(this->pictureBox1);
		this->Controls->Add(this->groupBox1);
		this->Controls->Add(this->dateTimePicker1);
		this->Controls->Add(this->radioButton3);
		this->Controls->Add(this->radioButton2);
		this->Controls->Add(this->radioButton1);
		this->Controls->Add(this->checkBox2);
		this->Controls->Add(this->checkBox1);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->comboBox1);
		this->Controls->Add(this->label1);
		this->Name = L"MyForm";
		this->Text = L"Моя программа";
		this->groupBox1->ResumeLayout(false);
		this->groupBox1->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}

#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (comboBox1->Items->Count == 0)
	{
		comboBox1->Items->Add("Hello");
		comboBox1->Items->Add("Good morning");
		comboBox1->Items->Add("GoodBuy");
	}

}


private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = ((ComboBox^)sender)->SelectedItem->ToString();

}
};

	
}


