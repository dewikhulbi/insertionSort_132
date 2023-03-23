#include <iostream>
using namespace std;

int arr[20];   //membuat array dengan panjang data 20
int n;          //membuat variable inputan n

void input()
{   //Procedure input
    while (true)
    {
        cout << "Masukan Jumlah Data pada Array : ";    //membuat inputan jumlah elemen array
        cin >> n;

        if (n <= 20)
        {   //membuat kondisi n tidak lebih dari 20
            break;

        }
        else
        {
            cout << "\nArray yang anada masukan maksimal 20 elemen. \n";    //menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                                   //membuat jarak per baris program
    cout << "====================" << endl;                          //membuat tampilan susunan data elemen array'
    cout << "Masukan elemen array" << endl;
    cout << "====================" << endl;

    //menggunakan perulangan for untuk menyimpan data pada array
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ":  ";     //masukan atau menginput nilai data n
        cin >> arr[i];                              //masukan nilai data n kedalam array arr

    }
};


