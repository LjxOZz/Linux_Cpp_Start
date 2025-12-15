
#include "function_template.h"



template<typename T1, typename T2>
T2 max(T1 a, T2 b){
    return a > b ? a : b;
}
/* Cpp模板基础知识
1,“实例化”函数模板不是函数，函数模板必须实例化，才会生成实际的函数定义
2,“静态”编译期没有运行时开销
*/


void test(void){

    spdlog::info("max   :{0}", max(3, 2.4));
    spdlog::info("max<> :{0}", max<double, double>(3, 2.4));  //没有推导
}