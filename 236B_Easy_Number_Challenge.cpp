#include <bits/stdc++.h>
using namespace std;
int divisors(int n){
  int c = 0;
//   if(n == 1)return n;
//   if(n == 2)return n;
  for(int i = 1;i <= sqrt(n);i++){
    if(n % i == 0){
      if(i == (n / i)){
        c++;
      }
      else{
        c += 2;
      }
    }
  }
  return c;
}
 const int mod = 1073741824;
int main() 
{ 
    unordered_map<int,int>mpp;
    int a,b,c,pro,sum = 0;
    cin >> a >> b >> c;
    for(int i = 1;i <= a ;i++){
      for(int j = 1;j <= b;j++){
        for(int k = 1;k <= c;k++){
            pro = i * j * k;
            mpp[pro]++;
        }
      }
    }
    for(auto i : mpp){
        sum = sum + (divisors(i.first) * i.second);
    }
    cout << sum % mod << endl;
}