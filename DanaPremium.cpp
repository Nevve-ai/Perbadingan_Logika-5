#include <iostream>
using namespace std;

int main () {

    int umur;
    bool ktp;

    cout << "Berapa umur anda saat ini : ";
    cin >> umur;
    
    if (umur < 17)
    {
        cout << "Maaf, anda belum cukup umur dan otomatis tidak punya ktp" << endl;
    }
    else
    {
        cout << "Apakah anda sudah memiliki KTP ? (Ketik 1 untuk sudah, 0 untuk belum) : ";
        cin >> ktp;

        if (ktp)
        {
            cout << "Selamat, anda berhak aktivasi DANA Premium ! " << endl;
        }
        else
        {
            cout << "Maaf, umur anda telah mencukupi tetapi belum memiliki KTP " << endl;
        }
    }

    return 0;
}