/*
ԭ��ɾ��һ���������ظ���Ԫ��
������ظ�Ԫ�صĸ����Լ����ظ�Ԫ��
*/

#include <stdio.h>

int array[] = {1,1,1,2,3,3,4,4};

//����num�еķ��ظ�Ԫ�ظ���
int decDuplicates(int *num, int numSize)
{
    int temp = num[0];      //��һ����Ϊ��ʼ�Ա�Ԫ��
    int temp_len = 1;       //����num�еķ��ظ�Ԫ�ظ���

    for(int i=1; i<numSize; i++)
    {
        if(temp != num[i])  //����з��ظ�Ԫ��
        {
            temp = num[i];  //������׼������ıȽ�
            num[temp_len] = num[i]; //ק��ǰ����
            temp_len++;     //����
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

