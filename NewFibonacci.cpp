#include <iostream>

using namespace std;

int fibonacci(int n)
{
	int result = 0;
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		result = fibonacci(n - 1) + fibonacci(n - 2);

	return result;
}

int main()
{
	cout << fibonacci(10) << endl;
}
