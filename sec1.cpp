// run as admin

#include <iostream>
#include <windows.h>

#include <fstream>
using namespace std;
int main() 

{
	FreeConsole();
	BlockInput(true);
	string data;
	string path = "F:\\key.txt";   //change this
	ifstream myfile;
	while (true)
	{
		myfile.open(path);
		myfile >> data;
		//cout << data << endl;
		Sleep(1000);
		if (data == "69C6F7665796F75")   //this too
		{
			BlockInput(false);
			MessageBoxA(NULL, "Your welcome", "", MB_OK);
			exit(EXIT_FAILURE);

		}
		else
		{ 
			
		}
	}
	

}








































// if (MessageBoxA(NULL, "if you click yes your keyboard and mouse will be disabled for 10 seconds!", "Welcome!", MB_YESNO) == IDYES)






 // MessageBoxA(NULL, "oh ok i will not block the keyboard", "", MB_OK);


