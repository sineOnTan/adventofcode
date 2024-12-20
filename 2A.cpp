#include<bits/stdc++.h>

using namespace std;
#define space << " "

#define int long long

int32_t main () {
    int res = 0;

    for (int i = 0; i < 1000; i++) {
        string s;
        getline(cin, s);

        stringstream ss(s);

        int pred;
        ss >> pred;

        int next;
        ss >> next;
        bool increasing = (pred < next);
        bool flag = (pred < next and pred + 4 > next) or (pred > next and pred - 4 < next);
        pred = next;

        while (ss >> next) {
            if (increasing and pred < next and pred + 4 > next) {pred = next; continue;}
            else if (!increasing and pred > next and pred - 4 < next) {pred = next; continue;}

            flag = false;
            break;
        }

        if (flag) {res++;}
    }

    cout << res << endl;
    return 0;
}

