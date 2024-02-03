#include <bits/stdc++.h>

using namespace std;

const int N = 109;

int t;
int n;
int s[N], e[N];

int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> s[i] >> e[i];
        }

        bool flag = true;
        for (int i = 1; i < n; ++i)
            if (s[i] <= s[0] && e[i] <= e[0])
                flag = false;

        if (!flag) {
            puts("-1");
            continue;
        }

        cout << s[0] << endl;
    }
    return 0;
}
