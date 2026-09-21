#include <iostream>
using namespace std;

void hapusElemen(int arr[], int &ukuran, int indeks) {
    for (int i = indeks; i < ukuran - 1; i++) {
        arr[i] = arr[i + 1];
    }
    ukuran--;
}

int main() {
    int N, K;
    cout << "Masukkan jumlah astronot (N): ";
    cin >> N;
    cout << "Masukkan nilai K awal: ";
    cin >> K;

    int astronot[1000];
    for (int i = 0; i < N; i++) {
        astronot[i] = i + 1;
    }
    int sisa = N;
    int posisi = 0;
    cout << "\nUrutan astronot yang dieliminasi:\n";

    while (sisa > 1) {
        posisi = (posisi + K - 1) % sisa;
        int eliminasi = astronot[posisi];
        cout << eliminasi << " ";
        hapusElemen(astronot, sisa, posisi);

        if (eliminasi % 2 == 0) {
            K = K + 2;
        } else {
            K = K - 1;
        }
        if (K < 2) {
            K = 2;
        }
        posisi = posisi % sisa;
    }
    cout << "\n\nAstronot terakhir yang bertahan: " << astronot[0] << endl;
    return 0;
}