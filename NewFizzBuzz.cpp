#include <iostream>

using namespace std;

void fizzbuzz(int n)
{
	if (n > 1)
		fizzbuzz(n - 1);

	if (n % 3 == 0 && n % 5 == 0)
		cout << "Fizz,Buzz" << endl;
	else if (n % 3 == 0)
		cout << "Fizz" << endl;
	else if (n % 5 == 0)
		cout << "Buzz" << endl;
	else
		cout << n << endl;
}

int main()
{
	fizzbuzz(100);

	return 0;
}