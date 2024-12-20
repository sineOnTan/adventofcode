#include<bits/stdc++.h>

using namespace std;
#define space << " "

#define int long long

int32_t main () {
    int res = 0;

    for (int z = 0; z < 1000; z++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> a;
        int tmp;
        while (ss >> tmp) a.push_back(tmp);

        for (int i = 0; i < a.size(); i++) {
            vector<int> a_1;
            for (int j = 0; j < a.size(); j++) {
                if (i != j)
                    a_1.push_back(a[j]);
            }
            bool flag = true;
            for (int i = 1; i < a_1.size(); i++) {
                if (a_1[i - 1] < a_1[i] and a_1[i - 1] + 4 > a_1[i]) continue;
                flag = false;
                break;
            }

            if (flag) {
                res++;
                break;
            }

            flag = true;

            for (int i = 1; i < a_1.size(); i++) {
                if (a_1[i - 1] > a_1[i] and a_1[i - 1] - 4 < a_1[i]) continue;
                flag = false;
                break;
            }

            if (flag) {
                res++;
                break;
            }
        }
    }

    cout << res << endl;
    return 0;
}

