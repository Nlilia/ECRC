# LEARN BASIC C

Bahasa C adalah salah satu bahasa pemrograman tingkat menengah yqng memiliki efisiensi, portabilitas dan modular yang baik sehingga banyak digunakan untuk berbagai keperluan pemrograman. 
Bahasa C digunakan untuk sistem operasi, embedded system,  pemrograman jaringan, pemrograman ilmiah dan matematika serta basis data lain. Bahasa C juga memiliki performa yang cepat dan efisien.

## Syntax 
Bahasa C memiliki syntax sebagai berikut:

gambar

(#include) adalah preprocessors directive yang berfungsi untuk memasukkan file header/library ke dalam program. contoh dari file header adalah (<stdio.h>) yang berfungsi agar input dan output terbaca oleh Program. selanjutnya adalah (int main(){}) merupakan fungsi utama dimana semua kode didalam fungsi ininakan di eksekusi. Terdapat (printf();) adalah fungsi output serta (return 0;) sebagai penanda akhir program dan nilai 0 digunakan untuk menunjukkan keberhasilan sewaktu compile. Sebagai tambahan terdapat (//Ini comments) sebagai deklarasi komen yang tidak akan di proses oleh program sehingga dapat dituliskan reminder atau catatan dengan menggunakan (//) didepan kata.

## Variables dan Tipe Data
Variable adalah tempat untuk menyimpan data nilai seperti angka dan karakter ke dalam memori dan jenisnya ditentukan oleh tipe data yang digunakan. contoh penggunaan sebagai berikut:

int angka = 7;

int adalah jenis data integer untuk menyimpan nilai 'angka' yang berupa bilangan bulat yaitu angka '7'. 

Tabel Tipe Data
| Tipe Data | Fungsi | ukuran | format specifier |
|-----------| ------ | ------ | -----------------|
| int | menyimpan bilangan bulat | 2 atau 4 bytes | %d atau %i |
| float | menyimpan bilangan decimal 6-7 decimal digit| 4 bytes| %f atau %F |
| double | menyimpan bilangan decimal hingga 15 digit decimal | 8 bytes| %lf |
| char | menyimpan single character, huruf angka atau nilai Ascii| 1 bytes| %c |

format specifier digunakan untuk menentukan tipe data yang akan dibaca dalam fungsi input/output. 

## Arithmetic Operators

operator digunakan untuk melakukan operasi pada variable dan nilai.

Tabel operator
| Operator | Nama | deskripsi | contoh |
|--------- | ---- | --------- | -------|
| + | Pertambahan | menambahkan 2 nilai | x + y |
| - | Pengurangan | mengurangi suatu nilai dengan nilai lain| x - y |
| * | Perkalian | mengalikan 2 nilai | x * y |
| / | Pembagian | membagi suatu nilai dengan nilai lain | x / y |
| % | Modulus | menghasilkan sisa nilai bagi | x % y |
| ++ | increment | menambahkan nilai suatu variable dengan 1| x++ |
| -- | Decrement | mengurangkan nilai suatu variable denagn 1 | x- |

## if else conditions 
If-Else Condition adalah salah satu bentuk pernyataan pengkondisian dalam pemrograman yang digunakan untuk membuat keputusan berdasarkan suatu kondisi tertentu. syntax ini memungkinkan program untuk mengeksekusi blok kode tertentu jika suatu kondisi bernilai benar (true) dan blok kode lain jika kondisinya salah (false)



apabila kondisi lebih dari satu maka kita dapat menggunakan kondisi bertingkat seperti berikut



## Switch case

selain menggunakan if else, dapat juga digunakan switch case untuk membuat keputusan apabila suatu kondisi sangat kompleks dan membutuhkan if else beruntun yang panjang.switch cas3 digunakan ketika memeriksa nilai tertentu.

gambar 

## Array
array adalah structure data yang digunakan untuk menyimpan sekumpulan data bertipe data sama. array memmiliki ukuran yang tetap dan akses elemnnya melaaluuii indeks. indeks pertama dimulai dari 0 contoh pada array 1,2,3,4,5 array 0 bernilai 1 sedangkan array 1 bernilai 2.

## fungsi
### fungsi
fungsi adalah blok yang dirancang untuk melakukan tugas tertentu. adanya fungsi untuk membantu memecah kode yang mudah dikelola
