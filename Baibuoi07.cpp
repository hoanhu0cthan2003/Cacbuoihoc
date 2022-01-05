#include <iostream>
#include <string>

using namespace std;

int main()
{
	short nam;
	short thang;
	cout << "Nhap So Nam: ";
	cin >> nam;
	cout << "Nhap So Thang: ";
	cin >> thang;


	int month = 3;
	switch (month)
	{
	case 1:
		cout << "Co 31 ngay";
		break;
	case 2:
		cout << "Co 28 ngay hoac 29 ngay (neu la nam nhuan)";
		break;
	case 3:
		cout << "Co 31 ngay";
		break;
	case 4:
		cout << "Co 30 ngay";
		break;
	case 5:
		cout << "Co 31 ngay";
		break;
	case 6:
		cout << "Co 30 ngay";
		break;
	case 7:
		cout << "Co 31 ngay";
		break;
	case 8:
		cout << "Co 31 ngay";
		break;
	case 9:
		cout << "Co 30 ngay";
		break;
	case 10:
		cout << "Co 31 ngay";
		break;
	case 11:
		cout << "co 30 ngay";
		break;
	case 12:
		cout << "co 31 ngay";
		break;
	}
	return 0;
}