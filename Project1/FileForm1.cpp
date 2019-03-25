#include "FileForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main2(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::FileForm form;
	Application::Run(%form);
}