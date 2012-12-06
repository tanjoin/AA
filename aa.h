#ifndef AA_H_
#define AA_H_

#include <iostream>
#include <string>
#include <vector>

// system()関数用
#include <cstdlib>
// Windows
#include <Windows.h>

// _kbhit()関数用
// http://msdn.microsoft.com/ja-jp/library/58w7c94c(v=vs.80).aspx
// if( kbhit() ){ char buf = getch(); if(buf == ' '){break;}} }
// fflush(stdin)では歯がたたないのでgetch()をwhileさせることで解決
// rewind(stdin)では歯がたたないのでgetch()をwhileさせることで解決
#include <conio.h>

class AA
{
public:
  static void bufferflush(void) {
    while(true){
      if(_kbhit()){        
        _getch();
      } else {
        break;
      }
    }
  }

  static int waitkey(void) {

    while(true){
      if( _kbhit() ) {
        return _getch();
      }
    }

  }

  static void onelineAA(std::vector<std::string> list, const unsigned int interval) {

    bufferflush();

    // 処理
    while(true){

      for (int i = 0; i < list.size(); i++) {
        std::cout << list[i] << "\r";
        Sleep(interval);
        for (int j = 0; j < list[i].size(); j++) {
          std::cout << " ";
        }
        std::cout << "\r";
      }

      if( _kbhit() ) {
        _getch();
        for (int j = 0; j < 40; j++) {
          std::cout << " ";
        }
        std::cout << "\r";
        break;
      }

    }
  }

