#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, d, a;
	cin >> n;
	cin >> a >> d;
	int* arr = new int[n];
	for (i = 0; i < n; i++) {
		arr[i] = a * pow(d,i+1);
	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
