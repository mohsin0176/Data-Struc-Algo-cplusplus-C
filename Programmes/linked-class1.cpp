#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;


class Node {
    public:
    int data;
    struct Node* next;
};
void display(Node* n)
{
    while( n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }
}
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

     head=new Node();
     second=new Node();
     third=new Node();


    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    display(head);
    return 0;
}

