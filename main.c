//基础语法与模版

#include <stdio.h>   // 头文件包含

#define PI 3.14159    // 宏定义

//函数的声明必须在函数定义或调用之前。声明提供了函数的返回类型、函数名和参数列表，以便编译器知道如何调用该函数。
// 函数声明
int add(int a, int b);

int main() {         // 主函数
    // 变量声明
    int num1, num2, sum;

    // 用户输入
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // 函数调用
    sum = add(num1, num2);

    // 输出结果
    printf("Sum: %d\n", sum);
    printf("hello world\n");
    return 0;        // 返回 0 表示程序成功执行
}

// 函数定义
int add(int a, int b) {
    return a + b;
}

//编译生成可执行文件
// g++ helloworld.c -o hello.exe
