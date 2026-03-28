#include<stdio.h>
#include<malloc.h>

typdef struct node{
    int info;
    struct node* next;
}n;

n* head=NULL;

n* creatnode(int data){
    n* new=(n*)malloc(sizeof(n));
    new->info=data;
    new->next=NULL;
    return new;
}