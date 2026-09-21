#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
 
        ll a, b, c;
        cin >> a >> b >> c;
 
        ll res = a + c;
        ll mx1 = abs(res - b);
 
        ll mx2 = abs(a - b);
        
        cout << max(mx1, mx2) << endl;
    }
}