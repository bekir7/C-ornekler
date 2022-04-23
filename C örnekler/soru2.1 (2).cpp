#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void select(int dizi[],int size){
	int i,j,enkucuk,temp;
	for(i=0;i<size-1;i++){
		enkucuk=i;
		for(j=i+1;j<size;j++){
			if(dizi[j]>dizi[enkucuk])
			enkucuk=j;
		
        }
		temp=dizi[i];
		dizi[i]=dizi[enkucuk];
		dizi[enkucuk]=temp;
	}
	
}
void insert(int dizi[],int lenght){
	int i,j,temp;
	for(i=51;i<101;i++){
		j=i;
		while(j>50 && dizi[j-1]>dizi[j]){
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
  
	for(i=0;i<100;i++){
		a[i]=rand()%100;
		printf("%d.eleman: %d\n",i,a[i]);
}
select(a,100);
	printf(" selection siralama  :\n");
	for(i=0;i<100;i++)
	printf("%d \n",a[i]);
printf("--------------------------------\n");
	insert(a,100);
	printf(" insertcion siralama :\n");
	for(i=0;i<100;i++)
	printf("%d \n",a[i]);
getch ();
}
