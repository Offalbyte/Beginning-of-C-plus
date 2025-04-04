/*
    ```ASCII码表```
    ```类型转换```
    ```变量大小```
    ```变量作用域```
*/

#include <iostream>

int main(){
    char a = 'A'; // 字符型变量a赋值为'A'
    char z = 'Z'; // 字符型变量z赋值为'Z'

    int x = (int)(z-a);
    char y = z-a;

    std::cout << "ASCII code of 'A' = " << (int)a << std::endl; // 输出字符'A'的ASCII码
    std::cout << "ASCII code of 'Z' = " << (int)z << std::endl; // 输出字符'Z'的ASCII码

    std::cout << "x = " << x << std::endl; // 输出整型变量x的值
    std::cout << "y = " << y << std::endl; // 输出字符型变量y的值

    
    /*`````````````````````````*/

    std::cout << "sizeof(char) = " << sizeof(char) << std::endl; // 输出char类型的大小
    std::cout << "sizeof(int) = " << sizeof(int) << std::endl; // 输出int类型的大小
    std::cout << "sizeof(short) = " << sizeof(short) << std::endl; // 输出short类型的大小
    std::cout << "sizeof(long) = " << sizeof(long) << std::endl; // 输出long类型的大小
    std::cout << "sizeof(long long) = " << sizeof(long long) << std::endl; // 输出long long类型的大小
    std::cout << "sizeof(float) = " << sizeof(float) << std::endl; // 输出float类型的大小
    std::cout << "sizeof(double) = " << sizeof(double) << std::endl; // 输出double类型的大小
    std::cout << "sizeof(bool) = " << sizeof(bool) << std::endl; // 输出bool类型的大小
    std::cout << "sizeof(void*) = " << sizeof(void*) << std::endl; // 输出指针类型的大小
    std::cout << "sizeof(std::string) = " << sizeof(std::string) << std::endl; // 输出std::string类型的大小

    /*````````````````````````*/

    char A = 100; // 100是int型，赋值给char，int是4字节，char是1字节，int转char会截断高位，数字过大会损失精度
    int b = A; // char转int，直接赋值，char是1字节，int是4字节，char转int会扩展高位，不会损失精度
    double c = b; // int转double，直接赋值，int是4字节，double是8字节，int转double会扩展高位，不会损失精度

    std::cout << "A = " << A << std::endl; // 输出字符型变量A的值
    std::cout << "b = " << b << std::endl; // 输出整型变量b的值
    std::cout << "c = " << c << std::endl; // 输出双精度浮点型变量c的值

    // 下面的转换可能会损失精度
    unsigned int d = -1; // int转unsigned int，负数转unsigned int会变成一个很大的正数
    std::cout << "d = " << d << std::endl;

    return 0;
}