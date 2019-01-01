/*
ջ�����жϻ�����
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#define STACK_LENGTH    20

typedef struct st{
    char num[STACK_LENGTH];   //ջ�ڴ�
    int top;                 //ջ��ָ��
}myStack;


//ջ��ʼ����Ϊջ�����ڴ棬����ʼ��ջ��ָ��
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

//��ջ����
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

//��ջ����,���س�ջ��Ԫ��
int stackPop(myStack* s)
{
    if(0 == s->top)
    {
        printf("waring : stack empty!!!\n\n");
        return 0;
    }

    return (s->num[s->top--]);
}

//�ͷ�ջ�ڴ�
void stackFree(myStack* s)
{
    if(s)
        free(s);
}


/** \brief ����ջ�жϻ�����
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
