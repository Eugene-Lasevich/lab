#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "The program replaces letters with their number it the alphabet" << endl;
	int size = 100;
	char* str = new char[size];
	cout << endl << "Enter the string" << endl;
	
	 cin.get(str,size);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			cout << "  ";
		}

		if (int(str[i]) > 64 && int(str[i]) < 91)
		{
			cout << int(str[i]) - 64 << " ";
		}

		if (int(str[i]) > 96 && int(str[i]) < 123)
		{
			cout << int(str[i]) - 96 << " ";
		}
	}
}

