//implement binary search algorithm in array and find the element '17'
#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {5,9,17,23,25,45,59,63,71,89};
    int leftIndex = 0;
    int rightIndex = (sizeof(arr) / 4) - 1;
    int search_element;
    
    cout<<"Enter element to be be searched: "<<endl;
    cin>>search_element;

    while(leftIndex <= rightIndex){
        int mid = (leftIndex + rightIndex) / 2;

        if(search_element == arr[mid]){
            cout<<"Element found at "<<mid<<"th index."<<endl;
            return 0;
        }
        else if(search_element < arr[mid]){
            rightIndex = mid - 1;
        }
        else{
            leftIndex = mid + 1;
        }
    } 
    cout<<"Elemnt not found in array";
    return 0;
}