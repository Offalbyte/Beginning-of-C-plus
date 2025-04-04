/*
    ```几种存储区和编译过程```
*/

#include <bits/stdc++.h>

void func(){} // 函数定义存储在代码区(Code Segment)中
int a = 1; // 全局变量存储在全局/静态区(Global/Static Segment)中
const int b = 2; // 常量存储在常量区(Constant Segment)中

int main(){
    int c = 3; // 局部变量存储在栈区(Stack Segment)中
    static int d = 4; // 静态局部变量存储在全局/静态区(Global/Static Segment)中
    int *p = new int(5); // 动态分配的内存存储在堆区(Heap Segment)中

    std::cout << "Function address: " << (void*)func << std::endl; // 输出函数地址
    std::cout << "Global variable address: " << &a << std::endl; // 输出全局变量地址
    std::cout << "Constant address: " << &b << std::endl; // 输出常量地址
    std::cout << "Local variable address: " << &c << std::endl; // 输出局部变量地址
    std::cout << "Static local variable address: " << &d << std::endl; // 输出静态局部变量地址
    std::cout << "Dynamic variable address: " << p << std::endl; // 输出动态变量地址
    
    // std::cout << "Global variable a: " << a << std::endl;
    // std::cout << "Constant b: " << b << std::endl;
    // std::cout << "Local variable c: " << c << std::endl;
    // std::cout << "Static local variable d: " << d << std::endl;
    // std::cout << "Dynamic variable p: " << *p << std::endl;

    delete p; // 释放动态分配的内存

    return 0;
}