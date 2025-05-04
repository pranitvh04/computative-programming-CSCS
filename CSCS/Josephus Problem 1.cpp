 #include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N <= 0) {
        return 0;
    }

    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    bool flag = false;
    while (!q.empty()) {
        int a = q.front();
        q.pop();

        if (flag) {
            cout << a << " ";
        } else {
            q.push(a);
        }

        flag = !flag; // Toggle the flag
    }

    cout << endl; // Ensure the output ends with a newline
    return 0;
}
