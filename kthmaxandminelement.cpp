#include <iostream>
#include <queue>
#include <vector>
using namespace std;


void kmin(vector<int> arr,int k)
{
    priority_queue<int,vector<int>,greater<int>> p(arr.begin(),arr.end());
    for(int i=0;i<k-1;i++){
        if(p.empty()==false){
            p.pop();
        }
    }

    if(p.empty()==false)
        cout<<"min : "<<p.top()<<endl;
}

void kmax(vector<int> arr,int k)
{
    priority_queue<int> p(arr.begin(),arr.end());
    for(int i=0;i<k-1;i++){
        if(p.empty()==false){
            p.pop();
        }
    }

    if(p.empty()==false)
        cout<<"max : "<<p.top()<<endl;
}

int main()
{
    vector<int> arr{7,10,4,3,20,15};
    kmin(arr,4);
    kmax(arr,4);
}