#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v{1,2,3,4,5};
    int start=0;
    int end=v.size()-1;
    while(start!=end)
    {
        int tmp=v[start];
        v[start]=v[end];
        v[end]=tmp;
        start++;end--;
    }

    for(auto it : v){
        cout<<it<<" ";
    }

    cout<<endl;
    return 0;
}