#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int N,i;
	printf("Ile elementow ma miec tablica?:");
	scanf("%d",&N);
	int tab[N];
	for(i=0;i<N;i++) tab[i]=rand()%200-100;
	printf("Dodatnie elementy tablicy:\n");
	for(i=0;i<N;i++) {
		if(tab[i]>0) printf("tab[%d]=%d\n",i,tab[i]);
	}		
	getch();
	return 0;
}
