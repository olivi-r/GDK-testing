#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameEventWrite" << endl;
    XGameEventWrite(nullptr,nullptr,nullptr,nullptr,nullptr,nullptr);

    return 0;
}
