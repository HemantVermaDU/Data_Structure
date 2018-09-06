#include <stdio.h>
struct node
{
    int data;
    struct node *lp;
    struct node *rp;
};

struct node* getNewNode(int data)
{
  struct node* newNode = (struct node*)malloc(sizeof(struct node));
  newNode->data = data;
  newNode->lp = NULL;
  newNode->rp = NULL;

  return newNode;
}

struct node* createBTree()
{
    struct node* root =  getNewNode(1);
    root->lp = getNewNode(2);
    root->rp = getNewNode(3);
    root->lp->lp = getNewNode(4);
    root->lp->rp = getNewNode(5);
    root->rp->lp = getNewNode(6);
    root->rp->rp = getNewNode(7);


    return root;

}
int NumLeafNode(struct node *root)
{
    if(root == NULL)
        return 0;
    else
    {
        if(root->lp == NULL && root->rp == NULL)
            return 0;
    else{
            int xl = NumLeafNode(root->lp);
            int xr = NumLeafNode(root->rp);
            return (1+xl+xr);}
    }
}

int main()
{
    struct node *root = createBTree();
    printf("Number of internal Node : %d", NumLeafNode(root));
    getchar();
    return 0;
}




