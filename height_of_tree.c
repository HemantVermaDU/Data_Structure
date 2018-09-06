#include <stdio.h>
struct node
{
    int data;
    struct node *lp;
    struct node *rp;
};

struct node* getNewNode(int data)
{
  struct node* newNode ;
  newNode = (struct node*)malloc(sizeof(struct node));
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
    root->lp->lp->lp = getNewNode(8);

    return root;

}
int max(struct node *root)
{
    if(root == NULL)
        return 0;
    else
    {
            int xl = max(root->lp);
            int xr = max(root->rp);
            if (xl > xr)
                return(xl+1);
            else
                return(xr+1);
    }
}

int main()
{
    struct node *root = createBTree();
    printf("Height of tree : %d", max(root));
    getchar();
    return 0;
}

