/*
原地删除一个数组中重复的元素
输出非重复元素的个数以及非重复元素
*/

#include <stdio.h>

int array[] = {1,1,1,2,3,3,4,4};

//返回num中的非重复元素个数
int decDuplicates(int *num, int numSize)
{
    int temp = num[0];      //第一个作为启始对比元素
    int temp_len = 1;       //计数num中的非重复元素个数

    for(int i=1; i<numSize; i++)
    {
        if(temp != num[i])  //如果有非重复元素
        {
            temp = num[i];  //迭代，准备后面的比较
            num[temp_len] = num[i]; //拽到前面来
            temp_len++;     //计数
        }
    }
    return temp_len;
}

int main()
{
    int real_len = sizeof(array)/sizeof(array[0]);

    printf("orignal array length is %d\n",real_len);
    printf("orignal array is:");
    for(int i = 0; i < real_len; i++)
        printf("%d ",array[i]);


    int temp_len = decDuplicates(array,real_len);

    printf("\n\nnoduplicate fectors is %d",temp_len);
    printf("\nnoduplicate array is:");
    for(int i = 0; i < temp_len; i++)
        printf("%d ",array[i]);

    return 0;
}

