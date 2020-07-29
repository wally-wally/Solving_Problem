#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int result = 0;
		int now_num;
		for (int i = 0; i < 10; ++i) {
			cin >> now_num;
			if (now_num >= result) {
				result = now_num;
			}
		}
		printf("#%d %d\n", i + 1, result);
	}
	return 0;
}