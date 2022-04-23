/*Kullanýcýnýn girdiði metni, yine kullanýcýnýn girdiði sayý kadar saða kaydýrma (pointer aritmetiði kullanarak - circular*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ters_cevir(char *metin, int UZUNLUK) {
int i,j;
  for ( i=0, j=UZUNLUK-1; i < j; i++, j--) {
     *(metin+i) = *(metin+i) ^ *(metin+j);
     *(metin+j) = *(metin+j) ^ *(metin+i);
     *(metin+i) = *(metin+i) ^ *(metin+j);
  }
}
int main() {
	int i;
	printf("Metninizi giriniz: ");
	char *metin = (char *) malloc(sizeof (char) * 100);
	scanf("%[^\n]s",metin);
	int UZUNLUK = strlen(metin);
	int k;

	printf("Kaydirma Miktarini Giriniz: ");
	scanf("%d",&k);

ters_cevir(&metin[UZUNLUK-k], k); 
ters_cevir(metin, UZUNLUK-k);     
ters_cevir(metin, UZUNLUK); 

 	// Diziyi Yazdir.
	for ( i=0; i < UZUNLUK; i++) {
    		printf("%c", *(metin+i));
	}
}
