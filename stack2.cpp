// stack2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

typedef struct Node* Stack;
typedef int ElemType;
struct Node {
	ElemType data;
	struct Node* next;
};

 Stack creat()
{
	 Stack s = (Stack)malloc(sizeof(struct Node));
	 s->next = NULL;
	 return s;
}

 bool isEmpty(Stack s)
 {
	 return s->next = NULL;
 }

 void push(Stack s, ElemType item)
 {
	 Stack p = (Stack)malloc(sizeof(struct Node));
	 p->data = item;
	 p->next = s->next;
	 p->next = s;
 }

 ElemType pop(Stack s)
 {
	 if (isEmpty(s))
	 {
		 cout << "Õ»¿Õ" << endl;
		 return NULL;
	 }
	 Stack t = s->next;
	 s->next = t->next;
	 ElemType data = t->data;
	 free(t);
	 return data;
 }


