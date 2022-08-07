#include<iostream>
#include<bits/stdc++.h>
#define MAXN 1050
#define ture true
using namespace std;
struct pro{
	int a[MAXN];
	int ans;
}p[MAXN]; 
int out;
int main(){
	int n,m;
	cin >> n >> m; 
	for(int i = 0;i < n;i++) {
		for(int j = 0; j < m ;j++){
			cin >> p[j].a[i];
		} 
	}
	for (int i = 0;i < m; i++){
		cin >> p[i].ans;
		int x = 0,y = 0;
		for(int j = 0; j < n;j++){
			if(p[i].ans == p[i].a[j]){
				x++;
			}
			else{
				y++;
			}
		} 
		if(x>y){
			out++;
		}
	}
	cout << out;
	return 0;
}
