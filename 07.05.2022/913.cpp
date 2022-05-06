#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
struct road{
    int d;
    int l;
    int h;
    bool s=1;
};

int main() {
ifstream input("C:\\Users\\sapfi\\CLionProjects\\untitled20\\input.txt");
int n, m;
input >>n>>m;
vector<road>vec;
for (int i=0; i<n; i++){
    road x;
    input>>x.d>>x.l>>x.h;
    vec.push_back(x);
}
int sum=0, max, a, time=0;
max=vec[0].l;
for (int i=0; i<n; i++){
sum+=vec[i].d;
if(vec[i].l>m){
    vec[i].l=m;
}
}
time=sum/max;
    int t=time;
for(int i=0;i<n;i++){
int a=0;
    for (int j=0; j<n; j++){
        if(vec[i].l>vec[j].l){
            vec[j].s=0;
            if (vec[j].s == 0) {
                 a+= vec[j].h;
            }
        }
        else vec[i].s=1;
        }
        t = sum / vec[i].l+a;
        if(t<time){
        max=vec[i].l;
        }
    }
cout<<max;
}
