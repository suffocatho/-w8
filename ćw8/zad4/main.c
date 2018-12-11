#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int N,k,i,l=0;
	printf("Ile  elementow N ma miec tablica?: ");
	scanf("%d",&N);
	int tab[N];
	for(i=0;i<N;i++) tab[i]=rand()%200-100;
	for(i=0;i<N;i++) if(tab[i]<0) tab[i]*=tab[i];
	return 0;
}
