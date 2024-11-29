# ECRC ELECTRICAL AND COMMUNICATION REMOTE CONTROL FOR BOAT
#### Pada reguler boat 

## Electrical 

#### Proyek ini adalah implementasi sistem kontrol jarak jauh (remote control) berbasis STM32 untuk mengelola berbagai fungsi boat melalui komunikasi nirkabel menggunakan teknologi LoRa. Sistem ini dirancang untuk mengintegrasikan sensor dan aktuator guna memberikan informasi real-time dan kontrol presisi terhadap operasional boat.
####Komponen Utama dan Fungsinya

### 1. Power distribution board berisi komponen 
#### a. Switch sebagai saklar utama mengaktifkan sistem
#### b. LED sebagai indikator
#### c. Buck converter 5v untuk menurunkan tegangan yang akan disalurkan untuk komponen bertegangan 5v
#### d. Buck converter 3.3v untuk menurunkan tegangan yang akan disalurkan untuk komponen bertegangan 3.3 v

### 2. Microcontroller Board berisi komponen 
#### a. STM32 Microcontroller berfungsi sebagai otak dari sistem, mengatur komunikasi dengan sensor, transmitter, receiver, dan komponen lainnya. Microcontroller ini memproses data dari sensor dan memberikan instruksi kepada aktuator berdasarkan input dari remote control.
#### b. Servo untuk menggerakkan propeller 
#### c. Receiver untuk komunikasi dengan transmitter 
#### d. lora agar jangkauan control bisa lebih jauh

### 3. Fuel system board 
#### a. relay terhubung dengan STM32 sehingga nyala dari system fuel dpat di control 
#### b. fuel flow Sensor untuk mengukur aliran bensin pada tangki
#### c. fuel pressure sensor untuk mengukur tekanan pada tangki 
#### d. fuel pump yang dapat diatur melalui nyala relay

#### pada sistem boat menggunakan fuel, tenaga pendorong boat tergantung pada tennga dari bensin
#### berikut adalah diagram alir untuk sistem electrical dn sistem komunikasi 

### Siatem electrical 
![Battery 2S 7,4V 2200 mAh_20241123_075619_0000](https://github.com/user-attachments/assets/00d6037a-472a-4e6d-a0a5-cee99bc12ed2)
### sistem komunikasi 
![Battery 2S 7,4V 2200 mAh_20241123_075619_0001](https://github.com/user-attachments/assets/31a50fc8-9a20-45a8-8420-e333f1b0be5b)

--------------------------------------------------------------------------------------------------

# LEARN BASIC C

Bahasa C adalah salah satu bahasa pemrograman tingkat menengah yqng memiliki efisiensi, portabilitas dan modular yang baik sehingga banyak digunakan untuk berbagai keperluan pemrograman. 
Bahasa C digunakan untuk sistem operasi, embedded system,  pemrograman jaringan, pemrograman ilmiah dan matematika serta basis data lain. Bahasa C juga memiliki performa yang cepat dan efisien.

## Syntax 
Bahasa C memiliki syntax sebagai berikut:

![Screenshot_2024-11-27-09-02-03-86](https://github.com/user-attachments/assets/b265db27-9f17-41fd-b8fd-bc45b17461fc)

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

![Screenshot_2024-11-27-09-02-22-96](https://github.com/user-attachments/assets/9656ca7d-9da0-4db6-a20c-9b063718d4c7)

apabila kondisi lebih dari satu maka kita dapat menggunakan kondisi bertingkat seperti berikut

![Screenshot_2024-11-27-09-02-43-63](https://github.com/user-attachments/assets/dd8a914e-47e1-46f9-9b39-c6fdd4e11a02)

## Switch case

selain menggunakan if else, dapat juga digunakan switch case untuk membuat keputusan apabila suatu kondisi sangat kompleks dan membutuhkan if else beruntun yang panjang.switch cas3 digunakan ketika memeriksa nilai tertentu.

![Screenshot_2024-11-27-09-11-48-16](https://github.com/user-attachments/assets/4fa9f881-0832-464c-9c1b-7422a9782f7f)

## Looping
Looping adalah mekanisme untuk menjalankan serangkaian instruksi secara berulang, tergantung pada kondisi tertentu.
Ada tiga jenis pernyataan looping yang umum digunakan di bahasa C:
### 1. for loop
digunakan untuk jumlah perulangan yang sudah diketahui sebelumnya. berikut adlah struktur dan contohnya 

![Screenshot_2024-11-27-10-06-17-31](https://github.com/user-attachments/assets/d1cb9bed-277d-4546-b4ed-2f67fd119d17)

### 2. while loop
digunakan untuk jumlah perulangan yang belum diketahui dan pengulangan dilakukan sampai kondisi tertentu terpenuhi. berikut adalah struktur dan contohnya.

![Screenshot_2024-11-27-10-06-26-28](https://github.com/user-attachments/assets/e767d7df-11d6-4232-a0cb-271ff61c1a3d)


### 3. do-while loop
do-while loop mirip dengan while loop, namun perbedaannya adalah loop ini akan selalu menjalankan blok kode setidaknya sekali, karena kondisi diperiksa setelah eksekusi pertama. berikut adalah struktur dan contohnya.

![Screenshot_2024-11-27-10-06-32-33](https://github.com/user-attachments/assets/33482e8b-3989-4cc6-91b8-a503942d06e2)

## Array
array adalah structure data yang digunakan untuk menyimpan sekumpulan data bertipe data sama. array memmiliki ukuran yang tetap dan akses elemnnya melaaluuii indeks. indeks pertama dimulai dari 0 contoh pada array 1,2,3,4,5 array 0 bernilai 1 sedangkan array 1 bernilai 2.

![Screenshot_2024-11-27-09-19-58-54](https://github.com/user-attachments/assets/d86e9548-dff1-4fc9-9370-6478c5b15a4b)

terdapat beberapa jenis dari struktur array sebagai berikut:

![Screenshot_2024-11-27-09-22-30-12](https://github.com/user-attachments/assets/5ff5dc2d-2243-4219-a0da-20fd28996371)


## fungsi
fungsi adalah blok yang dirancang untuk melakukan tugas tertentu. adanya fungsi untuk membantu memecah kode yang mudah dikelola. berikut adalah struktur nya
![Screenshot_2024-11-27-09-29-52-28](https://github.com/user-attachments/assets/6278f2a2-125f-4d7e-93a5-4209fdc24076)

## Kesulitan 
kesulitan pada proses belajar C adalah pengaplikasian array untuk input matrix dengan dimensi sesuai keinginan pengguna serta logika pada perulangan for yang belum sepenuhnya dapat mengaplikasikan dengan baik.

----------------------------------------------------------------------------------
# Boost Converter

schematics 
![Screenshot 2024-11-29 220927](https://github.com/user-attachments/assets/c873848a-db0a-4bd5-ae2e-4bfdeea50e68)

PCB
![Screenshot 2024-11-29 220840](https://github.com/user-attachments/assets/cd6e4118-7598-4920-a071-e78adf8b121b)

result 
front
[front_pcb.pdf](https://github.com/user-attachments/files/17960914/front_pcb.pdf)

back
[Back_PCB.pdf](https://github.com/user-attachments/files/17960916/Back_PCB.pdf)
