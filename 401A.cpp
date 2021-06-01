#include<bits/stdc++.h>
using namespace std;
int main() {
    int n , t;
    cin>>n>>t;
    int arr[n];
    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        sum  = sum + arr[i];
    }
    sum = abs(sum);
    if(sum%t==0)
    {
        cout<<sum / t;
        return 0;
    }
    cout<<(sum/t) + 1;
    return 0;
}