#include <iostream>
using namespace std;

void insertionSort() {
    int i, n, j, temp;
    int arr[9];

    for (i = 1; i <= n - 1; i++) {  

        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp) {

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    
}