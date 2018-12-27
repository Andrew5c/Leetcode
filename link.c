/*
结构体、链表知识巩固

两个非空的链表表示两个非负的整数，每个节点只能存储一位数字，逆序存放。
将两数相加，返回一个新的链表表示他们的和。
1->5->8 + 2->4->1 = 3->9->9
表示：851+142 = 993
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//定义一个简单的节点
//分析可知，这个节点结构体占28个字节，int占4个，char占1个，任何指针都是4个字节
struct listNode
{
    int val;    //节点数据域
    //char name[20];
    struct listNode *next;      //节点指针域
};

//节点数求和，返回节点
struct listNode* addTwoNumbers(struct listNode* l1, struct listNode* l2)
{


};

int main()
{
/*
    node_list *node = NULL;     //定义一个头结点
    node = (node_list *)malloc(sizeof(node_list));      //分配空间
    if(node == NULL)
        printf("malloc fail...\n\n");

    memset(node,0,sizeof(node_list));   //清一下

    node->age = 22;
    node->next = NULL;          //指针域指向空，因此这是一个单节点

    printf("%d \n",node->age);
    free(node);     //不要忘记释放
*/



    return 0;

}



