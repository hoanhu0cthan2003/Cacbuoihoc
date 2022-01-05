#include <iostream>
#include <string>

using namespace std;

int calculateSalary(int points) {
	int salary;

	if (points <= 10) {
		salary = points * 50;
	}
	else if (points <= 20) {
		salary = 500 + (points - 10) * 75;
	}
	else {
		salary = 500 + 750 + (points - 20) * 100;
	}
	return salary;
}

int main()
{
	int id[10];
	string name[10];
	long salary[10];
	int points[10];

	cout << "Endter number of employees: ";
	int number;
	cin >> number;
	cin.ignore(100, '\n');

	for (int i = 0; i < number; i++)
	{
		cout << "Endter id: ";
		cin >> id[i];
		cin.ignore(100, '\n');

		cout << "Endter name: ";
		getline(cin, name[i]);

		cout << "Endter points: ";
		cin >> points[i];
		cin.ignore(100, '\n');

		salary[i] = calculateSalary(points[i]);

	}

	cout << "********************************\n";
	for (int i = 0; i < number; i++) {
		cout << id[i] << " " << name[i] << " " << points[i] << " " << salary[i] << endl;

	}


}