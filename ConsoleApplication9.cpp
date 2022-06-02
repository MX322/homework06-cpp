#include <iostream>
using namespace std;

int even()
{
	int num = 100;
	while (num > 0)
	{
		num--;
		if (num % 2 == 0)
		{
			cout << num << "\n";
		}
	}
	return 0;
}


int diap()
{
	int min = 50;
	int max = 100;
	int tmp = 0;

	while (min <= max)
	{
		min++;
		tmp += min;
		cout << tmp << "\n";
	}
	return 0;
}


int сels()
{
	int max = 35;
	int min = 0;
	double tmp = 30.2;

	while (min <= max)
	{
		min++;
		tmp += 1.8;

		cout << min << " - " << tmp << "\n";

	}
	
	return 0;
}


int fact()
{
	int num;
	int tmp = 1;
	int fact = 1;
	cin >> num;

	while (tmp <= num)
	{
		fact *= tmp;
		tmp++;
	}

	cout << fact;

	return 0;
}


int razr()
{
	double num;
	int count = 0;
	int sum = 0;
	cin >> num;
	int tmp = int(num) % 10;

	while (num > 1)
	{
		num /= 10;
		sum += int(num) % 10;
		count++;
	}

	cout << count << "\n";
	cout << sum + tmp << "\n";

	return 0;
}


int main()
{
	even();
	diap();
	сels();
	fact();
	razr();
}