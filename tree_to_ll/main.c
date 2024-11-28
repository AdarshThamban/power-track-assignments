#include "main.h"

int main()
{
    /* Intializing the root with NULL */
    Tree_t *root = NULL;
    Slist *head = NULL; //initialize the header to NULL
    int data;
    int no ;
     printf("Enter the number of data to insert into the BST : ");
    scanf("%d", &no);
    while (no)
    {

        printf("Enter the data to insert into the BST : ");
        scanf("%d", &data);

        /* Calling the function to insert the element */
        insert_into_BST(&root, data);
        no--;
    }

    Queue_t *front = NULL, *rear = NULL;
    if (root)
    {
        enqueue(&front, &rear, root);
        while (front != NULL)
        {

            Tree_t *current = front->node;
            //printf("%d ->", current->data);
            insert_at_last(&head, current->data);
            if (current->left != NULL)
            {
                
                enqueue(&front, &rear, current->left);
            }

            if (current->right != NULL)
                enqueue(&front, &rear, current->right);
            if(front)
            dequeue(&front, &rear);
        }
        printf("Printing from Linked List\n");
         print_list(head);
       
    }

    return 0;
}