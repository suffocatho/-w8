#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int N,i=0,sm=0,l=0;
	float sr=0.0;
	printf("Ile elementow ma miec tablica?: ");
	scanf("%d",&N);
	int tab[N];
	for(i=0;i<N;i++) {
		tab[i]= rand()%100;
		sm+=tab[i];
	}
	sr=(float)sm/N;
	for(i=0;i<N;i++){
		if(tab[i]>sr) l++;
	} 
	printf("%d elementow tablicy jest wiekszych niz srednia %.2f\n",l,sr);
	system("PAUSE");
	return 0;
}
