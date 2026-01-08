#include <iostream>
#include<vector>
using namespace std;

vector<int> countingSort(vector<int>& arr){
    int size = arr.size();

    int MAX = arr[0];

    for(int i: arr){
        if(i>MAX)
            MAX = i;
    }

    vector<int> farr (MAX +1, 0);

     for(int i = 0; i < size;i++){
        farr[arr[i]]++;
    }

    for(int i = 1; i < farr.size(); i++){
        farr[i] = farr[i] + farr[i-1];
    }
    return farr;
}

int main(){
    
    vector<int> arr = {4, 3, 4, 2, 1, 3, 4, 2};
    vector<int> farr = countingSort(arr);

    for(int i: farr){
        cout<<i<<", ";
    }
    cout<<endl;

    return 0;
}