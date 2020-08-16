#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n,q,x,y,z,i,j,lastAnswer=0,r,index=0;
    cin>>n>>q;
    vector<vector<int>> seqlist;
    for(i=0;i<n;i++){
        vector<int> seq;
        seqlist.push_back(seq);
    }
    for(j=0;j<q;j++){
        cin>>z>>x>>y;
        index=(x^lastAnswer) % n;
        if(z==1)
            seqlist[index].push_back(y);
        if(z==2){
            int k=index;
            index=y%seqlist[index].size();
            lastAnswer=seqlist[k].at(index);
            cout<<lastAnswer<<endl;
        }
    }
}
