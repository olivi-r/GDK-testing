#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameSaveCloseContainer" << endl;
    XGameSaveCloseContainer(nullptr);

    cout << "XGameSaveCloseProvider" << endl;
    XGameSaveCloseProvider(nullptr);

    cout << "XGameSaveCloseUpdate" << endl;
    XGameSaveCloseUpdate(nullptr);

    cout << "XGameSaveCreateContainer" << endl;
    XGameSaveCreateContainer(nullptr,nullptr,nullptr);

    cout << "XGameSaveCreateUpdate" << endl;
    XGameSaveCreateUpdate(nullptr,nullptr,nullptr);

    cout << "XGameSaveDeleteContainer" << endl;
    XGameSaveDeleteContainer(nullptr,nullptr);

    cout << "XGameSaveDeleteContainerAsync" << endl;
    XGameSaveDeleteContainerAsync(nullptr,nullptr,nullptr);

    cout << "XGameSaveDeleteContainerResult" << endl;
    XGameSaveDeleteContainerResult(nullptr);

    cout << "XGameSaveEnumerateBlobInfo" << endl;
    XGameSaveEnumerateBlobInfo(nullptr,nullptr,nullptr);

    cout << "XGameSaveEnumerateBlobInfoByName" << endl;
    XGameSaveEnumerateBlobInfoByName(nullptr,nullptr,nullptr,nullptr);

    cout << "XGameSaveEnumerateContainerInfo" << endl;
    XGameSaveEnumerateContainerInfo(nullptr,nullptr,nullptr);

    cout << "XGameSaveEnumerateContainerInfoByName" << endl;
    XGameSaveEnumerateContainerInfoByName(nullptr,nullptr,nullptr,nullptr);

    cout << "XGameSaveGetContainerInfo" << endl;
    XGameSaveGetContainerInfo(nullptr,nullptr,nullptr,nullptr);

    cout << "XGameSaveGetRemainingQuota" << endl;
    XGameSaveGetRemainingQuota(nullptr,nullptr);

    cout << "XGameSaveGetRemainingQuotaAsync" << endl;
    XGameSaveGetRemainingQuotaAsync(nullptr,nullptr);

    cout << "XGameSaveGetRemainingQuotaResult" << endl;
    XGameSaveGetRemainingQuotaResult(nullptr,nullptr);

    cout << "XGameSaveInitializeProvider" << endl;
    XGameSaveInitializeProvider(nullptr,nullptr,0,nullptr);

    cout << "XGameSaveInitializeProviderAsync" << endl;
    XGameSaveInitializeProviderAsync(nullptr,nullptr,0,nullptr);

    cout << "XGameSaveInitializeProviderResult" << endl;
    XGameSaveInitializeProviderResult(nullptr,nullptr);

    cout << "XGameSaveReadBlobData" << endl;
    XGameSaveReadBlobData(nullptr,nullptr,nullptr,0,nullptr);

    cout << "XGameSaveReadBlobDataAsync" << endl;
    XGameSaveReadBlobDataAsync(nullptr,nullptr,0,nullptr);

    cout << "XGameSaveReadBlobDataResult" << endl;
    XGameSaveReadBlobDataResult(nullptr,0,nullptr,nullptr);

    cout << "XGameSaveSubmitBlobDelete" << endl;
    XGameSaveSubmitBlobDelete(nullptr,nullptr);

    cout << "XGameSaveSubmitBlobWrite" << endl;
    XGameSaveSubmitBlobWrite(nullptr,nullptr,nullptr,0);

    cout << "XGameSaveSubmitUpdate" << endl;
    XGameSaveSubmitUpdate(nullptr);

    cout << "XGameSaveSubmitUpdateAsync" << endl;
    XGameSaveSubmitUpdateAsync(nullptr,nullptr);

    cout << "XGameSaveSubmitUpdateResult" << endl;
    XGameSaveSubmitUpdateResult(nullptr);

    return 0;
}
