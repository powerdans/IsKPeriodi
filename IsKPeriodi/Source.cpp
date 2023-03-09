#include<iostream>
#include<Windows.h>
#define _USE_MATH_DEFINES
#include<math.h>


using namespace std;




	
	bool IsKPeriodic()
	{

		const int n = 51;
		char str[n];
		int i, k,j=0;
		cout << "введите строку: ";
		cin.getline(str, 51);
		cout << "какая у него кратность?: ";
		cin >> k;
		j=strlen(str)%k;
		if (j != 0)
		{
			return false;
		}
		for (i = 0; str[i+k]!='\0'; i++)
		{
				if (str[i] != str[i + k]) //sas кратность 2
				{
					return false;
				}
		}
			return true;
	}

	int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		bool a = IsKPeriodic();
		if (a)
		{
			cout << "a == ture\n";
		}
		else
		{
			cout << "a == false\n";
		}
		return 0;
	}
		
	


