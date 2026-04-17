#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XDisplayAcquireTimeoutDeferral" << endl;
    XDisplayAcquireTimeoutDeferral(nullptr);

    cout << "XDisplayCloseTimeoutDeferralHandle" << endl;
    XDisplayCloseTimeoutDeferralHandle(nullptr);

    cout << "XDisplayTryEnableHdrMode" << endl;
    XDisplayTryEnableHdrMode({},nullptr);

    return 0;
}
