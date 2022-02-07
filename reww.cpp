#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;
        vector<int> v;

        for (int q=0; q<n; q++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        int count=0;

        int max = *max_element(v.begin(),v.end());

        if (n == 2)
            cout<<"1"<<endl;

        else if ( std::adjacent_find( v.begin(), v.end(), std::not_equal_to<>() ) == v.end() ){
            cout<<"0"<<endl;
        }
        else{
            for (int i=0; i<n; i++){
                if ((v[i]+v[i+1]) == max){
                    v[i]=max;
                    auto it = v.begin() + i + 1;
                    v.erase(it);
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}