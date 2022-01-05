#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a[100];
	int n, i, t, h, gt, tgian;
	cout << "Endter Number: ";
	cin >> n;
	t = 0;
	cout << "Endter values: ";
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		gt = 1;
		for (h = 1; h <= a[i]; h++) {
			gt = gt * h;
		}
		t = t + gt;
	}
	cout << "sum of factorials = " << t << '\n';
	cout << "sort in ascending order: ";
	for (i = 1; i <= n; i++)
	{
		for (h = i; h <= n; h++)
		{
			if (a[i] > a[h])
			{
				tgian = a[i];
				a[i] = a[h];
				a[h] = tgian;
			}
		}
		cout << a[i] << " ";
	}
}