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

    cout << "XGameInviteRegisterForPendingEvent" << endl;
    XGameInviteRegisterForPendingEvent(nullptr,nullptr,nullptr,nullptr);

    cout << "XGameInviteUnregisterForPendingEvent" << endl;
    XGameInviteUnregisterForPendingEvent({},0);

    cout << "XGameInviteAcceptPendingInvite" << endl;
    XGameInviteAcceptPendingInvite(nullptr);

    return 0;
}
