#include "MyForm.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;



[STAThreadAttribute]
void main(array<String^>^ args) {
	
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kalkulator::MyForm form;
	Application::Run(%form);
}