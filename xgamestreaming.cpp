#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameStreamingInitialize" << endl;
    XGameStreamingInitialize();

    cout << "XGameStreamingUninitialize" << endl;
    XGameStreamingUninitialize();

    cout << "XGameStreamingIsStreaming" << endl;
    XGameStreamingIsStreaming();

    cout << "XGameStreamingRegisterClientPropertiesChanged" << endl;
    XGameStreamingRegisterClientPropertiesChanged({},nullptr,nullptr,nullptr,nullptr);

    cout << "XGameStreamingUnregisterClientPropertiesChanged" << endl;
    XGameStreamingUnregisterClientPropertiesChanged({},{},0);

    cout << "XGameStreamingGetStreamPhysicalDimensions" << endl;
    XGameStreamingGetStreamPhysicalDimensions({},nullptr,nullptr);

    cout << "XGameStreamingGetClientCount" << endl;
    XGameStreamingGetClientCount();

    cout << "XGameStreamingGetClients" << endl;
    XGameStreamingGetClients(0,nullptr,nullptr);

    cout << "XGameStreamingGetConnectionState" << endl;
    XGameStreamingGetConnectionState({});

    cout << "XGameStreamingRegisterConnectionStateChanged" << endl;
    XGameStreamingRegisterConnectionStateChanged(nullptr,nullptr,nullptr,nullptr);

    cout << "XGameStreamingUnregisterConnectionStateChanged" << endl;
    XGameStreamingUnregisterConnectionStateChanged({},0);

    cout << "XGameStreamingGetStreamAddedLatency" << endl;
    XGameStreamingGetStreamAddedLatency({},nullptr,nullptr,nullptr);

    cout << "XGameStreamingGetServerLocationNameSize" << endl;
    XGameStreamingGetServerLocationNameSize();

    cout << "XGameStreamingGetServerLocationName" << endl;
    XGameStreamingGetServerLocationName(0,nullptr);

    cout << "XGameStreamingHideTouchControls" << endl;
    XGameStreamingHideTouchControls();

    cout << "XGameStreamingShowTouchControlLayout" << endl;
    XGameStreamingShowTouchControlLayout(nullptr);

    cout << "XGameStreamingHideTouchControlsOnClient" << endl;
    XGameStreamingHideTouchControlsOnClient({});

    cout << "XGameStreamingShowTouchControlLayoutOnClient" << endl;
    XGameStreamingShowTouchControlLayoutOnClient({},nullptr);

    cout << "XGameStreamingIsTouchInputEnabled" << endl;
    XGameStreamingIsTouchInputEnabled({},nullptr);

    cout << "XGameStreamingGetLastFrameDisplayed" << endl;
    XGameStreamingGetLastFrameDisplayed({},nullptr);

    cout << "XGameStreamingGetAssociatedFrame" << endl;
    XGameStreamingGetAssociatedFrame(nullptr,nullptr);

    cout << "XGameStreamingGetGamepadPhysicality" << endl;
    XGameStreamingGetGamepadPhysicality(nullptr,nullptr);

    cout << "XGameStreamingUpdateTouchControlsState" << endl;
    XGameStreamingUpdateTouchControlsState(0,nullptr);

    cout << "XGameStreamingUpdateTouchControlsStateOnClient" << endl;
    XGameStreamingUpdateTouchControlsStateOnClient({},0,nullptr);

    cout << "XGameStreamingShowTouchControlsWithStateUpdate" << endl;
    XGameStreamingShowTouchControlsWithStateUpdate(nullptr,0,nullptr);

    cout << "XGameStreamingShowTouchControlsWithStateUpdateOnClient" << endl;
    XGameStreamingShowTouchControlsWithStateUpdateOnClient({},nullptr,0,nullptr);

    cout << "XGameStreamingGetTouchBundleVersionNameSize" << endl;
    XGameStreamingGetTouchBundleVersionNameSize({});

    cout << "XGameStreamingGetTouchBundleVersion" << endl;
    XGameStreamingGetTouchBundleVersion({},nullptr,0,nullptr);

    cout << "XGameStreamingGetClientIPAddress" << endl;
    XGameStreamingGetClientIPAddress({},0,nullptr);

    cout << "XGameStreamingGetSessionId" << endl;
    XGameStreamingGetSessionId({},0,nullptr,nullptr);

    cout << "XGameStreamingGetDisplayDetails" << endl;
    XGameStreamingGetDisplayDetails({},0,0,0,nullptr);

    cout << "XGameStreamingSetResolution" << endl;
    XGameStreamingSetResolution(0,0);

    return 0;
}
