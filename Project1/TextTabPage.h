#pragma once
#include "resource.h"
#include <Windows.h>
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
	static String^ GetFileNameWithoutFormat(String^ FileName);

private:	
	RichTextBox^ TextBox;
	String^ FilePath;
	
	Point* imageLocation = new Point(13, 5);
	Point* imageHitArea = new Point(13, 2);
	Image^ closeImage;
	


};

