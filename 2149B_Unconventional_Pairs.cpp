#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      vector<int>v(n);
      vector<int>vec;
      for(int i = 0;i < n;i++)  cin >> v[i];
      sort(v.begin(),v.end());
      for(int i = 0;i < n - 1;i += 2){
        vec.push_back(abs(v[i] - v[i + 1]));
      }
      sort(vec.begin(),vec.end());
      cout << vec[(n / 2) - 1] << endl;
    }
}