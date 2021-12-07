#include<iostream>
#include<string>

using namespace std;

bool check_polindrom(string word)
{
	int len = word.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	cout << "The program finds the largest non-plindrome substring" << endl;
	cout << "Enter the string" << endl;
	string str;
	cin >> str;
	int max = 0;
	for (unsigned int interval = 1; interval <= str.size(); interval++) //distance between adjacent elements
	{
		for (int string = 0; string <= str.size() - interval; string++)
		{
			//cout << str.substr(string, interval) << '\t';
			if (check_polindrom(str.substr(string, interval)))
			{
				continue;
			}
			else
			{
				max++;
				break;
			}
		}
	}
	
	if (max == 0) {
		cout << -1;
	}
	else
	{
		cout << "max = " << max + 1;
	}
}