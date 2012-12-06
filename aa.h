#ifndef AA_H_
#define AA_H_

#include <iostream>
#include <string>
#include <vector>

// system()�֐��p
#include <cstdlib>
// Windows
#include <Windows.h>

// _kbhit()�֐��p
// http://msdn.microsoft.com/ja-jp/library/58w7c94c(v=vs.80).aspx
// if( kbhit() ){ char buf = getch(); if(buf == ' '){break;}} }
// fflush(stdin)�ł͎��������Ȃ��̂�getch()��while�����邱�Ƃŉ���
// rewind(stdin)�ł͎��������Ȃ��̂�getch()��while�����邱�Ƃŉ���
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

    // ����
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

    // ����
    while(true){

      std::cout << "(߁��)\r";
      Sleep(100);
      std::cout << "( ߁�)\r";
      Sleep(100);
      std::cout << "( �@�)\r";
      Sleep(100);
      std::cout << "(�@�@)\r";
      Sleep(100);
      std::cout << "(߁@ )\r";
      Sleep(100);
      std::cout << "(��� )\r";
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

    // ����
    while(true){

      std::cout << "(((( �G߄D�))) �޸�޸������\r";
      Sleep(10);
      std::cout << " (((( �G߄D�)))�޸�޸������\r";
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

    // ����
    while(true){

      std::cout << space << "�O���i�� �Oo�O�j���z���H\r"; 
      Sleep(30); 
      std::cout << space << "�O���i ���Oo�O�j���z���H\r"; 
      Sleep(30); 
      std::cout << space << "�O�i�� ���Oo�O�j  �z���H\r"; 
      Sleep(30); 
      std::cout << space << "�O���i ���Oo�O�j�@�z���H\r"; 
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


  // �ȉ��Asystem("cls");�����̂Œ���

  static void multilineAA(std::vector<std::string> list, const unsigned int interval) {

    bufferflush();

    // ����
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

    // ����
    while(true){

      std::cout <<
        "�@�@�@�@�@�@�@�Q�Q�Q�@�@�@����\n"
        "�@�@�@�@�@ �^�@�\�@�@�_�@ ����\n"
        "�@�@ �@ �^�@�@(��)�@ �_�R �E.\n"
        "�@�@�@/�@�@ �i�܁@�@(��)/.�@\n"
        " �@�@ /�@�@   �P�R__�j�^ �@ \n"
        "  �@�^�L�@�@�@ �@_�Q�^ �@�@�@\n"
        "  �@|�@�@�@�@�@ �@ �_ �@�@ �@  \n"
        "  �@|�@�@�@�@�@�@�@�@| �@�@ �@ \n"
        "\r";
      Sleep(750);     
      system("cls");
      std::cout <<
        "    �@�Q____�@�@   �@���� \n"
        "    �^�@�\  �_   �@�@���� \n"
        ". �^�m�@(��)  �_�@ �E \n"
        " �b�@(��)   �܁j�_ \n"
        " �b   �i__�m�P�@ | \n"
        "  �_�@�@�@�@�@   / \n"
        " �@ �_�@�@�@�@ _�m \n"
        " �@�@/�L�@�@ �@ �M�_ \n"
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

    // ����
    while(true){

      std::cout <<
"��@  ��,�Q�ȁ@�@�� \n"
"�@�@ ( �L��֥) )) \n"
"�@(( (�@�@�R�A�@�@�@�� \n"
"�@�@�@�r �ƃm�@))) \n"
"�@�@�i__�m^(�Q) \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"��@  ��,�Q�� �� \n"
"�@�@�i�L��֥�M�j )) \n"
"�@(( (�@�@�R�A�@�@�@�� \n"
"�@�@�@�r �ƃm�@))) \n"
"�@�@�i__�m^(�Q) \n";
      Sleep(100);
      system("cls");
      std::cout <<
"�@�@�@ �ȁQ,�ȁ@�� \n"
"�@ (( (��֥�M ) \n"
"��@  /�@ ���@) ))�@�� \n"
"�@�@((( �R�� �q \n"
"�@�@ (�Q)^�R__�j \n"
        "\n";
      Sleep(100); 
      system("cls");
      std::cout <<
"�@�@�@ �ȁQ,�ȁ@�� \n"
"�@ (( (�L��֥�M) \n"
"��@  / �@���@) ))�@�� \n"
"�@�@((( �R�� �q \n"
"�@�@ (�Q)^�R__�j \n"
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

    // ����
    while(true){

      std::cout <<
"�@ �@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�Q�Q�Q�Q�Q�Q�@�@�@�@�@�@�@ \n"
"�@�@�@�@�@�@�@ �@�@�@�@�@�@�@�@�@�^ �Q�Q�Q�Q�Q �_�@�@�@�@�@�@ \n"
"�@�@�@�@�@�@�@ �@�@�@�@�@�@(�P��@ |�L�E�ցE` |  �_�@�@ \n"
"�@�@�@�@�@�@�@ �@�@�@�@�@�@ �_�R�@�@�P�P�P�P�P�@�@)�@�@ \n"
"�@�@�@�@�@�@�@ �@�@�@�@�@�@�ځ^�@�@�@�@�@�@�@�^|�@|�@�@�@ \n"
"�@�@�@�@�@�@�@�@ �@�@�@�@�@(�@�@�@�@�@�@�@�@�^�^�^�@�@ \n"
"�@�@�@�@�@�@�@�@�@ �@�@�@�@ |�@�@ ,�______,�m�P�P)�@�@�@�@\n"
"�@�@�@�@�@�@�@�@�@�@ �@�@�@ |�@ /�@�@�@�P   /�@�^�@�@�@�@�@ \n"
"�@�@�@�@�@�@�@�@�@�@�@ �@ �Q|_|�Q�Q�Q�Q�Q�Q/�^�Q�@�@ \n"
".�@�@ �@ �@�@�@�@|�P�P�P�P�P�P�P�P�P�P�P�P�P�P�P |�P�P�P�P�P| \n"
"������������ �@�@|�@�@�@ �}�W�ł�CAR�@�@�@�@�@�@ |  �@ �@ �@| \n"
"�@�Q�Q�Q�Q�Q�@ �@|�@ �@,-��-�A   �@ �@. ,-��-�A�@|  �@ �@ �@| \n"
".�@�@�@�@�@�@�@�@|�Q/ �@,-�A�R�Q�Q�Q�Q/�@,-�A �R_|�Q�Q�Q�Q�Q| \n"
"�@�@�@�@�@�@�@�@�@�@', �@ -'�@Ɂ@�@ �R',�@ -'�@ Ɂ@ �R::::��  \n"
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

    // ����
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
"�@�@�@ \n"
"�@�@�@ \n"
"       \n"
"       \n"
"�@     \n"
"       \n"
" �@    \n"
"�@�@   \n"
"       \n"
" �P�P| \n"
"�@ �@| \n"
"�@ �@| \n"
" �Q�Q| \n"
":::��  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"�@�@�@�@�@�@�@ \n"
"�_�@�@�@�@�@�@ \n"
"  �_�@�@       \n"
" �@)�@�@       \n"
"|�@|�@�@�@     \n"
" �^�@�@        \n"
"�P)�@�@�@�@    \n"
"�^�@�@�@�@�@   \n"
"   �@          \n"
"  |�P�P�P�P�P| \n"
"  |  �@ �@ �@| \n"
"�@|  �@ �@ �@| \n"
" _|�Q�Q�Q�Q�Q| \n"
" Ɂ@ �R::::��  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"�Q�Q�Q�Q�@�@�@�@�@�@�@ \n"
" �Q�Q�Q �_�@�@�@�@�@�@ \n"
" �ցE` |  �_�@�@       \n"
" �P�P�P�@�@)�@�@       \n"
"�@�@�@�^|�@|�@�@�@     \n"
" �@�@�^�^�^�@�@        \n"
"___,�m�P�P)�@�@�@�@    \n"
"�P   /�@�^�@�@�@�@�@   \n"
"�Q�Q/�^�Q�@�@          \n"
" �P�P�P�P |�P�P�P�P�P| \n"
" �@�@�@�@ |  �@ �@ �@| \n"
" ,-��-�A�@|  �@ �@ �@| \n"
"�@,-�A �R_|�Q�Q�Q�Q�Q| \n"
",�@ -'�@ Ɂ@ �R::::��  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"�@�@�Q�Q�Q�Q�Q�Q�@�@�@�@�@�@�@ \n"
"�@�^ �Q�Q�Q�Q�Q �_�@�@�@�@�@�@ \n"
" �@ |�L�E�ցE` |  �_�@�@       \n"
" �@�@�P�P�P�P�P�@�@)�@�@       \n"
"�@�@�@�@�@�@�@�^|�@|�@�@�@     \n"
" �@�@�@�@�@�@�^�^�^�@�@        \n"
"�@ ,�______,�m�P�P)�@�@�@�@    \n"
" /�@�@�@�P   /�@�^�@�@�@�@�@   \n"
"�Q�Q�Q�Q�Q�Q/�^�Q�@�@          \n"
" �P�P�P�P�P�P�P�P |�P�P�P�P�P| \n"
"��CAR�@�@�@�@�@�@ |  �@ �@ �@| \n"
"  �@ �@. ,-��-�A�@|  �@ �@ �@| \n"
" �Q�Q�Q/�@,-�A �R_|�Q�Q�Q�Q�Q| \n"
"�@�@ �R',�@ -'�@ Ɂ@ �R::::��  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"�@�@�@�@�@�@�Q�Q�Q�Q�Q�Q�@�@�@�@�@�@�@ \n"
"�@�@�@�@�@�^ �Q�Q�Q�Q�Q �_�@�@�@�@�@�@ \n"
"�@�@(�P��@ |�L�E�ցE` |  �_�@�@       \n"
"�@�@ �_�R�@�@�P�P�P�P�P�@�@)�@�@       \n"
"�@�@�ځ^�@�@�@�@�@�@�@�^|�@|�@�@�@     \n"
"�@�@(�@�@�@�@�@�@�@�@�^�^�^�@�@        \n"
"�@�@ |�@�@ ,�______,�m�P�P)�@�@�@�@    \n"
"�@�@ |�@ /�@�@�@�P   /�@�^�@�@�@�@�@   \n"
"�@ �Q|_|�Q�Q�Q�Q�Q�Q/�^�Q�@�@          \n"
" �P�P�P�P�P�P�P�P�P�P�P�P |�P�P�P�P�P| \n"
"  �}�W�ł�CAR�@�@�@�@�@�@ |  �@ �@ �@| \n"
" -��-�A   �@ �@. ,-��-�A�@|  �@ �@ �@| \n"
"�@-�A�R�Q�Q�Q�Q/�@,-�A �R_|�Q�Q�Q�Q�Q| \n"
"�@ -'�@Ɂ@�@ �R',�@ -'�@ Ɂ@ �R::::��  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"�@�@�@�@�@�@�@�@�@�@�Q�Q�Q�Q�Q�Q�@�@�@�@�@�@�@ \n"
"�@�@�@�@�@�@�@�@�@�^ �Q�Q�Q�Q�Q �_�@�@�@�@�@�@ \n"
"�@�@�@�@�@�@(�P��@ |�L�E�ցE` |  �_�@�@       \n"
"�@�@�@�@�@�@ �_�R�@�@�P�P�P�P�P�@�@)�@�@       \n"
"�@�@�@�@�@�@�ځ^�@�@�@�@�@�@�@�^|�@|�@�@�@     \n"
"  �@�@�@�@�@(�@�@�@�@�@�@�@�@�^�^�^�@�@        \n"
"�@  �@�@�@�@ |�@�@ ,�______,�m�P�P)�@�@�@�@    \n"
"�@�@  �@�@�@ |�@ /�@�@�@�P   /�@�^�@�@�@�@�@   \n"
" �@�@�@ �@ �Q|_|�Q�Q�Q�Q�Q�Q/�^�Q�@�@          \n"
"  |�P�P�P�P�P�P�P�P�P�P�P�P�P�P�P |�P�P�P�P�P| \n"
"  |�@�@�@ �}�W�ł�CAR�@�@�@�@�@�@ |  �@ �@ �@| \n"
"  |�@ �@,-��-�A   �@ �@. ,-��-�A�@|  �@ �@ �@| \n"
"�@|�Q/ �@,-�A�R�Q�Q�Q�Q/�@,-�A �R_|�Q�Q�Q�Q�Q| \n"
" �@�@', �@ -'�@Ɂ@�@ �R',�@ -'�@ Ɂ@ �R::::��  \n"
        "\n";
      Sleep(100);     
      system("cls");

      std::cout <<
"�@�@�@�@�@�@�@�@�@�@�@�@�@�@�Q�Q�Q�Q�Q�Q�@�@�@�@�@�@�@ \n"
" �@�@�@ �@�@�@�@�@�@�@�@�@�^ �Q�Q�Q�Q�Q �_�@�@�@�@�@�@ \n"
"�@ �@�@ �@�@�@�@�@�@(�P��@ |�L�E�ցE` |  �_�@�@       \n"
"�@�@ �@ �@�@�@�@�@�@ �_�R�@�@�P�P�P�P�P�@�@)�@�@       \n"
"�@�@�@  �@�@�@�@�@�@�ځ^�@�@�@�@�@�@�@�^|�@|�@�@�@     \n"
"�@�@�@�@  �@�@�@�@�@(�@�@�@�@�@�@�@�@�^�^�^�@�@        \n"
"�@�@�@�@�@  �@�@�@�@ |�@�@ ,�______,�m�P�P)�@�@�@�@    \n"
"�@�@�@�@�@�@  �@�@�@ |�@ /�@�@�@�P   /�@�^�@�@�@�@�@   \n"
" �@�@�@�@�@�@�@ �@ �Q|_|�Q�Q�Q�Q�Q�Q/�^�Q�@�@          \n"
"  �@�@�@�@|�P�P�P�P�P�P�P�P�P�P�P�P�P�P�P |�P�P�P�P�P| \n"
" ���� �@�@|�@�@�@ �}�W�ł�CAR�@�@�@�@�@�@ |  �@ �@ �@| \n"
" �Q�Q�@ �@|�@ �@,-��-�A   �@ �@. ,-��-�A�@|  �@ �@ �@| \n"
"�@�@�@�@�@|�Q/ �@,-�A�R�Q�Q�Q�Q/�@,-�A �R_|�Q�Q�Q�Q�Q| \n"
" �@�@�@�@�@�@', �@ -'�@Ɂ@�@ �R',�@ -'�@ Ɂ@ �R::::��  \n"
        "\n";
      Sleep(100);     
      system("cls");
      std::cout <<
"�@ �@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�Q�Q�Q�Q�Q�Q�@�@�@�@�@�@�@ \n"
"�@�@�@�@�@�@�@ �@�@�@�@�@�@�@�@�@�^ �Q�Q�Q�Q�Q �_�@�@�@�@�@�@ \n"
"�@�@�@�@�@�@�@ �@�@�@�@�@�@(�P��@ |�L�E�ցE` |  �_�@�@       \n"
"�@�@�@�@�@�@�@ �@�@�@�@�@�@ �_�R�@�@�P�P�P�P�P�@�@)�@�@       \n"
"�@�@�@�@�@�@�@ �@�@�@�@�@�@�ځ^�@�@�@�@�@�@�@�^|�@|�@�@�@     \n"
"�@�@�@�@�@�@�@�@ �@�@�@�@�@(�@�@�@�@�@�@�@�@�^�^�^�@�@        \n"
"�@�@�@�@�@�@�@�@�@ �@�@�@�@ |�@�@ ,�______,�m�P�P)�@�@�@�@    \n"
"�@�@�@�@�@�@�@�@�@�@ �@�@�@ |�@ /�@�@�@�P   /�@�^�@�@�@�@�@   \n"
"�@�@�@�@�@�@�@�@�@�@�@ �@ �Q|_|�Q�Q�Q�Q�Q�Q/�^�Q�@�@          \n"
".�@�@ �@ �@�@�@�@|�P�P�P�P�P�P�P�P�P�P�P�P�P�P�P |�P�P�P�P�P| \n"
"������������ �@�@|�@�@�@ �}�W�ł�CAR�@�@�@�@�@�@ |  �@ �@ �@| \n"
"�@�Q�Q�Q�Q�Q�@ �@|�@ �@,-��-�A   �@ �@. ,-��-�A�@|  �@ �@ �@| \n"
".�@�@�@�@�@�@�@�@|�Q/ �@,-�A�R�Q�Q�Q�Q/�@,-�A �R_|�Q�Q�Q�Q�Q| \n"
"�@�@�@�@�@�@�@�@�@�@', �@ -'�@Ɂ@�@ �R',�@ -'�@ Ɂ@ �R::::��  \n"
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

    // ����
    while(true){
      std::cout << 
"�@�@ �ȁ�.���@�@ �@�@ ��_ �E��f�A\n"
"�@�@( �@�@ )/�@���^\"�L Ɂ@)      \n"
"�@���@�@ Ɂ@�@�@/�@�@ /vV         \n"
"�@�@( �@ Ɂ@�@�@ ��'`��           \n"
"�@�@ (�m                          \n"
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"�@�@ �ȁ�.���@                    ���^\"�L Ɂ@)      \n"
"�@�@( �@�@ )/�@                  �@/�@�@ /vV         \n"
"�@���@�@ Ɂ@�@                   �@ ��'`��           \n"
"�@�@( �@ Ɂ@�@                                       \n"
"�@�@ (�m                                             \n"        
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"�@�@ �ȁ�.���@                           �@/�@�@ /vV         \n"
"�@�@( �@�@ )/�@                          �@ ��'`��           \n"
"�@���@�@ Ɂ@�@                                               \n"
"�@�@( �@ Ɂ@�@                           �@                  \n"
"�@�@ (�m                                                     \n"
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"�@�@ �ȁ�.���@                                   �@ ��'`��           \n"
"�@�@( �@�@ )/�@                                                      \n"
"�@���@�@ Ɂ@�@                                                       \n"
"�@�@( �@ Ɂ@�@                                                       \n"
"�@�@ (�m                                                             \n"
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"�@�@ �ȁ�.���@                                   �@                  \n"
"�@�@( �@�@ )/�@                                                      \n"
"�@���@�@ Ɂ@�@                                                       \n"
"�@�@( �@ Ɂ@�@                                                       \n"
"�@�@ (�m                                                             \n"
      "\n";
      Sleep(250); 
      system("cls");
      std::cout << 
"�@�@ �ȁ�.���@                                   �@ ��'`��           \n"
"�@�@( �@�@ )/�@                                                      \n"
"�@���@�@ Ɂ@�@                                                       \n"
"�@�@( �@ Ɂ@�@                                                       \n"
"�@�@ (�m                                                             \n"
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"�@�@ �ȁ�.���@                           �@/�@�@ /vV         \n"
"�@�@( �@�@ )/�@                          �@ ��'`��           \n"
"�@���@�@ Ɂ@�@                                               \n"
"�@�@( �@ Ɂ@�@                           �@                  \n"
"�@�@ (�m                                                     \n"
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"�@�@ �ȁ�.���@                    ���^\"�L Ɂ@)      \n"
"�@�@( �@�@ )/�@                  �@/�@�@ /vV         \n"
"�@���@�@ Ɂ@�@                   �@ ��'`��           \n"
"�@�@( �@ Ɂ@�@                                       \n"
"�@�@ (�m                                             \n"        
      "\n";
      Sleep(100); 
      system("cls");
      std::cout << 
"�@�@ �ȁ�.���@�@ �@�@ ��_ �E��f�A\n"
"�@�@( �@�@ )/�@���^\"�L Ɂ@)      \n"
"�@���@�@ Ɂ@�@�@/�@�@ /vV         \n"
"�@�@( �@ Ɂ@�@�@ ��'`��           \n"
"�@�@ (�m                          \n"
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