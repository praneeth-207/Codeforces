#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>>vec(n,vector<int>(3));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 3;j++){
            cin >> vec[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0;i < n;i++){
        int c = 0;
        for(int j = 0;j < 3;j++){
            if(vec[i][j] == 1){
                c++;
            }
        }
        if(c > 1) cnt++;
    }
    cout << cnt << endl;
}