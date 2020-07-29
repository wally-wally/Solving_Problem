#include <iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int numbers[10];
		for (int j = 0; j < 10; j++) {
			scanf("%d", &numbers[j]);
		}

		int sum_values[10];
		for (int j = 0; j < 10; j++) {
			int num = numbers[j];
			int temp = 0;
			while (num != 0) {
				temp = temp + num % 10;
				num = num / 10;
			}
			sum_values[j] = temp;
		}

		int min_value = sum_values[0], max_value = sum_values[0];
		for (int k = 1; k < 10; k++) {
			if (sum_values[k] < min_value) {
				min_value = sum_values[k];
			}
			if (sum_values[k] > max_value) {
				max_value = sum_values[k];
			}
		}
		printf("#%d ", i + 1);
		printf("%d %d\n", max_value, min_value);

	}
	return 0;
}