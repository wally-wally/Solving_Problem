#include <vector>
#include <queue>

using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};
bool checked[100][100];

int BFS(int x, int y, int m, int n, int color, vector<vector<int>> picture) {
    int area_size = 1;
    queue<pair<int,int>> Q;
    Q.push(make_pair(x, y));
    checked[x][y] = 1;

    while (Q.empty() == 0) {
        int pop_x = Q.front().first;
        int pop_y = Q.front().second;
        Q.pop();

        for (int i = 0; i < 4; i++) {
            int new_x = pop_x + dx[i];
            int new_y = pop_y + dy[i];
            if (new_x >= 0 && new_y >= 0 && new_x < m && new_y < n) {
                if (picture[new_x][new_y] == color && checked[new_x][new_y] == false) {
                    checked[new_x][new_y] = true;
                    Q.push(make_pair(new_x, new_y));
                    area_size += 1;
                }
            }
        }
    }
    return area_size;
}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            checked[i][j] = false;
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (picture[i][j] != 0 && checked[i][j] == false) {
                int now_area_size = BFS(i, j, m, n, picture[i][j], picture);
                max_size_of_one_area = max(max_size_of_one_area, now_area_size);
                number_of_area += 1;
            }
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    
    return answer;
}