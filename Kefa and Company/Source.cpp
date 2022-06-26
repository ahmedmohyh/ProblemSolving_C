#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main () {
long long n , d;
cin>>n>>d;
vector<pair<int,int>> vec(n) ;
vector <int> sum(n);
for (int i =0 ; i<n ; i++){
int m =0; int f =0; 
cin>>m>>f;
vec[i] = make_pair (m,f);
}
for (int i =0 ; i<n ; i++){
cout<<vec[i].first <<"      "<<vec[i].second<<endl; 
}
sort (vec.begin(), vec.end());
sum[0] = vec[0].first; 
for(unsigned int i=1; i<n; i++){
	sum[i] = sum[i-1] + vec[i].first; }
for(unsigned int i=0; i<n; i++){
	cout<<sum[i]<<"      ";}
long long ans = 0 ;
long long l =1; long long r; 
for (int i =0 ; i<n ; i++){
long long mid; 
 l =i; r = n; 
while (l<r) {
mid = l + ((r-l +1)/2);
if ((vec[mid].first - vec[l].first) <d) l =mid; 
else r = mid-1;}
//ans = max (long long (ans), long long (sum[r] - sum[i]));
}
cout<<ans<<endl; 
return 0; }
