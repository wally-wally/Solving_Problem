#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int minValue = min(a, b);
    int maxValue = max(a, b);
    for (int i = minValue; i <= maxValue; i++) {
        answer += i;
    }
    return answer;
}