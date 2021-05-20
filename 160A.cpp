#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum=0, sum1=0, count=0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);
    for(int i=n-1; i>=0; i--) {
        count++;
        sum1 += arr[i];
        if(sum1 > sum / 2) {
            break;
        }
    }

    cout << count << endl;
    return 0;
}