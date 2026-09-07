#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n;
    cin >> n;
    int q = n + 2;
    vector<int>vec(q);
    for(int i = 0;i < q;i++){
        vec[i] = 1;
    }
 
    for(int i = 2; i <= sqrt(q);i++){
        if(vec[i] == 1){
            for(int j = i * i;j < q;j += i){
                vec[j] = 2;
            }
        }
    }
    cout << *max_element(vec.begin(),vec.end()) << endl;
    for(int i = 2; i < q;i++){
        cout << vec[i] << ' ';
    }
}