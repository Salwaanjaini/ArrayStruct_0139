#include <iostream>
using namespace std;


int main() {
    //menampilkan isi array pada index tertentu
    cout << "Tampilkan skor ke 3 = " << skor[2] << endl;
    //mengisi array pada index tertentu
    skor[2] = 100; 
    //menampilkan isi array pada index tertentu
    cout << "Tampilkan skor ke 3 = " << skor[2] << endl;

    //mengisi array dengan loop for
    for(int n = 0 ; n < 3 ; n++ ){
        cout << "Mahasiswa ke-" << n+1 << endl;
        cout << "Nama Mahasiswa = ";
        cin >> nama[n];
    }
    cout << endl;
    //menampilkan isi array
    for(int n = 0 ; n < 3 ; n++ ){
        cout << "Data ke-" << n+1 << endl;
        cout << "Data Mahasiswa = " << nama[n] << endl;
    }

}

