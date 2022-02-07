#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int count =0;
    if (a[0] <= k)
        k=a[0]-1;
    
    for (int i=0; i<n; i++){
        if (a[i] > 0){
            if (a[i] > k)
                count++;
        }
        else{
            break;
        }
    }

    cout<<count;
    return 0;
}