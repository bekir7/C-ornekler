#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
//selection sort algoritmasý küçükten büyüðe sýralýyor
void select(int dizi[],int size){
	int i,j,enkucuk,temp;

//Sýralanmamýþ kýsmýn hareket sýnýrý yani bakýlacak olan kýsým
	for(i=0;i<size-1;i++){
		enkucuk=i;
		// Sýralanmamýþ kýsýmda en küçük deðeri bul
     for(j=i;j<size;j++){
     	if(dizi[enkucuk]>dizi[j])
		enkucuk=j;
}
// Bulunan minimum elemaný ilk elemanla yer deðiþtir 
		temp=dizi[j];
		dizi[j]=dizi[enkucuk];
		dizi[enkucuk]=temp;
}
}
 
void insert(int dizi[],int lenght){
	int i,j,temp;
	//Sýralanmamýþ kýsmýn hareket sýnýrý yani bakýlacak olan kýsým
	for(i=2;i<101;i++){
	j=i;
	while(j>0 && dizi[j]>dizi[j-1]){
		// Bulunan max elemaný ilk elemanla yer deðiþtir
			temp=dizi[j];
			dizi[j]=dizi[j-1];
			dizi[j-1]=temp;
			j--;
		

}
}
}
  
int main(){
	int a[100],i;
	srand(time(NULL));

  for(i=0;i<100;i++){//0 ile 1000 arasýnda rastgele 100 sayý bulunuyor ve ekrana yazdýrýlýyor
  a[i]=rand()%1000;
  printf("%d.eleman: %d\n",i,a[i]);

  if(i%2==0){//rastgele sayýlarýn indisi bulunuyor
  	printf("CIFT INDIS: %d\n ",i);
  		printf("-------------\n");
  		
  }
  else{//rastgele sayýlarýn indisi yazdýrýlýyor
  	printf("TEK INDIS:%d\n ",i);
  		printf("-------------\n");
  }

}
  printf(" insertion siralama :\n");
   for(i=0;i<100;i++){//insertion sort algoritmasý çaðýrýlýp sýralandýrýlýyor.
   	if(i%2==0){
   	
		    insert(a,100);
   		
	printf("%d-)%d\n",i,a[i]);
	
	   }
   }
   	printf(" selection siralama  :\n");
 for(i=100;i>0;i--){//selection sort algoritmasý çaðýrýlýp sýralandýrýlýyor
   	if(i%2!=0){
   		 select(a,100);
	printf("%d-)%d\n",i,a[i]);
	
	   }
   }

getch();
}
