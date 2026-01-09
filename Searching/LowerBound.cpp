#include <iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int>& arr, int target){
    int left = 0;
    int right = arr.size();

    while(left<right){
        int mid = left+((right-left)/2);

        if(target>arr[mid]){
            left = mid +1;
        }else{
            right = mid;
        }  
    }
    return left;
}

int main(){
    vector<int> arr = {1,3,7,7,7,23,45,45,45,67,78,78,90};
    int target = 45;

    int foundIndex = lowerBound(arr,target);

    cout<<"Target first occured at Index no: "<<foundIndex<<endl;

    return 0;
}