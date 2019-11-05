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
		for (i = 0; i < n; i += 2) cout << arr[i];
		cout << endl;
		for (i = n - 2; i > 0; i -= 2) cout << arr[i];
		cout << endl;
	}
	else {
		for (i = 0; i < n; i += 2) cout << arr[i];
		cout << endl;
		for (i = n - 1; i > 0; i -= 2) cout << arr[i];
		cout << endl;
	}
	system("pause");
	return 0;
}
