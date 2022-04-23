#include<stdio.h> 
#include<stdlib.h> 
  
// bagli liste dugumu
struct Node 
{ 
    struct Node *prev; 
    int info; 
    struct Node *next; 
}; 
  
// yeni dugum iki yonlu bagli liste 
void sirala(struct Node **head,struct Node **tail,int key) 
{ 
  
    struct Node *p = new Node; 
    p->info = key; 
    p->next = NULL; 
  
    
    if ((*head) == NULL) //eger dugum bossa 
    { 
        (*head) = p; //p'yi head'e atýyoruz
        (*tail) = p; //p'yi tail'e atýyoruz (tek eleman var).
        (*head)->prev = NULL; //head'in previ null oluyor
        return; 
    } 
  
    
    if ((p->info) < ((*head)->info)) //eger yeni sayi ilk dugumden kucukse 
    { 
        p->prev = NULL;      //basa ekleniyor
        (*head)->prev = p; 
        p->next = (*head); 
        (*head) = p; 
        return;                                    
    } 
  
    
    if ((p->info) > ((*tail)->info)) //eger yeni sayi dugumden buyukse 
    { 
        p->prev = (*tail); 
        (*tail)->next = p; //sona ekleniyor
        (*tail) = p; 
        return; 
    } 
  
    // Önceden eklememiz gereken düðümü buluyoruz. 
   struct Node *temp;
     temp = (*head)->next; 
    while ((temp->info) < (p->info)) 
        temp = temp->next; 
  
    // temp'den once yeni dugum ekle 
    (temp->prev)->next = p; 
    p->prev = temp->prev; 
    temp->prev = p; 
    p->next = temp; 
} 
  
//kucukten buyuge ekrana yazdiran fonksiyon  
void yazdir(struct Node *temp) 
{ 
    while (temp != NULL) 
    { 
        printf("%d ", temp->info); 
        temp = temp->next;
		
	
    }
	 
} 
void tersbastir(struct Node * bilgi,FILE *ez7){//kucukten buyuge siralanan sayilari ters dosyaya kaydeden fonksiyon
	if(bilgi != NULL){
	tersbastir(bilgi->next,ez7);
	fprintf(ez7,"%d\t",bilgi->info);
	bilgi=bilgi->prev;
		    }
}

int main() 
{ 
struct Node *sol = NULL, *sag = NULL, * ikiyonlubagliliste; //struct sol sag ve ikiyonlubaglilisteyi tanýmlýyoruz
  int i,sayi;//integer degerde i ve sayi tanýmlanýyor
  FILE *ez;
  FILE *ez7;
  
 ez = fopen("sayilar.txt","r");//dolu olan txt dosyasýný okuyoruz
 ez7 = fopen("sayilarters.txt","w");//bu txtye ters yadýrýyoruz

ikiyonlubagliliste =NULL;

for( i=0;;){
	if(fscanf(ez,"%d\n",&sayi)!=EOF){//dosyanýn sonuna kadar okuyor  
		 sirala(&sol,&sag,sayi);//iki yonlu bagli liste fonksiyonumuzu cagýrýyoruz 
					   }
	else
	break;
	     }

printf("\nkucukten buyuge:"); 
    yazdir(sol); //ekrana kucukten buyuge siraliyoruz
 
    for(i=1;i>0;i--){//ters bir þekilde diðer dosyaya yazdýrýyoruz
	tersbastir(sol,ez7);
	
}

	
fclose(ez);
fclose(ez7);	 //dosyalarý kapattýk
return 0;
} 
