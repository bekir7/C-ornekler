#include<stdio.h>
#include<stdlib.h>
#include <string.h>
/* Bir ba�l� listede girilen eleman listenin sonundaki eleman�n 2 kat�ndan b�y�kse listenin sonuna,
de�ilse listenin ba��na ekleyen (ilk eleman hari�) program.*/


struct bagliliste{
	int sayi;
	struct bagliliste * sonraki;
};

void bastir(struct bagliliste * g){
	while(g != NULL){
	printf("%s\n ",g->sayi);
	g = g -> sonraki;         }
	printf("\n");   } 	

struct bagliliste * ekleme_fonksiyonu(struct bagliliste * g, int eklenecek){

	if(g==NULL){ // S�ral� liste bo�sa;
	g = (struct bagliliste*)malloc(sizeof(struct bagliliste)); // Bellekte bagl�liste boyutunda rastgele bir yer ay�r.
	g->sonraki = NULL; // O yerden bir sonraki yeri, bellekte bo� bir yeri g�sterecek �ekilde ayarla. 
	g->sayi= eklenecek; // ayarlad���n ilk yere, eklemek istedi�in say�y� yerle�tir.
	return g;
		  }
	
	else{
		struct bagliliste * gezen = g; // Son elemana eri�irken, ana dizini; kaybetmemek i�in, bir gezen'e ata.
			while(gezen->sonraki != NULL ){ // O yerden bir sonraki yer, bellekte bo� bir yeri g�sterene kadar ilerle, orada dur. 
			gezen = gezen -> sonraki; 
					      }
			if(eklenecek >  (gezen->sayi)%10){ //Girilen eleman listenin sonundaki eleman�n 2 kat�ndan b�y�kse listenin sonuna,
			struct bagliliste * gecici = (struct bagliliste*)malloc(sizeof(struct bagliliste));
			gecici-> sonraki = NULL;
			gezen-> sonraki = gecici;
			gecici -> sayi = eklenecek;
			return g;
						  	}
			else{ //De�ilse listenin ba��na ekle.
			struct bagliliste * gecici = (struct bagliliste*) malloc(sizeof(struct bagliliste));
				gecici -> sayi = eklenecek;
				gecici->sonraki = g;
				return gecici;
			}
	   }
									 }
void satiriAyir(char *satir)
{
char *kelime = NULL;
kelime = strtok (satir," ");
while (kelime != NULL)
{
ekle(kelime);
kelime = strtok (NULL, " ");
}
}
int main(){
	struct bagliliste * ana_govde;
	ana_govde =NULL;
		int karar = 0,sayi;
		
	FILE *fp = fopen("Deneme.txt","r");
	
	while(1){
    //printf("Sayi giriniz: ");
//	scanf("%d",&sayi);
    
	ana_govde = ekleme_fonksiyonu(ana_govde,sayi);
	printf("\n--- Bagli listeniz: ---\n");
	bastir(ana_govde);
	printf("\n");
	printf("Devam etmek icin 1, etmemek icin 0 yazin: ");
	scanf("%d",&karar);
	printf("\n");
	if(karar == 0)
	break;
	fclose(fp);
		}
}



