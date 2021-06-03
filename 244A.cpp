#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int arr[1000];
    vector<int> v;
    for(int i=1; i<=k; i++) {
        cin >> arr[i];
    }

    for(int i=1; i<= n * k; i++) {
        bool flag = true;
        for(int j=1; j<=k; j++) {
            if(i == arr[j]) {
                flag = false;
            }
        }
        if(flag) {
            v.push_back(i);
        }
    }

    int z = 0;
    for(int i=1; i<=k; i++) {
        int count = 0;
        cout << arr[i] << " ";
        count++;
        for(int j=z; j < v.size(); j++) {
            if(count != n) {
                cout << v[j] << " ";
                count++;
                z++;
            }
        }
        cout << endl;
    }   

    return 0;
}