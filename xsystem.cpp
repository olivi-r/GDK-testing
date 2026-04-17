#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XSystemAllowFullDownloadBandwidth" << endl;
    XSystemAllowFullDownloadBandwidth(0);

    cout << "XSystemGetAnalyticsInfo" << endl;
    XSystemGetAnalyticsInfo();

    cout << "XSystemGetAppSpecificDeviceId" << endl;
    XSystemGetAppSpecificDeviceId(0,nullptr,nullptr);

    cout << "XSystemGetConsoleId" << endl;
    XSystemGetConsoleId(0,nullptr,nullptr);

    cout << "XSystemGetDeviceType" << endl;
    XSystemGetDeviceType();

    cout << "XSystemGetRuntimeInfo" << endl;
    XSystemGetRuntimeInfo();

    cout << "XSystemGetXboxLiveSandboxId" << endl;
    XSystemGetXboxLiveSandboxId(0,nullptr,nullptr);

    cout << "XSystemHandleTrack" << endl;
    XSystemHandleTrack(nullptr,nullptr);

    cout << "XSystemIsHandleValid" << endl;
    XSystemIsHandleValid(nullptr);

    return 0;
}
