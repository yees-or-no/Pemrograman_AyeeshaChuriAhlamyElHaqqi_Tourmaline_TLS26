# Pemrograman_AyeeshaChuriAhlamyElHaqqi_Tourmaline_TLS26
TETI Lab Skill 2026: Luminous Quest - Pemrograman Dasar

Solusi C++ untuk dua studi kasus algoritma: simulasi eliminasi melingkar dengan nilai K dinamis (*The Last Astronaut*), dan sistem sandi huruf berantai (*Alien-In-The-Middle*). Kedua program ditulis hanya menggunakan `<iostream>`, tanpa fungsi dari library lain sehingga semua fungsi bantu (hapus elemen array, hitung panjang string, konversi huruf) dibuat secara manual.

## Struktur Repository

```
.
├── lastAstronot.cpp     # Solusi Problem 1: The Last Astronaut
├── alienInTheMiddle.cpp        # Solusi Problem 2: Alien-In-The-Middle
├── Tourmaline_AyeeshaChuriAhlamyElHaqqi_PemrogramanDasar_Fase1.pdf # Flowchart dan pseudocode kedua masalah
└── README.md
```

## Problem 1: The Last Astronaut
- Hitung K langkah dari posisi sekarang, astronot yang kena hitungan ke-K dieliminasi.
- Setelah eliminasi, K diperbarui: **+2** jika nomor yang dieliminasi genap, **−1** jika ganjil.
- K tidak pernah boleh kurang dari 2.
- Proses berulang hingga tersisa satu astronot.
**Kompilasi & jalankan:**
```bash
g++ -o lastAstronot lastAstronot.cpp
./lastAstronot
```
**Input:** jumlah astronot (N) dan nilai K awal.
**Output:** urutan astronot yang dieliminasi, serta astronot terakhir yang bertahan.

## Problem 2: Alien-In-The-Middle
Sistem sandi berantai: setiap huruf baru dihitung dari posisi alfabet huruf asli saat ini ditambah posisi alfabet huruf asli sebelumnya, dengan hasil yang melewati 26 diputar kembali ke A.
**Kompilasi & jalankan:**
```bash
g++ -o alienInTheMiddle alienInTheMiddle.cpp
./alienInTheMiddle
```
**Input:** satu baris pesan (huruf).
**Output:** pesan yang sudah tersandi.
**Contoh:**
```
Input : ALIENS
Output: AMUNSG
```

## Dokumentasi
Flowchart dan pseudocode lengkap untuk kedua program tersedia di [`Tourmaline_AyeeshaChuriAhlamyElHaqqi_PemrogramanDasar_Fase1.pdf`](./Tourmaline_AyeeshaChuriAhlamyElHaqqi_PemrogramanDasar_Fase1.pdf).

## Batasan
- Hanya menggunakan library `<iostream>`.
- Semua fungsi bantu (manipulasi array/string) dibuat sendiri (*user-defined function*), tanpa memanggil fungsi dari library lain seperti `<algorithm>`, `<cstring>`, atau `<cctype>`.
