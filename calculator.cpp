#include<bits/stdc++.h>
using namespace std;

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int num1, num2;
	int opt;

	cout << "Enter the 1st number: " << endl;
	cin >> num1;

	cout << "Enter the 2nd number: " << endl;
	cin >> num2;

	cout << "Choose Operations: " << endl;
	cin >> opt;

	switch(opt)
	{
		case 1:
			cout << "Add is: " << num1+num2 << endl;
			break;
		case 2:
			cout << "Subtract is: " << num1-num2 << endl;
			break;
		case 3:
			cout << "Multiply is: " << num1*num2 << endl;
			break;
		case 4:
			cout << "Division is: " << num1/num2 << endl;
			break;
	}


	return 0;
}