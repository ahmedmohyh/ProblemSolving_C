#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <cmath>
long long r;  // money
long long ans = 0; 
long long x,y,z; // number in the kitchen 
long long pb , ps, pc; // prices
int a= 0 , b=0, c=0;
bool ok (long long k) {
long long need_b = max (long long (k*a -x) ,long long (0)) *pb;
long long need_s = max (long long (k*b -y) ,long long (0)) *ps;
long long need_c = max (long long (k*c -z) ,long long (0)) *pc;
if (need_b +need_c +need_s <=r) 
return true;
else return false;
}
int main () {
string s; 
cin>>s;
cin>>x>>y>>z;
cin>>pb>>ps>>pc;
cin>>r;
int t = s.length(); 
for (int i =0 ; i<t ; i++){
if (s[i] == 'B' ) a++;
else if (s[i] == 'S' ) b++;
else c++;
}
long long l =0 ;      long long R = 10e12;
while (l<R){
long long  mid = l + ((R-l +1)/2);
if (ok(mid)){
l =mid;
}
else R  = mid -1;
ans = R;
}
cout<<ans<<endl; 
return 0; }