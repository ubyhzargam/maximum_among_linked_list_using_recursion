//
//  main.cpp
//  maximum_among_linked_list_using_recursion
//
//  Created by Uby H on 13/07/23.
//

#include <iostream>
#include<limits.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;\
void create(int A[], int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last= first;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int max(struct Node *p)
{
    int x=0;
    if(p==NULL)
        return 0;
    x=max(p->next);
    if(p->data>x)
        return p->data;
    else
        return x;
}
int main()
{
    int n;
    cout<<"Enter the non-zero elements in the array : "<<endl;
    cin>>n;
    cout<<"Enter the elements in the linked list : "<<endl;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    create(A,n);
    cout<<"The maximum among all the elements in the linked list is : "<<max(first)<<endl;
    return 0;
}
