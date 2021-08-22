/*This program is to multiply two integers without using multiplication operator*/

#include<iostream>
using namespace std;
int main()
{
	int a, b, temp, num;
	num = 0;
	temp = 1;
	cout << "Enter first integer:" << endl;
	cin >> a;
	while (a <= 0)
	{
		cout << "Invalid Input! Enter first number again:" << endl;
		cin >> a;
	}
	cout << "Enter second number:" << endl;
	cin >> b;
	while (b <= 0)
	{
		cout << "Invalid Input! Enter second number again:" << endl;
		cin >> b;
	}

	while (temp <= a)
	{
		num = num + b;
		temp = temp + 1;
	}
	cout << " Product is: " << num;
	return 0;
}