  static void rolling(bool is_clean = true) {

    bufferflush();    

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

      if( _kbhit() ) {
        if(is_clean) {
          std::cout << "      \r";
        }
        _getch();
        break;
      }

    }
  }
  static void gakugakuburuburu(bool is_clean = true) {

    bufferflush();

    // 処理
    while(true){

      std::cout << "(((( ；ﾟДﾟ))) ｶﾞｸｶﾞｸﾌﾞﾙﾌﾞﾙ\r";
      Sleep(10);
      std::cout << " (((( ；ﾟДﾟ)))ｶﾞｸｶﾞｸﾌﾞﾙﾌﾞﾙ\r";
      Sleep(10);

      if( _kbhit() ) {
        if(is_clean) {
          std::cout << "                           \r";
        }
        bufferflush();
        break;
      }

    }
  }
  static void homo(bool is_clean = true) {

    bufferflush();

    std::string space = "";

    // 処理
    while(true){

      std::cout << space << "三┌（┌ ＾o＾）┐ホモォ\r"; 
      Sleep(30); 
      std::cout << space << "三┌（ ┐＾o＾）┐ホモォ\r"; 
      Sleep(30); 
      std::cout << space << "三（┐ ┐＾o＾）  ホモォ\r"; 
      Sleep(30); 
      std::cout << space << "三┌（ ┌＾o＾）　ホモォ\r"; 
      Sleep(30); 

      if( _kbhit() ) {
        if(is_clean) {
          std::cout << "                                            \r";
        }
        _getch();
        break;
      }

      if(space.size() > 20) {
        std::cout << "                                              \r";
        space.clear();
      }
      space += " ";

    }

  }


  // 以下、system("cls");されるので注意

  static void multilineAA(std::vector<std::string> list, const unsigned int interval) {

    bufferflush();

    // 処理
    while(true){
      for (int i = 0; i < list.size(); i++) {
        std::cout << list[i] << std::endl;
        Sleep(interval);
        system("cls");
      }

      if( _kbhit() ) {
        _getch();
        system("cls");
        break;
      }
    }

  }

  static void hatena(bool is_clean = true) {

    bufferflush();

    // 処理
    while(true){

      std::cout <<
        "　　　　　　　＿＿＿　　　━┓\n"
        "　　　　　 ／　―　　＼　 ┏┛\n"
        "　　 　 ／　　(●)　 ＼ヽ ・.\n"
        "　　　/　　 （⌒　　(●)/.　\n"
        " 　　 /　　   ￣ヽ__）／ 　 \n"
        "  　／´　　　 　_＿／ 　　　\n"
        "  　|　　　　　 　 ＼ 　　 　  \n"
        "  　|　　　　　　　　| 　　 　 \n"
        "\r";
      Sleep(750);     
      system("cls");
      std::cout <<
        "    　＿____　　   　━┓ \n"
        "    ／　―  ＼   　　┏┛ \n"
        ". ／ノ　(●)  ＼　 ・ \n"
        " ｜　(●)   ⌒）＼ \n"
        " ｜   （__ノ￣　 | \n"
        "  ＼　　　　　   / \n"
        " 　 ＼　　　　 _ノ \n"
        " 　　/´　　 　 ｀＼ \n"
        "\r";
      Sleep(750); 
      system("cls");

      if( _kbhit() ) {
        if(is_clean) {
          std::cout << "                              \r";
        }
        _getch();
        break;
      }
    }

  }
  static void dance(bool is_clean = true) {

    bufferflush();

    // 処理
    while(true){

      std::cout <<
"♪　  ∧,＿∧　　♪ \n"
"　　 ( ´･ω･) )) \n"
"　(( (　つ　ヽ、　　　♪ \n"
"　　　〉 とノ　))) \n"
"　　（__ノ^(＿) \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"♪　  ∧,＿∧ ♪ \n"
"　　（´･ω･｀） )) \n"
"　(( (　つ　ヽ、　　　♪ \n"
"　　　〉 とノ　))) \n"
"　　（__ノ^(＿) \n";
      Sleep(100);
      system("cls");
      std::cout <<
"　　　 ∧＿,∧　♪ \n"
"　 (( (･ω･｀ ) \n"
"♪　  /　 ⊂　) ))　♪ \n"
"　　((( ヽつ 〈 \n"
"　　 (＿)^ヽ__） \n"
        "\n";
      Sleep(100); 
      system("cls");
      std::cout <<
"　　　 ∧＿,∧　♪ \n"
"　 (( (´･ω･｀) \n"
"♪　  / 　⊂　) ))　♪ \n"
"　　((( ヽつ 〈 \n"
"　　 (＿)^ヽ__） \n"
        "\n";
      Sleep(100);
      system("cls");

      if( _kbhit() ) {
        if(is_clean) {
          std::cout << "                              \r";
        }
        _getch();
        break;
      }
    }

  }
  static void majidesucar(bool is_clean = true) {

    bufferflush();

    // 処理
    while(true){

      std::cout <<
"　 　　　　　　　　　　　　　　　　＿＿＿＿＿＿　　　　　　　 \n"
"　　　　　　　 　　　　　　　　　／ ＿＿＿＿＿ ＼　　　　　　 \n"
"　　　　　　　 　　　　　　(￣二　 |´・ω・` |  ＼　　 \n"
"　　　　　　　 　　　　　　 ＼ヽ　　￣￣￣￣￣　　)　　 \n"
"　　　　　　　 　　　　　　∠／　　　　　　　／|　|　　　 \n"
"　　　　　　　　 　　　　　(　　　　　　　　／／／　　 \n"
"　　　　　　　　　 　　　　 |　　 ,､______,ノ￣￣)　　　　\n"
"　　　　　　　　　　 　　　 |　 /　　　￣   /　／　　　　　 \n"
"　　　　　　　　　　　 　 ＿|_|＿＿＿＿＿＿/／＿　　 \n"
".　　 　 　　　　|￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ |￣￣￣￣￣| \n"
"────── 　　|　　　 マジですCAR　　　　　　 |  　 　 　| \n"
"　＿＿＿＿＿　 　|　 　,-─-、   　 　. ,-─-、　|  　 　 　| \n"
".　　　　　　　　|＿/ 　,-、ヽ＿＿＿＿/　,-、 ヽ_|＿＿＿＿＿| \n"
"　　　　　　　　　　', 　 -'　ﾉ　　 ヽ',　 -'　 ﾉ　 ヽ::::丿  \n"
        "\n";
      Sleep(100);     
      system("cls");
      

      if( _kbhit() ) {
        if(is_clean) {
          std::cout << "                              \r";
        }
        _getch();
        break;
      }
    }

  }
  static void run_majidesucar(bool is_clean = true) {

    bufferflush();

    // 処理
    while(true){

      std::cout <<
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"　　　 \n"
"　　　 \n"
"       \n"
"       \n"
"　     \n"
"       \n"
" 　    \n"
"　　   \n"
"       \n"
" ￣￣| \n"
"　 　| \n"
"　 　| \n"
" ＿＿| \n"
":::丿  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"　　　　　　　 \n"
"＼　　　　　　 \n"
"  ＼　　       \n"
" 　)　　       \n"
"|　|　　　     \n"
" ／　　        \n"
"￣)　　　　    \n"
"／　　　　　   \n"
"   　          \n"
"  |￣￣￣￣￣| \n"
"  |  　 　 　| \n"
"　|  　 　 　| \n"
" _|＿＿＿＿＿| \n"
" ﾉ　 ヽ::::丿  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"＿＿＿＿　　　　　　　 \n"
" ＿＿＿ ＼　　　　　　 \n"
" ω・` |  ＼　　       \n"
" ￣￣￣　　)　　       \n"
"　　　／|　|　　　     \n"
" 　　／／／　　        \n"
"___,ノ￣￣)　　　　    \n"
"￣   /　／　　　　　   \n"
"＿＿/／＿　　          \n"
" ￣￣￣￣ |￣￣￣￣￣| \n"
" 　　　　 |  　 　 　| \n"
" ,-─-、　|  　 　 　| \n"
"　,-、 ヽ_|＿＿＿＿＿| \n"
",　 -'　 ﾉ　 ヽ::::丿  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"　　＿＿＿＿＿＿　　　　　　　 \n"
"　／ ＿＿＿＿＿ ＼　　　　　　 \n"
" 　 |´・ω・` |  ＼　　       \n"
" 　　￣￣￣￣￣　　)　　       \n"
"　　　　　　　／|　|　　　     \n"
" 　　　　　　／／／　　        \n"
"　 ,､______,ノ￣￣)　　　　    \n"
" /　　　￣   /　／　　　　　   \n"
"＿＿＿＿＿＿/／＿　　          \n"
" ￣￣￣￣￣￣￣￣ |￣￣￣￣￣| \n"
"すCAR　　　　　　 |  　 　 　| \n"
"  　 　. ,-─-、　|  　 　 　| \n"
" ＿＿＿/　,-、 ヽ_|＿＿＿＿＿| \n"
"　　 ヽ',　 -'　 ﾉ　 ヽ::::丿  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"　　　　　　＿＿＿＿＿＿　　　　　　　 \n"
"　　　　　／ ＿＿＿＿＿ ＼　　　　　　 \n"
"　　(￣二　 |´・ω・` |  ＼　　       \n"
"　　 ＼ヽ　　￣￣￣￣￣　　)　　       \n"
"　　∠／　　　　　　　／|　|　　　     \n"
"　　(　　　　　　　　／／／　　        \n"
"　　 |　　 ,､______,ノ￣￣)　　　　    \n"
"　　 |　 /　　　￣   /　／　　　　　   \n"
"　 ＿|_|＿＿＿＿＿＿/／＿　　          \n"
" ￣￣￣￣￣￣￣￣￣￣￣￣ |￣￣￣￣￣| \n"
"  マジですCAR　　　　　　 |  　 　 　| \n"
" -─-、   　 　. ,-─-、　|  　 　 　| \n"
"　-、ヽ＿＿＿＿/　,-、 ヽ_|＿＿＿＿＿| \n"
"　 -'　ﾉ　　 ヽ',　 -'　 ﾉ　 ヽ::::丿  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"　　　　　　　　　　＿＿＿＿＿＿　　　　　　　 \n"
"　　　　　　　　　／ ＿＿＿＿＿ ＼　　　　　　 \n"
"　　　　　　(￣二　 |´・ω・` |  ＼　　       \n"
"　　　　　　 ＼ヽ　　￣￣￣￣￣　　)　　       \n"
"　　　　　　∠／　　　　　　　／|　|　　　     \n"
"  　　　　　(　　　　　　　　／／／　　        \n"
"　  　　　　 |　　 ,､______,ノ￣￣)　　　　    \n"
"　　  　　　 |　 /　　　￣   /　／　　　　　   \n"
" 　　　 　 ＿|_|＿＿＿＿＿＿/／＿　　          \n"
"  |￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ |￣￣￣￣￣| \n"
"  |　　　 マジですCAR　　　　　　 |  　 　 　| \n"
"  |　 　,-─-、   　 　. ,-─-、　|  　 　 　| \n"
"　|＿/ 　,-、ヽ＿＿＿＿/　,-、 ヽ_|＿＿＿＿＿| \n"
" 　　', 　 -'　ﾉ　　 ヽ',　 -'　 ﾉ　 ヽ::::丿  \n"
        "\n";
      Sleep(100);     
      system("cls");

      std::cout <<
"　　　　　　　　　　　　　　＿＿＿＿＿＿　　　　　　　 \n"
" 　　　 　　　　　　　　　／ ＿＿＿＿＿ ＼　　　　　　 \n"
"　 　　 　　　　　　(￣二　 |´・ω・` |  ＼　　       \n"
"　　 　 　　　　　　 ＼ヽ　　￣￣￣￣￣　　)　　       \n"
"　　　  　　　　　　∠／　　　　　　　／|　|　　　     \n"
"　　　　  　　　　　(　　　　　　　　／／／　　        \n"
"　　　　　  　　　　 |　　 ,､______,ノ￣￣)　　　　    \n"
"　　　　　　  　　　 |　 /　　　￣   /　／　　　　　   \n"
" 　　　　　　　 　 ＿|_|＿＿＿＿＿＿/／＿　　          \n"
"  　　　　|￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ |￣￣￣￣￣| \n"
" ── 　　|　　　 マジですCAR　　　　　　 |  　 　 　| \n"
" ＿＿　 　|　 　,-─-、   　 　. ,-─-、　|  　 　 　| \n"
"　　　　　|＿/ 　,-、ヽ＿＿＿＿/　,-、 ヽ_|＿＿＿＿＿| \n"
" 　　　　　　', 　 -'　ﾉ　　 ヽ',　 -'　 ﾉ　 ヽ::::丿  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"　 　　　　　　　　　　　　　　　　＿＿＿＿＿＿　　　　　　　 \n"
"　　　　　　　 　　　　　　　　　／ ＿＿＿＿＿ ＼　　　　　　 \n"
"　　　　　　　 　　　　　　(￣二　 |´・ω・` |  ＼　　       \n"
"　　　　　　　 　　　　　　 ＼ヽ　　￣￣￣￣￣　　)　　       \n"
"　　　　　　　 　　　　　　∠／　　　　　　　／|　|　　　     \n"
"　　　　　　　　 　　　　　(　　　　　　　　／／／　　        \n"
"　　　　　　　　　 　　　　 |　　 ,､______,ノ￣￣)　　　　    \n"
"　　　　　　　　　　 　　　 |　 /　　　￣   /　／　　　　　   \n"
"　　　　　　　　　　　 　 ＿|_|＿＿＿＿＿＿/／＿　　          \n"
".　　 　 　　　　|￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ |￣￣￣￣￣| \n"
"────── 　　|　　　 マジですCAR　　　　　　 |  　 　 　| \n"
"　＿＿＿＿＿　 　|　 　,-─-、   　 　. ,-─-、　|  　 　 　| \n"
".　　　　　　　　|＿/ 　,-、ヽ＿＿＿＿/　,-、 ヽ_|＿＿＿＿＿| \n"
"　　　　　　　　　　', 　 -'　ﾉ　　 ヽ',　 -'　 ﾉ　 ヽ::::丿  \n"
      "\n";
      Sleep(100);     
      system("cls");

      if( _kbhit() ) {
        if(is_clean) {
          std::cout << "                              \r";
        }
        _getch();
        break;
      }
    }

  }
  static void knuckle(bool is_clean = true) {
    
    bufferflush();

    // 処理
    while(true){
      std::cout << 
"　　 ∧∧.∩　　 　　 ∩_ ・∵’、\n"
"　　( 　　 )/　⊂／\"´ ﾉ　)      \n"
"　⊂　　 ﾉ　　　/　　 /vV         \n"
"　　( 　 ﾉ　　　 し'`∪           \n"
"　　 (ノ                          \n"
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"　　 ∧∧.∩　                    ⊂／\"´ ﾉ　)      \n"
"　　( 　　 )/　                  　/　　 /vV         \n"
"　⊂　　 ﾉ　　                   　 し'`∪           \n"
"　　( 　 ﾉ　　                                       \n"
"　　 (ノ                                             \n"        
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"　　 ∧∧.∩　                           　/　　 /vV         \n"
"　　( 　　 )/　                          　 し'`∪           \n"
"　⊂　　 ﾉ　　                                               \n"
"　　( 　 ﾉ　　                           　                  \n"
"　　 (ノ                                                     \n"
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"　　 ∧∧.∩　                                   　 し'`∪           \n"
"　　( 　　 )/　                                                      \n"
"　⊂　　 ﾉ　　                                                       \n"
"　　( 　 ﾉ　　                                                       \n"
"　　 (ノ                                                             \n"
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"　　 ∧∧.∩　                                   　                  \n"
"　　( 　　 )/　                                                      \n"
"　⊂　　 ﾉ　　                                                       \n"
"　　( 　 ﾉ　　                                                       \n"
"　　 (ノ                                                             \n"
      "\n";
      Sleep(250); 
      system("cls");
      std::cout << 
"　　 ∧∧.∩　                                   　 し'`∪           \n"
"　　( 　　 )/　                                                      \n"
"　⊂　　 ﾉ　　                                                       \n"
"　　( 　 ﾉ　　                                                       \n"
"　　 (ノ                                                             \n"
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"　　 ∧∧.∩　                           　/　　 /vV         \n"
"　　( 　　 )/　                          　 し'`∪           \n"
"　⊂　　 ﾉ　　                                               \n"
"　　( 　 ﾉ　　                           　                  \n"
"　　 (ノ                                                     \n"
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"　　 ∧∧.∩　                    ⊂／\"´ ﾉ　)      \n"
"　　( 　　 )/　                  　/　　 /vV         \n"
"　⊂　　 ﾉ　　                   　 し'`∪           \n"
"　　( 　 ﾉ　　                                       \n"
"　　 (ノ                                             \n"        
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"　　 ∧∧.∩　　 　　 ∩_ ・∵’、\n"
"　　( 　　 )/　⊂／\"´ ﾉ　)      \n"
"　⊂　　 ﾉ　　　/　　 /vV         \n"
"　　( 　 ﾉ　　　 し'`∪           \n"
"　　 (ノ                          \n"
      "\n";
      Sleep(100); 
      system("cls");
      

      if( _kbhit() ) {
        if(is_clean) {
          std::cout << "                              \r";
        }
        _getch();
        break;
      }
    }
  }

  static std::vector<std::string> split_multibyte(const std::string& str) {

    char c;
    std::string original = str;
    std::vector<std::string> answer;

    while(!original.empty()) {

      c = str[0];
      if(IsDBCSLeadByte(c) == 0) {
        answer.push_back(original.substr(0, 1));
        original.erase(0, 1);
      } else {
        answer.push_back(original.substr(0, 2));
        original.erase(0, 2);
      }

    }

    return answer;
  }
  static void lupin(const std::string title, const int interval = 250, bool is_clean = true) {

    std::vector<std::string> title_split = split_multibyte(title);

    for (int i = 0; i < title_split.size(); i++) {
      std::cout << title_split[i] << "\r";
      Sleep(interval);
    }

    std::cout << title;
    if(is_clean) {
      for (int i = 0; i < title.size(); i++) {
        std::cout << "  ";
      }
      std::cout << "\r";
    }

  }

};

#endif // AA_H_