#include <iostream>

using namespace std;

void swapp(int a[], int x, int y){
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void show(int a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void selectionsort(int a[], int size){
    for(int i = 0; i < size; i++){
        int run = i;
        int min = a[i];
        int index = run;
        while(run < size){
            if(min > a[run]){
                min = a[run];
                index = run;
            }
            run++;
        }
        swapp(a, index, i);
        show(a, size);
    }
}

void insertionsort(int a[], int size){
    int begin = 1;
    int end = size;
    while(begin < size){
        int now = begin;
        while(now > 0){
            if(a[now] < a[now-1]){
                swapp(a, now, now-1);
            }
            now--;
        }
        begin++;
        show(a, size);
    }
}


int main(){
    int arr[] = {5, 7, 9, 1, 2, 3, 4 ,6, 8, 0};
    int bbb[] = {5, 7, 9, 1, 2, 3, 4 ,6, 8, 0};

    int size = sizeof(arr) / sizeof(arr[0]);
    int sizeb = sizeof(bbb) / sizeof(bbb[0]);

    cout << "Selection sort" << endl;
    show(arr, size);
    selectionsort(arr, size);
    show(arr, size);

    cout << "----------------------------------" << endl;
    
    cout << "Insertion sort" << endl;
    show(bbb, sizeb);
    insertionsort(bbb, sizeb);
    show(bbb, sizeb);


    return 0;
}