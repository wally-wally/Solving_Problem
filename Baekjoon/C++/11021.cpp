#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	int T;
	int A, B;
	scanf("%d", &T);
	for (int i = 0; i < T; ++i)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i + 1, A + B);
	}
}