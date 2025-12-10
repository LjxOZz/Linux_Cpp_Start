
#include <iostream>
#include "base.h"

using namespace std;

void Grammar::barking()
{
    cout << "wang wang wang" << endl;
}

void Grammar::zz_and_yy_test()
{

    double value = 12.12;
    double &ref_Value = value;  //引用
    double *p_Value = &value;   //指针

    cout << "---------------------" << endl;
    cout << "value      =" << value << endl;
    cout << "*pointer   =" << *p_Value << endl;
    cout << "pointer    =" << p_Value << endl;
    cout << "ref        =" << ref_Value << endl;

    cout << "----------Change yy-----------" << endl;
    double other_value0 = 15.15;
    ref_Value = other_value0;
    cout << "other0     =" << other_value0 << endl;
    cout << "ref        =" << ref_Value << endl;
    cout << "&ref       =" << &ref_Value << endl;

    cout << "----------Change zz-----------" << endl;
    double other_value1 = 14.14;
    //*p_Value = other_value1;    //改变指针指的值
    p_Value = &other_value1;    //改变指针的指向
    cout << "other0     =" << other_value1 << endl;
    cout << "*pointer   =" << *p_Value << endl;
    cout << "pointer    =" << p_Value << endl;
    
}

void Grammar::z_y_value()
{
    //左值 右值
    
}

/*
判断字符的类型 非零为真
    std::isalnum 是否为字符和数字
    std::isalpha 是否为字符
    std::isblank是否为空格
    std::isdigit 是否为数字
判断大小写
    std::islower
    std::isupper
转换大小写
    std::tolower
    std::toupper
*/
void Grammar::Character_operation()
{

}
