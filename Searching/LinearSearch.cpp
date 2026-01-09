#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& arr, int target){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    
    vector<int> arr = {3,6,1,8,5,4,9};
    int target = 5;

    int foundIndex = linearSearch(arr,target);

    if(foundIndex == -1){
        cout<<"Target not found!!"<<endl;
    }else{
        cout<<"Target found in index no: "<<foundIndex<<endl;
    }

    return 0;
}