#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XUserAddAsync" << endl;
    XUserAddAsync({},nullptr);

    cout << "XUserAddByIdWithUiAsync" << endl;
    XUserAddByIdWithUiAsync(0, nullptr);

    cout << "XUserAddByIdWithUiResult" << endl;
    XUserAddByIdWithUiResult(nullptr,nullptr);

    cout << "XUserAddResult" << endl;
    XUserAddResult(nullptr,nullptr);

    cout << "XUserCheckPrivilege" << endl;
    XUserCheckPrivilege(nullptr,{},{},nullptr,nullptr);

    cout << "XUserCloseHandle" << endl;
    XUserCloseHandle(nullptr);

    cout << "XUserCloseSignOutDeferralHandle" << endl;
    XUserCloseSignOutDeferralHandle(nullptr);

    cout << "XUserCompare" << endl;
    XUserCompare(nullptr,nullptr);

    cout << "XUserDuplicateHandle" << endl;
    XUserDuplicateHandle(nullptr,nullptr);

    cout << "XUserFindControllerForUserWithUiAsync" << endl;
    XUserFindControllerForUserWithUiAsync(nullptr, nullptr);

    cout << "XUserFindControllerForUserWithUiResult" << endl;
    XUserFindControllerForUserWithUiResult(nullptr,nullptr);

    cout << "XUserFindForDevice" << endl;
    XUserFindForDevice(nullptr,nullptr);

    cout << "XUserFindUserById" << endl;
    XUserFindUserById(0,nullptr);

    cout << "XUserFindUserByLocalId" << endl;
    XUserFindUserByLocalId({},nullptr);

    cout << "XUserGetAgeGroup" << endl;
    XUserGetAgeGroup(nullptr,nullptr);

    cout << "XUserGetDefaultAudioEndpointUtf16" << endl;
    XUserGetDefaultAudioEndpointUtf16({},{},0,nullptr,nullptr);

    cout << "XUserGetGamerPictureAsync" << endl;
    XUserGetGamerPictureAsync(nullptr,{},nullptr);

    cout << "XUserGetGamerPictureResult" << endl;
    XUserGetGamerPictureResult(nullptr,0,nullptr,nullptr);

    cout << "XUserGetGamerPictureResultSize" << endl;
    XUserGetGamerPictureResultSize(nullptr,nullptr);

    cout << "XUserGetGamertag" << endl;
    XUserGetGamertag(nullptr,{},0,nullptr,nullptr);

    cout << "XUserGetId" << endl;
    XUserGetId(nullptr,nullptr);

    cout << "XUserGetIsGuest" << endl;
    XUserGetIsGuest(nullptr,nullptr);

    cout << "XUserGetLocalId" << endl;
    XUserGetLocalId(nullptr,nullptr);

    cout << "XUserGetMaxUsers" << endl;
    XUserGetMaxUsers(nullptr);

    cout << "XUserGetMsaTokenSilentlyAsync" << endl;
    XUserGetMsaTokenSilentlyAsync(nullptr,{},nullptr,nullptr);

    cout << "XUserGetMsaTokenSilentlyResult" << endl;
    XUserGetMsaTokenSilentlyResult(nullptr,0,nullptr,nullptr);

    cout << "XUserGetMsaTokenSilentlyResultSize" << endl;
    XUserGetMsaTokenSilentlyResultSize(nullptr,nullptr);

    cout << "XUserGetSignOutDeferral" << endl;
    XUserGetSignOutDeferral(nullptr);

    cout << "XUserGetState" << endl;
    XUserGetState(nullptr,nullptr);

    cout << "XUserGetTokenAndSignatureAsync" << endl;
    XUserGetTokenAndSignatureAsync(nullptr,{},nullptr,nullptr,0,nullptr,0,nullptr,nullptr);

    cout << "XUserGetTokenAndSignatureResult" << endl;
    XUserGetTokenAndSignatureResult(nullptr,0,nullptr,nullptr,nullptr);

    cout << "XUserGetTokenAndSignatureResultSize" << endl;
    XUserGetTokenAndSignatureResultSize(nullptr,nullptr);

    cout << "XUserGetTokenAndSignatureUtf16Async" << endl;
    XUserGetTokenAndSignatureUtf16Async(nullptr,{},nullptr,nullptr,0,nullptr,0,nullptr,nullptr);

    cout << "XUserGetTokenAndSignatureUtf16Result" << endl;
    XUserGetTokenAndSignatureUtf16Result(nullptr,0,nullptr,nullptr,nullptr);

    cout << "XUserGetTokenAndSignatureUtf16ResultSize" << endl;
    XUserGetTokenAndSignatureUtf16ResultSize(nullptr,nullptr);

    cout << "XUserIsStoreUser" << endl;
    XUserIsStoreUser(nullptr);

    cout << "XUserRegisterForChangeEvent" << endl;
    XUserRegisterForChangeEvent(nullptr,nullptr,nullptr,nullptr);

    cout << "XUserRegisterForDefaultAudioEndpointUtf16Changed" << endl;
    XUserRegisterForDefaultAudioEndpointUtf16Changed({},nullptr,nullptr,nullptr);

    cout << "XUserRegisterForDeviceAssociationChanged" << endl;
    XUserRegisterForDeviceAssociationChanged(nullptr,nullptr,nullptr,nullptr);

    cout << "XUserResolveIssueWithUiAsync" << endl;
    XUserResolveIssueWithUiAsync(nullptr,nullptr,nullptr);

    cout << "XUserResolveIssueWithUiResult" << endl;
    XUserResolveIssueWithUiResult(nullptr);

    cout << "XUserResolveIssueWithUiUtf16Async" << endl;
    XUserResolveIssueWithUiUtf16Async(nullptr,nullptr,nullptr);

    cout << "XUserResolveIssueWithUiUtf16Result" << endl;
    XUserResolveIssueWithUiUtf16Result(nullptr);

    cout << "XUserResolvePrivilegeWithUiAsync" << endl;
    XUserResolvePrivilegeWithUiAsync(nullptr,{},{},nullptr);

    cout << "XUserResolvePrivilegeWithUiResult" << endl;
    XUserResolvePrivilegeWithUiResult(nullptr);

    cout << "XUserUnregisterForChangeEvent" << endl;
    XUserUnregisterForChangeEvent({},0);

    cout << "XUserUnregisterForDefaultAudioEndpointUtf16Changed" << endl;
    XUserUnregisterForDefaultAudioEndpointUtf16Changed({},0);

    cout << "XUserUnregisterForDeviceAssociationChanged" << endl;
    XUserUnregisterForDeviceAssociationChanged({},0);

    cout << "XUserPlatformRemoteConnectSetEventHandlers" << endl;
    XUserPlatformRemoteConnectSetEventHandlers(nullptr,nullptr);

    cout << "XUserPlatformRemoteConnectCancelPrompt" << endl;
    XUserPlatformRemoteConnectCancelPrompt(0);

    cout << "XUserPlatformSpopPromptSetEventHandlers" << endl;
    XUserPlatformSpopPromptSetEventHandlers(nullptr,nullptr,nullptr);

    cout << "XUserPlatformSpopPromptComplete" << endl;
    XUserPlatformSpopPromptComplete(0,{});

    cout << "XUserIsSignOutPresent" << endl;
    XUserIsSignOutPresent();

    cout << "XUserSignOutAsync" << endl;
    XUserSignOutAsync(nullptr,nullptr);

    cout << "XUserSignOutResult" << endl;
    XUserSignOutResult(nullptr);

    return 0;
}
