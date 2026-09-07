#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        int e = 0,o = 0;
        for(int i = 0 ;i < n;i++){
            cin >> vec[i];
        }
        for(int i : vec){
            if(i % 2 == 0)e++;
            else o++;
        }
        if(e == 0 || o == 0){
            for(int i : vec){
                cout << i << ' ';
            }
        }
        else {
            sort(vec.begin(),vec.end());
            for(int i : vec){
                cout << i << ' ';
            }
 
        }
        cout << endl;
    }
}