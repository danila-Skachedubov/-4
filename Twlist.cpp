#include <iostream>
#include"TWList.h"
using namespace std;
template<typename T>
twlist<T>::twlist():head(NULL), tail(NULL){}
template<typename T>
twlist<T>::~twlist()
{
    while(head!=NULL)
    {
    tail=head->next;
    delete head;
    head=tail;
    }
}
template<typename T>
void twlist<T>::insertFirst(T x)
{
    node<T> *temp=new node<T>;
    temp->name=x;
    if(temp!=NULL)
    {
        temp->next=head;
        head=temp;
    }
     else
    {
        head=tail=temp;
    }
}
template<typename T>
void twlist<T>::insertLast(T x)
{
    node<T>*temp = new node<T>;
    temp->next = 0;
    temp->name = x;
    temp->prev = tail;
   if(tail != 0)
   {
      tail->next = temp;
   }
   if(Size() == 0)
    {
      head = tail = temp;
    }
   else
   {
       tail = temp;
   }
 }
template<typename T>
void twlist<T>::insertAtPos(int pos)
{
if(pos < 1 || pos > Size())
   {
      cout << "Incorrect position !!!\n";
      return;
   }
   if(pos == Size() + 1)
   {
      T x;
      cout << "Input new number: ";
      cin >> x;
      insertLast(x);
      return;
   }
   else if(pos == 1)
   {
     T x;
      cout << "Input new number: ";
      cin >> x;
     insertFirst(x);
      return;
   }
   int i = 1;
   node<T> * Ins = head;
   while(i < pos)
   {
      Ins = Ins->next;
      i++;
   }
   node<T> * PrevIns = Ins->prev;
   node<T> * temp = new node<T>;
   cout << "Input new number: ";
   cin >> temp->name;
if(PrevIns != 0 && Size()!= 1)
    {
    PrevIns->next = temp;
    temp->next = Ins;
    temp->prev = PrevIns;
    Ins->prev = temp;
    }
}//
template<typename T>
void twlist<T>::deleteAtPos(int pos)
{
    node<T> *temp=head;
    node<T> *help;
    if(temp!=NULL && pos<=Size())
        {
        for(int i=0; i!=pos; i++)
        {
            help=temp;
            temp=temp->next;
        }
        if(temp==head)
            {
            head=temp->next;
            }
        else
            {
            help->next=temp->next;
            }
        delete temp;
        }
}
template<typename T>
int twlist<T>::Size()
 {
    node<T> *temp=head;
    int c=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        c++;
    }
    return c;
}//
template<typename T>
void twlist<T>::deleteLast()
{
 if(tail)
 {
    node<T> * cur=tail;
    tail=tail->prev;
    if(tail)
    tail->next=NULL;
    delete cur;
 }
 if (!tail)
        cout << "tail is null" << endl;
    }

template<typename T>
void twlist<T>::deletefirst()

{
    if ( head )
    {
        node<T> * cur = head;
        head = head->next;
        if ( head ) head->prev = NULL;
        delete cur;
    }

    if (!head)
        cout << "head is null" << endl;
}

template<typename T>
void twlist<T>::Print()
{
   if(Size() != 0)
   {
      node<T> * temp = head;
      cout << "( ";
      while(temp->next != 0)
      {
          cout << temp->name << ", ";
          temp = temp->next;
      }

      cout << temp->name << " )\n";
   }
}//
template<typename T>
void twlist<T>::Delete(T x)
{
node<T> *temp=head,*help;
    while(temp!=NULL && temp->name!=x)
        {
        help=temp;
        temp=temp->next;
        }
    if(temp==head)
        {
        head=temp->next;
        }
    else
        {
        help->next=temp->next;
        }
    delete temp;
    }//
template<typename T>
void twlist<T>::Clear()
    {
        {
    while(Size() != 0)
    deleteAtPos(0);
        }
    }
template<typename T>
bool twlist<T>::isContains(int DataItem)
{
  node<T> *ptr;
  ptr = head;
  while (ptr != NULL)
    {
    if (DataItem == ptr->name)
    {
    cout<<"true";
    return true;
    }
    else
    ptr = ptr->next;
    cout<<"false"<<endl;
    }
  return false;

} //
template<typename T>
bool twlist<T>::isEmpty()
     {
    if(head==NULL)
    {
        return true;
    }
    else return false;
     }
template<typename T>
void twlist<T>::getfirst()
{
    if(head!=NULL)
    {
        cout<<head->name<<endl;
    }
}
template<typename T>
void twlist<T>::getlast()
{
    if(tail!=NULL)
    {
        cout<<tail->name<<endl;
    }
}

