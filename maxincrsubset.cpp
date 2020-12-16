#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin>>n;
  int a[n], max[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  for(int j=0; j<n; j++){
    if(j!=0){
      int biggest = a[j];
      for(int l=j; l>=0; l--){
        if(a[l]<biggest){
          max[j]++;
        }
      }
    }
    else max[0] = 1;
  }
  sort(max, max+n);
  reverse(max, max+n);
  cout<<max[0];
}
