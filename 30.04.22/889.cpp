#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
ifstream input("C:\\Users\\sapfi\\CLionProjects\\untitled14\\input.txt");
int k, m;
input>>k>>m;
vector<int>thread;
vector <int> height;
for (int i=0; i<m; i++){
    int a,b;
    input>>a>>b;
    thread.push_back(a);
    height.push_back(b);
}

for (int i=0;i<m;i++){
    for (int j=0;j<m-1;j++){
      if (thread[j]>thread[j+1]){
          int x=thread[j];
          int y=height[j];
          thread[j]=thread[j+1];
          thread[j+1]=x;
          height[j]=height[j+1];
          height[j+1]=y;
      }
    }
}
/*for (int i=0; i<m; i++){
    cout<<thread[i]<<" "<<height[i]<<endl;
}*/
int kk=k;
int stop;
for(int i=0; i<m; i++){
    for (int s=0; s<i;s++){
    if ((thread[i]==kk)or(thread[i]==kk-1)){
        int max=height[i];
        int j=s;
        if((max<height[i+1])&&(height[i]<height[i-1])){
            max=height[i+1];
            j=i;
        }
        int ab=thread[j];
        int ba=height[j];
        thread[j]=thread[i];
        thread[i]=ab;
        height[j]=height[i];
        height[i]=ba;
        kk=thread[j];
        stop=i;
        if ((thread[i]==thread[i+1])){ break;}
    }
}
}
cout<<thread[stop]+1;

}
