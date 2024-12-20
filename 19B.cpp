#include<bits/stdc++.h>

using namespace std;
#define space << " "

#define int long long

int a[100];

int32_t main () {
    vector<string> patterns;
    for (int i = 0; i < 446; i++) {
        string s;
        cin >> s;
        s.pop_back();
        patterns.push_back(s);
    }

    string target;
    cin >> target;
    patterns.push_back(target);

    int res = 0;

    for (int i = 0; i < 400; i++) {
        for (int j = 0; j < 100; j++) a[j] = 0;

        cin >> target;
        a[0] = 1;

        for (int j = 0; j < target.size(); j++) {
            for (auto pat : patterns) {
                if ((j + pat.size() <= target.size()) and (pat == target.substr(j, pat.size()))) {
                    a[j + pat.size()] += a[j];
                }
            }
        }
        res += a[target.size()];
    }

    cout << res << endl;

    
    return 0;
}

