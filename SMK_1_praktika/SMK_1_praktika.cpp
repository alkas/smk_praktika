#include "pch.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "mainForm.h"
#include "frSkaiciuotuvas.h"

using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args)
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew SMK_1_praktika::mainForm());
  return 0;
}