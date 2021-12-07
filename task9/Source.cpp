#include<iostream>
#include<string>

using namespace std;

int left_offset(string str, int& i, bool& flag, bool& flag1) //counts the number to the point
{
	int num = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = num * 10 + (int(str[i]) - 48);
		i++;
	}
	flag = true;
	flag1 = false;
	return num;
}

double right_offset(string str, int& i, bool& flag,bool& flag1)//counts the number after the point
{
	double num = 0,count = 1;
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = num * 10 + (int(str[i]) - 48);
		i++;
		count*=10;
	}
	flag = true;
	flag1 = false;
	return num/count;
}

int main()
{
	cout << "The program calculates the sum of numbers" << endl;
	string str;
	cout << "Enter string" << endl;
	getline(cin, str);

	bool flag_before = true, flag_after = false;
	double sum = 0,sum1 =0 ;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '.' && i - 1 >= 0 && str[i - 1] <= '9' && str[i - 1] >= '0')
		{
			flag_before = false;
			flag_after = true;
			i++;
			if (str[i] == '.')
			{
				flag_before = true;
				flag_after = false;
			}
		}

		if (str[i] <= '9' && str[i] >= '0' && flag_before)
		{
			sum += left_offset(str, i, flag_before,flag_after);
			i--;
		}
	
		if (str[i] <= '9' && str[i] >= '0' && flag_after)
		{
			sum1 += right_offset(str, i,flag_before,flag_after);
			i--;
		}
		
	
	}
	cout << "sum = "<<sum + sum1 << endl;

}