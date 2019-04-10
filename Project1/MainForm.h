#pragma once

#include <string>
#include "TextTabPage.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	const std::string FilePathByDefault = "Unknown.txt";
	const std::string LogFilePath = "Log.txt";

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	private: 
		System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripButton^  CompileCodeButton;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  LaunchButton;
	private: System::Windows::Forms::RichTextBox^  CompilingResultsTextBox;




	protected:	
		String^ FilePath = gcnew String(FilePathByDefault.c_str());

		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->CompileCodeButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->LaunchButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->CompilingResultsTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3)
			{
				this->fileToolStripMenuItem,
					this->������ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(663, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7)
			{
				this->�������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->���������ToolStripMenuItem, this->������������ToolStripMenuItem, this->�����������������ToolStripMenuItem,
					this->toolStripMenuItem1, this->�����ToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->fileToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::���������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->������������ToolStripMenuItem->Text = L"��������� ���...";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::������������ToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->�����������������ToolStripMenuItem->Text = L"��������� ��� �����...";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�����������������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(272, 6);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// tabControl1
			// 
			this->tabControl1->AllowDrop = true;
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tabControl1->Location = System::Drawing::Point(0, 24);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(663, 129);
			this->tabControl1->TabIndex = 2;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2)
			{
				this->CompileCodeButton,
					this->LaunchButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 153);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(663, 25);
			this->toolStrip1->Stretch = true;
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// CompileCodeButton
			// 
			this->CompileCodeButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->CompileCodeButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CompileCodeButton.Image")));
			this->CompileCodeButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->CompileCodeButton->Name = L"CompileCodeButton";
			this->CompileCodeButton->Size = System::Drawing::Size(23, 22);
			this->CompileCodeButton->Text = L"CompileCodeButton";
			this->CompileCodeButton->Click += gcnew System::EventHandler(this, &MainForm::CompileCodeButton_Click);
			// 
			// LaunchButton
			// 
			this->LaunchButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->LaunchButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LaunchButton.Image")));
			this->LaunchButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->LaunchButton->Name = L"LaunchButton";
			this->LaunchButton->Size = System::Drawing::Size(23, 22);
			this->LaunchButton->Text = L"LaunchButton";
			this->LaunchButton->Click += gcnew System::EventHandler(this, &MainForm::LaunchButton_Click);
			// 
			// CompilingResultsTextBox
			// 
			this->CompilingResultsTextBox->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->CompilingResultsTextBox->Location = System::Drawing::Point(0, 185);
			this->CompilingResultsTextBox->Name = L"CompilingResultsTextBox";
			this->CompilingResultsTextBox->ReadOnly = true;
			this->CompilingResultsTextBox->Size = System::Drawing::Size(663, 96);
			this->CompilingResultsTextBox->TabIndex = 6;
			this->CompilingResultsTextBox->Text = L"";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(663, 281);
			this->Controls->Add(this->CompilingResultsTextBox);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		���������ToolStripMenuItem->Enabled = false;
		������������ToolStripMenuItem->Enabled = false;
		�����������������ToolStripMenuItem->Enabled = false;
	}

	private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (Windows::Forms::DialogResult::OK == saveFileDialog1->ShowDialog())
		{
			TextTabPage^ NewTab = gcnew TextTabPage(saveFileDialog1->FileName);
			NewTab->SaveFile();
			tabControl1->TabPages->Add(NewTab);
			tabControl1->SelectedTab = NewTab;
		}

		���������ToolStripMenuItem->Enabled = true;
		������������ToolStripMenuItem->Enabled = true;
		�����������������ToolStripMenuItem->Enabled = true;
	}

	private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (Windows::Forms::DialogResult::OK == openFileDialog1->ShowDialog())
		{
			FilePath = openFileDialog1->FileName;
			TextTabPage^ OpenedFileTab = gcnew TextTabPage(FilePath);
			OpenedFileTab->LoadFile();
			tabControl1->TabPages->Add(OpenedFileTab);
			tabControl1->SelectedTab = OpenedFileTab;
		}

		���������ToolStripMenuItem->Enabled = true;
		������������ToolStripMenuItem->Enabled = true;
		�����������������ToolStripMenuItem->Enabled = true;
	}

String ^ StdToSys(std::string text)
{
	return gcnew String(text.c_str());
}

std::string SysToStd(String ^ s)
{
	std::string os;
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}

private: System::Void ���������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	static_cast<TextTabPage^>(tabControl1->SelectedTab)->SaveFile();
}


private: System::Void ������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{		
	TextTabPage^ SelectedTab = static_cast<TextTabPage^>(tabControl1->SelectedTab);
	saveFileDialog1->FileName = TextTabPage::CutFilePathToFileName(SelectedTab->GetFilePath());
	if (Windows::Forms::DialogResult::OK == saveFileDialog1->ShowDialog())
	{
		SelectedTab->SetFilePath(saveFileDialog1->FileName);
		SelectedTab->SaveFile();
	}
}
private: System::Void �����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Collections::IEnumerator ^ Enumerator = tabControl1->TabPages->GetEnumerator();
	while(Enumerator->MoveNext())
	{
		TextTabPage^ TextPage = static_cast<TextTabPage^>((Enumerator->Current));
		TextPage->SaveFile();
	}
}
private: System::Void CompileCodeButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	TextTabPage^ SelectedTab = static_cast<TextTabPage^>(tabControl1->SelectedTab);
	String^ filename = SelectedTab->GetFilePath();
	String^ execname = TextTabPage::GetFileNameWithoutFormat(filename);

	char str[300];

	sprintf_s(str, "g++ %s -o %s 2>> %s", SysToStd(filename).c_str(), SysToStd(execname).c_str(), LogFilePath.c_str());
	system(str);
	CompilingResultsTextBox->LoadFile(StdToSys(LogFilePath), RichTextBoxStreamType::PlainText);
	LPCTSTR filepath = (TCHAR*)(LogFilePath.c_str());
	DeleteFile(L"D:\\Code\\Dyploma\\Project1\\Log.txt");
}
private: System::Void LaunchButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	TextTabPage^ SelectedTab = static_cast<TextTabPage^>(tabControl1->SelectedTab);
	String^ filename = SelectedTab->GetFilePath();
	String^ execname = TextTabPage::GetFileNameWithoutFormat(filename);

	char str[300];

	sprintf_s(str, "%s.exe && pause", SysToStd(execname).c_str());// , LogFilePath.c_str());
	system(str);
}
};
}
