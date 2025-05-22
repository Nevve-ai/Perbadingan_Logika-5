#include <iostream>
using namespace std;

int main() {

    int umur;
    bool punyaSIM;

    cout << "Masukkan umur saat ini : ";
    cin >> umur;

    cout << "Apakah kamu memiliki sim? (ketik 1 untuk ya dan 0 untuk tidak) : ";
    cin >> punyaSIM;

    if (umur >= 17 && punyaSIM) // && = dan
    {
        cout << "Umur anda sudah di atas 17 (Legal) dan memiliki izin untuk berkendara (karena punya sim)" << endl;
    }
    else if (umur >= 17 && !punyaSIM) // ! = tidak, !punyaSIM = Tidak punya SIM
    {
        cout << "Umur anda sudah di atas 17 (Legal) tetapi tidak meiliki izin untuk berkendara (karena tidak punya sim)" << endl;
    }
    else
    {
        cout << "Umur anda belum mencukupi (Belum Legal) dan tidak memiliki izin untuk berkendara" << endl;
    }
    
    return 0;
    
}