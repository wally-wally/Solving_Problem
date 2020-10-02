#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            int sum_value = numbers[i] + numbers[j];
            if (find(answer.begin(), answer.end(), sum_value) == answer.end()) {
                answer.push_back(sum_value);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}