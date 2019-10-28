#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, z;
	cin >> n;
	int* arr = new int[n];
	cin >> arr[0] >> arr[1];
	z = arr[0] + arr[1];
	for (i = 2; i < n; i++) {
		arr[i] = z;
		z = z + arr[i];
	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
