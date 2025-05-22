#include <iostream>
using namespace std;

int main () {
    int usia;
    bool sudahvaksin;

    cout << "Masukkan usia anda: ";
    cin >> usia;

    if (usia < 18) {
        cout << "Tidak boleh masuk gedung. Usia anda belum mencukupi." << endl;
    } else {
        cout << "Apakah anda sudah vaksin? (Ketik 1 untuk sudah, 0 untuk belum): ";
        cin >> sudahvaksin;

        if (sudahvaksin) {
            cout << "Anda boleh masuk gedung karena usia >= 18 dan sudah vaksin." << endl;
        } else {
            cout << "Tidak boleh masuk gedung. Usia cukup, tapi belum vaksin." << endl;
        }
    }

    return 0;
}