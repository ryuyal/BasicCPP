//
// Created by Liu on 2023/5/27.
//

#include<iostream>
using namespace std;

void bubbleSort(int * arr, int len){

    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

void printArr(int * arr, int len){
    int * p = arr;

    for (int i = 0; i < len; ++i) {
        cout << *p << " ";
        p++;
    }
    cout << endl;
}

int main(){
    int arr[] = { 4,3,6,9,0,2,11,8,7,5 };
    int len = sizeof(arr)/sizeof(arr[0]);

    printArr(arr, len);

    bubbleSort(arr, len);
    printArr(arr, len);

    return 0;
}
