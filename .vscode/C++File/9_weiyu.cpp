/*
位域的定义方式：
    数据类型说明符 成员名：位数；

1.通过冒号(:)后的位数来指定一个位域所占用的二进制位数；
2.只有bool(布尔型)、char(字符型)、int(整型)和enum(枚举型)的成员才能够被定义为位域。
3.位域节省时间，但由于打包和解包过程中需要耗费额外的操作，所以运行时间很有可能增加。

题目
    设计一个结构体储存学生的成绩信息，需要包括学号、年级、成绩3项内容，学号的
范围是0~99 999 999，年级分为freshman,sophomore,junior,senior四种，成绩包
括A,B,C,D四个等级。
*/
#include <iostream>
using namespace std;

enum _Class { freshman, sophomore, junior, senior };
enum _Grade { A, B, C, D };
class Students {
  private:
    unsigned number : 27;
    _Class level : 2;
    _Grade grade : 4;

  public:
    //构造函数
    Students(unsigned number, _Class level, _Grade grade)
        : number(number), level(level), grade(grade) {}
    void show();
};
//实现构造函数
void Students::show() {
    cout << "Number:\t" << number << endl;
    cout << "Level:\t";
    switch (level) {
    case freshman:
        cout << "freshman" << endl;
        break;
    case sophomore:
        cout << "sophomore" << endl;
        break;
    case junior:
        cout << "junior" << endl;
        break;
    case senior:
        cout << "senior" << endl;
        break;
    }
    cout << "Grade:\t";
    switch (grade) {
    case A:
        cout << "A" << endl;
        break;
    case B:
        cout << "B" << endl;
        break;
    case C:
        cout << "C" << endl;
        break;
    case D:
        cout << "D" << endl;
        break;
    }
};
int main() {
    Students s(123456789, sophomore, C);
    cout << "Size of students" << endl;
    s.show();
    return 0;
}