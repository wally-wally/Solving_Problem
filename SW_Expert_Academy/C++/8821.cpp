#include <iostream>
#include <string>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int T;
	cin >> T;
	cin.ignore();

	for (int tc = 1; tc <= T; tc++) {
		string number;
		cin >> number;
		int len = number.length();
		int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		for (int i = 0; i < len; i++) {
			if (arr[number[i] - 48] == 0) {
				arr[number[i] - 48] = 1;
			}
			else {
				arr[number[i] - 48] = 0;
			}
		}
		int result = 0;
		for (int j = 0; j < 10; j++) {
			if (arr[j] == 1) {
				result += 1;
			}
		}
		cout << '#' << tc << ' ' << result << endl;
	}
	return 0;
}