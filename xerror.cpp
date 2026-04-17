#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XErrorSetCallback" << endl;
    XErrorSetCallback(nullptr,nullptr);

    cout << "XErrorSetOptions" << endl;
    XErrorSetOptions({},{});

    return 0;
}
