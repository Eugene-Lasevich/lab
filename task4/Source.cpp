#include<iostream>
#include<string>

using namespace std;

int main()
{
	cout << "The program replaces letters and letter combinations with lighter ones" << endl;
	string str;
	cout << "Enter the text no more than 100 chars" << endl;
	getline(cin, str);

	for (int i = 0; i<str.size(); i++)
	{
		if (str[i] == 'c' && (str[i+1] == 'e' || str[i + 1] == 'y' || str[i + 1] == 'i'))
		{
			str[i] = 's';
		}

		if (str[i] == 'c' && str[i+1] != ('e' || 'i' || 'y'))
		{
			str[i] = 'k';
		}

		if (str[i] == 'q' && str[i + 1] == 'u')
		{
			str[i] = 'k';
			str[i + 1] = 'v';
			i += 2;
		}

		if (str[i] == 'q')
		{
			str[i]='k';
		}

		if (str[i] == 'x')
		{
			str[i] = 'k';
			str.insert(i + 1, 1, 's');
		}

		if (str[i] == 'w')
		{
			str[i] = 'v';
		}

		if (str[i] == 'p' && str[i+1] == 'h')
		{
			str[i] = 'f';
			str.erase(i+1 , 1);
		}

		if (str[i] == 'o' && str[i + 1] == 'o')
		{
			str[i] = 'u';
			str.erase(i + 1, 1);
		}

		if (str[i] == 'y' && str[i + 1] == 'o' && str[i+2] == 'u')
		{
			str[i] = 'u';
			str.erase(i + 1, 2);
		}

		if (str[i] == 'e' && str[i + 1] == 'e')
		{
			str[i] = 'i';
			str.erase(i + 1, 1);
		}

		if (str[i] == 't' && str[i + 1] == 'h')
		{
			str[i] = 'z';
			str.erase(i + 1, 1);
		}

		if (str[i] ==  str[i + 1])
		{
			str.erase(i + 1, 1);
		}



		if (str[i] == 'C' && (str[i + 1] == 'e' || str[i + 1] == 'y' || str[i + 1] == 'i'))
		{
			str[i] = 'S';
		}

		if (str[i] == 'C' && str[i + 1] != ('e' || 'i' || 'y'))
		{
			str[i] = 'K';
		}

		if (str[i] == 'Q' && str[i + 1] == 'u')
		{
			str[i] = 'K';
			str[i + 1] = 'v';
			i += 2;
		}

		if (str[i] == 'Q')
		{
			str[i] = 'K';
		}

		if (str[i] == 'X')
		{
			str[i] = 'K';
			str.insert(i + 1, 1, 's');
		}

		if (str[i] == 'W')
		{
			str[i] = 'v';
		}

		if (str[i] == 'P' && str[i + 1] == 'h')
		{
			str[i] = 'F';
			str.erase(i + 1, 1);
		}

		if (str[i] == 'O' && str[i + 1] == 'o')
		{
			str[i] = 'U';
			str.erase(i + 1, 1);
		}

		if (str[i] == 'Y' && str[i + 1] == 'o' && str[i + 2] == 'u')
		{
			str[i] = 'U';
			str.erase(i + 1, 2);
		}

		if (str[i] == 'E' && str[i + 1] == 'e')
		{
			str[i] = 'I';
			str.erase(i + 1, 1);
		}

		if (str[i] == 'T' && str[i + 1] == 'h')
		{
			str[i] = 'Z';
			str.erase(i + 1, 1);
		}
		
	}
	cout << str;
}