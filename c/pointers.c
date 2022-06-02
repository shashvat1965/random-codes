#include <stdio.h>
#include <stdlib.h>

typedef struct node * Node;

struct node
{
    int ele;
    Node next;
};

typedef struct linked_list * List;

struct linked_list
{
    Node head;
    int count;
};

List createNewList(){
    List myList;
    myList = (List) malloc(sizeof(struct linked_list));
    //myList = (List) malloc(sizeof(*myList));
    myList->count=0;
    myList->head=NULL;
    return myList;
}

Node createNewNode(int value){
    Node myNode;
    myNode = (Node) malloc(sizeof(struct node));
    myNode->ele=value;
    myNode->next=NULL;
    return myNode;
}

void insertNodeAtStart(Node n1, List l1){
    if(l1->count==0){
        l1->head = n1;
        l1->count++;
        n1->next=NULL;
    }
    else{
        n1->next = l1->head;
        l1->head = n1;
        l1->count++;
    }
}

void insertNodeAtEnd(Node n1, List l1){
    if(l1->count==0){
        l1->head = n1;
        l1->count++;
        n1->next=NULL;
    }
    else{
        Node temp = l1->head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next=n1;
        n1->next=NULL;
        l1->count++;
    }
}

void insertAfter(List l1, Node n1, int searchEle){
    if(l1->count==0){
        printf("list is empty");
    }
    else{
        Node temp= l1->head;
        while(temp->ele != searchEle){
            temp = temp->next;
        }
    }
}

int main(){
    List l1 = createNewList();
    Node n1;
    n1->ele = 5;
    insertNode(n1,l1);
    printf("%d", *(n1->next));
    return 0;
}