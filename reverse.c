/*
������ת
����32λ�з�����������ÿһλ���з�ת��
�����ת��������򷵻�0
ʵ����123->321,-123->-321,120->12
*/
#include<stdio.h>
#include<math.h>
#include<limits.h>

/*
������ķ������з�ת����ÿһ�����ֶ�ȡ�����浽һ�������С�
Ȼ�����������
2��31�η����λ��Ҳ��10λ����
*/
int reverse(int x)
{
    int temp[10] = {0};     //�����ݴ�ÿһλ����
    int i = 0;

    //������һ������������������ֵ��ע��C�У�long��int����4���ֽڣ�long long����8��
    long long result = 0;

    for(i=0; i<10; i++)     //����ѭ����ȡ��ÿһλ����
    {
        if(0 != (x/10))
        {
            temp[i] = x % 10;   //ȡ�����һλ�ݴ�������
            x = x / 10;         //��ȥ���һλ
            continue;
        }
        //��ʣ��λ��ֱ�ӱ���Ȼ���˳�ѭ��
        else
        {
            temp[i] = x;
            break;
        }
    }
    //����ѭ��������temp�о���x��ÿһλ����
    //�����������ֵ
    for(int j = 0; j <=i; j++)
    {
        long long n = (int)round(pow(10,i-j));   //pow�����ᷢ������round�������������
        result += temp[j] * n;
        if(result > INT_MAX || result < INT_MIN)
            return 0;
    }

    return result;
}

int main()
{
    int num = -1235;

    printf("the orignal num is :%d\n",num);

    int result = reverse(num);

    printf("after reverse is %d\n\n",result);
}


