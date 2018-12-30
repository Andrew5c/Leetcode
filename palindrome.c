/*
判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

示例 1:
输入: 121
输出: true

示例 2:
输入: -121
输出: false
解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。

进阶:

你能不将整数转为字符串来解决这个问题吗？
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

/** \brief
 *判断回文数
 * \param int x
 * \param
 * \return bool
 *
 */
bool isPalindrome(int x)
{
    char numTemp[20] = {0};

    //n接收转换了多少个字符
    int n = sprintf(numTemp, "%d", x);
    //负数直接不是回文数
    if(x < 0)
        return false;
    //单个数字必是回文数
    else if(1 == n)
        return true;
    //判断前后是否回文
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

