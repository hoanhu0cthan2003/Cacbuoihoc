#include<iostream>
#include<string>

using namespace std;

void NhapMang(int a[50], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void PhanTu(int a[50], int n)
{
	int Chan, Le, S, max, i, M;
	S = 0;
	M = 0;
	cout << "Cac phan tu chan la: ";
	for (i = 0; i < n; i++)
		if (a[i] % 2 == 0)
		{
			Chan = a[i];
			cout << a[i] << " ";
			S = S + a[i];
		}
	cout << '\n';
	cout << "Cac phan tu le la: ";
	for (i = 0; i < n; i++)
		if (a[i] % 2 == 1)
		{
			Le = a[i];
			cout << a[i] << " ";
			M = M + a[i];
		}
	cout << '\n';
	cout << "Tong cac phan tu chan = " << S << '\n';
	cout << "Tong cac phan tu le = " << M << '\n';

	max = a[i];
	for (i = 0; i <= n; i++)
	{
		if (max < a[i]) { max = a[i]; };
	}
	cout << "So lon nhat cua mang la: " << max << '\n';
}

int main(void)
{
	int n, a[50];
	cout << "Nhap so phan tu: ";
	cin >> n;
	cout << "Nhap cac phan tu: ";
	NhapMang(a, n);
	PhanTu(a, n);
	cout << '\n';
}