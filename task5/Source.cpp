#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int input_validation(int n)
{
	while (true)
	{
		cin >> n;
		if (!cin)
		{
			cout << "Enter invalid value" << endl;
			cin.clear();
			while (cin.get() != '\n');
		}
		else return n;
	}
}

int main()
{
	int sets = 0,count =0;
	cout << "Enter the number of sets" << endl;
	sets = input_validation(sets);
	while (count < sets)
	{
		int size = 0;
		cout << "Enter size of line" << endl;
		cin >> size;


		string prefix, sufix;
		cout << "Enter prefix" << endl;
		cin >> prefix;
		cout << "Enter sufixu" << endl;
		cin >> sufix;

		int mod = 0;
		cout << "Enter mod" << endl;
		cin >> mod;

		if (size < prefix.size() || size < sufix.size())
		{
			cout << 0 << endl;
	
		}

		if (size > prefix.size() + sufix.size())
		{
			int new_size = size - prefix.size() - sufix.size();
			int tmp = (pow(26, new_size) * 2);
			cout << tmp % mod << endl;
		
		}

		if (size == prefix.size() + sufix.size())
		{
			cout << 2 << endl;
		}

		if (size < prefix.size() + sufix.size())
		{
			cout << "if string it prefix " << int(pow(26, size - prefix.size())) % mod << endl;
			cout << "if sting it sufix " << int(pow(26, size - sufix.size())) % mod << endl;

		}
		count++;
	}
}
