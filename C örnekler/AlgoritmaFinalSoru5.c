/*Kullan�c�n�n klavyeden girdi�i metinde, ascii kar��l���nda 5. biti 0 olanlar� 1 bit sa�a,
1 olanlar� 1 bit sola kayd�r�p tekrar ekrana yazan program kodu.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char metin[100];
int i;
scanf("%s",metin);
printf("Yazdiginiz metin:   ");
for( i =0;metin[i] != '\0';i++){
	printf("%c",metin[i]);
	                          }
printf("\nKaydirma Yapilmis Hali:   ");
   for( i =0;metin[i] !='\0';i++){

	if (metin[i]  & 1 << 5){
		metin[i] = metin[i]<<1;
		printf("%c",metin[i]);
			   }
	else{
		metin[i] = metin[i]>>1;
		printf("%c",metin[i]);
}
				}



}
