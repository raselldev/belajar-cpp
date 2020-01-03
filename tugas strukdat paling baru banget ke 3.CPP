#include <constrea.h>
#include <stdio.h>
#include <malloc.h>

struct simpul{
int dat;
struct simpul *next, *prev;
} *temp=NULL, *ptr=NULL, *head=NULL, *tail=NULL;

void main(){
	int i,a;
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

   //--------------------------------------------------------------------------------------
   cout<<"\nSisipkan Data : ";
   cin>>a;
   cout<<"Sisipkan Data Setelah node ke : ";
   cin>>i;

   ptr=head;
   while(i!=1)
   {
   	ptr=ptr->next;
      i-=1;
   }
   temp = (struct simpul *) malloc(sizeof(struct simpul));
   temp->dat=a;
   temp->next=ptr->next;
   temp->prev=ptr;
   ptr->next->prev=temp;
   ptr->next=temp;

   cout<<"\n\nKepala : "<<head<<"\n";
   cout<<"Ekor   : "<<tail<<"\n";
   cout<<"[  Sebelum  | [Cell: Alamat] Data  |  Berikut  ]\n";

   temp=head;
	for(i=1; i<=11; i++)
   {
     	cout<<"["<<temp->prev<<" | [Cell: "<<temp<<"] "<<temp->dat<<" | "<<temp->next<<"]\n";
      temp=temp->next;
   }

   //--------------------------------------------------------------------------------------
   cout<<"\nSisipkan Data : ";
   cin>>a;
   cout<<"Sisipkan Data Sebelum node ke : ";
   cin>>i;

   ptr=head;
   while(i!=1)
   {
   	ptr=ptr->next;
      i-=1;
   }
   temp = (struct simpul *) malloc(sizeof(struct simpul));
   temp->dat=a;
   temp->next=ptr;
   temp->prev=ptr->prev;
   ptr->prev->next=temp;
   ptr->prev=temp;

   cout<<"\n\nKepala : "<<head<<"\n";
   cout<<"Ekor   : "<<tail<<"\n";
   cout<<"[  Sebelum  | [Cell: Alamat] Data  |  Berikut  ]\n";

   temp=head;
	for(i=1; i<=12; i++)
   {
     	cout<<"["<<temp->prev<<" | [Cell: "<<temp<<"] "<<temp->dat<<" | "<<temp->next<<"]\n";
      temp=temp->next;
   }

   getch();
}

