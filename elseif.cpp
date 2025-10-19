#include <iostream>
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int marks;
	cout << "Enter your marks: "<< endl;
	cin >> marks;

	if (marks<=25)
	{
		cout << " Grade is D." << endl;
	}
	else if (marks<=50)
	{
		cout << "Grade is C." << endl;
	}
	else if (marks<=75)
	{
		cout << "Grade is B." << endl;
	}
	else
	{
		cout << "Grade is A." << endl;
	}
	return 0;
}