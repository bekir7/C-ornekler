#include<stdio.h>
#include<stdlib.h>
int isprime(int sayi){
	int i,kalan;//recursive fonksiyonda iki tane laz�m olan de�i�keni at�yoruz.
	for(i=2;i<sayi;i++){//0 ve 1 asal olmad��� i�in 2'den ba�lat�yoruz girilecek say� de�erine kadar artt�rarak for d�ng�s�ne ald�k.
		kalan=sayi%i;//sayinin i ile modunu kalan de�i�kenine at�yoruz.
		if(kalan==0){//e�er kalan de�eri 0'a e�itse 0 de�erini return eiyoruz.
			return 0;
		}
		
		else;//de�ilse 1 de�erini return ediyoruz.
	}
	return 1;
}
int isprime(int sayi);
int main(){
	int alt,ust,i;
    FILE *ez=fopen("prime.txt","w");//prime.txt ad�nda metin belgesi a�t�k.
	
	printf("alt sinir giriniz: ");//aral���n ka�tan ba�layaca��n� kullan�c�dan istedik.
	scanf("%d",&alt);
	
	printf("ust sinir giriniz: ");//aral���n ka�ta bitece�ini kullan�c�dan istedik.
	scanf("%d",&ust);
	
	for(i=alt;i<=ust;i++){ //i'yi alt s�n�rdan ba�lat�p �st s�n�ra kadar bir bir artt�rarak for d�ng�s�ne sokuyoruz.
		fprintf(ez,"sayi:%d//asallik:%d\n",i,isprime(i));//bu sat�r .txt dosyas�na aral���n ba�� ve sonu dahil say�lar� yaz�p asalsa"1"de�erini d�nd�r�yor de�ilse"0"de�erini.
	}
}
