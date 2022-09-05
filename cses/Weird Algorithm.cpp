#include <iostream>
#include <vector>
using namespace std;
	
int main (){
long long int n;
vector<int> v;
cin>>n;
long long int k=n;
while(n!=1){
if (n%2==0) {
	n=n/2;
}
else {
	n=n*3+1;
}
v.push_back(n);
}
cout<<k<<" ";
for (int i=0; i<v.size();i++)
{
	cout<<v[i]<<" ";
}
return 0;
}
