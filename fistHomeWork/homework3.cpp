#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int* a = (int*)malloc(sizeof(int)*(n+1));
	a[1] = 1;
	for(int i = 2;i<=n;i++){
		int ans = 1;
		for(int j = 1;j<=i/2;j++){
			ans =ans + a[j];
		}
		a[i] = ans;
		cout<<ans<<endl;
	}
	for(int i = 1;i<=n;i++){
		cout<<a[i]<<"   ";
	}
	return 0;
}
