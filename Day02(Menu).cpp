#include <iostream>
#include <string>

using namespace std;

void showMenu() 
{
	cout << "---------Menu---------" << endl; 
	cout << "1. Show all" << endl; 
	cout << "2. Find student with max score" << endl;
	cout << "3. Find student" << endl; 
	cout << "4. Add student" << endl; 
	cout << "5. Exit" << endl; 
	cout << "----------------------" << endl;
	cout << "Please choose: "; 
}

int main() 
{
	int id[10];
	string name[10];
	double score[10];
	 

	int n;
	cout << "Endter number of student: "; 
	cin >> n;
	cin.ignore(100, '\n');

	for (int i = 0; i < n; i++)
	{
		cout << "Endter id: ";
		cin >> id[i];
		cin.ignore(100, '\n');

		cout << "Endter name: ";
		getline(cin, name[i]); 

		cout << "Endter score: ";
		cin >> score[i]; 
		cin.ignore(100, '\n'); 
	}


	int choose; 
	bool exit = false; 

	showMenu(); 

	while (true) 
	{
		cin >> choose; 

		switch (choose)
		{
		case 1:
			cout << "Show all" << endl; 
			for (int i = 0; i < n; i++) {
				cout << id[i] << " - " << name[i] << " - " << score[i] << endl; 
			}
			break;
		case 2:
			cout << "Find student with max score" << endl;

			break;
		case 3:
			cout << "Find student" << endl; 

			break;
		case 4:
			cout << "Add new student" << endl;

			break;
		case 5: 
			cout << "Exit" << endl; 
			exit = true; 
			break;
		}

		if (exit) {
			break; 
		}
		showMenu(); 
	}
}