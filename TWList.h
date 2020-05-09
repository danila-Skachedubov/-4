#ifndef TWLIST_H_INCLUDED
#define TWLIST_H_INCLUDED
#include <iostream>
using namespace std;
template<typename T>
class node
{
    public:
    T name;
    node *next, *prev;
};
template<typename T>
class twlist
{
public:
    node<T> *head, *tail;

public:
    twlist();
    ~twlist();
    void insertFirst(T x);
    void insertLast(T x);
    void insertAtPos(int pos);
    void Delete(T x);
    void deleteAtPos(int pos);
    int Size();
    void deleteLast();
    void deletefirst();
    void Print();
    void Clear();
    bool isContains(int DataItem);
    bool isEmpty();
    void getlast();
    void getfirst();
};


#endif // TWLIST_H_INCLUDED
