/*
栈操作判断回文数
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#define STACK_LENGTH    20

typedef struct st{
    char num[STACK_LENGTH];   //栈内存
    int top;                 //栈顶指针
}myStack;


//栈初始化，为栈分配内存，并初始化栈顶指针
myStack* stackInit(void)
{
    myStack* p;

    if(p = (myStack*)malloc(sizeof(myStack)))
    {
        p->top = 0;
        return p;
    }
    return 0;
}

//入栈操作
int stackPush(myStack* s, int data)
{
    if(s->top+1 > STACK_LENGTH)
    {
        printf("waring : stack over!!!\n\n");
        return 0;
    }

    s->num[++(s->top)] = data;
    return 1;
}

//出栈操作,返回出栈的元素
int stackPop(myStack* s)
{
    if(0 == s->top)
    {
        printf("waring : stack empty!!!\n\n");
        return 0;
    }

    return (s->num[s->top--]);
}

//释放栈内存
void stackFree(myStack* s)
{
    if(s)
        free(s);
}


/** \brief 利用栈判断回文数
 *
 * \param
 * \param
 * \return
 *
 */
bool isPalindrome(int x)
{
    char tempNum[STACK_LENGTH] = {0};
    int count = sprintf(tempNum, "%d", x);

    myStack* pStack = stackInit();
    for(int i = 0; i < count; i++)
        stackPush(pStack, tempNum[i]);

    for(int j = 0; j < count; j++)
    {
        if(tempNum[j] != stackPop(pStack))
        {
            stackFree(pStack);
            return false;
        }
    }
    stackFree(pStack);
    return true;
}


int main()
{
    int x = 256;
    bool flag = isPalindrome(x);

    printf("%d\n\n",flag);
}
