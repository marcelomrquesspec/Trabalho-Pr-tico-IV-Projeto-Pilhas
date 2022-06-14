//Marcelo Marques  CB3005631
#include <iostream>
using namespace std;


struct Node
{
int data;

Node *link;
};


Node *top = NULL;


bool pilhavazia()
{
 if(top == NULL)
 return true; else
 return false;
}


void push (int value)
{
  Node *ptr = new Node();
  ptr->data = value;
  ptr->link = top;
  top = ptr;
}


void pop ( )
{
 if ( pilhavazia() )
  cout<<"Pilha Vazia";
 else
 {
  Node *ptr = top;
  top = top -> link;
  delete(ptr);
 }
}


void showTop()
{
 if ( pilhavazia() )
  cout<<"Pilha está vazia";
 else
  cout<<"Elemento do topo é: "<< top->data;
}


void mostrarPilha()
{
 if ( pilhavazia() )
  cout<<"Pilha Vazia";
 else
 {
  Node *temp=top;
  while(temp!=NULL)
  {   cout<<temp->data<<" ";
   temp=temp->link;
  }
  cout<<"\n";
 }
 }


int main()
{

 int choice, flag=1, value;


 while( flag == 1)
 {
 cout<<"\n1.Push 2.Pop 3.mostrarTopo 4.mostrarPilha 5.sair\n";
 cin>>choice;
 switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
         break;
 case 2: pop();
         break;
 case 3: showTop();
         break;
 case 4: mostrarPilha();
         break;
 case 5: flag = 0;
         break;
 }
 }

return 0;
}