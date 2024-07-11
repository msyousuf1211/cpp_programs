#include <iostream>
using namespace std;


int sumOfSeries(int n)
{
	int sum = 0;
	for (int x = 1; x <= n; x++)
		sum += x * x * x;
	return sum;
}

int main()
{
	int n;
	cin>>n;
	cout << sumOfSeries(n);
	return 0;
}
