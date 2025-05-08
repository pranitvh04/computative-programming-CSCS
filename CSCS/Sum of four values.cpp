 #include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back({a, i+1});
    }

    sort(v.begin(), v.end());

    for (int b1 = 0; b1 < n - 3; b1++) {
        for (int b2 = b1 + 1; b2 < n - 2; b2++) {
            int b3 = b2 + 1, e = n - 1;
            while (b3 < e) {
                long long sum = v[b1].first + v[b2].first + v[b3].first + v[e].first;
                if (sum == x) {
                    cout << v[b1].second << " " << v[b2].second << " " << v[b3].second << " " << v[e].second << endl;
                    return 0;
                } else if (sum < x) {
                    b3++;
                } else {
                    e--;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
