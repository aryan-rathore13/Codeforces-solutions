#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin >> s;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                if((i+2)<n && s[i+2]=='.' && s[i+1]!='#'){
                    ans=2;
                    break;
                }else{
                    ans++;
                }
            }else if(s[i]=='#'){
                continue;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}