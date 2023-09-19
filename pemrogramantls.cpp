#include <iostream>
using namespace std;

int main(){
    //inisasi variabel
    double a,b,op;

    //input angka dan variabel
    cout << "====================================" << endl;
    cout << "KALKULATOR SEDERHANA MENGGUNAKAN C++" << endl;
    cout << "====================================" << endl;
    cout << "Masukkan kedua angka : ";
    cin >> a >> b;
    cout << "====================================" << endl;
    cout << "Keterangan operator\n1 : pertambahan\n2 : pengurangan\n3 : perkalian\n4 : pembagian\nMasukkan tanda operator yang diinginkan : ";
    cin >> op;

    //logika dan hasil
    cout << "====================================" << endl;
    cout << "Hasilnya adalah : ";
    if (op == 1) cout << a+b << endl;
    else if (op == 2) cout << a-b << endl;
    else if (op == 3) cout << a*b << endl;
    else if (op == 4) cout << a/b << endl;
    else cout << "Tidak terdefinisi" << endl;

    return 0;
}