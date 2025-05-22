#include <iostream>
using namespace std;

int main () {

    int usia;
    bool sudahvaksin;

    cout << "Masukkan usia anda : ";
    cin >> usia;

    cout << "Apakah anda sudah vaksin? (Ketik 1 untuk sudah, 0 untuk belum) : ";
    cin >> sudahvaksin;

    if (usia >= 18 && sudahvaksin)
    {
        cout << "anda boleh masuk gedung karena usia diatas 18 dan sudah vaksin";
    }
    else if (usia >= 18 && !sudahvaksin)
    {
        cout << "tidak boleh masuk gedung, usia anda mencukupi 18 tetapi belum vaksin";
    }
    else if (usia < 18 && sudahvaksin)
    {
        cout << "tidak boleh masuk gedung, sudah vaksin tapi usia belum cukup";
    }
    else
    {
        cout << "tidak boleh masuk gedung, usia anda belum mencukupi dan belum vaksin";
    }
    
    return 0;
}