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
}
//procedure Insertionsort
void insertionsort()
{

    int temp;       //membuat variabel data temporer atau penyimpanan sementara
    int j;          //membuat variabel j sebagai penanda

    for (int i = 1; i < n; i++)     //1. Looping dengan i dimulai dari 1 hingga n-1
    {

        temp = arr[i];  //2. Simpan nilai arr[i] ke variabel sementara temp

        j = i - 1;  //3. Setting nilai j sama dengan i-1;

        while (j >= 0 && arr[j] > temp) //4. Looping while dimana nilai j lebih besar sama dengan 0 dan 
        {                               //arr[j] lebih besar daripada temp
            arr[j + 1] = arr[j];        //a. simpan arr[j] ke dalam variabel arr[j + 1]
            j--;                        //b. Decrement nilai j by 1
        }


        arr[j + 1] = temp;              //5. simpan nilai temp ke dalam arr[j + 1]


        cout << endl;
        cout << "\nPass " << i << ": "; //output ke layar
        for (int k = 0; k < n; k++)
        {                               //Looping nilai k dimulai dari 0 higga
            cout << arr[k] << " ";      //output ke layar
        }
    }
}

void display()
{                                                           //output baris kosong
    cout << "Total Element Movement= " << n - 1 << endl;        //cout movement element
    cout << "\n===============================" << endl;    //output ke layar
    cout << "element array yang telah tersusun" << endl;    //output ke layar
    cout << "=================================" << endl;    //output ke layar

    for (int j = 0; j < n; j++)
    {                                                        //looping j dimulai dari 0 hingga n-1
        cout << arr[j] << endl;                             //output ke layar

    }
    cout << endl;           //output baris kosong
}

int main()
{
    input();    //memanggil input
}
