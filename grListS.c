#include "grListS.h"

struct node* initList(const int n){

 struct node* temp;
 struct node* first = NULL;

    for(int i = 0; i < n; i++){

        temp = (struct node*) malloc(sizeof(struct node));
        temp->data = i * 5;
        temp->next = first;
        first = temp;
    }
    return first;
};


void printList(const struct node* start){

    for(struct node* i = start; i != NULL; i = i->next){

        printf("%d\n", i->data);
    }
}


void emptyList(struct node* start){

 struct node* temp;

    while(start != NULL){

        temp = start;
        start = start->next;
        free(temp);
    }
}


struct node* deleteNode(struct node* start, const int n){

 int counter = 0;
 struct node* prev = start;
 struct node* temp;

    if(n == 0){
        temp = start;
        start = start->next;
        free(temp);

        return start;
    }

    for(struct node* i = start->next; i != NULL; i = i->next, counter++){

        if(counter == n){
            prev->next = i->next;
            free(i);
            return start;
        }
        prev = i;
    }
}


struct node* insertNode(struct node* start, const int n, const int v){

 struct node* temp = (struct node*) malloc(sizeof(struct node));
 int counter = 0;

    for(struct node* i = start; i != NULL; i = i->next, counter++){

        if(counter == n){
            temp->data = v;
            temp->next = i->next;
            i->next = temp;
                break;
        }
    }
}
