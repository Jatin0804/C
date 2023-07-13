#include<stdio.h>
#include<stdlib.h>

typedef struct bst
{
  int data;
  struct bst *left,*right;
}node;

node *rootnode,*p;

int main(void)
{
  int invalue,no1;
  char ch;
  printf("Enter a value : ");
  scanf("%d",&invalue);
  rootnode=(node*)malloc(sizeof(node));
  if(rootnode==NULL)
  {
    printf("\nMemory not Allocated.!!!");
    exit(1);
  }
  rootnode->data=invalue;
  rootnode->left=NULL;
  rootnode->right=NULL;

  do
  {
    printf("Next Value : ");
    scanf("%d",&no1);
    buildtree(rootnode,no1);
    printf("Do you want to Continue(Press Y) : ");
    ch=getche();
    printf("\n");
  }while(ch=='Y'||ch=='y');

  printf("\nIN-OREDR traversal : ");
  inOrder(rootnode);
  printf("\nPRE-ORDER traversal : ");
  preOrder(rootnode);
  printf("\nPOST-ORDER traversal : ");
  postOrder(rootnode);

  return 0;
}

buildtree(node *nnode,int num)
{
  node *newnode;
  if(num>nnode->data)
  {
    if(nnode->right==NULL)
    {
      newnode=(node*)malloc(sizeof(node));
      if(newnode==NULL)
      {
        printf("\nMemory not Allocated.!!!");
        exit(1);
      }
      newnode->data=num;
      newnode->left=NULL;
      newnode->right=NULL;
      nnode->right=newnode;
    }
    else
    {
      buildtree(nnode->right,num);
    }
  }
  else
  {
    if(num<nnode->data)
    {
      if(nnode->left==NULL)
      {
        newnode=(node*)malloc(sizeof(node));
        if(newnode==NULL)
        {
          printf("\nMemory not Allocated.!!!");
          exit(1);
        }
        newnode->data=num;
        newnode->left=NULL;
        newnode->right=NULL;
        nnode->left=newnode;
      }
      else
      {
        buildtree(nnode->left,num);
      }
    }
  }
  if(num==nnode->data)
  {
    printf("Duplicate Data.\n");
  }
}

inOrder(node *p)
{
  if(p!=NULL)
  {
    inOrder(p->left);
    printf("%d-",p->data);
    inOrder(p->right);
  }
}

preOrder(node *p)
{
  if(p!=NULL)
  {
    printf("%d-",p->data);
    preOrder(p->left);
    preOrder(p->right);
  }
}

postOrder(node *p)
{
  if(p!=NULL)
  {
    postOrder(p->left);
    postOrder(p->right);
    printf("%d-",p->data);
  }
}
