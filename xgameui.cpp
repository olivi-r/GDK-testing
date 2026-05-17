#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameUiShowMessageDialogAsync" << endl;
    XGameUiShowMessageDialogAsync(nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,{},{});

    cout << "XGameUiShowMessageDialogResult" << endl;
    XGameUiShowMessageDialogResult(nullptr,nullptr);

    cout << "XGameUiShowSendGameInviteAsync" << endl;
    XGameUiShowSendGameInviteAsync(nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr);

    cout << "XGameUiShowSendGameInviteResult" << endl;
    XGameUiShowSendGameInviteResult(nullptr);

    cout << "XGameUiShowPlayerProfileCardAsync" << endl;
    XGameUiShowPlayerProfileCardAsync(nullptr,nullptr,0);

    cout << "XGameUiShowPlayerProfileCardResult" << endl;
    XGameUiShowPlayerProfileCardResult(nullptr);

    cout << "XGameUiShowAchievementsAsync" << endl;
    XGameUiShowAchievementsAsync(nullptr,nullptr,0);

    cout << "XGameUiShowAchievementsResult" << endl;
    XGameUiShowAchievementsResult(nullptr);

    cout << "XGameUiShowPlayerPickerAsync" << endl;
    XGameUiShowPlayerPickerAsync(nullptr,nullptr,nullptr,0,nullptr,0,nullptr,0,0);

    cout << "XGameUiShowPlayerPickerResultCount" << endl;
    XGameUiShowPlayerPickerResultCount(nullptr,nullptr);

    cout << "XGameUiShowPlayerPickerResult" << endl;
    XGameUiShowPlayerPickerResult(nullptr,0,nullptr,nullptr);

    cout << "XGameUiShowErrorDialogAsync" << endl;
    XGameUiShowErrorDialogAsync(nullptr,0,nullptr);

    cout << "XGameUiShowErrorDialogResult" << endl;
    XGameUiShowErrorDialogResult(nullptr);

    cout << "XGameUiSetNotificationPositionHint" << endl;
    XGameUiSetNotificationPositionHint({});

    cout << "XGameUiShowTextEntryAsync" << endl;
    XGameUiShowTextEntryAsync(nullptr,nullptr,nullptr,nullptr,{},0);

    cout << "XGameUiShowTextEntryResultSize" << endl;
    XGameUiShowTextEntryResultSize(nullptr,nullptr);

    cout << "XGameUiShowTextEntryResult" << endl;
    XGameUiShowTextEntryResult(nullptr,0,nullptr,nullptr);

    cout << "XGameUiShowWebAuthenticationAsync" << endl;
    XGameUiShowWebAuthenticationAsync(nullptr,nullptr,nullptr,nullptr);

    cout << "XGameUiShowWebAuthenticationResultSize" << endl;
    XGameUiShowWebAuthenticationResultSize(nullptr,nullptr);

    cout << "XGameUiShowWebAuthenticationResult" << endl;
    XGameUiShowWebAuthenticationResult(nullptr,0,nullptr,nullptr,nullptr);

    cout << "XGameUiShowWebAuthenticationWithOptionsAsync" << endl;
    XGameUiShowWebAuthenticationWithOptionsAsync(nullptr,nullptr,nullptr,nullptr,{});

    cout << "XGameUiShowMultiplayerActivityGameInviteAsync" << endl;
    XGameUiShowMultiplayerActivityGameInviteAsync(nullptr,nullptr);

    cout << "XGameUiShowMultiplayerActivityGameInviteResult" << endl;
    XGameUiShowMultiplayerActivityGameInviteResult(nullptr);

    cout << "XGameUiTextEntryOpen" << endl;
    XGameUiTextEntryOpen(nullptr,0,nullptr,0,nullptr);

    cout << "XGameUiTextEntryClose" << endl;
    XGameUiTextEntryClose(nullptr);

    cout << "XGameUiTextEntryGetState" << endl;
    XGameUiTextEntryGetState(nullptr,nullptr,nullptr,nullptr,nullptr,0,nullptr);

    cout << "XGameUiTextEntryGetExtents" << endl;
    XGameUiTextEntryGetExtents(nullptr,nullptr);

    cout << "XGameUiTextEntryUpdatePositionHint" << endl;
    XGameUiTextEntryUpdatePositionHint(nullptr,{});

    cout << "XGameUiTextEntryUpdateVisibility" << endl;
    XGameUiTextEntryUpdateVisibility(nullptr,{});

    cout << "XGameUiShowStateShareAsync" << endl;
    XGameUiShowStateShareAsync(nullptr,nullptr,nullptr);

    cout << "XGameUiShowStateShareResult" << endl;
    XGameUiShowStateShareResult(nullptr);

    cout << "XGameUiSetUiCallbacks" << endl;
    XGameUiSetUiCallbacks(nullptr,0);

    cout << "XGameUiSetMessageDialogUiResponse" << endl;
    XGameUiSetMessageDialogUiResponse(nullptr,{});

    cout << "XGameUiSetPlayerPickerUiResponse" << endl;
    XGameUiSetPlayerPickerUiResponse(nullptr,0,nullptr);

    cout << "XGameUiSetTextEntryUiResponse" << endl;
    XGameUiSetTextEntryUiResponse(nullptr,nullptr);

    cout << "XGameUiSetPlayerProfileCardUiResponse" << endl;
    XGameUiSetPlayerProfileCardUiResponse(nullptr);

    cout << "XGameUiSetSendGameInviteUiResponse" << endl;
    XGameUiSetSendGameInviteUiResponse(nullptr);

    cout << "XGameUiSetAchievementsUiResponse" << endl;
    XGameUiSetAchievementsUiResponse(nullptr);

    cout << "XGameUiSetMultiplayerActivityGameInviteUiResponse" << endl;
    XGameUiSetMultiplayerActivityGameInviteUiResponse(nullptr);

    cout << "XGameUiSetErrorDialogUiResponse" << endl;
    XGameUiSetErrorDialogUiResponse(nullptr);

    return 0;
}
