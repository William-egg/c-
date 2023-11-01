#include<bits/stdc++.h>
using namespace std;
int h,hunum,maxIndex;
vector<int> fi,di,ti;//最初钓鱼量   单位时间减少量   消耗的时间 
vector<int> remainfi;
typedef struct huData{
	int time[30];
	int maxFish;
}huDatas[30];
int getMax(vector<int> remainfiTemp,int end){
	int max = -1;
	for(int i = 1;i<=end;i++){
		if(remainfiTemp[i]>remainfiTemp[max]){
			max = i;
		}
	}
	return max;
}
void solve(){
	for(int i = 1;i<=hunum;i++){
		int timeTemp = h*60;
		
		
		
		
	}
}
int main(){
	cin>>h>>hunum;
	fi.push_back(0);
	di.push_back(0);
	ti.push_back(0);
	for(int i = 1;i<=hunum;i++){
		int fit,dit,tit;
		cin>>fit>>dit>>tit;
		fi.push_back(fit);
		di.push_back(fit);
		ti.push_back(fit);
	}
	solve(); 

	
	
	
	return 0;
} 
