#include <iostream>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= i; ++j) {
			printf("%s", "*");
		}
		printf("\n");
	}
	return 0;
}