//
//  class WClass.hpp
//  ДЗ 6 ООП
//
//  Created by Павел on 04.01.2023.
//

#ifndef class_WClass_hpp
#define class_WClass_hpp

#include <stdio.h>

class WClass{

public:
    WClass   (int _x, int _y);
    
    ~WClass () { x = 0; y = 0; }

  
private:
        int x, y;
};
    





#endif /* class_WClass_hpp */
