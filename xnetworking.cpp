#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XNetworkingQueryPreferredLocalUdpMultiplayerPort" << endl;
    XNetworkingQueryPreferredLocalUdpMultiplayerPort(nullptr);

    cout << "XNetworkingQueryPreferredLocalUdpMultiplayerPortAsync" << endl;
    XNetworkingQueryPreferredLocalUdpMultiplayerPortAsync(nullptr);

    cout << "XNetworkingQueryPreferredLocalUdpMultiplayerPortAsyncResult" << endl;
    XNetworkingQueryPreferredLocalUdpMultiplayerPortAsyncResult(nullptr,nullptr);

    cout << "XNetworkingRegisterPreferredLocalUdpMultiplayerPortChanged" << endl;
    XNetworkingRegisterPreferredLocalUdpMultiplayerPortChanged(nullptr,nullptr,nullptr,nullptr);

    cout << "XNetworkingUnregisterPreferredLocalUdpMultiplayerPortChanged" << endl;
    XNetworkingUnregisterPreferredLocalUdpMultiplayerPortChanged({},0);

    cout << "XNetworkingQuerySecurityInformationForUrlAsync" << endl;
    XNetworkingQuerySecurityInformationForUrlAsync(nullptr,nullptr);

    cout << "XNetworkingQuerySecurityInformationForUrlAsyncResultSize" << endl;
    XNetworkingQuerySecurityInformationForUrlAsyncResultSize(nullptr,nullptr);

    cout << "XNetworkingQuerySecurityInformationForUrlAsyncResult" << endl;
    XNetworkingQuerySecurityInformationForUrlAsyncResult(nullptr,0,nullptr,nullptr,nullptr);

    cout << "XNetworkingQuerySecurityInformationForUrlUtf16Async" << endl;
    XNetworkingQuerySecurityInformationForUrlUtf16Async(nullptr,nullptr);

    cout << "XNetworkingQuerySecurityInformationForUrlUtf16AsyncResultSize" << endl;
    XNetworkingQuerySecurityInformationForUrlUtf16AsyncResultSize(nullptr,nullptr);

    cout << "XNetworkingQuerySecurityInformationForUrlUtf16AsyncResult" << endl;
    XNetworkingQuerySecurityInformationForUrlUtf16AsyncResult(nullptr,0,nullptr,nullptr,nullptr);

    cout << "XNetworkingVerifyServerCertificate" << endl;
    XNetworkingVerifyServerCertificate(nullptr,nullptr);

    cout << "XNetworkingGetConnectivityHint" << endl;
    XNetworkingGetConnectivityHint(nullptr);

    cout << "XNetworkingRegisterConnectivityHintChanged" << endl;
    XNetworkingRegisterConnectivityHintChanged(nullptr,nullptr,nullptr,nullptr);

    cout << "XNetworkingUnregisterConnectivityHintChanged" << endl;
    XNetworkingUnregisterConnectivityHintChanged({},0);

    cout << "XNetworkingQueryConfigurationSetting" << endl;
    XNetworkingQueryConfigurationSetting({},nullptr);

    cout << "XNetworkingSetConfigurationSetting" << endl;
    XNetworkingSetConfigurationSetting({},0);

    cout << "XNetworkingQueryStatistics" << endl;
    XNetworkingQueryStatistics({},nullptr);

    return 0;
}
