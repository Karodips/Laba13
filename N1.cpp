#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, k;
	cin >> n;
	int* arr = new int[n];
	arr[0] = 1;
	for (i = 1; i < n; i++) {
		arr[i] = i * 2 + 1;
	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
