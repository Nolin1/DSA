#include <iostream>
#include<vector>
using namespace std;

vector<int> countingSort(vector<int>& arr){
    int size = arr.size();

    int MAX = arr[0];
    int MIN = arr[0];

    for (int i : arr) {
        if (i > MAX) {
            MAX = i;
        } else if (i < MIN) {
            MIN = i;
        }
    }


    // Handel Negative number:
    if(MIN < 0){
        for(int i = 0; i < size ; i++){
            arr[i] = arr[i] - MIN;
        }
        MAX = MAX - MIN;
    }

    vector<int> cfarr (MAX+1, 0);

    for(int i = 0; i < size;i++){
        cfarr[arr[i]]++;
    }

    for(int i = 1; i < cfarr.size(); i++){
        cfarr[i] = cfarr[i] + cfarr[i-1];
    }

    vector<int> finalArr (size);

    for(int i = size -1; i >= 0 ; i--){
        finalArr[cfarr[arr[i]]-1] = arr[i];
        cfarr[arr[i]]--;
    }

    // Handel Negative number:
    if(MIN < 0){
        for(int i = 0; i < size ; i++){
            finalArr[i] = finalArr[i] + MIN;
        }
    }

    return finalArr;
}


int main(){
    
    vector<int> arr = {4, 3, 4, -4, 2, -1, 1, 3, 4, 2,-3};
    vector<int> sortedArray = countingSort(arr);

    for(int i: sortedArray){
        cout<<i<<", ";
    }
    cout<<endl;

    return 0;
}