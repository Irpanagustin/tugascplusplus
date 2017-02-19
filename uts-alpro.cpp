
#include <iostream>
 // Program Kalkulator (Aritmatika dan Relasional)
 // I.S Program Menginput Angka dan Mengolah Data
 // F.S Program Menampilkan Hasil Perhitungan Angka 

using namespace std;

//Prototype
 int tambah (int c, int d);
 int kurang (int c, int d);
 int kali (int c, int d);
 int bagi1 (int c, int d);
 int bagi2 (int c, int d);
    
    
int main () {

    // Kamus    
    int c,d ;
    
    cout << "***************Program Aplikasi Kalkulator***************" << endl << endl;
    
    // Input Data C
    cout << "Masukan Nilai C : ";
    cin >> c;
    
    // Input Data D
    cout << "Masukan Nilai D : "; 
    cin >> d;
    
    cout << endl; // Untuk Enter
    
    //ARITMATIKA
    cout << "********************Hasil Aritmatika********************" << endl << endl;
    
    // Pertambahan
    cout << "Hasil Pertambahan C dan D adalah " << tambah (c, d) << endl; 

    //Pengurangan
    cout << "Hasil Pengurangan C dan D adalah " << kurang (c, d) << endl;

    //Perkalian
    cout << "Hasil Perkalian C dan D adalah " << kali (c, d) <<endl;

    //Pembagian (Division/Div) Tanpa Sisa
    cout << "Hasil Pembagian C dan D adalah " << bagi1 (c, d) <<endl;

    //Pembagian (Modulus/Mod) Dengan Sisa Pembagian
    cout << "Hasil Sisa Pembagian C dan D adalah " << bagi2 (c, d) <<endl << endl;
    
    //RELASIONAL
    
    cout << "********************Hasil Relasional********************" << endl << endl;
    
    //Jika Nilai C Sama dengan D (==)
    if (c == d) { cout << " Nilai C sama dengan Nilai D " << endl; } 
    else { cout << " Nilai C Tidak sama dengan Nilai D " << endl; }
    
    //Jika Nilai C Tidak sama dengan D (!=)
    if (c != d) { cout << " Nilai C Tidak sama dengan Nilai D " << endl; } 
    else { cout << " Nilai C sama dengan Nilai D " << endl; }
    
    //Jika Nilai C Kurang dari sama dengan D (<=)
    if (c <= d) { cout << " Nilai C Kurang dari Nilai D " << endl; } 
    else { cout << " Nilai C Lebih Besar dari Nilai D " << endl; }
    
    //Jika Nilai D Lebih dari sama dengan C (>=)
    if (c >= d) { cout << " Nilai C Lebih Besar dari Nilai D " << endl; }
    else { cout << " Nilai C Kurang dari Nilai D " << endl; }
    
    //Jika Nilai C Kurang dari D (<)
    if (c < d) { cout << " Nilai C Lebih Kecil dari Nilai D " << endl; } 
    else { cout << " Nilai C Tidak Lebih Kecil dari Nilai D " << endl; }
    
    //Jika Nilai C Lebih dari D (>)
    if (c > d) { cout << " Nilai C Lebih Besar dari Nilai D " << endl; } 
    else { cout << " Nilai C Tidak Lebih Besar dari Nilai D " << endl; }
     

return 0;
}

        //Fungsi Aritmatika

        //Pertambahan
        int tambah (int c, int d) {
            return c + d;
        }

        //Pengurangan
        int kurang (int c, int d) {
            return c - d;
        }

        //Perkalian
        int kali (int c, int d) {
            return c * d;
        }

        //Pembagian Div
        int bagi1 (int c, int d) {
            return c / d;
        }

        //Pembagian Modulus
        int bagi2 (int c, int d) {
            return c % d;
        }
