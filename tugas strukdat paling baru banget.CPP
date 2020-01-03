#include <constrea.h>
#include <stdio.h>
#include <malloc.h>

struct simpul{
int dat;
struct simpul *next, *prev;
} *temp=NULL, *ptr=NULL, *head=NULL, *tail=NULL;

void main(){
	int i;
	for(i=1; i<=10; i++)
   {
   	temp = (struct simpul *) malloc(sizeof(struct simpul));
   	temp->dat=i;
   	if(head==NULL)
      {
      	head=temp;
         head->next=NULL;
         head->prev=NULL;
         tail=head;
      }
      else
      {
      	if(i%2==0)
         {
         	tail->next=temp;
            temp->prev=tail;
            tail=temp;
            tail->next=NULL;
         }
         else
         {
         	head->prev=temp;
            temp->next=head;
            head=temp;
            head->prev=NULL;
         }
      }
   }

   cout<<"Kepala : "<<head<<"\n";
   cout<<"Ekor   : "<<tail<<"\n";
   cout<<"[  Sebelum  | [Cell: Alamat] Data  |  Berikut  ]\n";

   temp=head;
	for(i=1; i<=10; i++)
   {
     	cout<<"["<<temp->prev<<" | [Cell: "<<temp<<"] "<<temp->dat<<" | "<<temp->next<<"]\n";
      temp=temp->next;
   }
   getch();
}

