#include <iostream>
using namespace std;
#include <algorithm>
#include <functional>
int a[101]; 
int freq [101];	
bool ok (int b,int s ,int m){
for (int i = 0 ; i<101 ; i++) {
	s = s- (freq[i]/b);}
if (s<=0)
return true ;
else return false;
}
int main () {
int n, m; 
cin>>n>>m;
for (int i = 0 ; i<m ; i++) {
cin>>a[i]; 
freq[a[i]]++;
}
sort (a,a+m);
int ans = 0 ; 
int l =0 ; int r =101;
while (l<r){
int mid =   l + ((r-l +1)/2);
if (ok(mid,n,m)){ l = mid;
ans = mid; }
else{ r = mid-1;}
}
cout<<ans<<endl; 
 return 0;
 }