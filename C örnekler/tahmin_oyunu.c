
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <process.h>
  int main(){
 srand(time(NULL));
 int rdeger=rand()%100;
	FILE *ez5;
	ez5=fopen("oyun.txt","w");
 fprintf(ez5,"rdeger:%d\n",rdeger);
 time_t basla, bit;
 double fark;
 int oyuncu1,oyuncu2,toplam;
 time (&basla);
 
   
while(rdeger){

printf("Oyuncu1 [0-99]arasi bir sayi girsin\n",oyuncu1);
scanf("%d",&oyuncu1);
fprintf(ez5,"Oyuncu1 Tahmini:%d\n",oyuncu1);
  time (&bit);
   fark = difftime(bit, basla);
if(rdeger==oyuncu1){
	printf("DOGRU!!!!\n");
	fprintf(ez5,"Kazanan Oyuncu1");
	break;
	printf("Gecen Sure %lf .\n",fark);
fprintf(ez5,"Oyuncu1 Gecen Sure: %lf\n",fark);
	fprintf(ez5,"Toplam Sure: %d\n",toplam);

}
else{
	printf("yanlis\n");
printf("Gecen Sure %lf .\n",fark);
fprintf(ez5,"Oyuncu1 Gecen Sure: %lf\n",fark);
toplam+=fark;
printf("Toplam Sure %d\n ",toplam);
}
printf("Oyuncu2 [0-99]arasi bir sayi girsin\n",oyuncu2);
scanf("%d",&oyuncu2);
fprintf(ez5,"Oyuncu2 Tahmini:%d\n",oyuncu2);
if(rdeger==oyuncu2){
	printf("DOGRU!!!!\n");
	
	fprintf(ez5,"Kazanan Oyuncu2 ");
    break;
	printf("Gecen Sure %lf .\n",fark);
	fprintf(ez5,"OyuncU2 Gecen Sure: %lf\n",fark);
	fprintf(ez5,"Toplam Sure: %d\n",toplam);
}
else{
    printf("yanlis\n");
    printf("Gecen Sure %lf .\n",fark);
fprintf(ez5,"Oyuncu2 Gecen Sure: %lf\n",fark);
toplam+=fark;
printf("Toplam Sure %d\n ",toplam);
}
}

fclose(ez5);

return 0;
}
