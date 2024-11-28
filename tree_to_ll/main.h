#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

typedef struct node
{
    struct node *left;
    int data;
    struct node *right;
} Tree_t;

typedef struct Que
{
    Tree_t* node;
    struct Que *link;
} Queue_t;

typedef int data_t;
typedef struct Node
{
	data_t data;
	struct Node *link;
}Slist;


int enqueue(Queue_t **, Queue_t **, Tree_t*);
int dequeue(Queue_t **, Queue_t **);
int insert_into_BST(Tree_t **root, int data);
int insert_at_last(Slist **head, data_t data);
void print_list(Slist *head);
#endif