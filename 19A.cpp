#include<bits/stdc++.h>

using namespace std;
#define space << " "

#define int long long



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
        cin >> target;
        queue<int> q;
        set<int> seen;

        q.push(0);
        seen.insert(0);
        while(q.size() != 0) {
            int index = q.front();
            if (index == target.size()) {
                res++;
                break;
            }
            q.pop();
            for (auto pat : patterns) {
                if ((index + pat.size() <= target.size()) and (seen.find(index + pat.size()) == seen.end()) and (pat == target.substr(index, pat.size()))) {
                    q.push(index + pat.size());
                    seen.insert(index + pat.size());
                }
            }
        }
    }

    cout << res << endl;

    
    return 0;
}