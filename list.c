#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct linkedlist *initialize();
void add(struct linkedlist* list, int value);
void print_list(struct linkedlist *list);

struct node{
    int data;
    struct node *next;
};

struct linkedlist{
    int size;
    struct node *head;
};

struct linkedlist *initialize(){
    struct linkedlist* list = malloc(sizeof(struct linkedlist));
    list->size = 0;
    list->head = NULL;
    return list;
}

void add(struct linkedlist* list, int value)
{
    //Code to add an element to a LinkedList
}

void print_list(struct linkedlist *list)
{
    //Code to print a LinkedList
}

void print_reverse(struct linkedlist *list)
{
    //Code to print a LinkedList in reverse
}

int main()
{

   

}
