#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    vector<int> count_array;
    
    for (int i = 0; i < 10001; i++) {
        count_array.push_back(0);
    }
    
    for (int j = 0; j < citations.size(); j++) {
        count_array[citations[j]] += 1;
    }
    
    for (int k = 10000; k > -1; k--) {
        int sum_value = 0;
        for (int m = k; m < 10001; m++) {
            sum_value += count_array[m];
        }
        if (sum_value >= k) {
            answer = k;
            break;
        }
    }
    return answer;
}