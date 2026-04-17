#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameProtocolRegisterForActivation" << endl;
    XGameProtocolRegisterForActivation(nullptr,nullptr,nullptr,nullptr);

    cout << "XGameProtocolUnregisterForActivation" << endl;
    XGameProtocolUnregisterForActivation({},0);

    return 0;
}
