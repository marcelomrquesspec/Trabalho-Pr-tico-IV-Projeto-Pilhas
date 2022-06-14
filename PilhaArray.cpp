//Marcelo Marques CB3005631
#include <iostream>
using namespace std;

#define SIZE 30
int A[SIZE];
int top = -1;

bool estavazia()
{
  if(top==-1)
  return true;
  else
  return false;
}

void push(int value)
{
  if(top==SIZE-1)
  {    cout<<"Pilha Cheia!\n";
  }
   else
  {
    top++;
    A[top]=value;
  }
}

void pop()
{
 if(estavazia())
  cout<<"Pilha esta vazia!\n";
 else
  top--;
}

void mostrarTopo()
{
 if(estavazia())
  cout<<"Pilha esta vazia!\n";
 else
  cout<<"Elemento do topo : "<<A[top]<<"\n";

}

void mostrarPilha()
{
  if(estavazia())
 {
    cout<<"Pilha vazia!\n";
 }
 else
 {
  for(int i=0 ; i<=top; i++)
    cout<<A[i]<<" ";
   cout<<"\n";

  }

}

int main()
{

 int choice, flag=1, value;
 while( flag == 1)
 {
 cout<<"\n1.PUSH 2.POP 3.mostrarTopo 4.mostrarPilha 5.Sair\n";
 cin>>choice; switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
         break;
 case 2: pop();
         break;
 case 3: mostrarTopo();
         break;
 case 4: mostrarPilha();
         break;
 case 5: flag = 0;
         break;
 }
 }
  return 0;
}