#include<stdio.h>

// Kendisine parametre olarak gönderilen 100 elemanlý diziyi tersten sýralayýp geri döndüren recursive fonksiyon.
void diziyiTersCevir(int dizi[], int boyut) {
    int ilkDizin = 0, sonDizin = boyut - 1, gecici;
    if (ilkDizin < sonDizin) {
        gecici = dizi[ilkDizin];
        dizi[ilkDizin] = dizi[sonDizin];
        dizi[sonDizin] = gecici;          // Fonksiyonun Kendisi Bundan ibarettir. Diðer Kýsýmlar Fonksiyonu Anlamlandýrmak için Yazýlmaktadýr.
        ilkDizin++;
        sonDizin--;

       diziyiTersCevir(dizi +1 , boyut - 2);
    }       
}

int diziyi_yazdir(int dizi[],int boyut)
{
	int i;
	for ( i =0;i<boyut;i++){
	printf("%d\t ",dizi[i]);}
	printf("\n");
	}

int main(){

	int dizi[100] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541
}; // örnek bir dizi [ ilk  100 Asal Sayý ]
	printf("\n\nTers Cevirmeden Once\n\n");
	diziyi_yazdir(dizi,100);

	diziyiTersCevir(dizi,100);

	printf("\n\nTers Cevirdikten Sonra\n\n");
	diziyi_yazdir(dizi,100);

}
