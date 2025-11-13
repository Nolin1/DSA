#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> number);

int main(){

    vector<int> number = {3,6,1,8,5,4,9};
    int n = number.size();

    cout<<"Before sorting: ";
    printVector(number);
    cout<<endl<<endl;
    
    for(int i = 1 ; i < n ; i++){
        int temp = number[i];
        int j = i - 1;
        while(j >= 0 && number[j] > temp){
            cout<<"Swaping number: " << number[j]<<endl;
            number[j+1] = number[j];
            j--;
        }
        number[j+1] = temp;
        cout<<"After " << i <<" th iteration: ";
        printVector(number);
        cout<<endl<<endl;
    }

    printVector(number);
}

void printVector(vector<int> number){
    for(int num:number){
        cout<<num<<" ";
    }
}