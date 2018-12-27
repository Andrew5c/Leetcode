
/*
** leetcode 找出数组中和为目标值的两个元素，返回其下标
第一个数依次与后面的每个数都加一遍，直到找到和为目标值的那两个数的下标。
然后类似冒泡的循环，依次查找。
*/
#include<stdio.h>

int array[] = {1,2,3,4,5,6,7,8,9};
int target = 10;

//注意不能在函数外部返回局部变量的指针，static可以
int* twoNum(int *array, int arraySize, int target)
{
    static int temp[2];     //暂存下标

    for(int i = 0; i < arraySize; i++)
    {
        for(int j = i+1; j < arraySize; j++)
        {
            if(array[i]+array[j] == target)
            {
                temp[0] = i;    //存储下标
                temp[1] = j;
                return temp;    //注意数组名本身就是一个指针
            }
        }
    }
    return 0;
}


int main()
{
    int* p_array = 0;

    int arrayLen = sizeof(array)/sizeof(array[0]);

    printf("orignal array length is %d\n",arrayLen);
    printf("orignal array is:");
    for(int i = 0; i < arrayLen; i++)
        printf("%d ",array[i]);

    p_array = twoNum(array,arrayLen,target);

    if(p_array == 0)
    {
        printf("\n\nno such num whose plus is %d...\n\n",target);
        return 0;
    }
    printf("\n\narray[%d] + array[%d] = %d\n\n",*p_array,*(p_array+1),target);  //尝试了一下发现，C语言不做数组越界检查

}


