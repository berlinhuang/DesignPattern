//
// Created by root on 17-11-20.
//

// Test.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>


typedef struct STDD{
    double d1;
    double d2;
}STD,*ST;

struct enums
{
    STD s;
    int _type;
    enum
    {
        HANDLE_ACCEPT,
        HANDLE_RECV,
        HANDLE_SEND,
        HANDLE_CONNECT,
        HANDLE_RECVFROM,
        HANDLE_SENDTO,
    };
};


int main(int argc, char* argv[])
{
    enums en;
    en.s={ 1.1, 2.2 };
    en._type = 1;
    void *ps = &en.s;

    int t = ((enums*)ps)->_type;
    std::cout << t << std::endl;
    std::cin.get();
    return 0;
}

