#include<iostream>
#include<string>
using namespace std;

int main()
{
	system("chcp 1251 >nul");
	setlocale(LC_ALL, "RU");
	cout << "��������� ���������� ���������� ��� ��������������� � ��������������� � ������������ ������" << endl;
	cout << "������� ������ " << endl;
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
			if (str[j - 1] == '�' && (str[j - 2] == '�' || str[j - 2] == '�'))
			{
				w++;
			}

			if (str[j - 1] == '�' && (str[j - 2] == '�' || str[j - 2] == '�' || str[j - 2] == '�'))
			{
				m++;
			}

			if (str[j - 1] == '�' && (str[j - 2] == '�' || str[j - 2] == '�'))
			{
				i++;
			}

			if (str[j - 1] == '�' || (str[j - 1] == '�' && str[j - 2] == '�') || (str[j - 1] == '�' && str[j - 2] == '�') || (str[j - 1] == '�' && str[j - 2] == '�'))
			{
				w++;
			}

			if (str[j - 1] == '�' || str[j - 1] == '�')
			{
				i++;
			}

			if (str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�' || str[j - 1] == '�')
			{
				m++;
			}
		}
	}

	cout << "��������� ���� ������� ���� "<<m << endl;
	cout << "���������� ���� �������� ���� "<< w<< endl;
	cout << "���������� ���� �������� ���� " <<i<< endl;
	
}