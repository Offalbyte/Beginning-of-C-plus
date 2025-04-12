/*
    ```const关键字```
*/

#include <iostream>

int main(){
    const int a = 10;
    const int *p = &a; // p是一个指向常量整数的指针，不能通过p修改a的值
}