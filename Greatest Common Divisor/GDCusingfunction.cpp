#include<iostream>
using namespace std;

int isGDC(int num1, int num2)
{
	int gdc;
	for (int i = 1; i <= num1 && i <= num2;i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gdc = i;
		}
	}
	return gdc;
}

int main()
{
	int num1, num2, gdc;
	cout << "Enter number 1 : ";
	cin >> num1;

	cout << "\nEnter number 2 : ";
	cin >> num2;
	int gDC = isGDC(num1, num2);

	cout << "GDC of " << num1 << " & " << num2 << " is : " << gDC;
}