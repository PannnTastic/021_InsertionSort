#include <iostream>
using namespace std;

int n;
int arr[9];

void input() {//prosedur untuk input
    while (true) {
        cout << "Masukkan Banyak elemen Pada Array : ";//output ke layar
        cin >> n;//input ke pengguna
        if (n <= 20)//jika n kurang dari atau samadengan 20
            break;//keluar dari loop

        else {
            cout << "\nArray hanya dapat menampung 20 elemen\n";//output jikaelemen yang dimasukkan lebih dari 20
        }
    }

    cout << endl;//output baris kosong
    cout << "=================\n";
    cout << "Masukkan Elemen Array\n";//output ke layar
    cout << "================\n";

    for (int i = 0; i < n; i++) {//looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";//output ke layar
        cin >> arr[i];//input pengguna
    }

}

void insertionSort() {
    int i, j, temp;
    

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

void display() {
    cout << endl;
    cout << "=================\n";
    cout << "Element Array yang telah tersusun\n";
    cout << "=================\n";
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah Pass = " << n - 1 << endl;
    cout << endl;
}

int main()
{
    
}