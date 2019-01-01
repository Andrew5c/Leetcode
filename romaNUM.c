/*
��������תΪ����
�������ְ��������ַ�: I�� V�� X�� L��C��D �� M��

�ַ�          ��ֵ
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/
#include<stdio.h>
#include<string.h>

/*
������򵥱����ķ������������ַ���ʽ���������У�Ȼ����switch��Ӧת��Ϊ����
����ۺϼ��������е����֣�ǰһ�������ں���ľͼ��ϣ�С�ھͼ�ȥ��
*/
int romanToInt(char* s)
{
    char romanTemp[20] = {0};
    int num[20] = {0};
    int sum = 0;

    int count = sprintf(romanTemp, "%s", s);     //s��ʽ��ʽ�����ܰ��ַ������ȥ

    for(int i = 0; i < count; i++)  //�������ַ�ת���ɶ�Ӧ�����ֱ������µ�������
    {
        switch(romanTemp[i])
        {
        case 'I':
            num[i] = 1;
            break;

        case 'V':
            num[i] = 5;
            break;

        case 'X':
            num[i] = 10;
            break;

        case 'L':
            num[i] = 50;
            break;

        case 'C':
            num[i] = 100;
            break;

        case 'D':
            num[i] = 500;
            break;

        case 'M':
            num[i] = 1000;
            break;
        }
    }

    for(int i = 0; i < count-1; i++)    //���µ�������м���
    {
        if(num[i] >= num[i+1])
            sum+= num[i];
        else
            sum-= num[i];
    }
    sum+= num[count-1];     //���һ��һ���Ǽ���
    return sum;
}

int main(void)
{
    char* str = "MCMXCIV";

    int sum = romanToInt(str);

    printf("ROMAN:%s\n",str);
    printf("INT:%d\n",sum);
}

