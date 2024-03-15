#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
int main(){
	struct Node* head = NULL;
	struct Node* first = NULL;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	first = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 5;
	head->next = first;
	
	first->data = 6;
	first->next = NULL;
	
	struct Node* temp = head;
	printf("linked list are :\n");
	while(temp != NULL){
		printf("%d\t", temp->data);
		temp = temp->next;
	}
}