#include "dlList.h"

node_t* CreateList(int array[], int len)
{
	int idx = 0;
	node_t *node;
	node_t *head;
	node_t *pre = 0;
	if(len == 1)
	{
		head = (node_t *)malloc(sizeof(node_t));
		head->value = array[idx];
		head->pre = 0;
		head->next = 0;
		return head;
	}
	for(idx = 0; idx < len; idx++)
	{
		node = (node_t *)malloc(sizeof(node_t));
		node->pre = pre;
		if(pre != 0){
			pre->next = node;
		}else
		{
			head = node;
		}
		node->next = 0;
		node->value = array[idx];
		pre = node;
	}
	return head;
}

void PrintList(node_t **head)
{
	node_t *it = *head;
	int idx = 0;
	while(it != NULL)
	{
		printf("%d element: %d\n", idx++, it->value);
		it = it->next;
	}
}

void InsertNode(node_t **head, int value)
{
	if(!head && !*head)
		return;
	node_t* node = (node_t *)malloc(sizeof(node_t));
	node->pre = 0;
	node->value = value;
	node->next = *head;
	(*head)->pre = node;
	*head = node;
}

void PurgeList(node_t **head)
{
	node_t *node = 0;
	while(*head != 0)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
}
void SwapNode(node_t *left, node_t *right)
{
	node_t *leftPre, *leftNext, *rightPre, *rightNext;
	leftPre = left->pre;
	leftNext = left->next;
	rightPre = right->pre;
	rightNext = right->Next;
	left->pre = right->pre;
	left->next = right->next;
	if(leftPre)
		leftPre->next = right;
	if(leftNext)
		leftNext->pre = right;
	if(rightPre)
		rightPre->next = left;
	if(rightNext)
		rightNext->pre = left;
	
/*	node_t *preHolder = left->pre;
	node_t *nextHolder = left->next;
	left->pre->next = right;
	left->next->pre = right;
	right->pre->next = left;
	right->next->pre = left;
	left->next = right->next;
	left->pre = right->pre;
	right->next = nextHolder;
	right->pre = preHolder;*/
	
}
void SortList(node_t **head)
{
	
}
