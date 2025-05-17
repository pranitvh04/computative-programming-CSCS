  #include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;
    bool w=1;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back({a, i}); 
    }

    sort(v.begin(), v.end());

    if(n<=2)
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }

    for (int i = 0; i < n - 2; i++) {
        int ptr1 = i;
        int ptr2 = i + 1;
        int ptr3 = n - 1;

        while (ptr2 < ptr3) {
            long long current = v[ptr1].first + v[ptr2].first + v[ptr3].first;

            if (current == x) {
                cout << v[ptr1].second+1 << " " << v[ptr2].second+1 << " " << v[ptr3].second +1<< endl; 
                w=0;
                break;
    
            }

            if (current < x) {
                ptr2++;
            } else {
                ptr3--;
            }
        }

        if(!w)
        {
            break;
        }
    }

if(w)
{
    cout<<"IMPOSSIBLE";
}

}