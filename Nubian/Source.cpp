#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>;
long long n,s;
long long arr[100002]; 
long long arr1[100002];
bool ok (long long b ,long long c) {
	//cout<<"b is : "<<b<<endl; 
for (long long  i = 1 ; i<=n ; i++) {
arr[i] = arr[i] + i*b;
}
sort (arr, arr+n+1);
//for (long long i = 1 ; i<=n ; i++)
	//cout<<arr[i]<<"    ";
for (long long i = 1 ; i<=b ; i++){
c -= arr[i];

if (c>=0) { 
}
else return false;  
}
//cout<<"c is :  "<<c<<endl; 
return true;
}
int main () {
cin>>n>>s;
for (long long i= 1; i<=n ; i++) {
cin>>arr[i]; 
arr1[i] = arr[i];
}
//for (long long i= 1; i<=n ; i++)
	//cout<<arr[i]<<"  "<<arr1[i]<< "   ";
long long l =0 ; long long r = n;
long long ans = 0; 
long long m  = 0 ; 
while (l<r) {
long long mid = l + ((r-l +1)/2);
if (ok (mid ,s)) {
	ans = mid;
	l = mid;} 
else r = mid-1; 
for (long long i= 1; i<=n ; i++)
arr[i] = arr1[i];
}
for (long long  i = 1 ; i<=n ; i++) {
arr[i] = arr[i] + i*ans;
}
sort (arr, arr+n+1);
//m= s-m;
//cout<<endl<<endl; 
for (long long i = 1 ; i<=ans ; i++) m+= arr[i];
//bool t = ok (3 ,s);
//cout<<t<<endl; 
cout<<ans<<"    "<<m<<endl; 
return 0; 
}