#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> number);

int main(){

    vector<int> number = {3,6,1,8,5,4,9};
    int n = number.size();

    cout<<"Before sorting: ";
    printVector(number);

    for(int i = 0; i < n-1 ; i++){
        int min = number[i];
        int index;
        for(int j = i+1 ; j < n ; j++){
 
            if(min > number[j]){
                min = number[j];
                index = j;
            }
        }
            cout<<"[ Minimum value is: " << min<<" ]"<<endl;
            cout<<"Swaping between "<<min << " and " << number[i]<<endl<<endl;

        int temp = number[i];
        number[i] = min;
        number[index] = temp;

            cout<<"After " << i+1 <<"th iteration: ";
            printVector(number);
    }
}

void printVector(vector<int> number){
    for(int num:number){
        cout<<num<<" ";
    }
}