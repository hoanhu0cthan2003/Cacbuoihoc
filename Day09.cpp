#include <iostream>
#include <string>

using namespace std;

int factoria(int n) {
	int fact = 1;
	for (int i = 1; i <= n; ++i) {
		fact = fact * i;
	}
	return 0;
}

int main()
{
	int n;
	cout << "Endter Number: ";
	cin >> n;

	int arr[50]{};
	for (int i = 0; i < n; ++i)	{
		cout << "Endter value of elemement [" << i << "]: ";
		cin >> arr[i]; 
		cout << "Entered: " << arr[i] << '\n';
	}
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum = sum + arr[i];  
	}
	cout << "Summary: " << sum << '\n'; 
	
	int max = arr[n - 1]; 
	for (int i = 0; i < n; ++i) {
		if (max < arr[i]) { max = arr[i]; }
	}
	cout << "Max: " << max << '\n'; 

	int min = arr[n-1];
	for (int i = 0; i < n; ++i) {
		if (min > arr[i]) { min = arr[i]; }
	}
	cout << "Min: " << min << '\n';

	int factorialSummary = 0;
	for (int i = 0; i < n; ++i) {
		//factorialSummary = factorialSummary + factorial(arr[i]); 
		factorialSummary += factoria(arr[i]);
	}
	cout << "Summary of factorials: " << factorialSummary << '\n';
}	