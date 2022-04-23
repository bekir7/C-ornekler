#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdlib.h>
void select(int dizi[],int size){

	int enkucuk;
	int temp;
	//S�ralanmam�� k�sm�n hareket s�n�r� yani bak�lacak olan k�s�m
	for(int i = 0;i<size;i++){
		enkucuk=i;
		for(int j=i;j<boyut;j++){	// S�ralanmam�� k�s�mda en k���k de�eri bul
			if(dizi[j]<dizi[enkucuk]){
				enkucuk=j;
			}			
		}
			// Bulunan minimum eleman� ilk elemanla yer de�i�tir
		temp = dizi[i];
		dizi[i] = dizi[enkucuk];
		dizi[enkucuk] = temp;
	}
}
void insert(int dizi[],int size){
	
	int eleman;
	int oncesi;
	
	for(int i =1 ;i<size;i++){
		eleman = dizi[i];
		oncesi = i-1;
		while(oncesi>=0 && eleman>dizi[oncesi]){
			dizi[oncesi+1]=dizi[oncesi];
			oncesi--;
		}
		dizi[oncesi+1] = eleman;	
	}
}

int main(){
	
	int b[100],cift[100],tek[100];
	int t=0,c=0;             // t tek sayilarin sayisiin tutan degisken , c cift sayilarin sayisini tutan degisken
	
	srand(time(NULL));
	
	for(int i=0;i<100;i++){
		b[i]=rand()%1000;//random say� atamas�
		if(i%2==0){
			cift[c]=b[i];
			c++;               //burda ilerdeki for dongusu icin c yihesapliyorum
		}
		else{
			tek[t]=b[i];
			t++;				// burdada t yi hesapl�yorum ki 100 elemanli dizide 20 30 tek sayi varsa sadece onlari
								//gostermesi icin diger turlu ram den random sayi atar
		}
	}
	
	for(int a=0;a<100;a++){
		printf("%d)%d\n",a,b[a]);
	}
	
	select(tek,t);
	insert(cift,c);
	
	printf("Tek indisli elemanlar kucukten buyuge:\n----------\n");
	
	for(int i=0;i<t;i++){ 
		printf("%d \n",tek[i]);
	}
	
	printf("cift indisli elemanlar buyukten kucuge:\n----------\n");
	for(int i=0;i<c;i++){
		printf("%d \n",cift[i]);
	}
	
}
