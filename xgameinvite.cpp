#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameInviteRegisterForEvent" << endl;
    XGameInviteRegisterForEvent(nullptr,nullptr,nullptr,nullptr);

    cout << "XGameInviteUnregisterForEvent" << endl;
    XGameInviteUnregisterForEvent({},0);

    return 0;
}
