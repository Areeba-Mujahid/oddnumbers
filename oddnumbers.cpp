/*this program is to print odd numbers between 1 to 100*/
#include <iostream>
using namespace std;
int main()
{
	int num = 1;
	cout << "The odd numbers between 1 to 100 are" << endl;
	while (num <= 100)
	{
		cout << num << endl;
		num = num + 2;
	}
	return 0;


}