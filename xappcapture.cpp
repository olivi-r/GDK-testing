#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XAppBroadcastGetStatus" << endl;
    XAppBroadcastGetStatus(nullptr,nullptr);

    cout << "XAppBroadcastIsAppBroadcasting" << endl;
    XAppBroadcastIsAppBroadcasting();

    cout << "XAppBroadcastRegisterIsAppBroadcastingChanged" << endl;
    XAppBroadcastRegisterIsAppBroadcastingChanged(nullptr,nullptr,nullptr,nullptr);

    cout << "XAppBroadcastShowUI" << endl;
    XAppBroadcastShowUI(nullptr);

    cout << "XAppBroadcastUnregisterIsAppBroadcastingChanged" << endl;
    XAppBroadcastUnregisterIsAppBroadcastingChanged({},0);

    cout << "XAppCaptureCancelUserRecord" << endl;
    XAppCaptureCancelUserRecord(nullptr);

    cout << "XAppCaptureCloseLocalStream" << endl;
    XAppCaptureCloseLocalStream(nullptr);

    cout << "XAppCaptureCloseScreenshotStream" << endl;
    XAppCaptureCloseScreenshotStream(nullptr);

    cout << "XAppCaptureDisableRecord" << endl;
    XAppCaptureDisableRecord();

    cout << "XAppCaptureEnableRecord" << endl;
    XAppCaptureEnableRecord();

    cout << "XAppCaptureGetVideoCaptureSettings" << endl;
    XAppCaptureGetVideoCaptureSettings(nullptr);

    cout << "XAppCaptureMetadataAddDoubleEvent" << endl;
    XAppCaptureMetadataAddDoubleEvent(nullptr,0,{});

    cout << "XAppCaptureMetadataAddInt32Event" << endl;
    XAppCaptureMetadataAddInt32Event(nullptr,0,{});

    cout << "XAppCaptureMetadataAddStringEvent" << endl;
    XAppCaptureMetadataAddStringEvent(nullptr,nullptr,{});

    cout << "XAppCaptureMetadataRemainingStorageBytesAvailable" << endl;
    XAppCaptureMetadataRemainingStorageBytesAvailable(nullptr);

    cout << "XAppCaptureMetadataStartDoubleState" << endl;
    XAppCaptureMetadataStartDoubleState(nullptr,0,{});

    cout << "XAppCaptureMetadataStartInt32State" << endl;
    XAppCaptureMetadataStartInt32State(nullptr,0,{});

    cout << "XAppCaptureMetadataStartStringState" << endl;
    XAppCaptureMetadataStartStringState(nullptr,nullptr,{});

    cout << "XAppCaptureMetadataStopAllStates" << endl;
    XAppCaptureMetadataStopAllStates();

    cout << "XAppCaptureMetadataStopState" << endl;
    XAppCaptureMetadataStopState(nullptr);

    cout << "XAppCaptureOpenScreenshotStream" << endl;
    XAppCaptureOpenScreenshotStream(nullptr,{},nullptr,nullptr);

    cout << "XAppCaptureReadLocalStream" << endl;
    XAppCaptureReadLocalStream(nullptr,0,0,nullptr,nullptr);

    cout << "XAppCaptureReadScreenshotStream" << endl;
    XAppCaptureReadScreenshotStream(nullptr,0,0,nullptr,nullptr);

    cout << "XAppCaptureRecordDiagnosticClip" << endl;
    XAppCaptureRecordDiagnosticClip(0,0,nullptr,nullptr);

    cout << "XAppCaptureRecordTimespan" << endl;
    XAppCaptureRecordTimespan(nullptr,0,nullptr);

    cout << "XAppCaptureRegisterMetadataPurged" << endl;
    XAppCaptureRegisterMetadataPurged(nullptr,nullptr,nullptr,nullptr);

    cout << "XAppCaptureStartUserRecord" << endl;
    XAppCaptureStartUserRecord(nullptr,0,nullptr);

    cout << "XAppCaptureStopUserRecord" << endl;
    XAppCaptureStopUserRecord(nullptr,nullptr);

    cout << "XAppCaptureTakeDiagnosticScreenshot" << endl;
    XAppCaptureTakeDiagnosticScreenshot(0,{},nullptr,nullptr);

    cout << "XAppCaptureTakeScreenshot" << endl;
    XAppCaptureTakeScreenshot(nullptr,nullptr);

    cout << "XAppCaptureUnRegisterMetadataPurged" << endl;
    XAppCaptureUnRegisterMetadataPurged({},0);

    return 0;
}
