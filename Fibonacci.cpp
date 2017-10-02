#include <iostream>

using namespace std;

int main(void)
{
	int a = 0, b = 1, c, i;

	for (i = 0; i < 10; ++i)
	{
		c = a + b;
		a = b;
		b = c;

	}
	cout << c << endl;
	return 0;
}