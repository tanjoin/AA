#ifndef AA_H_
#define AA_H_

#include <iostream>
#include <Windows.h>

class AA
{
public:

  static void rolling(void) {

    // 処理
    while(true){

      std::cout << "(ﾟ∀ﾟ)\r";
      Sleep(100);
      std::cout << "( ﾟ∀)\r";
      Sleep(100);
      std::cout << "( 　ﾟ)\r";
      Sleep(100);
      std::cout << "(　　)\r";
      Sleep(100);
      std::cout << "(ﾟ　 )\r";
      Sleep(100);
      std::cout << "(∀ﾟ )\r";
      Sleep(100);

    }

  }

};

#endif // AA_H_