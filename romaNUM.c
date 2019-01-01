/*
罗马数字转为整数
罗马数字包含七种字符: I， V， X， L，C，D 和 M。

字符          数值
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
还是最简单暴力的方法，把罗马字符格式化到数组中，然后用switch对应转化为数字
最后综合计算数组中的数字，前一个数大于后面的就加上，小于就减去。
*/
int romanToInt(char* s)
{
    char romanTemp[20] = {0};
    int num[20] = {0};
    int sum = 0;

    int count = sprintf(romanTemp, "%s", s);     //s方式格式化才能把字符串存进去

    for(int i = 0; i < count; i++)  //把罗马字符转化成对应的数字保存在新的数组中
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

    for(int i = 0; i < count-1; i++)    //对新的数组进行计算
    {
        if(num[i] >= num[i+1])
            sum+= num[i];
        else
            sum-= num[i];
    }
    sum+= num[count-1];     //最后一个一定是加上
    return sum;
}

int main(void)
{
    char* str = "MCMXCIV";

    int sum = romanToInt(str);

    printf("ROMAN:%s\n",str);
    printf("INT:%d\n",sum);
}

