// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/* 
Buat program yang meminta pengguna memasukkan sebuah kata (terdiri dari minimal 10 karakter), 
lalu tampilkan karakter per karakter menggunakan putchar().
*/
#include <stdio.h> 
#include <string.h> 
// library untuk fungsi strlen()

int main() {
    char kata[100]; 
    // array untuk menyimpan input (maksimal 100 kata)
    int i, panjang; 
    // i untuk for loop dan panjang untuk menyimpan jumlah karakter
    
    printf("Masukkan kata (minimal 10 karakter): "); 
    // menampilkan kata masukkan kata (minimal 10 karakter) 
    gets(kata); 
    // membaca input dari user
    
    panjang = strlen(kata); 
    // menghitung panjang string dan strlen() untuk mengembalikan jumlah karakter dalam string
    
    if(panjang < 10) { 
        // memeriksa apakah panjang string memenuhi syarat minimal 10
        printf("\nError: Kata hanya %d karakter! Minimal 10 karakter.\n", panjang); 
        // eksekusi jika kondisi true
    } else { 
        printf("\nKarakter per karakter:\n"); 
        //eksekusi jika kondisi false
        for(i = 0; i < panjang; i++) {
            //for loop untuk menampilkan setiap karakter satu per satu, inisialisasi i = 0 untuk indeks pertama, selama i kurang dari panjang string maka i ditambah 1 setiap loop
            printf("Karakter ke-%d: ", i+1); 
            //menampilkan nomor urut karakter dan i+1 agar mulai dari 1
            putchar(kata[i]); 
            // fungsi untuk menampilkan satu karakter dan mengakses karakter pada indeks ke-i dari array
            printf("\n"); 
            // pindah baris setelah menampilkan karakter
        }
    }
    
    return 0; 
    // program selesai
}
