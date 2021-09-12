#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct Student //学生信息结构体
{
    int num;     //学号
    string name; //姓名，字符串对象
    char sex;    //性别
    int age;     //年龄
};
int main() {
    Student stu = {21001, "Li Ming", 'F', 19};
    cout << "Num: \t" << stu.num << endl;
    cout << "Name: \t" << stu.name << endl;
    cout << "Sex: \t" << stu.sex << endl;
    cout << "Age: \t" << stu.age << endl;
    return 0;
}