#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	int N;
	scanf("%d", &N);
	for (int i = 1; i < 10; ++i)
	{
		printf("%d * %d = %d\n", N, i, N * i);
	}
}