#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int age;

	cout << "Enter your Age: " << endl;
	cin >> age;

	if (age>=18)
	{
		cout << "You can vote." << endl;
	}
	else
	{
		cout << "You can't vote. " << endl;
	}
	
	return 0;

}