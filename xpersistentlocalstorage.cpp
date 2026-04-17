#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XPersistentLocalStorageGetPath" << endl;
    XPersistentLocalStorageGetPath(0,nullptr,nullptr);

    cout << "XPersistentLocalStorageGetPathSize" << endl;
    XPersistentLocalStorageGetPathSize(nullptr);

    cout << "XPersistentLocalStorageGetSpaceInfo" << endl;
    XPersistentLocalStorageGetSpaceInfo(nullptr);

    cout << "XPersistentLocalStorageMountForPackage" << endl;
    XPersistentLocalStorageMountForPackage(nullptr,nullptr);

    cout << "XPersistentLocalStoragePromptUserForSpaceAsync" << endl;
    XPersistentLocalStoragePromptUserForSpaceAsync(0,nullptr);

    cout << "XPersistentLocalStoragePromptUserForSpaceResult" << endl;
    XPersistentLocalStoragePromptUserForSpaceResult(nullptr);

    return 0;
}
