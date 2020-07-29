#include <iostream>
#include <string>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int T;
	cin >> T;
	cin.ignore();

	for (int tc = 1; tc <= T; tc++) {
		string input_str;
		string result;
		getline(cin, input_str);
		int blank_var = 0;
		for (int i = 0; i < input_str.length(); i++) {
			if (i == 0 || blank_var == 1) {
				result += toupper(input_str[i]);
				blank_var = 0;
			}
			else if (input_str[i] == ' ') {
				blank_var = 1;
			}
		}
		cout << '#' << tc << ' ' << result << endl;
	}

	return 0;
}