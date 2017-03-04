#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output

using namespace std;



class calculator  {

public :

    //data

    int x;

    int y;

    

    //operasi

    

    int tambah (int x, int y) {

        return x + y;

    }

    int kurang (int x, int y) {

        return x - y;

    }

    int kali (int x, int y) {

        return x * y;

    }

    int bagi (int x, int y) {

        return x / y;

    }

    

};



int main () {

    calculator casio;

    

    cout << "Masukannilai x : ";

    cin >> casio.x;

    

    cout << endl;

    

    cout << "Masukannilai y : ";

    cin >> casio.y;

    

    cout << "Hasil Tambah Adalah : " << casio.tambah (casio.x, casio.y) << endl;

    cout << "Hasil Kurang Adalah : " << casio.kurang (casio.x, casio.y) << endl;

    cout << "Hasil Kali Adalah : " << casio.kali (casio.x, casio.y) << endl;

    cout << "Hasil Bagi Adalah : " << casio.bagi (casio.x, casio.y) << endl;

    

    return 0;

    

}