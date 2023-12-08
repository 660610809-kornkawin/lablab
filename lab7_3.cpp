#include <iostream>
using namespace std;

char before(char x)
{
	char ans ='0';
	if (x == 'A')
	{
		ans = 'Z';
	}
	if (x < 'A' && x > 'Z')
	{
		ans = '0';
	}
	if (x >'A' && x <= 'Z')
	{
		ans = x - 1;
	}
	return ans;
}

int main()
{

	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
