#include<stdio.h>
#define max 100
#include<stdlib.h>

int stackArray[max];
int top=-1;

int push(int data)
{
    if(top == max-1)
    {
        return 0;
    }
    else 
    {
        top = top+1;
        stackArray[top]=data;
        return 1; 
    }   
    
}

int pop()
{
    if(top == -1)
    {
        printf("Under flow");
    }
    else
    {
        int temp = stackArray[top];
        top = top - 1;
        return temp;
    }
    
}



int main()
{
    int key;
    do
    {
        printf("\nenter a selection ");
        scanf("%d",&key);
        switch (key)
        {
        case 1:
        {
            printf("\nenter a element");
            int num;
            scanf("%d",&num);
            num = push(num);
            if(num == 1)
            {
                printf("\nsuccess");
            }
            else
            {
                printf("\nfail");
            }
            
            break;
        }

        case 2:
        {
            int num = pop();
            printf("\nPoped element = %d",num);
            break;
        }        
        default:
            exit(0);
            break;
        }
    } while (1);
    



    return 0;
}