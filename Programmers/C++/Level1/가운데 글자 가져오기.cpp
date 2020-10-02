#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int string_length = s.length();
    if (string_length % 2 == 1) {
        answer = s.at(string_length / 2);
    } else {
        answer = s.substr(string_length / 2 - 1, 2);
    }
    return answer;
}