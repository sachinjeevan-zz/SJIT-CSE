#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=head;
    scanf("%d",&(temp->data));
    for(int i=0;i<n-1;i++){
        struct Node* new=(struct Node*)malloc(sizeof(struct Node));
        temp->next = new;
        temp=temp->next;
        scanf("%d",&(temp->data));
    }
    temp->next=NULL;
   int key;
   scanf("%d",&key);
    temp=head;
    struct Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data == key && temp==head){
            head=head->next;
            break;
        }
        else if(temp->data == key && temp->next==NULL){
            prev->next = NULL;
            break;
        }
        else if(temp->data==key){
            prev->next=temp->next;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
  temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}