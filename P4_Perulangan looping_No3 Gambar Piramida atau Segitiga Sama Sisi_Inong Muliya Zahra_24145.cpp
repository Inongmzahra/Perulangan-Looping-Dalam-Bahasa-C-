#include <iostream>
using namespace std;

int main() {
    int n ;

    while ( true ) {
    //meminta input
    cout << "Masukkan tinggi piramida :";
    cin >> n;
    //deklarasi variabel
    int i,j,k;

    //cetak baris
    for (int i = 0; i <= n; ++i) {
        //cetak spasi
        for (int j = i; j <= n; ++j) {
        cout << " ";
        }

        //cetak bintang
        for (int j = 0; j <= 2*i ; ++j) {
        cout << "*";
        }

    cout << endl;
    }
    }
    return 0;

}
