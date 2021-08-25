/*PROGRAM TO DETERMINE THE PATTERN MATCHING*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
char T[]="to be or not to bee";
char P[]="bee";
int K=0,S,R,L,MAX,i;
//printf("Please enter your tex T below:\n");
//scanf("%[^\n]",T);
//for(i=0;(T[i]=getchar())!='\n';i++);
//printf("Please enter your pattern P below:\n");
//scanf("%[^\n]",P);
S=strlen(T);
R=strlen(P);
//clrscr();
K=0;
MAX=S-R;
 while(K<=MAX)
{
	for (L=0;L<R;L++)
	{
		if (P[L]!=T[K+L])
		  goto l1;
	}
	printf("INDEX= %d ",K);
	return 0;
l1:
K=K+1;
}
printf("INDEX=NULL ");
return 0;
}
