#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameStreamingGetAssociatedFrame" << endl;
    XGameStreamingGetAssociatedFrame(nullptr,nullptr);

    cout << "XGameStreamingGetClientCount" << endl;
    XGameStreamingGetClientCount();

    cout << "XGameStreamingGetClientIPAddress" << endl;
    XGameStreamingGetClientIPAddress({},0,nullptr);

    cout << "XGameStreamingGetDisplayDetails" << endl;
    XGameStreamingGetDisplayDetails({},0,0,0,nullptr);

    cout << "XGameStreamingGetSessionId" << endl;
    XGameStreamingGetSessionId({},0,nullptr,nullptr);

    cout << "XGameStreamingGetClients" << endl;
    XGameStreamingGetClients(0,nullptr,nullptr);

    cout << "XGameStreamingGetConnectionState" << endl;
    XGameStreamingGetConnectionState({});

    cout << "XGameStreamingGetGamepadPhysicality" << endl;
    XGameStreamingGetGamepadPhysicality(nullptr,nullptr);

    cout << "XGameStreamingGetLastFrameDisplayed" << endl;
    XGameStreamingGetLastFrameDisplayed({},nullptr);

    cout << "XGameStreamingGetServerLocationName" << endl;
    XGameStreamingGetServerLocationName(0,nullptr);

    cout << "XGameStreamingGetServerLocationNameSize" << endl;
    XGameStreamingGetServerLocationNameSize();

    cout << "XGameStreamingGetStreamAddedLatency" << endl;
    XGameStreamingGetStreamAddedLatency({},nullptr,nullptr,nullptr);

    cout << "XGameStreamingGetStreamPhysicalDimensions" << endl;
    XGameStreamingGetStreamPhysicalDimensions({},nullptr,nullptr);

    cout << "XGameStreamingGetTouchBundleVersion" << endl;
    XGameStreamingGetTouchBundleVersion({},nullptr,0,nullptr);

    cout << "XGameStreamingGetTouchBundleVersionNameSize" << endl;
    XGameStreamingGetTouchBundleVersionNameSize({});

    cout << "XGameStreamingHideTouchControls" << endl;
    XGameStreamingHideTouchControls();

    cout << "XGameStreamingHideTouchControlsOnClient" << endl;
    XGameStreamingHideTouchControlsOnClient({});

    cout << "XGameStreamingInitialize" << endl;
    XGameStreamingInitialize();

    cout << "XGameStreamingIsStreaming" << endl;
    XGameStreamingIsStreaming();

    cout << "XGameStreamingIsTouchInputEnabled" << endl;
    XGameStreamingIsTouchInputEnabled({},nullptr);

    cout << "XGameStreamingRegisterClientPropertiesChanged" << endl;
    XGameStreamingRegisterClientPropertiesChanged({},nullptr,nullptr,nullptr,nullptr);

    cout << "XGameStreamingRegisterConnectionStateChanged" << endl;
    XGameStreamingRegisterConnectionStateChanged(nullptr,nullptr,nullptr,nullptr);

    cout << "XGameStreamingSetResolution" << endl;
    XGameStreamingSetResolution(0,0);

    cout << "XGameStreamingShowTouchControlLayout" << endl;
    XGameStreamingShowTouchControlLayout(nullptr);

    cout << "XGameStreamingShowTouchControlLayoutOnClient" << endl;
    XGameStreamingShowTouchControlLayoutOnClient({},nullptr);

    cout << "XGameStreamingShowTouchControlsWithStateUpdate" << endl;
    XGameStreamingShowTouchControlsWithStateUpdate(nullptr,0,nullptr);

    cout << "XGameStreamingShowTouchControlsWithStateUpdateOnClient" << endl;
    XGameStreamingShowTouchControlsWithStateUpdateOnClient({},nullptr,0,nullptr);

    cout << "XGameStreamingUninitialize" << endl;
    XGameStreamingUninitialize();

    cout << "XGameStreamingUnregisterClientPropertiesChanged" << endl;
    XGameStreamingUnregisterClientPropertiesChanged({},{},0);

    cout << "XGameStreamingUnregisterConnectionStateChanged" << endl;
    XGameStreamingUnregisterConnectionStateChanged({},0);

    cout << "XGameStreamingUpdateTouchControlsState" << endl;
    XGameStreamingUpdateTouchControlsState(0,nullptr);

    cout << "XGameStreamingUpdateTouchControlsStateOnClient" << endl;
    XGameStreamingUpdateTouchControlsStateOnClient({},0,nullptr);

    return 0;
}
