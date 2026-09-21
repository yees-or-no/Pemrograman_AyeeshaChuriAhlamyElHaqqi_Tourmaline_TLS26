#include <iostream>
using namespace std;

int hitungPanjang(char pesan[]) {
    int panjang = 0;
    while (pesan[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

char keHurufBesar(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }
    return c;
}

int main() {
    char pesan[1000];
    cout << "Masukkan pesan: ";
    cin.getline(pesan, 1000);
    int panjang = hitungPanjang(pesan);
    char hasil[1000];
    int nilaiSebelumnya = 0;

    for (int i = 0; i < panjang; i++) {
        char hurufAsli = keHurufBesar(pesan[i]);
        int posisiAsli = hurufAsli - 'A' + 1;
        int nilaiBaru;
        if (i == 0) {
            nilaiBaru = posisiAsli;
        } else {
            nilaiBaru = posisiAsli + nilaiSebelumnya;
            while (nilaiBaru > 26) {
                nilaiBaru = nilaiBaru - 26;
            }
        }
        char hurufBaru = (nilaiBaru - 1) + 'A';
        hasil[i] = hurufBaru;
        nilaiSebelumnya = posisiAsli;
    }
    hasil[panjang] = '\0';
    cout << "\nPesan tersandi: ";
    for (int i = 0; i < panjang; i++) {
        cout << hasil[i];
    }
    cout << endl;
    return 0;
}