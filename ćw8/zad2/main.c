#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int tab[20],l1=0,l2=0,l3=0,l4=0,l5=0,i=0;
	for(i;i<20;i++) {
		tab[i]=rand()%5+1;
		if(tab[i]==1) l1++;
		if(tab[i]==2) l2++;
		if(tab[i]==3) l3++;
		if(tab[i]==4) l4++;
		if(tab[i]==5) l5++;
	}
	printf("W tablicy wartosc:\n1 wystapila %d razy\n2 wystapila %d razy\n3 wystapila %d razy\n4 wystapila %d razy\n5 wystapila %d razy\n",l1,l2,l3,l4,l5);
	system("PAUSE");
	return 0;
}
