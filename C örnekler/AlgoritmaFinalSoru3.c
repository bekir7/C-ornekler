#include<stdio.h>
#include<stdlib.h>
/* 3-) Sayýlar.txt dosyasýnýn içinde bulunan 100 adet int tamsayiyi 
önce cift yönlü baðlý listeye aktarýp daha sonra  sayilarters.txt dosyasina tersten aktaran program kodu*/

 typedef struct ikiyonlubagliliste{
	int sayi;
	struct ikiyonlubagliliste * onceki;
	struct ikiyonlubagliliste * sonraki;
	
		 }Bikiyonlubagliliste;
Bikiyonlubagliliste	*ilk=NULL,*son=NULL,*yeni=NULL;
void bastir( Bikiyonlubagliliste * bilgi){
	while(bilgi != NULL){
	printf("%d\n ",bilgi->sayi);
	bilgi = bilgi -> sonraki;
		}
	printf("\n");
	}
	void *ekle(Bikiyonlubagliliste *bilgi){
	
		if(ilk==NULL){
			ilk=bilgi;
			son=ilk;
			ilk->onceki=NULL;
		}
		else{
			son->sonraki=bilgi;
			bilgi->onceki=son;
			son=son->sonraki;
		}
	} 	
/*struct ikiyonlubagliliste * ekle(struct ikiyonlubagliliste * g, int eklenecek){
	if(g==NULL) { //sirali liste bossa
	g = (struct ikiyonlubagliliste*) malloc(sizeof(struct ikiyonlubagliliste));
	g->onceki = NULL;
	g->sonraki = NULL;
	g->sayi= eklenecek;
	return g; }
		// sona ekle
	struct ikiyonlubagliliste * gezen = g;
	while(gezen->sonraki != NULL){
		gezen = gezen -> sonraki;
				   }
	struct ikiyonlubagliliste * gecici = (struct ikiyonlubagliliste*)malloc(sizeof(struct ikiyonlubagliliste));
	gecici->sonraki = gezen->sonraki;
	gezen->sonraki= gecici;
	gecici->onceki = gezen;
	if(gecici->sonraki !=NULL)
		gecici->sonraki->onceki = gecici;
	gecici->sayi=eklenecek;
	return g;  
}

void ters_bastir( Bikiyonlubagliliste * bilgi,FILE *dosya){
	if(bilgi != NULL){
	ters_bastir(bilgi->sonraki,dosya);
	fprintf(dosya,"%d\n",bilgi->sayi);
		    }
}*/

int main(){
int i;
FILE *dosya;
FILE *dosya2;
int sayi;
dosya = fopen("sayilar.txt","r");
dosya2 = fopen("sayilarters.txt","w");
 Bikiyonlubagliliste * iki;
 iki=(Bikiyonlubagliliste*)malloc(sizeof(Bikiyonlubagliliste));
iki =NULL;
bastir(iki);
for( i=0;i<3;i++){
	if(fscanf(dosya,"%d\n",&sayi)!=EOF){
		iki = ekle(iki);  
					   }
	else
	break;
	     }
printf("Bagli listedeki sayilar:%d\n\n");
bastir(iki);

ters_bastir(iki,dosya2);
printf("\n");
printf("Sayilari  dosyaya tersten aktardim istersen kontrol et!\n");
}
