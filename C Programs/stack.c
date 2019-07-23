/*
push() 
  |   pop()
  |    ^
  |    |
  |    |
  v    |
|_______|6  <------ top
|_______|5
|_______|4
|_______|3
|_______|2
|_______|1
|_______|0
        -1 <------- stack empty

*/
#include<stdio.h>
#include<stdlib.h>
#define max 100

int stackArray[max];
int top=-1;//set top -1; stack is empty

//not used in this program
int isEmpty()
{
    if(-1 != top)
    {
        return 0;//return 0, if stack is not empty
    }
    return 1; //return 1, if stack is not empty
    
}

//not used in this program
void print()
{
    int i;
    printf("\n");
    for(i = 0 ; i <= top ; i++)
    {
        printf("\t%d", stackArray[i]);
    }
}

int push(int data)
{
    if(max-1 == top) //avoid accidently assignment
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
    if(-1 == top)//avoid accidently assignment
    {
        printf("Under flow : Stack is empty");
        return -1;
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
        printf("\nEnter a selection \n\t1. Push\n\t2.Pop\n\tAny other Number to Exit : ");
        scanf("%d",&key);
        switch (key)
        {
        case 1:
        {
            printf("\nenter a element : ");
            int num;
            scanf("%d",&num);
            num = push(num);
            if(1 == num)//avoid accidently assignment
            {
                printf("\nsuccess !");
            }
            else
            {
                printf("\nfail !");
            }
            
            break;
        }

        case 2:
        {
            int num = pop();
            if(-1 != num)//avoid accidently assignment
            {
                printf("\nPoped element = %d ",num);
            }            
            break;
        }        
        default:
            exit(0);
            break;
        }
    } while (1);
    

    return 0;
}
