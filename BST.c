#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int main()
{
int n;
scanf("%d",&n);
struct Node* root=(struct Node*)malloc(sizeof(struct Node));
root->left=NULL;
root->right=NULL;
scanf("%d",&(root->data));
struct Node* temp;
int key;
for(int i=0;i<n-1;i++){
scanf("%d",&key);
temp=root;
while(1){
    if(key>temp->data){
        if(temp->right==NULL){
            struct Node* new=(struct Node*)malloc(sizeof(struct Node));
            new->right=NULL;
            new->left=NULL;
            new->data=key;
            temp->right=new;
            break;
        }
        else{
            temp=temp->right;
        }
        
    }
    else{
         if(temp->left==NULL){
            struct Node* new=(struct Node*)malloc(sizeof(struct Node));
            new->right=NULL;
            new->left=NULL;
            new->data=key;
            temp->left=new;
            break;
        }
        else{
            temp=temp->left;
        }
    }
}
}
inorder(root);

}