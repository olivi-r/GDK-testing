#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XSystemGetConsoleId" << endl;
    XSystemGetConsoleId(0,nullptr,nullptr);

    cout << "XSystemGetXboxLiveSandboxId" << endl;
    XSystemGetXboxLiveSandboxId(0,nullptr,nullptr);

    cout << "XSystemGetAppSpecificDeviceId" << endl;
    XSystemGetAppSpecificDeviceId(0,nullptr,nullptr);

    cout << "XSystemHandleTrack" << endl;
    XSystemHandleTrack(nullptr,nullptr);

    cout << "XSystemIsHandleValid" << endl;
    XSystemIsHandleValid(nullptr);

    cout << "XSystemAllowFullDownloadBandwidth" << endl;
    XSystemAllowFullDownloadBandwidth(0);

    cout << "XSystemGetDeviceType" << endl;
    XSystemGetDeviceType();

    cout << "XSystemGetRuntimeInfo" << endl;
    XSystemGetRuntimeInfo();

    cout << "XSystemGetAnalyticsInfo" << endl;
    XSystemGetAnalyticsInfo();

    return 0;
}
