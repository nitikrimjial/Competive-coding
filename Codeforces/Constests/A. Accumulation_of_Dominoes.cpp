/*A. Accumulation of Dominoes*/
/*for local computer*/
/*solution in c++17*/
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


--------------------------------------------------------------------------
	/*for online judge */
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
		if (j<n) {
     		if (dom[i][j]+1==dom[i][j+1]) count++;
     	}
}	
}
 cout<<count;
return 0;
}

-------------------------------------------------------------
	#include <iostream>
using namespace std;
	
int main (){
	long long int n,m;
	cin>>n>>m;
	int dom[n*m];
	long long int count =0;
	for (int i =0;i<n*m;i++){
		dom[i]=i+1;

	}
	for (int i=0;i<n*m;i++){
		if (){
			if (dom[i]+1==dom[i+1]) count++;
		}
	}

cout<<count;
return 0;
}
