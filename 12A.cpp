#include<bits/stdc++.h>

using namespace std;
#define space << " "

#define int long long

const int N = 140;
char a[N][N];
bool seen[N][N];

int32_t main () {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
            seen[i][j] = false;
        }
    }


    long long res = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            queue<pair<int,int>> q;
            int area = 0;
            int perimeter = 0;
            if (!seen[i][j]) {
                q.emplace(i,j);
                while(q.size() != 0) {
                    auto temp = q.front();
                    q.pop();
                    if (temp.first < 0 or temp.first >= N or temp.second < 0 or temp.second >= N or a[i][j] != a[temp.first][temp.second]) {
                        perimeter++;
                    } else {
                        if (!seen[temp.first][temp.second]) {
                            seen[temp.first][temp.second] = true;
                            area++;
                            q.emplace(temp.first + 1, temp.second);
                            q.emplace(temp.first - 1, temp.second);
                            q.emplace(temp.first, temp.second + 1);
                            q.emplace(temp.first, temp.second - 1);
                        }
                    }
                }
                
                res += area * perimeter;
                cout << a[i][j] space << i space << j << endl;

            }
        }
    }
    cout << res << endl;;
    return 0;
}