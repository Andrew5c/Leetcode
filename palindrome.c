/*
�ж�һ�������Ƿ��ǻ���������������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

ʾ�� 1:
����: 121
���: true

ʾ�� 2:
����: -121
���: false
����: �������Ҷ�, Ϊ -121 �� ���������, Ϊ 121- �����������һ����������

����:

���ܲ�������תΪ�ַ�����������������
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

/** \brief
 *�жϻ�����
 * \param int x
 * \param
 * \return bool
 *
 */
bool isPalindrome(int x)
{
    char numTemp[20] = {0};

    //n����ת���˶��ٸ��ַ�
    int n = sprintf(numTemp, "%d", x);
    //����ֱ�Ӳ��ǻ�����
    if(x < 0)
        return false;
    //�������ֱ��ǻ�����
    else if(1 == n)
        return true;
    //�ж�ǰ���Ƿ����
    else
    {
        for(int i = 0; i < n/2; i++)
        {
            if(numTemp[i] == numTemp[n-i-1])
                continue;
            return false;
        }
        return true;
    }
}


int main()
{
    int x = 1234321;

    bool flag = isPalindrome(x);

    printf("%d\n\n",flag);
}

