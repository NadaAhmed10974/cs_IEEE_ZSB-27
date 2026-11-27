#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int a,b,c;
    cin >> a >> b >> c;
    if(a + b + c ==2* max(a, max(b,c)))
      cout <<"YES\n";
    else
      cout <<"NO\n";
  }
  return 0;
}
