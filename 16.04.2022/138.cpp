#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,k; bool f;
    cin>>n>>m;
    int r[m][3],d[n];
    for(i=0;i<n;++i)d[i]=30000;
    d[0]=0;
    for(i=0;i<m;++i){
        cin>>r[i][0]>>r[i][1]>>r[i][2];
        r[i][0]--;r[i][1]--;}
    do{f=false;
        for(k=0;k<m;++k){
            i=r[k][0];j=r[k][1];
            if(d[i]<30000&&d[j]>d[i]+r[k][2])
            {f=true;d[j]=d[i]+r[k][2];}}
    }while(f);
    for(auto e:d)cout<<e<<' ';
    return 0;}