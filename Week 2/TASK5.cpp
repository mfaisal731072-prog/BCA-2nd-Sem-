#include<stdio.h>
#include<stdlib.h>
struct playerdata{
	char name[21];
	int runs[11];
	int jerseyno[4];
};
typedef struct playerdata pd;
main(){
	pd *p;
	int i,n;
	printf("Enter no of players:");    
	p=(pd*)malloc(n*sizeof(pd));
	for(i=0;i<n;i++){
		printf("Enter Player-%d details:\n",i+1);
		printf("Enter Name:");
		gets(p[i].name);
		printf("Enter Runns:");
		scanf("%d",&p[i].runs);
		printf("Enter Jersey Number:");
		scanf("%d",&p
		
		[i].jerseyno);		
	}
}
