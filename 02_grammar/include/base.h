
#include <iostream>
#include <string>


class Grammar                   // 类
{
public:                         // 访问修饰符
    Grammar() {     // 构造函数
      std::cout << "This is Grammar Class's constructed function" << std::endl;
    }
    int myNum;                  // 属性 (int变量)
    std::string myString;            // 属性 (string变量)
    void barking();             // 类内部定义的方法/函数
    void zz_and_yy_test();
    void z_y_value();
    void Character_operation();

};

