#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XPackageChangeChunkInstallOrder" << endl;
    XPackageChangeChunkInstallOrder(nullptr,0,nullptr);

    cout << "XPackageCloseInstallationMonitorHandle" << endl;
    XPackageCloseInstallationMonitorHandle(nullptr);

    cout << "XPackageCloseMountHandle" << endl;
    XPackageCloseMountHandle(nullptr);

    cout << "XPackageCreateInstallationMonitor" << endl;
    XPackageCreateInstallationMonitor(nullptr,0,nullptr,0,nullptr,nullptr);

    cout << "XPackageEnumerateChunkAvailability" << endl;
    XPackageEnumerateChunkAvailability(nullptr,{},nullptr,nullptr);

    cout << "XPackageEnumerateFeatures" << endl;
    XPackageEnumerateFeatures(nullptr,nullptr,nullptr);

    cout << "XPackageEnumeratePackages" << endl;
    XPackageEnumeratePackages({},{},nullptr,nullptr);

    cout << "XPackageEstimateDownloadSize" << endl;
    XPackageEstimateDownloadSize(nullptr,0,nullptr,nullptr,nullptr);

    cout << "XPackageFindChunkAvailability" << endl;
    XPackageFindChunkAvailability(nullptr,0,nullptr,nullptr);

    cout << "XPackageGetCurrentProcessPackageIdentifier" << endl;
    XPackageGetCurrentProcessPackageIdentifier(0,nullptr);

    cout << "XPackageGetInstallationProgress" << endl;
    XPackageGetInstallationProgress(nullptr,nullptr);

    cout << "XPackageGetMountPath" << endl;
    XPackageGetMountPath(nullptr,0,nullptr);

    cout << "XPackageGetMountPathSize" << endl;
    XPackageGetMountPathSize(nullptr,nullptr);

    cout << "XPackageGetUserLocale" << endl;
    XPackageGetUserLocale(0,nullptr);

    cout << "XPackageGetWriteStats" << endl;
    XPackageGetWriteStats(nullptr);

    cout << "XPackageInstallChunks" << endl;
    XPackageInstallChunks(nullptr,0,nullptr,0,0,nullptr,nullptr);

    cout << "XPackageInstallChunksAsync" << endl;
    XPackageInstallChunksAsync(nullptr,0,nullptr,0,0,nullptr);

    cout << "XPackageInstallChunksResult" << endl;
    XPackageInstallChunksResult(nullptr,nullptr);

    cout << "XPackageIsPackagedProcess" << endl;
    XPackageIsPackagedProcess();

    cout << "XPackageMount" << endl;
    XPackageMount(nullptr,nullptr);

    cout << "XPackageMountWithUiAsync" << endl;
    XPackageMountWithUiAsync(nullptr,nullptr);

    cout << "XPackageMountWithUiResult" << endl;
    XPackageMountWithUiResult(nullptr,nullptr);

    cout << "XPackageRegisterInstallationProgressChanged" << endl;
    XPackageRegisterInstallationProgressChanged(nullptr,nullptr,nullptr,nullptr);

    cout << "XPackageRegisterPackageInstalled" << endl;
    XPackageRegisterPackageInstalled(nullptr,nullptr,nullptr,nullptr);

    cout << "XPackageUninstallPackage" << endl;
    XPackageUninstallPackage(nullptr);

    cout << "XPackageUninstallChunks" << endl;
    XPackageUninstallChunks(nullptr,0,nullptr);

    cout << "XPackageUninstallUWPInstance" << endl;
    XPackageUninstallUWPInstance(nullptr);

    cout << "XPackageUnregisterInstallationProgressChanged" << endl;
    XPackageUnregisterInstallationProgressChanged(nullptr,{},0);

    cout << "XPackageUnregisterPackageInstalled" << endl;
    XPackageUnregisterPackageInstalled({},0);

    cout << "XPackageUpdateInstallationMonitor" << endl;
    XPackageUpdateInstallationMonitor(nullptr);

    return 0;
}
