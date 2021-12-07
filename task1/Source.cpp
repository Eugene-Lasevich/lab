#include<iostream>
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

void numbers_of_group(char* array, int size, int& count_0, int& count_1)
{
	if (array[0] == 0)
	{
		count_0++;
	}
	else
	{
		count_1++;
	}

	for (int i = 0; i < size; i++)
	{
		if ((array[i] != array[i + 1]) && array[i + 1] == '0')
		{
			count_0++;
			/*cout << "i_0 = " << i << endl;
			cout << "count_0 = " << count_0 << endl;*/
		}

		if ((array[i] != array[i + 1]) && array[i + 1] == '1')
		{
			count_1++;
			/*cout << "i_1 = " << i << endl;
			cout << "count_1 = " << count_1 << endl;*/
		}
	}
}

void out_array(char* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl << endl;
}

void filling_array(char* array, int size)
{
	char mode = '0';
	cout << "How to fill an array manually(M) or automatically(all)" << endl;
	cin >> mode;

	if (mode != 'M')
	{
		for (int i = 0; i < size; i++)
		{
			int n = 0;
			n = rand() % 2;
			if (n % 2 == 0)
			{
				array[i] = 48;
			}
			else
			{
				array[i] = 49;
			}
		}

		array[size] = '\0';
	}

	if (mode == 'M')
	{
		cout << "If an even number is entered, then zero(0), otherwise one(1)" << endl;
		for (int i = 0; i < size; i++)
		{
			char tmp = '0';
			cin >> tmp;

			if (tmp == '0' || tmp == '1')
			{
				array[i] = tmp;
			}

			if (int(tmp) % 2 == 0)
			{
				array[i] = '0';
			}
			else
			{
				array[i] = '1';
			}
		}
	}
}



int main()
{
	int size = 0;
	cout << "The program finds the largest qroup of a string consisting of zeros and ones" << endl;
	cout << "Enter size of array" << endl;
	size = input_validation(size);

	char* array = new char[size+1];

	filling_array(array, size);

	out_array(array, size);

	int count_groups_0 = 0, count_groups_1 = 0;
	numbers_of_group(array, size, count_groups_0, count_groups_1);

	int* array_0 = new int[count_groups_0];
	int* array_1 = new int[count_groups_1];

	int count_0 = 0, count_1 = 0,i_tmp_0 =0,i_tmp_1=0;

	for (int j = 0; j < size; j++)
	{
		if (array[j] == '0')
		{
			if (array[j - 1] == '1' && j >= 1) //оепеунд мю 0 ббнд б люяххб йнкхвеярбн 1
			{
				array_1[i_tmp_1] = count_1;
				i_tmp_1++;

			}

			count_1 = 0;
			count_0++;

			if (j == size - 1 && array[j] == '0')//онякедмхи щкелемр ме 1
			{
				array_0[i_tmp_0] = count_0;
			}

		}

		if (array[j] == '1')  
		{
			if (array[j - 1] == '0' && j >= 1) //оепеунд мю 1 ббнд б люяххб йнкхвеярбн 0
			{
				array_0[i_tmp_0] = count_0;
				i_tmp_0++;

			}

			count_0 = 0;
			count_1++;

			if (j == size - 1 && array[j] == '1') //онякедмхи щкелемр ме 0
			{
				array_1[i_tmp_1] = count_1;
			}

		}

	}


	int max_0 = array_0[0];
	for (int i = 0; i < count_groups_0; i++)
	{
		if (array_0[i] > max_0)
		{
			max_0 = array_0[i];
		}
	}

	int max_1 = array_1[0];
	for (int i = 0; i < count_groups_1; i++)
	{
		if (array_1[i] > max_1)
		{
			max_1 = array_1[i];
		}
	}


	if (max_0 > max_1)
	{
		cout << "The largest group consists of zeros and its size is " << max_0;
	}

	if (max_1 > max_0)
	{
		cout << "The largest group consists of ones and its size is " << max_1;
	}

	if (max_1 == max_0)
	{
		cout << "The largest of ones and zeros are " << max_0;
	}
}