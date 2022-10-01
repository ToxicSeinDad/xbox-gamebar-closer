#include <iostream>
#include <chrono>
int counter = 0;
using namespace std;
int main()
{
	system("title Xbox Trashbar hunter");
	counter++;
	cout << "Taskkilling Trashbar...\n";
	
	system("Taskkill /im gamebar.exe /f");
	cout << "Taskkilled\n\n";
	
	cout << counter;
	this_thread::sleep_for(std::chrono::seconds(10));

	system("cls");
	main();


}