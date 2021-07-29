#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{0,2,1,1,2,0};
    int l=0, m=0,h=v.size()-1;
    while(m<h)
    {
       if(v[m]==0){
           swap(v[l],v[m]);l++;m++;
       }
       else if(v[m]==1){
           m++;
       }
       else{
           swap(v[m],v[h]);
           h--;
       }
    }

    for(auto it : v){
        cout<<it <<" ";
    }
    cout<<endl;
}