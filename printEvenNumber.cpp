#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int num;
	cout << "Even numbers are: " << endl;
	for (int num = 1; num <=50; num++)
		{
			if (num % 2 ==0)
			{
				cout << num << endl;
			}
			
		}

	return 0;
}