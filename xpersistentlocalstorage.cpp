#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XPersistentLocalStorageGetPathSize" << endl;
    XPersistentLocalStorageGetPathSize(nullptr);

    cout << "XPersistentLocalStorageGetPath" << endl;
    XPersistentLocalStorageGetPath(0,nullptr,nullptr);

    cout << "XPersistentLocalStorageGetSpaceInfo" << endl;
    XPersistentLocalStorageGetSpaceInfo(nullptr);

    cout << "XPersistentLocalStoragePromptUserForSpaceAsync" << endl;
    XPersistentLocalStoragePromptUserForSpaceAsync(0,nullptr);

    cout << "XPersistentLocalStoragePromptUserForSpaceResult" << endl;
    XPersistentLocalStoragePromptUserForSpaceResult(nullptr);

    cout << "XPersistentLocalStorageMountForPackage" << endl;
    XPersistentLocalStorageMountForPackage(nullptr,nullptr);

    return 0;
}
