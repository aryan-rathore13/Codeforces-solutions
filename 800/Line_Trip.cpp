#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>n>>x;
        vector<int>gas(n);
        int ans=0,last=0;
        for(int i=0;i<n;i++){
            cin>>gas[i];
        }
        for(int i=0;i<n;i++){
            ans=max(ans,gas[i]-last);
            last=gas[i];
        }
        ans=max(ans,2*(x-last));
        cout<<ans<<endl;

    }
    return 0;
}
