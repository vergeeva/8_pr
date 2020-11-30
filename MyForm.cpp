#include "MyForm.h"
#include "MyForm.h"
using namespace My8pr; // Имя проекта.
[STAThreadAttribute]
int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm()); // Имя формы.
	return 0;
}
