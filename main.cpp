#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n;
	char s = '*';
	char d = '.';
	cout << "Enter size line: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << d;
		for (int k = 0; k < i; k++)
			cout << s;
		cout << endl;
	}

	system("pause");
	return 0;
}