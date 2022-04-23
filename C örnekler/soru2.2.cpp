#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main(){
	int *a,*b,say1=0,say2=0,sayi=0;
  a=(int*)malloc(sizeof(int));//dinamik bellek.malloc() fonksiyonu belleði tahsis eder.malloc() fonksiyonunun en önemli özelliði bir iþaretçiye bir deðer atamadan önce bir deðiþken adresi atama gereksinimini ortadan kaldýrmýþ olmasýdýr. Bunun nedeni, malloc() fonksiyonunun tahsis ettiði belleðin baþlangýç adresini otomatik olarak iþaretçiye geri vermesidir.bu yüzden malloc kullandým.
  b=(int*)malloc(sizeof(int));	
	while(1){
		printf("Sayi Giriniz....:");scanf("%d",&sayi);//kullanýcýdan sayý istenir.
		if (sayi==0) break; //sýfýr girildiðinde çýk.
		if(sayi%2==0){//girilen sayinin 2 ile modu sýfýra eþitse
			b[say1]=sayi;//b dizisine gelen sayýyý; p pointerinin iþaret ettiði adresteki deðere sayaç ekler ve çýkan deðeri *(p+say)'a atar.
        say1++;//sayaç 1 artýyor.
}
      else if(sayi%2==1){////girilen sayinin 2 ile modu bire eþitse
      	a[say2]=sayi;//a dizisine gelen sayýyý; p pointerinin iþaret ettiði adresteki deðere sayaç ekler ve çýkan deðeri *(p+say)'a atar.
       say2++;//sayaç 2 artýyor.
      	

	  }		
	  else;
	  	
	   

	}
        printf("b dizisi:\n");
        for(int i=0;i<say1;i++){//i 0'dan baþlayýp sayaç1'e kadar gidiyor.
        	printf("%d\n ",b[i]);//yan yana b dizisini yazdýrýyoruz.
		}
		printf("a dizisi:\n");
		for(int i=0;i<say2;i++){//0'dan baþlayýp sayaç2'ye kadar gidiyor.
			printf("%d\n ",a[i]);//yan yana a dizisni yazdýrýyor.
		}
		printf("\n\n\n");	
        
		
	free(a);
	free(b);//bu komut belleði program bitince boþaltýr
	getch();
}
