#include <iostream>
using namespace std;

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int sum=0;

	for(int i=1; i<=100; i++)
	{
		if (i%2==0)
		{
			sum=sum+i;
		}
	}

		cout << "The sum of even number from 1 to 100 is: " << sum << endl;


	return 0;
}