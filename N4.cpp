#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	if (n % 2 == 1) {
		for (i = 0; i < ((n - 1) / 2); i++) {
			cout << arr[i] << arr[(n-1) - i];
		}
		cout << arr[((n - 1) / 2)];
	}
	else {
		for (i = 0; i < (n / 2); i++) {
			cout << arr[i] << arr[(n-1) - i];
		}
	}
	system("pause");
	return 0;
}
