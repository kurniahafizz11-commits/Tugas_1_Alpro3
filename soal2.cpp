// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/*
Buat program yang membaca satu karakter menggunakan getchar(), getche(), dan getch(). 
Tampilkan karakter yang dimasukkan setelah setiap input.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
        char karakter, random, tombol ;
        // Getchar
        printf("Ketik satu huruf lalu tekan enter : ");//meminta user mengimputkan satu huruf dan menekan enter.
        karakter = getchar();/* Fungsi ini mengambil input dan membersihkan buffer setelah scanf,
                                dimana program akan diam menunggu sampai user menekan enter'*/
        printf("Karakter yang anda ketik : %c\n", karakter);//menampilkan output dan Karakter yang diketik akan ditampilkan di layar.
        printf("\n");
        
        // Getche
        printf("Ketik satu karakter random (langsung tanpa enter) : \n");//meminta user mengimputkan satu karakter random tanpa menekan enter.
        random = getche();// Fungsi ini akan langsung mengambil karakter ketika tombol ditekan (tanpa Enter).
        printf(" Karakter yang anda ketik adalah : %c\n", random);//menampilkan output dan Karakter yang diketik tetap muncul dilayar.
        printf("\n");

        // Getch
        printf("Tekan tombol apa saja (tanpa enter) : \n");//meminta user mengimputkan satu karakter tanpa menekan enter.
        tombol = getch();//Fungsi ini mirip dengan getche(),langsung mengambil karakter tanpa menunggu Enter.
        printf("Anda tadi menekan tombol : %c\n", tombol);//menampilkan output dan Karakter yang ditekan tidak akan muncul di layar.
        
}
