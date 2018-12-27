
/*
** leetcode �ҳ������к�ΪĿ��ֵ������Ԫ�أ��������±�
��һ��������������ÿ��������һ�飬ֱ���ҵ���ΪĿ��ֵ�������������±ꡣ
Ȼ������ð�ݵ�ѭ�������β��ҡ�
*/
#include<stdio.h>

int array[] = {1,2,3,4,5,6,7,8,9};
int target = 10;

//ע�ⲻ���ں����ⲿ���ؾֲ�������ָ�룬static����
int* twoNum(int *array, int arraySize, int target)
{
    static int temp[2];     //�ݴ��±�

    for(int i = 0; i < arraySize; i++)
    {
        for(int j = i+1; j < arraySize; j++)
        {
            if(array[i]+array[j] == target)
            {
                temp[0] = i;    //�洢�±�
                temp[1] = j;
                return temp;    //ע���������������һ��ָ��
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
    printf("\n\narray[%d] + array[%d] = %d\n\n",*p_array,*(p_array+1),target);  //������һ�·��֣�C���Բ�������Խ����

}


