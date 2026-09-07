#include <bits/stdc++.h>
using namespace std;
 
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
 
int main(){
    int n;
    cin >> n;
    vector<int> vec;
    long long pro = 1;
    for(int i = 1;i < n;i++){
        if(gcd(i,n) == 1){
            vec.push_back(i);
            pro  = (pro * i) % n ;
        }
    }
 
    if(pro % n != 1){
        vec.pop_back();
    }
    cout << vec.size() << endl;
        for(int i : vec){
            cout << i << " ";
        }
 
}