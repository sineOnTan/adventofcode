#include<bits/stdc++.h>

using namespace std;
#define space << " "

#define int long long

int32_t main () {
    vector<int> a;
    vector<int> b;

    for (int i = 0; i < 1000; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
        cin >> tmp;
        b.push_back(tmp);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int res = 0;

    for (int i = 0; i < 1000; i++) {
        res += abs(a[i] - b[i]);
    }

    cout << res << endl;
    return 0;
}

