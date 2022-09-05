/*Weird Algorithm c++ solution */
#include <iostream>
#include <vector>
using namespace std;
	
int main (){
long long int n;
vector<int> v;
cin>>n;
cout<<n<<" ";
while(n!=1){
if (n%2==0) {
	n=n/2;
}
else {
	n=n*3+1;
}
cout<<n<<" ";
}
return 0;
}
