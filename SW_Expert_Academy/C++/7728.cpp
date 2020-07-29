#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int N;
	scanf("%d", &N);

	for (int tc = 0; tc < N; tc++) {
		int numbers[10];
		for (int i = 0; i < 10; i++) {
			numbers[i] = 0;
		}

		int X;
		scanf("%d", &X);
		int result = 0;
		string str_num = to_string(X);
		for (int j = 0; j < str_num.length(); j++) {
			char letter = str_num.at(j);
			int idx = letter - 48;
			if (numbers[idx] == 0) {
				numbers[idx] = 1;
				result += 1;
			}
		}
		printf("#%d ", tc + 1);
		printf("%d\n", result);
	}
	return 0;
}