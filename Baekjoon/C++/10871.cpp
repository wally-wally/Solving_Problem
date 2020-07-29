#include <iostream>
#include <malloc.h>

using namespace std;

int main()
{	
	freopen("input.txt", "r", stdin);
	int N, X;
	scanf("%d %d", &N, &X);

	int* numbers;
	numbers = (int*)malloc(N * sizeof(int));

	for(int i = 0; i < N; ++i){
		scanf("%d", &numbers[i]);
	}
	for (int i = 0; i < N; ++i) {
		if (numbers[i] < X) {
			printf("%d ", numbers[i]);
		}
	}
	free(numbers);
	return 0;
}