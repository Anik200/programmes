#include<stdio.h>
#include<stdlib.h>
typedef struct record
   {
   int value;
   struct record *next;
   }NODE;
void append(int data);
void display();
void del_begin();
void end();
NODE *start=NULL;
int main()
{
    int promt,data;
do
{
printf("\n press 1 for add new node to list :");
printf("\n press 2 for display the list:");
printf("\n press 3 for delete the full list:");
printf("\n press 0 to End list :");
	    scanf("%d",&promt);
		switch(promt)
		{
		case 1:
		printf("\n enter data :");
		scanf("%d",&data);
		append(data);
		break;
		case 2:
		display();
		break;
		case 3:
		end();
		break;
		default:
		printf("\nplz enter valid choice\n");
		break;	
	    }
}while(promt!=0);

return 0;
}

void append(int data)
{
NODE *temp ,*curr;
temp=(NODE*)malloc(sizeof(NODE));
temp->value=data;
temp->next=NULL;
if(start==NULL)
{
    start=temp;
}
else
{
	curr=start;
	while(curr->next!=NULL)
	{
	    curr=curr->next;
	}
	curr->next=temp;
}
}
void display()
{
	int count=0;
	NODE *curr=start;
	printf("\nCurrent list:");
	while(curr!=NULL)
	{
		printf("\nData%d=	%d\n",++count,curr->value);
		curr=curr->next;
	}
}
void del_begin()
{
   NODE *temp=start;
   start=start->next;
   free(temp);
}
 void end()
 {
    while(start!= NULL)
      {
    del_begin();}
 }