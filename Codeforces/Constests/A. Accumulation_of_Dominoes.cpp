/*A. Accumulation of Dominoes*/
#include <bits/stdc++.h>
using namespace std;
	
int main (){
	int n,m;
	cin>>n>>m;
	int dom[n][m];
	int count =0;
for (int i=0;i<n;i++){
	for (int j=0;j<m;j++){
	 dom[i][j]=m*i+j+1;	
	}	
}

for (int i=0; i<n; i++){
     for (int j=0; j<m; j++){
     	if (j<n) {
     		if (dom[i][j]+1==dom[i][j+1]) count++;
     	}
                        cout<<" "<<dom[i][j]<<" ";
                }
                cout<<"\n";

        }
 cout<<count;
return 0;
}
