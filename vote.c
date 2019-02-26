#include<stdio.h>
#include<string.h>
main(){
	char name[20],gen;
	int party,age;
	printf("Enter the name : ");
	gets(name);
	printf("enter the gender : ");
	scanf(" %c",&gen);
	if(gen=='m'||gen=='M')
	printf("Male\n");
	if(gen=='f'||gen=='F')
	printf("Female\n");
	printf("Enter your age : ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\nYou are Eligible to vote ");
		printf("\n Press 1: aap");
		printf("\n Press 2: cong");
		printf("\n Press 3: bjp");
		scanf("%d",&party);
		switch(party)
		{
			case 1:
				printf("congractulation you voted aap");
				break;
				case 2:
				printf("congractulation you voted cong");
				break;
				case 3:
				printf("congractulation you voted bjp");
				break;
		}
		printf("\nYour Name is %s",name);
		printf("\nYou are %c",gen);
		printf("\nyour age is %d",age);
		printf("\nYou voted %d",party);
	}
	else
	printf("not eligible to vote");
	
	
	
}
