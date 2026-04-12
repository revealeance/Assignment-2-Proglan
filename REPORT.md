

## Deskripsi Program

Program ini merupakan implementasi pembuatan SIM Akademik menggunakan bahasa C++ sebagaimana yang tercantum di ketentuan assignment. Program dibuat dengan Object Oriented Programming (OOP) untuk merepresentasikan aspek aspek yang ada dalam sistem akademik seperti mahasiswa, dosen, dan tenaga kependidikan.

Setiap aspek direpresentasikan dalam bentuk class yang memiliki atribut dan method masing-masing. Program ini juga menggunakan konsep inheritance agar beberapa class dapat mewarisi atribut dan method dari class parent.



## Struktur Program

Program ini disusun dalam beberapa directory untuk memisahkan deklarasi dan implementasi:

- Folder `include/` berisi file header (.hpp)
- Folder `src/` berisi file implementasi (.cpp) dan file utama (main.cpp)

Struktur ini digunakan agar kode lebih rapi dan sistematis.



## Class yang Digunakan

    ## Class Orang

    Class Orang merupakan class dasar yang digunakan sebagai parent class. Class ini memiliki atribut:

    * nama
    * umur

    Method yang tersedia:

    * constructor
    * setter dan getter
    * tampilkan() untuk menampilkan data

   

    ## Class Mahasiswa

    Class Mahasiswa merupakan child dari class Orang.

    Atribut tambahan:

    * nrp

    Class ini memiliki method tambahan untuk mengatur dan mengambil nilai NRP serta menampilkan data mahasiswa.

  

    ## Class Dosen

    Class Dosen merupakan child dari class Orang.

    Atribut tambahan:

    * nip

    Class ini digunakan untuk merepresentasikan data NIP dosen.

    

    ## Class Tendik

    Class Tendik juga merupakan child dari class Orang.

    Atribut tambahan:

    * jabatan

    Class ini digunakan untuk merepresentasikan jabatan tenaga kependidikan.

    

## Konsep OOP yang Digunakan

Encapsulation : Atribut pada setiap class dibuat tidak langsung dapat diakses dari luar, melainkan melalui method getter dan setter.

Inheritance : Class Mahasiswa, Dosen, dan Tendik merupakan child dari class Orang sehingga dapat menggunakan atribut dan method dari class tersebut.



## Namespace

Program menggunakan namespace `sim` untuk mengelompokkan class yang dibuat agar lebih terstruktur dan menghindari konflik nama yang mungkin terjadi.



## Cara Kerja Program

Pada fungsi `main()`, program membuat beberapa objek dari class Mahasiswa, Dosen, dan Tendik. Data awal diberikan melalui constructor, kemudian ditampilkan menggunakan method `tampilkan()`.

Program juga melakukan perubahan data menggunakan setter untuk menunjukkan bahwa nilai atribut dapat diubah setelah objek dibuat. Hal ini sengaja di coding sedimikian rupa agar kita bisa melihat apakah setter berjalan semestinya. Di bawah terlampir contoh input output serta contoh penggunaan fungsi pengubah data.



## Contoh Input dan Output

Program ini tidak menggunakan input dari pengguna, melainkan menggunakan data yang sudah ditentukan di dalam kode.

Berikut adalah contoh output program:

===== TEST DATA =====

Data Mahasiswa
Nama : Budi
Umur : 20
NRP  : 5025231001

Data Mahasiswa
Nama : Siti
Umur : 19
NRP  : 5025231002

Data Dosen
Nama : Pak Andi
Umur : 45
NIP  : 198765

Data Tendik
Nama : Bu Rina
Umur : 35
Jabatan : Keuangan

TEST UBAH DATA (DISINI ADA PROSES PERUBAHAN UMUR)

Data Mahasiswa
Nama : Budi Santoso
Umur : 21
NRP  : 5025231001




