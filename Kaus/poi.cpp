#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,k,m,dig=0;

        cin>>n>>k>>m;

        vector<int> v[m+2];

        int x;
        cin>>x;
        v[0].push_back(x);

        for (int i=v[0][0]; i>0; i=i/10){
            dig=i%10;
            v[1].push_back(dig);

        }
   //         cout<<endl<<endl;
    //    for (int i=0; i<n; i++)
     //       cout<<v[1][i]<<" ";
      //  cout<<endl<<endl;

        for (int i=1; i<=m ; i++){
            for (int j=0; j<n; j++){
                v[i][j] *= k;
                if (v[i][j] == 0)
                    v[i+1].push_back(0);

                for (int l=v[i][j]; l>0; l=l/10){
                    dig = l%10;
                    v[i+1].push_back(dig);
                }

            }
            n=v[i+1].size();
        }/*
cout<<endl<<endl;
        for (int h=1; h<=m+1; h++){
            cout<<endl<<endl;
             n=v[h].size();
         for (int i=0; i<n; i++)
            cout<<v[h][i]<<" ";
        }
cout<<endl<<endl;*/
        if (x == 0)
            cout<<"0";
        else
            cout<<v[m+1].size()<<endl;

        
    }
    return 0;
}