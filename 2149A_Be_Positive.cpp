#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while(t--){
      int n,c = 0,cn = 0;
      cin >> n;
      vector<int>v(n);
      for(int i = 0;i < n;i++)  cin >> v[i];
      for(int i = 0;i < n;i++){
        if(v[i] == -1)  c++;
        if(v[i] == 0) cn++;
      }
      if(c % 2 != 0){
        cn += 2;
      }
      cout << cn << endl;
    }
    return 0;
}