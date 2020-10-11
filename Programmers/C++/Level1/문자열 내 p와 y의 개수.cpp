#include <string>
#include <iostream>
using namespace std;

bool solution(string s){
    bool answer = false;
    int p_count = 0;
    int y_count = 0;
    
    for (int i = 0; i < s.size(); i++) {
        char letter = s.at(i);
        if (letter == 'p' || letter == 'P') {
            p_count += 1;
            continue;
        }
        if (letter == 'y' || letter == 'Y') {
            y_count += 1;
        }        
    }
    
    if (p_count == y_count) {
        answer = true;
    }

    return answer;
}