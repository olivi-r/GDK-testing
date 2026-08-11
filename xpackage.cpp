#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XPackageGetCurrentProcessPackageIdentifier" << endl;
    XPackageGetCurrentProcessPackageIdentifier(0,nullptr);

    cout << "XPackageIsPackagedProcess" << endl;
    XPackageIsPackagedProcess();

    cout << "XPackageCreateInstallationMonitor" << endl;
    XPackageCreateInstallationMonitor(nullptr,0,nullptr,0,nullptr,nullptr);

    cout << "XPackageCloseInstallationMonitorHandle" << endl;
    XPackageCloseInstallationMonitorHandle(nullptr);

    cout << "XPackageGetInstallationProgress" << endl;
    XPackageGetInstallationProgress(nullptr,nullptr);

    cout << "XPackageUpdateInstallationMonitor" << endl;
    XPackageUpdateInstallationMonitor(nullptr);

    cout << "XPackageRegisterInstallationProgressChanged" << endl;
    XPackageRegisterInstallationProgressChanged(nullptr,nullptr,nullptr,nullptr);

    cout << "XPackageUnregisterInstallationProgressChanged" << endl;
    XPackageUnregisterInstallationProgressChanged(nullptr,{},0);

    cout << "XPackageGetUserLocale" << endl;
    XPackageGetUserLocale(0,nullptr);

    cout << "XPackageFindChunkAvailability" << endl;
    XPackageFindChunkAvailability(nullptr,0,nullptr,nullptr);

    cout << "XPackageEnumerateChunkAvailability" << endl;
    XPackageEnumerateChunkAvailability(nullptr,{},nullptr,nullptr);

    cout << "XPackageChangeChunkInstallOrder" << endl;
    XPackageChangeChunkInstallOrder(nullptr,0,nullptr);

    cout << "XPackageInstallChunks" << endl;
    XPackageInstallChunks(nullptr,0,nullptr,0,0,nullptr,nullptr);

    cout << "XPackageInstallChunksAsync" << endl;
    XPackageInstallChunksAsync(nullptr,0,nullptr,0,0,nullptr);

    cout << "XPackageInstallChunksResult" << endl;
    XPackageInstallChunksResult(nullptr,nullptr);

    cout << "XPackageEstimateDownloadSize" << endl;
    XPackageEstimateDownloadSize(nullptr,0,nullptr,nullptr,nullptr);

    cout << "XPackageUninstallChunks" << endl;
    XPackageUninstallChunks(nullptr,0,nullptr);

    cout << "XPackageUnregisterPackageInstalled" << endl;
    XPackageUnregisterPackageInstalled({},0);

    cout << "XPackageGetMountPathSize" << endl;
    XPackageGetMountPathSize(nullptr,nullptr);

    cout << "XPackageGetMountPath" << endl;
    XPackageGetMountPath(nullptr,0,nullptr);

    cout << "XPackageCloseMountHandle" << endl;
    XPackageCloseMountHandle(nullptr);

    cout << "XPackageEnumeratePackages" << endl;
    XPackageEnumeratePackages({},{},nullptr,nullptr);

    cout << "XPackageRegisterPackageInstalled" << endl;
    XPackageRegisterPackageInstalled(nullptr,nullptr,nullptr,nullptr);

    cout << "XPackageGetWriteStats" << endl;
    XPackageGetWriteStats(nullptr);

    cout << "XPackageUninstallUWPInstance" << endl;
    XPackageUninstallUWPInstance(nullptr);

    cout << "XPackageEnumerateFeatures" << endl;
    XPackageEnumerateFeatures(nullptr,nullptr,nullptr);

    cout << "XPackageUninstallPackage" << endl;
    XPackageUninstallPackage(nullptr);

    cout << "XPackageMount" << endl;
    XPackageMount(nullptr,nullptr);

    cout << "XPackageMountWithUiAsync" << endl;
    XPackageMountWithUiAsync(nullptr,nullptr);

    cout << "XPackageMountWithUiResult" << endl;
    XPackageMountWithUiResult(nullptr,nullptr);

    cout << "XPackgeGetPackageKind" << endl;
    XPackageGetPackageKind(nullptr,nullptr);

    return 0;
}
