# ECRC ELECTRICAL AND COMMUNICATION REMOTE CONTROL FOR BOAT
#### Pada reguler boat 

## Electrical 

####Proyek ini adalah implementasi sistem kontrol jarak jauh (remote control) berbasis STM32 untuk mengelola berbagai fungsi boat melalui komunikasi nirkabel menggunakan teknologi LoRa. Sistem ini dirancang untuk mengintegrasikan sensor dan aktuator guna memberikan informasi real-time dan kontrol presisi terhadap operasional boat.
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

### sistem komunikasi 


