#include "main.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
    Tree_t *new = malloc(sizeof(Tree_t));   //create new node
    if(new == NULL)//check for error
    {
        return FAILURE;
    }
                        //update new node fields
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    
    if(*root == NULL)   //if list is empty
    {
        *root = new;    //update root to new
        return SUCCESS;
    }
    
    int flag;
    Tree_t *temp = *root;   //declaring two pointers to hold address
    Tree_t *parent;
    
    while(temp != NULL) //condition for traversal
    {
        parent = temp;
        if(data < temp->data)   //if data is less move to left child address
        {
            temp = temp-> left;
            flag = 1;
        }
        else if(data > temp-> data) //if data is more move to right child address
        {
            temp = temp-> right;
            flag = 0;
        }
        else    // continue if duplicate data present
        {
            printf("INFO : Duplicate found\n");
            return 0;
        }
        
    }
    if(flag == 1)
    {
        parent-> left = new;    //update LC
    }
    else
    {
        parent->right = new;    //update RC
    }
    return SUCCESS;
    
}

int insert_at_last(Slist **head, data_t data)
{
    Slist *new = malloc(sizeof(Slist));     //create new node
    
    if (new == NULL)    //error check
    {
        return FAILURE;
    }
    
    new->data = data;   //update new node data
    new->link = NULL;

    if(*head == NULL)   //make new node as 1st node if list is empty
    {
        *head = new;
        return SUCCESS;
    }
    //for non empty list
    Slist *temp = *head; //temp pointer to traverse through list
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = new; //establish link between new node and last node
    return SUCCESS;    
}
void print_list(Slist *head)
{
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
	}
    else
    {
	    while (head)		
	    {
		    printf("%d -> ", head -> data);
		    head = head -> link;
	    }

	    printf("NULL\n");
    }
}