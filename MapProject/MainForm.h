#pragma once
#include "abonent.h"
#include "slovar.h"


namespace dictionary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		static slovar<String^, abonent>^ map = gcnew slovar<String^, abonent>();
	private: System::Windows::Forms::GroupBox^  groupBox1;
	public:
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;

	public:




			 static String^ key = nullptr;
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Button^  SaveButton;

	private: System::Windows::Forms::Button^  OpenButton;


	private: System::Windows::Forms::ListBox^  listBoxElements;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  AddButton;
	private: System::Windows::Forms::Button^  EraseButton;
	private: System::Windows::Forms::Button^  SearchButton;



	private: System::Windows::Forms::Button^  ChangeButton;
	private: System::Windows::Forms::Button^  SortButton;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  GetElement;


	private: System::Windows::Forms::TextBox^  textBoxSurname;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxNumber;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxTelephone;
	private: System::Windows::Forms::Label^  label6;





	protected:

	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->OpenButton = (gcnew System::Windows::Forms::Button());
			this->listBoxElements = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->EraseButton = (gcnew System::Windows::Forms::Button());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->ChangeButton = (gcnew System::Windows::Forms::Button());
			this->SortButton = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->GetElement = (gcnew System::Windows::Forms::Button());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTelephone = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// SaveButton
			// 
			this->SaveButton->Location = System::Drawing::Point(34, 94);
			this->SaveButton->Margin = System::Windows::Forms::Padding(2);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(137, 50);
			this->SaveButton->TabIndex = 4;
			this->SaveButton->Text = L"Запись словаря в файл";
			this->SaveButton->UseVisualStyleBackColor = true;
			this->SaveButton->Click += gcnew System::EventHandler(this, &MainForm::SaveButton_Click);
			// 
			// OpenButton
			// 
			this->OpenButton->Location = System::Drawing::Point(34, 18);
			this->OpenButton->Margin = System::Windows::Forms::Padding(2);
			this->OpenButton->Name = L"OpenButton";
			this->OpenButton->Size = System::Drawing::Size(137, 55);
			this->OpenButton->TabIndex = 3;
			this->OpenButton->Text = L"Считывание словаря ";
			this->OpenButton->UseVisualStyleBackColor = true;
			this->OpenButton->Click += gcnew System::EventHandler(this, &MainForm::OpenButton_Click);
			// 
			// listBoxElements
			// 
			this->listBoxElements->FormattingEnabled = true;
			this->listBoxElements->Location = System::Drawing::Point(24, 40);
			this->listBoxElements->Margin = System::Windows::Forms::Padding(2);
			this->listBoxElements->Name = L"listBoxElements";
			this->listBoxElements->Size = System::Drawing::Size(203, 212);
			this->listBoxElements->TabIndex = 6;
			this->listBoxElements->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBoxElements_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Элементы словаря";
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(110, 18);
			this->AddButton->Margin = System::Windows::Forms::Padding(2);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(144, 60);
			this->AddButton->TabIndex = 6;
			this->AddButton->Text = L"Добавление элемента в словарь";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &MainForm::AddButton_Click);
			// 
			// EraseButton
			// 
			this->EraseButton->Enabled = false;
			this->EraseButton->Location = System::Drawing::Point(24, 75);
			this->EraseButton->Margin = System::Windows::Forms::Padding(2);
			this->EraseButton->Name = L"EraseButton";
			this->EraseButton->Size = System::Drawing::Size(202, 53);
			this->EraseButton->TabIndex = 7;
			this->EraseButton->Text = L"Исключение элемента из словаря";
			this->EraseButton->UseVisualStyleBackColor = true;
			this->EraseButton->Click += gcnew System::EventHandler(this, &MainForm::EraseButton_Click);
			// 
			// SearchButton
			// 
			this->SearchButton->Location = System::Drawing::Point(106, 55);
			this->SearchButton->Margin = System::Windows::Forms::Padding(2);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(144, 59);
			this->SearchButton->TabIndex = 9;
			this->SearchButton->Text = L"Поиск элемента словаря по ключу";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &MainForm::SearchButton_Click);
			// 
			// ChangeButton
			// 
			this->ChangeButton->Enabled = false;
			this->ChangeButton->Location = System::Drawing::Point(25, 132);
			this->ChangeButton->Margin = System::Windows::Forms::Padding(2);
			this->ChangeButton->Name = L"ChangeButton";
			this->ChangeButton->Size = System::Drawing::Size(202, 55);
			this->ChangeButton->TabIndex = 8;
			this->ChangeButton->Text = L"Изменение значения элемента";
			this->ChangeButton->UseVisualStyleBackColor = true;
			this->ChangeButton->Click += gcnew System::EventHandler(this, &MainForm::ChangeButton_Click);
			// 
			// SortButton
			// 
			this->SortButton->Location = System::Drawing::Point(24, 191);
			this->SortButton->Margin = System::Windows::Forms::Padding(2);
			this->SortButton->Name = L"SortButton";
			this->SortButton->Size = System::Drawing::Size(202, 48);
			this->SortButton->TabIndex = 10;
			this->SortButton->Text = L"Вывод словаря в порядке возрастания ключей";
			this->SortButton->UseVisualStyleBackColor = true;
			this->SortButton->Click += gcnew System::EventHandler(this, &MainForm::SortButton_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"txt";
			this->saveFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"txt";
			this->openFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt";
			// 
			// GetElement
			// 
			this->GetElement->Enabled = false;
			this->GetElement->Location = System::Drawing::Point(25, 18);
			this->GetElement->Margin = System::Windows::Forms::Padding(2);
			this->GetElement->Name = L"GetElement";
			this->GetElement->Size = System::Drawing::Size(202, 53);
			this->GetElement->TabIndex = 5;
			this->GetElement->Text = L"Просмотреть элемент словаря";
			this->GetElement->UseVisualStyleBackColor = true;
			this->GetElement->Click += gcnew System::EventHandler(this, &MainForm::GetElement_Click);
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Location = System::Drawing::Point(110, 83);
			this->textBoxSurname->MaxLength = 20;
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(144, 20);
			this->textBoxSurname->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(70, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"ФИО";
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Location = System::Drawing::Point(110, 115);
			this->textBoxNumber->MaxLength = 10;
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(144, 20);
			this->textBoxNumber->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(57, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Паспорт";
			// 
			// textBoxTelephone
			// 
			this->textBoxTelephone->Location = System::Drawing::Point(106, 30);
			this->textBoxTelephone->MaxLength = 10;
			this->textBoxTelephone->Name = L"textBoxTelephone";
			this->textBoxTelephone->Size = System::Drawing::Size(144, 20);
			this->textBoxTelephone->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Номер телефона";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->AddButton);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBoxSurname);
			this->groupBox1->Controls->Add(this->textBoxNumber);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 279);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление и сортировка";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxTelephone);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->SearchButton);
			this->groupBox2->Location = System::Drawing::Point(4, 141);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(274, 121);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Сортировка";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->OpenButton);
			this->groupBox3->Controls->Add(this->SaveButton);
			this->groupBox3->Location = System::Drawing::Point(16, 297);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 168);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Работа с файлами";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->listBoxElements);
			this->groupBox4->Location = System::Drawing::Point(312, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(246, 279);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Словарь";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->GetElement);
			this->groupBox5->Controls->Add(this->EraseButton);
			this->groupBox5->Controls->Add(this->ChangeButton);
			this->groupBox5->Controls->Add(this->SortButton);
			this->groupBox5->Location = System::Drawing::Point(312, 297);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(246, 244);
			this->groupBox5->TabIndex = 22;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Работа со словарём";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(570, 561);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Телефонная книга";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void listBoxElements_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	bool a = (listBoxElements->SelectedIndex != -1);
	GetElement->Enabled = a;
	EraseButton->Enabled = a;
	ChangeButton->Enabled = a;
	textBoxTelephone->Enabled = !a;

}
private: System::Void OpenButton_Click(System::Object^  sender, System::EventArgs^  e) {
	abonent^ cons_buf = gcnew abonent();
	slovar<String^, abonent>^ map_buf = gcnew slovar<String^, abonent>();
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->RestoreDirectory = true;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
		String^ buf;
		while ((buf = sr->ReadLine()) != nullptr)
		{
			cons_buf->surname = buf->Substring(0, buf->IndexOf(" "));
			buf = buf->Remove(0, buf->IndexOf(" ") + 1);
			cons_buf->number = buf->Substring(0, buf->IndexOf(" "));
			buf = buf->Remove(0, buf->IndexOf(" ") + 1);
			cons_buf->tel = buf->Substring(buf->IndexOf("+7") + 2);
			buf = buf->Remove(0, buf->IndexOf(" "));

			map_buf->insert(cons_buf->tel, *cons_buf);
		}


		sr->Close();
		map = map_buf;
		listBoxElements->Items->Clear();
		for (int i = 0; i < map->size(); i++)
			listBoxElements->Items->Add("+7 " + map->at(i)->key);
	}
}
private: System::Void SaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
	StreamWriter^ sr = gcnew StreamWriter(saveFileDialog1->FileName);

		for (int i = 0; i < map->size(); i++)
		{
			sr->Write(map->at(i)->value.surname);
			sr->Write(" ");
			sr->Write(map->at(i)->value.number);
			sr->Write(" +7 ");
			sr->WriteLine(map->at(i)->value.tel);
		}
		sr->Close();
	}
}
private: System::Void GetElement_Click(System::Object^  sender, System::EventArgs^  e) {
	abonent x = map->at(listBoxElements->SelectedIndex)->value;
	MessageBox::Show(
		"ФИО: " + x.surname  + "\nПаспорт: "   + x.number + "\nТелефон: +7 " + x.tel, "Просмотр данных абонента",
		MessageBoxButtons::OK
	);
	textBoxTelephone->Enabled = true;
	GetElement->Enabled = false;
	EraseButton->Enabled = false;
	ChangeButton->Enabled = false;
}
private: System::Void AddButton_Click(System::Object^  sender, System::EventArgs^  e) {
	abonent^ x = gcnew abonent();
	x->surname = textBoxSurname->Text;
	x->number = textBoxNumber->Text;
	x->tel = textBoxTelephone->Text;
	if (key == nullptr)
	{
		if (!map->insert(x->tel, *x))
			MessageBox::Show("Элемент с данным ключом уже инициализирован.", "Ошибка");
	}
	else
	{
		map->change(key, *x);
	}
	listBoxElements->Items->Clear();
	for (int i = 0; i < map->size(); i++)
		listBoxElements->Items->Add("+7 " + map->at(i)->key);

}
private: System::Void EraseButton_Click(System::Object^  sender, System::EventArgs^  e) {
	map->erase(listBoxElements->SelectedItem->ToString()->Substring(3));
	listBoxElements->Items->Clear();
	for (int i = 0; i < map->size(); i++)
		listBoxElements->Items->Add("+7 " + map->at(i)->key);
	listBoxElements_SelectedIndexChanged(sender, e);
}
private: System::Void ChangeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	abonent^ x = gcnew abonent();
	x->surname = textBoxSurname->Text;
	x->number = textBoxNumber->Text;
	x->tel = textBoxTelephone->Text;
	if (map->at(listBoxElements->SelectedIndex)->key == nullptr){
		if (!map->insert(x->tel, *x))
			MessageBox::Show("Элемент с данным ключом уже инициализирован.", "Ошибка");
	}
	else{
		map->change(map->at(listBoxElements->SelectedIndex)->key, *x);
	}
	listBoxElements->Items->Clear();
	for (int i = 0; i < map->size(); i++)
		listBoxElements->Items->Add("+7 " + map->at(i)->key);			     
	listBoxElements_SelectedIndexChanged(sender, e);
}
private: System::Void SearchButton_Click(System::Object^  sender, System::EventArgs^  e) {
	abonent^ x = map[textBoxTelephone->Text];
	if (x != nullptr)
		MessageBox::Show(
			"ФИО: " + x->surname + " " "\nПаспорт:  "  + x->number + "\nТелефон:  +7 " + x->tel, "Результаты поиска",
			MessageBoxButtons::OK
		);
	else MessageBox::Show("Элемент с данным ключом не обнаружен.", "Результат поиска");
}
private: System::Void SortButton_Click(System::Object^  sender, System::EventArgs^  e) {
	map->sort();
	listBoxElements->Items->Clear();
	for (int i = 0; i < map->size(); i++)
		listBoxElements->Items->Add("+7 " + map->at(i)->key);
	listBoxElements_SelectedIndexChanged(sender, e);
	MessageBox::Show("Словарь отсортирован.", "Сортировка");
}
};
}
