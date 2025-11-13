#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> number);

int main(){
    vector<int> number = {4,3,7,2,5,9,1};
    int n = number.size();
    cout<<"Before sorting: ";
    printVector(number);

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(number[j]>number[j+1]){

                cout<<"Swaping: "<<number[j] <<" and " << number[j+1];

                int temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
             cout<<endl<< "Sorting when value of i is " << i<<": ";
                printVector(number);
        }
         cout<<endl<<"After the "<<i+1<<"th iteration: ";
            printVector(number);
            cout<<endl<<endl;

    }
}

void printVector(vector<int> number){
    for(int num:number){
        cout<<num<<" ";
    }
}