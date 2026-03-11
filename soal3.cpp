// Soal ini dijawab menggunakan bahasa CPP

/*
    Buatlah program yang menerima input satu bilangan bulat (detik) 
    dan menampilkan output dalam format: X detik = H jam M menit S detik
*/

#include <iostream>
using namespace std;

main()
{
    int detik;
    cout<<"Masukkan detik: "; cin>>detik; //untuk user input jumlah detik
    int jam = detik/3600; //1 jam=3600 detik, maka untuk mengubah detik ke jam, kita perlu membagi(div) detik dgn 3600.
    int menit = (detik % 3600)/60; //1 menit=60 detik, maka untuk mengubah detik ke menit, kita harus mengambil sisa bagi detik dengan 3600 (sisa jam), lalu dibagi(div) dgn 60.
    int sisaDetik = detik%60; //untuk mendapatkan sisa detik,kita harus mengambil sisa bagi dari inputan detik dengan 60.
    cout<<detik<<" detik = "<<jam<<" jam "<<menit<<" menit "<<sisaDetik<<" detik "; //menampilkan output dalam format X detik = H jam M menit S detik

}
