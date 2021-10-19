#pragma once

namespace Naukas³ówek {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::TabControl^ tc_words;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tp_nauka;
	private: System::Windows::Forms::TabPage^ tp_words;

	private: System::Windows::Forms::Label^ lab_word;
	private: System::Windows::Forms::RadioButton^ rb_ger;

	private: System::Windows::Forms::RadioButton^ rb_eng;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dgv_words;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_polish;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_eng;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_ger;
	private: System::Windows::Forms::Button^ bt_save;
	private: System::Windows::Forms::Button^ bt_load;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;





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
			this->tc_words = (gcnew System::Windows::Forms::TabControl());
			this->tp_nauka = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lab_word = (gcnew System::Windows::Forms::Label());
			this->rb_ger = (gcnew System::Windows::Forms::RadioButton());
			this->rb_eng = (gcnew System::Windows::Forms::RadioButton());
			this->tp_words = (gcnew System::Windows::Forms::TabPage());
			this->bt_load = (gcnew System::Windows::Forms::Button());
			this->dgv_words = (gcnew System::Windows::Forms::DataGridView());
			this->col_polish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_eng = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_ger = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bt_save = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tc_words->SuspendLayout();
			this->tp_nauka->SuspendLayout();
			this->tp_words->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_words))->BeginInit();
			this->SuspendLayout();
			// 
			// tc_words
			// 
			this->tc_words->Controls->Add(this->tp_nauka);
			this->tc_words->Controls->Add(this->tp_words);
			this->tc_words->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->tc_words->Location = System::Drawing::Point(13, 12);
			this->tc_words->Name = L"tc_words";
			this->tc_words->SelectedIndex = 0;
			this->tc_words->Size = System::Drawing::Size(477, 349);
			this->tc_words->TabIndex = 0;
			// 
			// tp_nauka
			// 
			this->tp_nauka->Controls->Add(this->textBox1);
			this->tp_nauka->Controls->Add(this->lab_word);
			this->tp_nauka->Controls->Add(this->rb_ger);
			this->tp_nauka->Controls->Add(this->rb_eng);
			this->tp_nauka->Location = System::Drawing::Point(4, 40);
			this->tp_nauka->Name = L"tp_nauka";
			this->tp_nauka->Padding = System::Windows::Forms::Padding(3);
			this->tp_nauka->Size = System::Drawing::Size(469, 305);
			this->tp_nauka->TabIndex = 0;
			this->tp_nauka->Text = L"Nauka";
			this->tp_nauka->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(25, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(208, 38);
			this->textBox1->TabIndex = 2;
			// 
			// lab_word
			// 
			this->lab_word->AutoSize = true;
			this->lab_word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->lab_word->Location = System::Drawing::Point(19, 31);
			this->lab_word->Name = L"lab_word";
			this->lab_word->Size = System::Drawing::Size(278, 31);
			this->lab_word->TabIndex = 1;
			this->lab_word->Text = L"wylosowane s³ówko...";
			// 
			// rb_ger
			// 
			this->rb_ger->AutoSize = true;
			this->rb_ger->Location = System::Drawing::Point(25, 221);
			this->rb_ger->Name = L"rb_ger";
			this->rb_ger->Size = System::Drawing::Size(150, 35);
			this->rb_ger->TabIndex = 1;
			this->rb_ger->Text = L"Niemiecki";
			this->rb_ger->UseVisualStyleBackColor = true;
			// 
			// rb_eng
			// 
			this->rb_eng->AutoSize = true;
			this->rb_eng->Checked = true;
			this->rb_eng->Location = System::Drawing::Point(25, 153);
			this->rb_eng->Name = L"rb_eng";
			this->rb_eng->Size = System::Drawing::Size(141, 35);
			this->rb_eng->TabIndex = 0;
			this->rb_eng->TabStop = true;
			this->rb_eng->Text = L"Angielski";
			this->rb_eng->UseVisualStyleBackColor = true;
			// 
			// tp_words
			// 
			this->tp_words->Controls->Add(this->bt_load);
			this->tp_words->Controls->Add(this->dgv_words);
			this->tp_words->Controls->Add(this->bt_save);
			this->tp_words->Location = System::Drawing::Point(4, 40);
			this->tp_words->Name = L"tp_words";
			this->tp_words->Padding = System::Windows::Forms::Padding(3);
			this->tp_words->Size = System::Drawing::Size(469, 305);
			this->tp_words->TabIndex = 1;
			this->tp_words->Text = L"S³ówka";
			this->tp_words->UseVisualStyleBackColor = true;
			// 
			// bt_load
			// 
			this->bt_load->Location = System::Drawing::Point(345, 263);
			this->bt_load->Name = L"bt_load";
			this->bt_load->Size = System::Drawing::Size(124, 42);
			this->bt_load->TabIndex = 2;
			this->bt_load->Text = L"Za³aduj";
			this->bt_load->UseVisualStyleBackColor = true;
			// 
			// dgv_words
			// 
			this->dgv_words->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_words->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->col_polish,
					this->col_eng, this->col_ger
			});
			this->dgv_words->Location = System::Drawing::Point(0, 0);
			this->dgv_words->Name = L"dgv_words";
			this->dgv_words->Size = System::Drawing::Size(473, 264);
			this->dgv_words->TabIndex = 0;
			// 
			// col_polish
			// 
			this->col_polish->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->col_polish->HeaderText = L"Polski";
			this->col_polish->Name = L"col_polish";
			// 
			// col_eng
			// 
			this->col_eng->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->col_eng->HeaderText = L"Angielski";
			this->col_eng->Name = L"col_eng";
			// 
			// col_ger
			// 
			this->col_ger->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->col_ger->HeaderText = L"Niemiecki";
			this->col_ger->Name = L"col_ger";
			// 
			// bt_save
			// 
			this->bt_save->Location = System::Drawing::Point(0, 263);
			this->bt_save->Name = L"bt_save";
			this->bt_save->Size = System::Drawing::Size(114, 42);
			this->bt_save->TabIndex = 1;
			this->bt_save->Text = L"Zapisz";
			this->bt_save->UseVisualStyleBackColor = true;
			this->bt_save->Click += gcnew System::EventHandler(this, &MyForm::bt_save_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 373);
			this->Controls->Add(this->tc_words);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tc_words->ResumeLayout(false);
			this->tp_nauka->ResumeLayout(false);
			this->tp_nauka->PerformLayout();
			this->tp_words->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_words))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void save()
		{
			saveFileDialog1->Filter =
				"Pliki textowe (*.txt)|*.txt|Wszystkie pliki (*.*)|*.*";
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				StreamWriter^ f = gcnew StreamWriter(saveFileDialog1->FileName);
				for (System::Int32 j = 0; j < dgv_words->RowCount - 1; j++)
				{
					f->WriteLine(dgv_words->Rows[j]->Cells[0]->Value->ToString());
					f->WriteLine(dgv_words->Rows[j]->Cells[1]->Value->ToString());
					f->WriteLine(dgv_words->Rows[j]->Cells[2]->Value->ToString());
					f->WriteLine(dgv_words->Rows[j]->Cells[3]->Value->ToString());
				}
				f->Close();
			}
		}
private: System::Void bt_save_Click(System::Object^ sender, System::EventArgs^ e)
{
	save();
}
};
}
