#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int N,k,i,l=0;
	printf("Ile  elementow N ma miec tablica?: ");
	scanf("%d",&N);
	printf("Ile  ma wynosic parametr k: ");
	scanf("%d",&k);
	int tabA[N],tabB[N];
	for(i=0;i<N;i++) tabA[i]=rand()%100;
	for(i=0;i<N;i++){
		if(tabA[i]>k){
			tabB[l]=tabA[i];
			l++;
		}else tabA[i]=0;
	}
	system("PAUSE");
	return 0;
}
