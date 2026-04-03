# Laporan Programming Assignment 1: Basic C++

Di sini sudah diberikan template program, jadi saya cukup mengerjakan fungsi saja, sesuai dengan instruksi.

# Fungsi yearsOld
    Ini adalah fungsi yang digunakan untuk menghitung umur seserang dalam satuan tahun berdasarkan tanggal lahir dan tanggal saat ini. 

    Cara kerja:

        1. Menghitung selisih tahun antara tanggal saat ini dan tanggal lahir.
        2. Melakukan pengecekan apakah ulang tahun pada tahun berjalan sudah terjadi atau belum:
            Jika bulan saat ini lebih kecil dari bulan lahir, maka ulang tahun belum terjadi.
            Jika bulan sama tetapi hari saat ini lebih kecil dari hari lahir, maka ulang tahun juga belum terjadi.
        3. Jika ulang tahun belum terjadi, maka umur dikurangi satu tahun.

# Fungsi monthsOld
    Ini adalah fungsi yang digunakan untuk menghitung umur seseorang dalam satuan bulan. 

    Cara kerja:

        1. Menghitung selisih tahun, kemudian dikonversi ke bulan (tahun × 12).
        2. Menambahkan selisih bulan antara tanggal saat ini dan tanggal lahir.
        3. Melakukan pengecekan apakah hari pada bulan berjalan sudah mencapai tanggal lahir:
            Jika belum, maka bulan tersebut belum genap dan dikurangi satu.

# Fungsi dayofDate
    Ini adalah fungsi untuk menentukan hari tanggal lahir.

    Cara kerja:

        1. Menyalin struktur tm dari input agar data asli tidak berubah.
        2. Menggunakan fungsi mktime() untuk mengisi nilai tm_wday.
        3. Mengonversi nilai tm_wday (0–6) menjadi nama hari menggunakan array.

# CONTOH I/O

Input: 01/01/2000
Output: 26 314 Selasa

Input: 15/08/2005
Output: 20 247 Jumat

Note bahwa output bersifat dinamis tergantung waktu saat runtime, jadi output akan terus berubah ubah.