#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class TextTabPage : TabPage
{
public:
	TextTabPage();
	TextTabPage(String^ TabName);

	void SaveFile();
	void LoadFile();

	String^ GetFilePath();

	void SetFilePath(String^ NewFilePath);

	static String^ CutFilePathToFileName(String^ FilePath);

private:	
	RichTextBox^ TextBox;
	String^ FilePath;
	
};

