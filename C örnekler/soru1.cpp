#include<stdio.h>
#include<stdlib.h>
int isprime(int sayi){
	int i,kalan;//recursive fonksiyonda iki tane lazým olan deðiþkeni atýyoruz.
	for(i=2;i<sayi;i++){//0 ve 1 asal olmadýðý için 2'den baþlatýyoruz girilecek sayý deðerine kadar arttýrarak for döngüsüne aldýk.
		kalan=sayi%i;//sayinin i ile modunu kalan deðiþkenine atýyoruz.
		if(kalan==0){//eðer kalan deðeri 0'a eþitse 0 deðerini return eiyoruz.
			return 0;
		}
		
		else;//deðilse 1 deðerini return ediyoruz.
	}
	return 1;
}
int isprime(int sayi);
int main(){
	int alt,ust,i;
    FILE *ez=fopen("prime.txt","w");//prime.txt adýnda metin belgesi açtýk.
	
	printf("alt sinir giriniz: ");//aralýðýn kaçtan baþlayacaðýný kullanýcýdan istedik.
	scanf("%d",&alt);
	
	printf("ust sinir giriniz: ");//aralýðýn kaçta biteceðini kullanýcýdan istedik.
	scanf("%d",&ust);
	
	for(i=alt;i<=ust;i++){ //i'yi alt sýnýrdan baþlatýp üst sýnýra kadar bir bir arttýrarak for döngüsüne sokuyoruz.
		fprintf(ez,"sayi:%d//asallik:%d\n",i,isprime(i));//bu satýr .txt dosyasýna aralýðýn baþý ve sonu dahil sayýlarý yazýp asalsa"1"deðerini döndürüyor deðilse"0"deðerini.
	}
}
