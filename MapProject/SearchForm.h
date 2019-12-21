#pragma once
#include "Consumer.h"
#include "MyMap.h"

namespace MapProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		static MyMap<String^, Consumer>^ map = gcnew MyMap<String^, Consumer>();
		SearchForm(MyMap<String^, Consumer>^ map)
		{
			InitializeComponent();
			this->map = map;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxKey;
	protected:

	protected:
	private: System::Windows::Forms::Button^  OK;
	private: System::Windows::Forms::Button^  Cancel;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxKey = (gcnew System::Windows::Forms::TextBox());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxKey
			// 
			this->textBoxKey->Location = System::Drawing::Point(195, 47);
			this->textBoxKey->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxKey->Name = L"textBoxKey";
			this->textBoxKey->Size = System::Drawing::Size(245, 22);
			this->textBoxKey->TabIndex = 0;
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(257, 106);
			this->OK->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(89, 28);
			this->OK->TabIndex = 1;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &SearchForm::OK_Click);
			// 
			// Cancel
			// 
			this->Cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Cancel->Location = System::Drawing::Point(129, 106);
			this->Cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(89, 28);
			this->Cancel->TabIndex = 2;
			this->Cancel->Text = L"Отмена";
			this->Cancel->UseVisualStyleBackColor = true;
			this->Cancel->Click += gcnew System::EventHandler(this, &SearchForm::Cancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 50);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Ключ поиска";
			// 
			// SearchForm
			// 
			this->AcceptButton = this->OK;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->Cancel;
			this->ClientSize = System::Drawing::Size(477, 155);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->textBoxKey);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"SearchForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поиск";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void OK_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Consumer^ x = map[textBoxKey->Text];
		if (x != nullptr)
			MessageBox::Show(
				"Абонент: " + x->surname + " " "\nПаспортные данные:  "  + "\n\tНомер: " + x->number + "\nТелефон: +7 " + x->tel, "Результаты поиска в словаре" ,
				MessageBoxButtons::OK
			);
		else MessageBox::Show("Элемент с данным ключом не найден.", "Результаты поиска в словаре");
		this->Close();
	}
	};
}
