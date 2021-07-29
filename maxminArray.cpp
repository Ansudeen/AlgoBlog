#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   int arr[] = { 1000, 11, 445,
                  -1, 330, 3000 };
    int arr_size = 6;

    int min=INT_MAX;
    int max=INT_MIN;

    for(int i=0;i<arr_size;i++){
        min=std::min(arr[i],min);
        max=std::max(arr[i],max);
    }
     
     cout<<"min = "<<min<<endl;
     cout<<"max = "<<max<<endl;
}