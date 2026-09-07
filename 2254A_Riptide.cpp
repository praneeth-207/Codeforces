#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
    cin >> t;
    while(t--){
        vector<int>vec(3);
        for(int i = 0;i < 3;i++){
            cin >> vec[i];
        }
        int ans = 0;
        while(1){
            if((vec[0] == vec[1]) || (vec[1] == vec[2]) || (vec[2] == vec[0])){
                break;
            }
            int mx = max_element(vec.begin(),vec.end()) - vec.begin();
            int mn = min_element(vec.begin(),vec.end()) - vec.begin();
 
            vec[mx]--;
            vec[mn]++;
            ans++;
 
 
        }
        cout << ans << endl; 
    }
}