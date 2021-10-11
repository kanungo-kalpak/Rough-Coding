#include<stdio.h>
#include<stdlib.h>


typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
    
}node;

void createLinkedlist(node *ptr){
    int x;
    char choice;
    node *temp;
    int count=1;
    do
    {
        printf("Enter the value of %d node->", count);
        scanf("%d",&x);
        ptr->data=x;
        fflush(stdin);
        printf("any more(Y/N)?");
        scanf("%c", &choice);
        if ( choice == 'y')
        {
            temp=(node *) malloc(sizeof(node));
            ptr->next=temp;
            ptr=temp;
            count+=1;
        }
          
    } while (choice!='n');
    ptr->next=NULL;
    

}

node *insertAtBegining(node *ptr){
    node *temp;
    temp= (node *) malloc(sizeof(node));
    printf("enter the value->\n");
    scanf("%d", &temp->data);
    temp->next=ptr;
    ptr=temp;

    return ptr;

}

// node *insertAtMiddle(node *ptr, int index){
//     node *list=ptr;
//     int i=0;
//     int value;
//     node *temp;
//     temp= (node *) malloc(sizeof(node));
//     printf("enter the value of the node->\n");
//     scanf("%d",&value);
//     temp->data=value;
//     while (i<index)
//     {
//         list=list->next;
//         i++;
//     }
//     temp->next=list->next;
//     list->next=temp;

//     return ptr;

// }



void insertAtMiddle(node *ptr, int index){
    int i=0;
    int value;
    node *temp;
    temp= (node *) malloc(sizeof(node));
    printf("enter the value of the node->\n");
    scanf("%d",&value);
    temp->data=value;
    while (i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}

void insertAtLast(node *ptr){
    node *temp= (node *) malloc(sizeof(node));
    int value;
    printf("Enter the value->\n");
    scanf("%d", &value);
    temp->data=value;
    while (ptr->next != NULL)
    {
        ptr= ptr-> next;
    }
    temp->next=NULL;
    ptr->next=temp;

}
void display(node *ptr){
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    

}

int main(){
    node *head;
    int position;
    head=(node *)malloc(sizeof(node));
    createLinkedlist(head);
    printf("After creating the linkedlist\n");
    display(head);  // after creation of linkedlist

    printf("\nAfter inserting into the head position\n");
    head= insertAtBegining(head);
    display(head);


    printf("\nIn which position would you like to insert?\n");
    scanf("%d",&position);
    printf("\nAfter inserting into the middle position\n");
    // head=insertAtMiddle(head,position);
    insertAtMiddle(head,position);  // inserting at given index
    display(head);

    printf("\nAfter inserting at last position\n");
    insertAtLast(head);  // inserting at last position
    display(head);
    
    return 0;
}