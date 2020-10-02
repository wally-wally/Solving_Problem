#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++) {
        vector<int> command = commands[i];
        vector<int> temp_numbers;
        for (int j = command[0] - 1; j < command[1]; j++) {
            temp_numbers.push_back(array[j]);
        }
        sort(temp_numbers.begin(), temp_numbers.end());
        answer.push_back(temp_numbers[command[2] - 1]);
    }
    return answer;
}