//
//  main.cpp
//  ДЗ 6 ООП
//
//  Created by Павел on 26.12.2022.
//
#include "class WClass.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    
    /* Динамические объекты адресуются указателями  */
   WClass *ta, *tb;
    
    /* Создаём динамические объекты */
    ta = new WClass (10, 11);
   
    
    tb = new WClass (20, 21);
 
    
    
    /* Удаляем динамические объекты */
    delete ta;
    
    delete tb;
    
    
    return 0;
}
