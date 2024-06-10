#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,j,k,p,ch,n1,n2,set1[10], set2 [10],set3[20], flag;
	int wish;
	
	printf("\n enter the size of sets1\n");
	scanf("%d",&n1);
	printf("\n enter the elements of set1\n");
	for(i=0;i<n1;i++){
		scanf("%d", &set1[i]);
	}
		printf("\n enter the size of sets2\n");
	scanf("%d",&n2);
	printf("\n enter the elements of set2\n");
	for(i=0;i<n2;i++){
		scanf("%d", &set2[i]);
	}
	do
	{
		printf("\n menu for set operations");
		printf("\n press 1 for union");
			printf("\n press 2 for intersection");
				printf("\n press 3 for difference");
					printf("\n enter your choice");
					scanf("%d",&ch);
					switch (ch){
						if (flag==1){
							set3[k]=set1[i];
							k++;
						}
					}
					p=k; 
					for (k=0; k<p; k++){
					
					printf("%d",set3[k]);
				}
				break;
	}
	printf("\n do you want to continue(0/1)?");
	scanf("%d", &wish);
	while (wish==0);
}
return 0;
