#include<iostream>
#include<string>
using namespace std;

int main()
{
	system("chcp 1251 >nul");
	setlocale(LC_ALL, "RU");
	cout << "Программа определяет определяет род существительныъ и иприлагательных в именительном падеже" << endl;
	cout << "Введите строку " << endl;
	/*for (int i = 0; i < 256; i++)
	{
		cout <<"i "<< i<<" = \t" << char(i) << endl;
	}*/
	string str;
	getline(cin, str);
	int len = str.size();
	int w = 0, m = 0, i = 0;

	for (int j = 0; j<=len; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (str[j - 1] == 'я' && (str[j - 2] == 'я' || str[j - 2] == 'а'))
			{
				w++;
			}

			if (str[j - 1] == 'й' && (str[j - 2] == 'о' || str[j - 2] == 'ы' || str[j - 2] == 'и'))
			{
				m++;
			}

			if (str[j - 1] == 'е' && (str[j - 2] == 'о' || str[j - 2] == 'е'))
			{
				i++;
			}

			if (str[j - 1] == 'а' || (str[j - 1] == 'ь' && str[j - 2] == 'ч') || (str[j - 1] == 'ь' && str[j - 2] == 'ш') || (str[j - 1] == 'ь' && str[j - 2] == 'ж'))
			{
				w++;
			}

			if (str[j - 1] == 'о' || str[j - 1] == 'е')
			{
				i++;
			}

			if (str[j - 1] == 'к' || str[j - 1] == 'н' || str[j - 1] == 'г' || str[j - 1] == 'ш' || str[j - 1] == 'ф' || str[j - 1] == 'в' || str[j - 1] == 'п' || str[j - 1] == 'р' || str[j - 1] == 'л' || str[j - 1] == 'д' || str[j - 1] == 'с' || str[j - 1] == 'м' || str[j - 1] == 'т' || str[j - 1] == 'б')
			{
				m++;
			}
		}
	}

	cout << "количесво слов мжского рода "<<m << endl;
	cout << "количество слов женского рода "<< w<< endl;
	cout << "количество слов среднего рода " <<i<< endl;
	
}