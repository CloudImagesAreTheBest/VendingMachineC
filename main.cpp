#include "VendingMachineOutput.h"
#include <thread>

using namespace std;

void SomeImportantFunction()
{
	while (true)
	{
		std::cout << "Hallo!!!\n";
		Sleep(1000);
	}
}

int main()
{
	thread MyConsoleWatcher(SomeImportantFunction);
	//MyConsoleWatcher.join();
	while (true)
	{
		cout << "Hallo ...";
		Sleep(2000);
	}
	
	/*
	//CoinOutput(2.50);
	AddCenteredOutput("Apfel");
	AddCenteredOutput("Banane");
	AddCenteredOutput("Milch");
	AddCenteredOutput("Pfirsich");
	AddCenteredOutput("Orange");
	AddCenteredOutput("Irgendein langer Text");
	*/

	system("PAUSE");
	return 0;
}