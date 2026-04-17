#include <iostream>
#include <windows.h>
#include <xgameruntime.h>
#include <xgamesavefiles.h>

using namespace std;

int main(void)
{
    cout << "XGameSaveFilesGetFolderWithUiAsync" << endl;
    XGameSaveFilesGetFolderWithUiAsync(nullptr,nullptr,nullptr);

    cout << "XGameSaveFilesGetFolderWithUiResult" << endl;
    XGameSaveFilesGetFolderWithUiResult(nullptr,0,nullptr);

    cout << "XGameSaveFilesGetRemainingQuota" << endl;
    XGameSaveFilesGetRemainingQuota(nullptr,nullptr,nullptr);

    return 0;
}
