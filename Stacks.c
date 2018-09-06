#include<stdio.h>
#include<conio.h>

int s[100], top=-1, n;

void show()
{
     for(int i=0; i<=top; i++)
     printf("%d\t",s[i]);
     printf("\n");
 }

void push()
{
     int item;

     if(top == n-1)
            printf("\nStack is full.\n");
     else
     {
            printf("\nEnter the item : ");
            scanf("%d",&item);
            s[++top]=item;
     }
     show();
}

void pop()
{

         if(top==-1)
             printf("Stack is empty.");
         else
         {
             printf("%d is popped.",s[top]);
             top--;
         }
}

int main()
{
          int i,op;
          printf("Enter the size of the stack : ");
          scanf("%d",&n);
          do
          {
             printf("\n1 : Push");
             printf("\n2 : Pop");
             printf("\n3 : Print");
             printf("\n4 : Exit");
             printf("\nEnter your choice : ");
             scanf("%d",&op);

             switch(op)
             {
                    case 1:
                              push();
                              break;
                    case 2:
                              pop();
                              break;
                    case 3:
                              show();
                              break;
              }
        }while(op!=4);

        printf("\nTHE END");

        getch();
}
