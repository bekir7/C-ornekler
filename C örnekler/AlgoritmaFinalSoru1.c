#include<stdio.h>
#include<stdlib.h>
#include <string.h>
/* Bir baðlý listede girilen eleman listenin sonundaki elemanýn 2 katýndan büyükse listenin sonuna,
deðilse listenin baþýna ekleyen (ilk eleman hariç) program.*/


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

	if(g==NULL){ // Sýralý liste boþsa;
	g = (struct bagliliste*)malloc(sizeof(struct bagliliste)); // Bellekte baglýliste boyutunda rastgele bir yer ayýr.
	g->sonraki = NULL; // O yerden bir sonraki yeri, bellekte boþ bir yeri gösterecek þekilde ayarla. 
	g->sayi= eklenecek; // ayarladýðýn ilk yere, eklemek istediðin sayýyý yerleþtir.
	return g;
		  }
	
	else{
		struct bagliliste * gezen = g; // Son elemana eriþirken, ana dizini; kaybetmemek için, bir gezen'e ata.
			while(gezen->sonraki != NULL ){ // O yerden bir sonraki yer, bellekte boþ bir yeri gösterene kadar ilerle, orada dur. 
			gezen = gezen -> sonraki; 
					      }
			if(eklenecek >  (gezen->sayi)%10){ //Girilen eleman listenin sonundaki elemanýn 2 katýndan büyükse listenin sonuna,
			struct bagliliste * gecici = (struct bagliliste*)malloc(sizeof(struct bagliliste));
			gecici-> sonraki = NULL;
			gezen-> sonraki = gecici;
			gecici -> sayi = eklenecek;
			return g;
						  	}
			else{ //Deðilse listenin baþýna ekle.
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



