#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int tab[100],p,q,l=0,i;
	do{	
	printf("podaj p i q: ");
	scanf("%d%d",&p,&q);
	}
	while(p>q);
	for(i=0;i<100;i++) tab[i]=rand()%100;
	for(i=0;i<100;i++){
		if((tab[i]>p)&&(tab[i]<q)) l++;
	}
	printf("liczba elementow z przedzialu p=%d q=%d wynosi %d",p,q,l);
	system("PAUSE");
	return 0;
}
