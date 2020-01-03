#include <constrea.h>
#include <stdio.h>
#include <malloc.h>

struct simpul{
int dat;
struct simpul *next, *prev;
} *temp=NULL, *ptr=NULL, *head=NULL, *tail=NULL;

void main(){
	int i,a,mn,l=10;
	for(i=1; i<=l; i++)
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
	for(i=1; i<=l; i++)
   {
     	cout<<"["<<temp->prev<<" | [Cell: "<<temp<<"] "<<temp->dat<<" | "<<temp->next<<"]\n";
      temp=temp->next;
   }

   menuuu :
   cout<<"\n\nMenu : \n";
   cout<<"  1. Masukan Data Setelah Node\n";
   cout<<"  2. Masukan Data Sebelum Node\n";
   cout<<"  3. Hapus Node di Depan\n";
   cout<<"  4. Hapus Node di Tengah\n";
   cout<<"  5. Hapus Node di Belakang\n";
   cout<<"  6. Tampilkan Data\n";
   cout<<"  7. Keluar\n";
   cout<<"Pilihan :";
   cin>>mn;
   if(mn==1 || mn==2)
   {
    	cout<<"\nSisipkan Data : ";  cin>>a;
      if(mn==1){
      	cout<<"Sisipkan Data Setelah node ke : ";  cin>>i;}
      else{
         cout<<"Sisipkan Data Sebelum node ke : ";  cin>>i; }
      ptr=head;
      while(i!=1)
      {
      	ptr=ptr->next;
         i-=1;
      }
      temp = (struct simpul *) malloc(sizeof(struct simpul));
   	temp->dat=a;
      l+=1;
   }

   switch (mn)
   {
   	case 1 :
   		temp->next=ptr->next;
   		temp->prev=ptr;
   		ptr->next->prev=temp;
   		ptr->next=temp;
         break;

      case 2 :
   		temp->next=ptr;
   		temp->prev=ptr->prev;
   		ptr->prev->next=temp;
   		ptr->prev=temp;
         break;

      case 3 :
         ptr=head;
         head=head->next;
         ptr=NULL;
         free(ptr);
         break;

      case 4 :
      	cout<<"Hapus Node ke : ";
         cin>>i;
         ptr=head;
         while(i!=1)
      	{
      		ptr=ptr->next;
         	i-=1;
      	}
         ptr->prev->next=ptr->next;
         ptr->next->prev=ptr->prev;
         ptr=NULL;
         free(ptr);
         break;

      case 5 :
         ptr=tail;
         tail=tail->prev;
         ptr=NULL;
         free(ptr);
         break;

    	case 6 :
   		cout<<"\n\nKepala : "<<head<<"\n";
   		cout<<"Ekor   : "<<tail<<"\n";
   		cout<<"[  Sebelum  | [Cell: Alamat] Data  |  Berikut  ]\n";
         temp=head;
			for(i=1; i<=l; i++)
   		{
     			cout<<"["<<temp->prev<<" | [Cell: "<<temp<<"] "<<temp->dat<<" | "<<temp->next<<"]\n";
      		temp=temp->next;
   		}
         break;
      case 7 : break;
      default :
      	cout<<"Pilihan yang anda masukan salah. Silahkan Coba lagi.\n";
      	break;
   }
   if (mn==3 || mn==4 || mn==5)
   	{
      cout<<"Data Berhasil Dihapus\n";
   	l-=1;
      }
   while (mn !=7)
   	goto menuuu;
   getch();
}

