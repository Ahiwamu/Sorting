#include <iostream>

using namespace std;

int binarysearch(int a[], int size, int key){
    int left = 0;
    int right = size - 1;
    int mid = (right + left) / 2;
    while(true){
        if(left > right){
            return 9999;
        }
        else{
            if(key < a[mid]){
                right = mid - 1;
                mid = (right + left) / 2;
            }
            else if(key > a[mid]){
                left = mid + 1;
                mid = (right + left) / 2;
            }
            else{
                return mid;   
            }
        }
    }
}

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6 ,7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 5;

    int ans = binarysearch(arr, size, key);

    if(ans == 9999){
        cout << "Key is not in array";
    }
    else{
        cout << "Answer is " << ans;
    }
    return 0;
}