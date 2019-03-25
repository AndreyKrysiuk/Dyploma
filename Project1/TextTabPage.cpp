#include "TextTabPage.h"



TextTabPage::TextTabPage()
{
	TextBox = gcnew RichTextBox();
	TextBox->Dock = DockStyle::Fill;
	this->Controls->Add(TextBox);
}

TextTabPage::TextTabPage(String^ FilePath)
{
	TextBox = gcnew RichTextBox();
	TextBox->Dock = DockStyle::Fill;
	this->Controls->Add(TextBox);
	this->Text = CutFilePathToFileName(FilePath);
	this->FilePath = FilePath;

}

void TextTabPage::SaveFile()
{
	TextBox->SaveFile(this->FilePath, RichTextBoxStreamType::PlainText);
}

void TextTabPage::LoadFile()
{
	TextBox->LoadFile(this->FilePath, RichTextBoxStreamType::PlainText);
}

String ^ TextTabPage::CutFilePathToFileName(String ^ FilePath)
{
	String^ FileName = FilePath;
	int index = FileName->LastIndexOf("\\");
	FileName = FileName->Substring(index + 1);
	return FileName;
}

String^ TextTabPage::GetFilePath() 
{
	return FilePath;
}

void TextTabPage::SetFilePath(String^ NewFilePath)
{
	this->FilePath = NewFilePath;
	this->Text = CutFilePathToFileName(NewFilePath);
}

