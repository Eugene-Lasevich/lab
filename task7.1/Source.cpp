#include<iostream>
#include<string>

using namespace std;

bool check_polindrom(string word, int interval)
{
	//int len = word.length();
	for (int i = 0; i < interval / 2; ++i)
	{
		if (word[i] != word[interval - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string str;
	cin >> str;
	for (int interval = 2; interval <= str.size(); interval++)
	{
		for (int string = 0; string < (str.size()-1); string++)
		{
			cout << str.substr(string, interval) << endl;
		}
	}
}