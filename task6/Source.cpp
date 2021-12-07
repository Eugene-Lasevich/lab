#include<iostream>
#include<algorithm>

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
int factorial(int a)
{
	int b = 1;
	for (int i = 1; i <= a; i++)
	{
		b *= i;
	}
	return b;
}

int main()
{
	cout << "The program counts the number of anagrams" << endl;
	int size = 0;
	cout << "Enter size of word" << endl;
	size = input_validation(size);
	
	char* array = new char[size];
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	sort(array, array + size);



	int count = 0, product =1;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == array[i - 1] && i > 0)
		{
			continue;
		}

		for (int j = i; j < size; j++)
		{
			if (array[j] == array[i])
			{
				count++;
			}
		}
		product *= factorial(count);
		count = 0;
	}
	cout << "number of anagrams = " << factorial(size) / product;
}