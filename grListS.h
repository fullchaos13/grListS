#ifndef GRLISTS_H
#define GRLIST_H

#include <stdio.h>
#include <stdlib.h>

struct node{

 int data;
 struct node* next;
};

/***************************************************
* initList: Creates a linked list of size n.       *
* Returns a pointer to the first element in the    *
* list.                                            *
***************************************************/
struct node* initList(const int n);


/***************************************************
* printList: Prints the contents of the data       *
* variable for each node in the list. Parameter is *
* a pointer to the start of the list.              *
***************************************************/
void printList(const struct node* start);


/***************************************************
* emptyList: Frees up the allocated memory of each *
* node in the list. Make sure to call at the end of*
* main. Parameter is a pointer to the              *
* start of the list.                               *
***************************************************/
void emptyList(struct node* start);


/***************************************************
* deleteNode: Permanetly removes a node and free up*
* the allocated memory it was occupying. Parameter *
* 'start' is a pointer to the start of the list,   *
* 'n' is the node to be removed (starts from the   *
* top of the list).                                *
***************************************************/
struct node* deleteNode(struct node* start, const int n);


/***************************************************
* insertNode: Allocates memory for a new node and  *
* inserts it to a specified location in the list.  *
* Parameter 'start' is a pointer to the start of   *
* the list, 'n' is the position of the new node    *
* relative to the list, initializes data variable  *
* with 'v'.                                        *
***************************************************/
struct node* insertNode(struct node* start, const int n, const int v);
#endif // GRLISTS_H
