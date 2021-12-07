

#include <iostream>
#include <string>
using namespace std;
//
//int checkSymbolsPositive(int* n, char* st)   // function which checks what we have entered
//{
//    int f = 0;
//    for (int i = 0; i < strlen(st); i++)
//    {
//        if (st[i] < '0' || st[i] > '9')
//        {
//            cout << "you have entered incorrect symbol" << endl;
//            return 401;
//        }
//        f *= 10;
//        f += st[i] - '0';
//    }
//
//    *n = f;
//
//    if ((*n) == 0)
//    {
//        cout << "You enterted 0. Error." << endl;
//        return 401;
//    }
//
//    delete[] st;
//    return 0;
//}
//
//int enterValue(int* n)
//{
//    char* st = new char[1000];   // array is using only for checking 
//    cin >> st;
//    if (checkSymbolsPositive(n, st) != 0)
//    {
//        cout << "You needn't to enter symbols or 0. Only int value." << endl;
//        return 400;
//    }
//
//    else
//    {
//        return 0;
//    }
//}

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
    cout << "The program checks if it is possible to get the second line from the first by certain actions" << endl;

    int sets = 0,count =0;
    cout << "Enter the number of sets" << endl;
    sets = input_validation(sets);
   
    while (count < sets)
    {
        string s;
        string t;
        cout << "Enter the first sting (max size = 500)" << endl;
        cin >> s;

        if (s.length() > 500)
        {
            cout << "Your word is too big. Max 500 letters." << endl;
            return 0;
        }

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (!(s[i] >= 97 && s[i] <= 122))
            {
                cout << "Incorrect enter." << endl;
                return 0;
            }
        }

        cout << "Enter the second string (max size = 2 * size of s - 1)" << endl;
        cin >> t;
        if (t.length() > 2 * s.length() - 1)
        {
            cout << "-1. Your word is too big. (max size = 2 * size of s - 1)" << endl;
            return 0;
        }

        for (int i = 0; t[i] != '\0'; i++)
        {
            if (!(t[i] >= 97 && t[i] <= 122))
            {
                cout << "Incorrect enter." << endl;
                return 0;
            }
        }


        bool check1 = true;
        bool check3 = true;
        for (int i = 0; i < s.length() && check3; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (i - j + 1 < t.length())
                {
                    if ((i - j + 1) + i >= t.length())
                    {

                        int stopInd;
                        bool check2 = true;
                        for (int k = j, p = 0; k <= i; k++, p++)
                        {
                            if (s[k] != t[p])
                            {
                                check2 = false;
                                break;
                            }

                            if (k == i)
                            {
                                stopInd = p;
                            }
                        }

                        int size1 = i - j + 1;
                        int left = i - (t.length() - size1);

                        if (check2)
                        {

                            for (int k = i - 1, p = stopInd + 1; k >= left; k--, p++)
                            {
                                if (s[k] != t[p])
                                {
                                    check2 = false;
                                    break;
                                }
                            }
                        }
                        if (check2)
                        {
                            check3 = false;
                            check1 = true;
                            break;
                        }

                        else
                        {
                            check1 = false;
                        }

                    }

                    else
                    {
                        check1 = false;
                    }
                }

                else
                {

                    bool check2 = false;
                    for (int k = j, p = 0; k <= i; k++, p++)
                    {
                        if (s[k] != t[p])
                        {
                            break;
                        }

                        if (k == i)
                        {
                            check2 = true;
                        }
                    }

                    if (check2)
                    {
                        check3 = false;
                        check1 = true;
                        break;
                    }

                    else
                    {
                        check1 = false;
                    }
                }
            }
        }
        if (check1)
        {
            cout << "YES" << endl << endl;
        }

        else
        {
            cout << "NO" << endl << endl;
        }
        count++;
    }

}
	