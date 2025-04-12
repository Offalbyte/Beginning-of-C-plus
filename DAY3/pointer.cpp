/*
    ```指针```
*/

#include <iostream>

int main(){
    int *ptr; // 声明一个未赋初值的指向整数的指针
    int a = 10; // 声明一个整数变量并赋值
    ptr = &a; // 将指针ptr指向变量a的地址
    std::cout << "a的值为：" << a << std::endl; // 输出变量a的值
    std::cout << "a的地址为：" << &a << std::endl; // 输出变量a的地址
    std::cout << "ptr的值为：" << ptr << std::endl; // 输出指针ptr的值（即变量a的地址）
    std::cout << "ptr指向的值为：" << *ptr << std::endl; // 输出指针ptr指向的值（即变量a的值）
    std::cout << "ptr的地址为：" << &ptr << std::endl; // 输出指针ptr的地址

    int **Pptr = &ptr;
    std::cout << "Pptr的值为：" << Pptr << std::endl;
    std::cout << "Pptr指向的值为：" << *Pptr << std::endl; // 输出指针Pptr指向的值（即指针ptr的地址）
    std::cout << "Pptr指向的值的值为：" << **Pptr << std::endl; // 输出指针Pptr指向的值的值（即变量a的值）

    
    int *Nullptr = nullptr;
    std::cout<<Nullptr<<std::endl;  // 输出空指针Nullptr的值（即nullptr）
    //std::cout<<*Nullptr<<std::endl;  这行代码会导致运行时错误，因为Nullptr是一个空指针，不能解引用
    std::cout<<&Nullptr<<std::endl;  // 输出空指针Nullptr的地址
    
    return 0;
}