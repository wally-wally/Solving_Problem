#include <iostream>

int main() {
	freopen("input.txt", "r", stdin);
	int N;
	scanf("%d", &N);

	int DP[1001];

	DP[0] = 1;
	DP[1] = 1;
	for (int i = 2; i <= N + 1; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2] * 2) % 10007;
	}
	printf("%d", DP[N]);

	return 0;
}