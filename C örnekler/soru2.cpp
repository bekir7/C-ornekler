#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
//selection sort algoritmas� k���kten b�y��e s�ral�yor
void select(int dizi[],int size){
	int i,j,enkucuk,temp;

//S�ralanmam�� k�sm�n hareket s�n�r� yani bak�lacak olan k�s�m
	for(i=0;i<size-1;i++){
		enkucuk=i;
		// S�ralanmam�� k�s�mda en k���k de�eri bul
     for(j=i;j<size;j++){
     	if(dizi[enkucuk]>dizi[j])
		enkucuk=j;
}
// Bulunan minimum eleman� ilk elemanla yer de�i�tir 
		temp=dizi[j];
		dizi[j]=dizi[enkucuk];
		dizi[enkucuk]=temp;
}
}
 
void insert(int dizi[],int lenght){
	int i,j,temp;
	//S�ralanmam�� k�sm�n hareket s�n�r� yani bak�lacak olan k�s�m
	for(i=2;i<101;i++){
	j=i;
	while(j>0 && dizi[j]>dizi[j-1]){
		// Bulunan max eleman� ilk elemanla yer de�i�tir
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

  for(i=0;i<100;i++){//0 ile 1000 aras�nda rastgele 100 say� bulunuyor ve ekrana yazd�r�l�yor
  a[i]=rand()%1000;
  printf("%d.eleman: %d\n",i,a[i]);

  if(i%2==0){//rastgele say�lar�n indisi bulunuyor
  	printf("CIFT INDIS: %d\n ",i);
  		printf("-------------\n");
  		
  }
  else{//rastgele say�lar�n indisi yazd�r�l�yor
  	printf("TEK INDIS:%d\n ",i);
  		printf("-------------\n");
  }

}
  printf(" insertion siralama :\n");
   for(i=0;i<100;i++){//insertion sort algoritmas� �a��r�l�p s�raland�r�l�yor.
   	if(i%2==0){
   	
		    insert(a,100);
   		
	printf("%d-)%d\n",i,a[i]);
	
	   }
   }
   	printf(" selection siralama  :\n");
 for(i=100;i>0;i--){//selection sort algoritmas� �a��r�l�p s�raland�r�l�yor
   	if(i%2!=0){
   		 select(a,100);
	printf("%d-)%d\n",i,a[i]);
	
	   }
   }

getch();
}
