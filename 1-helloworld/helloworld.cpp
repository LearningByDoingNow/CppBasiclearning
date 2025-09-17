/*预处理指令
将头文件包含在该源文件中 ，以便使用输入输出流对象
  例如：std::cout 和 std::endl
  这些对象用于在控制台上打印消息
  头文件<iostream>是C++标准库的一部分
  它提供了处理输入和输出的功能
*/
#include <iostream>   // 标准库头文件使用 <>
#include "functions.hpp" // 自定义头文件使用 ""
using namespace std; // 使用标准命名空间
int main(){
    // 使用std::cout打印"Hello, World!"消息到控制台
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Please input your name:" << std::endl;\
    std::string name;
    cin>>name;
    // cout<<"Hello," <<name << "Welocom to Cpp World!" << endl;
    welcomUser(name);
    std::cin.get(); // 等待用户按下回车键
    // 返回0表示程序成功结束
    return 0;
}
