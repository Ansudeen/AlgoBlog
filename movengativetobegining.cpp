// 

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int low=0, high=arr.size()-1;
    while(low<high){
       
       while(arr[low]<0){
           low++;
       }
       while(arr[high]>0){
           high--;
       }
       swap(arr[low],arr[high]);
    }

    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
}