/*
    TASK:Convex Hull
    LANG: CPP
    AUTHOR: KersaWC
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct point{
 long long x,y;
};
point convex[50005];
point p0;
long long dist(point p1,point p2){
    return (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
}
int orientation(point p0,point p1,point p2){// on the left or right sidr
    long long res = (p1.y-p0.y)*(p2.x-p0.x)-(p2.y-p0.y)*(p1.x-p0.x);// the different of the slope
    if(res<0)return 0;//left turn
    if(res>0)return 1;//right turn
    if(res==0) return 2;//in the same line
}
bool cmp(point p1,point p2){
    int res = orientation(convex[1],p1,p2);
    if(res==0) return true;
    if(res==1) return false;
    if(res==2) return dist(convex[1],p1)<dist(convex[1],p2);
}
int top=0;
point sta[50010];
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&convex[i].x,&convex[i].y);
    }
    for(i=1;i<=n;i++){
        if(convex[1].x>convex[i].x){
            swap(convex[1],convex[i]);
        }else if(convex[1].x==convex[i].x){
        if(convex[1].y<convex[i].y){
            swap(convex[1],convex[i]);
        }
        }
    }//find the uooer left point then sort
    p0 = convex[1];
    sort(convex+2,convex+n+1,cmp);
    sta[++top] = convex[1];
    sta[++top] = convex[2];
    for(i=3;i<=n;i++){
        while(top>1 && orientation(sta[top-1],sta[top],convex[i])!=0)top--;
        sta[++top]=convex[i];
    }
    while(orientation(sta[top-1],sta[top],convex[1])==2){
        top--;
    }
    printf("%d\n",top);
    for(i=1;i<=top;i++) printf("%lld %lld\n",sta[i].x,sta[i].y);
    return 0;
}
