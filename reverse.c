/*
整数反转
给定32位有符号整数，对每一位进行反转。
如果反转后溢出，则返回0
实例：123->321,-123->-321,120->12
*/
#include<stdio.h>
#include<math.h>
#include<limits.h>

/*
先用最笨的方法进行反转，把每一个数字都取出来存到一个数组中。
然后在逆向求和
2的31次方最大位数也就10位数字
*/
int reverse(int x)
{
    int temp[10] = {0};     //用来暂存每一位数字
    int i = 0;

    //下面用一个长整形来接收逆序值，注意C中，long和int都是4个字节，long long才是8个
    long long result = 0;

    for(i=0; i<10; i++)     //依次循环的取出每一位数字
    {
        if(0 != (x/10))
        {
            temp[i] = x % 10;   //取出最后一位暂存数组中
            x = x / 10;         //除去最后一位
            continue;
        }
        //仅剩个位，直接保存然后退出循环
        else
        {
            temp[i] = x;
            break;
        }
    }
    //上述循环结束后，temp中就是x的每一位数字
    //下面计算逆序值
    for(int j = 0; j <=i; j++)
    {
        long long n = (int)round(pow(10,i-j));   //pow函数会发生误差，加round进行误差修正。
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


