#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        for(int i = 0;i < n;i++){
            cin >> vec[i];
        }
        int mn = *min_element(vec.begin(),vec.end());
        int mx = *max_element(vec.begin(),vec.end());
 
        cout << mx - mn + 1 << endl;
    }
}