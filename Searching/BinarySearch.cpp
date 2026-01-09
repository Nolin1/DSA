#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int target){
    int left = 0;
    int right = arr.size() -1;

    while(left<=right){
        int mid = left+((right-left)/2);

        if(arr[mid]==target){
            return mid;
        }else if(target < arr[mid]){
            right = mid -1;
        }else{
            left = mid +1;
        }
    }
    return -1;
}

int main(){
    
    vector<int> arr = {1,3,7,23,45,67,78,90};
    int target = 45;

    int foundIndex = binarySearch(arr,target);

    if(foundIndex == -1){
        cout<<"Target not found!!"<<endl;
    }else{
        cout<<"Target found in index no: "<<foundIndex<<endl;
    }

    return 0;
}