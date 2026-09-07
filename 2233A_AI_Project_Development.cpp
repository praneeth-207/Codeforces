#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b,c;
        cin >> n >> a >> b >> c;
        int mn1 = 0;
        int cnt1 = 0;
        while(mn1 <  n){
            mn1 += (a + b);
            cnt1++;
        }
 
 
        int cnt2 = 0;
        int mn2 = 0;
 
        while(mn2 < n){
            if(c > cnt2){
                mn2 += a;
            }
 
            else{
                mn2 += (10 * b);    
                mn2 += a;
            }
            cnt2++;
        }
    
        int mn = min(cnt1,cnt2);
        cout << mn << endl;
 
    }
}