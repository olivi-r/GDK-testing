#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameActivationRegisterForEvent" << endl;
    XGameActivationRegisterForEvent(nullptr,nullptr,nullptr,nullptr);

    cout << "XGameActivationUnregisterForEvent" << endl;
    XGameActivationUnregisterForEvent({},0);

    cout << "XGameActivationAcceptPendingInvite" << endl;
    XGameActivationAcceptPendingInvite(nullptr);

    return 0;
}
