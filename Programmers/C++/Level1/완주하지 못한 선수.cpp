#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    int people_count = completion.size();
    for (int i = 0; i < people_count; i++) {
        if (participant[i] != completion[i]) {
            return participant[i];
        }
    }
    return participant[people_count];
}