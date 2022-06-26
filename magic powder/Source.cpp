#include <iostream>
using namespace std;
long long  n ,k;   
long long  a[10000000];
long long  b[10000000]; 
long long  need [10000000];
long long  ans = 0; 
bool m ;
bool ok (long long  s, long long  h){
	m = true;
for (long long  i =0;  i<n ; i++){
need[i] = b[i] - s*a[i];
if (need[i]<0) {
need[i] = need[i] + h; 
h = need[i]; 
if (need[i]<0) {
m = false; 
goto here; 
}
}
}
here:
return m; 
}
int main () {
cin>>n>>k; 
for (long long  i =0 ; i<n; i++){
cin>>a[i];
}
for (long long  i =0 ; i<n; i++){
cin>>b[i];
}
long long  l = 0 ; long long  r =10e9;
while (l<r) {
long long  mid =l + ((r-l +1)/2);
if (ok(mid,k)){
	l = mid;} 
else
{
r = mid-1;
} 
ans = r;
}
cout<<ans<<endl; 
return 0; 
}