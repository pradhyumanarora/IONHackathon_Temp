#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while (t--){
	    int n,c=0,x;
        cin>>n;

        int a[n], b[n],z[n];
        set<int> y;

        for (int i=0; i<n; i++)
            cin>>a[i];

        int temp=a[n-1];
        
        for (int i=0; i<n-1; i++){
            b[i]= (a[i]|a[i+1])%2;
            z[i]= (a[i]&a[i+1])%2;
                                                //for (int i=0; i<n-1; i++){
      /*      if (b[i] == z[i] && a[i]!=a[i+1]){
                a[i]=a[i]^temp;
                y.insert(n+i);
                y.insert(i+1);
                //temp=a[n-1-i];
                c++;
                continue;
            }*/
        }
        cout<<endl<<endl;
        for (int i=0; i<n; i++){
            cout<<a[i]<<" "<<b[i]<<" "<<z[i]<<endl;
        }
        cout<<endl<<endl;
        
        if (c == n-1  || c == 0)
            cout<<"-1"<<endl;
        else{
            cout<<c<<endl;
            for (auto i=y.begin(); i!=y.end(); i++)
                cout<<*i<<" ";
        }
    }
	return 0;
}
