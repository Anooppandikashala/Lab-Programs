#include<stdio.h>
#include<string.h>
void main()
{
char str[10][20],temp[20];
int i=0,j=0,n;
printf("Enter the number of items\n");
scanf("%d",&n);
printf("Enter the items\n");
while(i<n){
	scanf("%s",str[i++]);
}
for(i=1;i<n;i++){
	for(j=1;j<=n-i;j++){
		if(strcmp(str[j-1],str[j])>0){
			strcpy(temp,str[j-1]);
			strcpy(str[j-1],str[j]);
			strcpy(str[j],temp);
		}
	}
}
printf(" \nSorted Items\n");
for(i=0;i<n;i++)
	printf(" %s\n",str[i]);
}
