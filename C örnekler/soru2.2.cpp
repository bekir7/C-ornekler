#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main(){
	int *a,*b,say1=0,say2=0,sayi=0;
  a=(int*)malloc(sizeof(int));//dinamik bellek.malloc() fonksiyonu belle�i tahsis eder.malloc() fonksiyonunun en �nemli �zelli�i bir i�aret�iye bir de�er atamadan �nce bir de�i�ken adresi atama gereksinimini ortadan kald�rm�� olmas�d�r. Bunun nedeni, malloc() fonksiyonunun tahsis etti�i belle�in ba�lang�� adresini otomatik olarak i�aret�iye geri vermesidir.bu y�zden malloc kulland�m.
  b=(int*)malloc(sizeof(int));	
	while(1){
		printf("Sayi Giriniz....:");scanf("%d",&sayi);//kullan�c�dan say� istenir.
		if (sayi==0) break; //s�f�r girildi�inde ��k.
		if(sayi%2==0){//girilen sayinin 2 ile modu s�f�ra e�itse
			b[say1]=sayi;//b dizisine gelen say�y�; p pointerinin i�aret etti�i adresteki de�ere saya� ekler ve ��kan de�eri *(p+say)'a atar.
        say1++;//saya� 1 art�yor.
}
      else if(sayi%2==1){////girilen sayinin 2 ile modu bire e�itse
      	a[say2]=sayi;//a dizisine gelen say�y�; p pointerinin i�aret etti�i adresteki de�ere saya� ekler ve ��kan de�eri *(p+say)'a atar.
       say2++;//saya� 2 art�yor.
      	

	  }		
	  else;
	  	
	   

	}
        printf("b dizisi:\n");
        for(int i=0;i<say1;i++){//i 0'dan ba�lay�p saya�1'e kadar gidiyor.
        	printf("%d\n ",b[i]);//yan yana b dizisini yazd�r�yoruz.
		}
		printf("a dizisi:\n");
		for(int i=0;i<say2;i++){//0'dan ba�lay�p saya�2'ye kadar gidiyor.
			printf("%d\n ",a[i]);//yan yana a dizisni yazd�r�yor.
		}
		printf("\n\n\n");	
        
		
	free(a);
	free(b);//bu komut belle�i program bitince bo�alt�r
	getch();
}
