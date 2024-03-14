#include <iostream>
using namespace std;

int arr[9];
int n;

void input() {  //procedure untuk input

    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";  //output ke layar
        cin >> n;       //input dari pengguna
        if (n <= 20)    //jika n kurang dari atau sama dengan 20
            break;      //keluar dari loop
        else {          //jika n lebih dari 20
            cout << "Array dapat mempunyai maksimal 20 elemen" << endl; //output ke layar
        }
    }
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;    //output menampilkan "Masukkan elemen array"
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << " : ";
        cin >> arr[i];
    }
}

void insertionsort() {
            int i, temp, j;

            for (i = 1; i <= n - 1; i++) { //step 1

                temp = arr[i]; //step 2

                j = i - 1; //step 3

                while (j >= 0 && arr[j] > temp) //step 4
                {
                    arr[j + 1] = arr[j]; //step 4a
                    j--; //step 4b
                }

                arr[j + 1] = temp; //step 5
            }
        
}

void display() {
            cout << endl;
            cout << "================================" << endl;
            cout << "Elemen Array yang telah tersusun" << endl;
            cout << "================================" << endl;
            cout << endl;
            for (int j = 0; j < n; j++) {
                cout << arr[j]; //output setiap element array pada garis baru
                if (j < n - 1) {
                    cout << "-->";
                }
            }
            cout << endl;
            cout << endl;
            cout << "Jumlah pass = " << n - 1 << endl;
            cout << endl;
        
}

        
int main()
{
    input();
    insertionsort();
    display();
    system("pause");

    return 0;
            
}