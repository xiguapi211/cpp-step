/*
计算质数
*/
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main()
{
    // 查找范围是100以内的
    const int MAX = 100;
    // 查询结果存放数组，初始放3个数字
    long primes[MAX] = {2, 3, 5};
    // 初始尝试判断的值
    long trial = 5;
    // 计数器
    int count = 3;
    //
    bool found = false;
    do
    {
        trial += 2;
        found = false;
        for (int i = 0; i < count; i++)
        {
            // 取模
            found = (trial % *(primes + i)) == 0;
            if (found)
                break;
        }
        // 找到可以被整除的
        if (!found) {
            *(primes + count) = trial;
            count++;
        }
    } while (trial <= MAX);
    // 最后显示
    for (int i = 0; i < MAX; i++)
    {
        if (i % 6 == 0)
        {
            cout << endl;
        }
        cout << setw(8) << *(primes + i);
        
    }
    cout << endl;
    return 0;
}