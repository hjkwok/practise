#include <stdlib.h>
#include <stdio.h>
typedef struct node node_t;

struct node
{
	node_t *pre, *next;
	int value;
};

node_t* CreateList(int array[], int len);
void FindNode(node_t **head, int value);
void InsertNode(node_t **head, int value);
void DeleteNode(node_t **head, int value);
void SwapNode(node_t *left, node_t *right);
void QuickSort(node_t **head);
void MergeSort(node_t **head);
void SortList(node_t **head);
void PrintList(node_t **head);
void PurgeList(node_t **head);
