#include<stdio.h>
#include<stdlib.h>

struct node
{
  int item;
  struct node* left;
  struct node* right;
};

void inOrder(struct node* root)
{
  if(root==NULL)
  return;

  inOrder(root->left);
  printf("%d -> ",root->item);
  inOrder(root->right);
}

void preOrder(struct node* root)
{
  if(root==NULL)
  return;

  printf("%d -> ",root->item);
  preOrder(root->left);
  preOrder(root->right);
}

void postOrder(struct node* root)
{
  if(root==NULL)
  return;

  preOrder(root->left);
  preOrder(root->right);
  printf("%d -> ",root->item);
}

struct node* createNode(value)
{
  struct node* newNode=malloc(sizeof(struct node));
  newNode->item=value;
  newNode->left=NULL;
  newNode->right=NULL;

  return newNode;
}

struct node *insertleft(struct node* root,int value)
{
  root->left=createNode(value);

  return root->left;
}

struct node *insertright(struct node* root,int value)
{
  root->right=createNode(value);

  return root->right;
}

int main(void)
{
  struct node* root=createNode(1);
  insertleft(root,12);
  insertright(root,9);

  insertleft(root->left,5);
  insertright(root->left,6);

  insertleft(root->right,10);
  insertright(root->right,11);

  insertleft(root->left->left,2);
  insertright(root->left->left,5);

  printf("InOrder traversal :\n");
  inOrder(root);

  printf("\nPreOrder traversal : \n");
  preOrder(root);

  printf("\nPostOrder traversal : \n");
  postOrder(root);
}
