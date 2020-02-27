/*
	TASK:God of War
	LANG: CPP
	AUTHOR: KersaWC
	SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
	int v;
	long long w;
	int ma;
	bool operator<(const A&o) const{
		return w>o.w;
	}
};
vector< A > g[100010];
priority_queue<A> h;
long long dis[100010];
int main(){
	int n,m,s,t,u,v,i,w,mi=0,cou=0,ch=0;
	long long ma=0,maa=0;
	long long sum=0;
	scanf("%d %d",&n,&m);
	scanf("%d %d",&s,&t);
	while(m--){
		scanf("%d %d %d",&u,&v,&w);
		g[u].push_back({v,w});
		g[v].push_back({u,w});
		sum+=w;
	}
	for(i=0;i<=n;i++)dis[i]=1<<30;
	h.push({s,0,0});
	dis[s]=0;
	while(!h.empty()){
		v=h.top().v;
		w=h.top().w;
		ma=h.top().ma;
		h.pop();
		if(v==t){
			//printf("%d %d\n",w,ma);
			if(w==mi || ch==0){
            ch=1;
			maa=max(ma,maa);
			mi=w;
			}else if(w<mi){
			maa=ma;
			mi=w;
			}
		}
		for(auto x:g[v]){
			if(dis[x.v]<dis[v]+x.w)continue;
			dis[x.v]=dis[v]+x.w;
			m=max(ma,x.w);
			h.push({x.v,dis[x.v],m});
		}
	}
//	printf("%d %d\n",mi,maa);
	printf("%d\n",sum-mi+maa);
	return 0;
}
