#include<iostream>
#include<string>
using namespace std;

struct People{
    string name;
    int age;
    double height;
    double weight;
    string address;
    string phone;
    string email;
}zhangsan,lisi;

void printInfo(People p){
    cout << "name: " << p.name << endl;
    cout << "age: " << p.age << endl;
    cout << "height: " << p.height << endl;
    cout << "weight: " << p.weight << endl;
    cout << "address: " << p.address << endl;
    cout << "phone: " << p.phone << endl;
    cout << "email: " << p.email << endl;
}

int main(){  
    // 定义结构体 并初始化  其实就是实例化对象   未初始化的属性会有默认值 
    zhangsan = {"zhangsan",18,1.8,70,"beijing","13800000000","zhangsan@qq.com"};
    lisi = {"lisi",19,1.7,65,"shanghai"};
    People wangwu = {"wangwu",20,1.6,60,"guangzhou"};
    People zhaoliu {"zhaoliu",21,1.5,55,"shenzhen"};

    //结构体数组 struct array
    People pArray[4] = {zhangsan,lisi,wangwu,zhaoliu};
    for(int i = 0; i < 4; i++){
        printInfo(pArray[i]);
        cout << endl;
    }



    return 0;
}
