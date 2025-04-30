#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 7;

int main(){
    int num;
    cin >> num;
    long long int ans = 1;
    for (int i = 0; i < num; i++) {
        ans = (ans * 2) % N;
    }
    cout << ans;
}
