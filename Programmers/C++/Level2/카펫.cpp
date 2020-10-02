#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int x = yellow;
    int y = 0;
    while (true) {
        if (yellow % x == 0) {
            y = yellow / x;
            if (2 * (x + y) + 4 == brown) {
                answer.push_back(x + 2);
                answer.push_back(y + 2);
                return answer;
            }
        }
        x -= 1;
    }
}