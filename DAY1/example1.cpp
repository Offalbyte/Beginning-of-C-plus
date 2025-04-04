/*
    ```变量、输出、变量作用域```
*/

#include <iostream>
/*
    ```输入输出流头文件：<iostream>```
    ```输入输出流对象：cin、cout、cerr```
*/

int main(){
    std::cout << "Hello World" << std::endl; 

    int a = 1; // 整型变量a赋值为1
    short b = 2; // 短整型变量b赋值为2
    long c = 3; // 长整型变量c赋值为3
    long long d = 4; // 长长整型变量d赋值为4
    float e = 5.0; // 浮点型变量e赋值为5.0
    double f = 6.0; // 双精度浮点型变量f赋值为6.0
    char g = 'A'; // 字符型变量g赋值为'A'
    bool h = true; // 布尔型变量h赋值为true

    std::cout << "a = " << a << std::endl; // 输出整型变量a的值
    std::cout << "b = " << b << std::endl; // 输出短整型变量b的值
    std::cout << "c = " << c << std::endl; // 输出长整型变量c的值
    std::cout << "d = " << d << std::endl; // 输出长长整型变量d的值
    std::cout << "e = " << e << std::endl; // 输出浮点型变量e的值
    std::cout << "f = " << f << std::endl; // 输出双精度浮点型变量f的值
    std::cout << "g = " << g << std::endl; // 输出字符型变量g的值
    std::cout << "h = " << h << std::endl; // 输出布尔型变量h的值

    std::cout << std::boolalpha; // 设置布尔值输出为true/false
    std::cout << "h = " << h << std::endl; // 输出布尔型变量h的值

    return 0;
}