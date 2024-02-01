/*

VER 1, not optimized as can be
more into queue-like behavior with pop_front/back and push_front/back
supporting LIFO/FIFO

For next versions will add cache-locality of ll, optimizations regarding pops/search
and lastly add seek, without pop
*/

#include <stdio.h>
#include <stdlib.h>

struct Inode 
{
  int v;
  struct Inode* next;
};

typedef struct Inode node;

node* create_node(int val)
{
    node* n = malloc(sizeof(node));
    n->v = val;
    n->next = NULL;
    return n;
}

void printll(node* head)
{
    while (head != NULL)
    {
        printf(" %d ", head->v);
        head = head->next;
    }
}

void insert_behind_head(node** head, node* nd)
{
    nd->next = *head;
    *head = nd;
}

void insert_before_head(node* head, node* nd)
{
    while (head->next != NULL)
    {
        head = head->next;
    }

    head->next = nd;
}

void pop_back(node** head)
{
    if (head != NULL)
    {
        node* tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
}

void pop_front(node* head)
{
    while (head->next->next != NULL)
    {
        head = head->next;
    }

    free(head->next->next);
    head->next = NULL;
}

int main(void)
{
    node* head = NULL;
    head = malloc(sizeof(node));
    head->v = 0;
    head->next = NULL;

    node* n1 = create_node(10);
    insert_behind_head(&head, n1);

    pop_back(&head);

    node* n2 = create_node(20);
    insert_behind_head(&head, n2);

    node* n3 = create_node(30);
    insert_before_head(head, n3);

    pop_front(head);

    printll(head);

    return 0;
}