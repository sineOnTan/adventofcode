#include<bits/stdc++.h>

using namespace std;
#define space << " "

#define int long long

int32_t main () {
    vector<int> a;
    map<int, int> m;

    for (int i = 0; i < 1000; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
        cin >> tmp;
        m[tmp]++;
    }

    sort(a.begin(), a.end());

    int res = 0;

    for (int i = 0; i < 1000; i++) {
        res += a[i] * m[a[i]];
    }

    cout << res << endl;
    return 0;
}

