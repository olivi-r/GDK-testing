#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XStoreCreateContext" << endl;
    XStoreCreateContext(nullptr,nullptr);

    cout << "XStoreCloseContextHandle" << endl;
    XStoreCloseContextHandle(nullptr);

    cout << "XStoreQueryAssociatedProductsAsync" << endl;
    XStoreQueryAssociatedProductsAsync(nullptr,{},0,nullptr);

    cout << "XStoreQueryAssociatedProductsResult" << endl;
    XStoreQueryAssociatedProductsResult(nullptr,nullptr);

    cout << "XStoreQueryProductsAsync" << endl;
    XStoreQueryProductsAsync(nullptr,{},nullptr,0,nullptr,0,nullptr);

    cout << "XStoreQueryProductsResult" << endl;
    XStoreQueryProductsResult(nullptr,nullptr);

    cout << "XStoreQueryEntitledProductsAsync" << endl;
    XStoreQueryEntitledProductsAsync(nullptr,{},0,nullptr);

    cout << "XStoreQueryEntitledProductsResult" << endl;
    XStoreQueryEntitledProductsResult(nullptr,nullptr);

    cout << "XStoreQueryProductForCurrentGameAsync" << endl;
    XStoreQueryProductForCurrentGameAsync(nullptr,nullptr);

    cout << "XStoreQueryProductForCurrentGameResult" << endl;
    XStoreQueryProductForCurrentGameResult(nullptr,nullptr);

    cout << "XStoreQueryProductForPackageAsync" << endl;
    XStoreQueryProductForPackageAsync(nullptr,{},nullptr,nullptr);

    cout << "XStoreQueryProductForPackageResult" << endl;
    XStoreQueryProductForPackageResult(nullptr,nullptr);

    cout << "XStoreEnumerateProductsQuery" << endl;
    XStoreEnumerateProductsQuery(nullptr,nullptr,nullptr);

    cout << "XStoreProductsQueryHasMorePages" << endl;
    XStoreProductsQueryHasMorePages(nullptr);

    cout << "XStoreProductsQueryNextPageAsync" << endl;
    XStoreProductsQueryNextPageAsync(nullptr,nullptr);

    cout << "XStoreProductsQueryNextPageResult" << endl;
    XStoreProductsQueryNextPageResult(nullptr,nullptr);

    cout << "XStoreCloseProductsQueryHandle" << endl;
    XStoreCloseProductsQueryHandle(nullptr);

    cout << "XStoreAcquireLicenseForPackageAsync" << endl;
    XStoreAcquireLicenseForPackageAsync(nullptr,nullptr,nullptr);

    cout << "XStoreAcquireLicenseForPackageResult" << endl;
    XStoreAcquireLicenseForPackageResult(nullptr,nullptr);

    cout << "XStoreIsLicenseValid" << endl;
    XStoreIsLicenseValid(nullptr);

    cout << "XStoreCloseLicenseHandle" << endl;
    XStoreCloseLicenseHandle(nullptr);

    cout << "XStoreCanAcquireLicenseForStoreIdAsync" << endl;
    XStoreCanAcquireLicenseForStoreIdAsync(nullptr,nullptr,nullptr);

    cout << "XStoreCanAcquireLicenseForStoreIdResult" << endl;
    XStoreCanAcquireLicenseForStoreIdResult(nullptr,nullptr);

    cout << "XStoreCanAcquireLicenseForPackageAsync" << endl;
    XStoreCanAcquireLicenseForPackageAsync(nullptr,nullptr,nullptr);

    cout << "XStoreCanAcquireLicenseForPackageResult" << endl;
    XStoreCanAcquireLicenseForPackageResult(nullptr,nullptr);

    cout << "XStoreQueryGameLicenseAsync" << endl;
    XStoreQueryGameLicenseAsync(nullptr,nullptr);

    cout << "XStoreQueryGameLicenseResult" << endl;
    XStoreQueryGameLicenseResult(nullptr,nullptr);

    cout << "XStoreQueryAddOnLicensesAsync" << endl;
    XStoreQueryAddOnLicensesAsync(nullptr,nullptr);

    cout << "XStoreQueryAddOnLicensesResultCount" << endl;
    XStoreQueryAddOnLicensesResultCount(nullptr,nullptr);

    cout << "XStoreQueryAddOnLicensesResult" << endl;
    XStoreQueryAddOnLicensesResult(nullptr,0,nullptr);

    cout << "XStoreQueryConsumableBalanceRemainingAsync" << endl;
    XStoreQueryConsumableBalanceRemainingAsync(nullptr,nullptr,nullptr);

    cout << "XStoreQueryConsumableBalanceRemainingResult" << endl;
    XStoreQueryConsumableBalanceRemainingResult(nullptr,nullptr);

    cout << "XStoreReportConsumableFulfillmentAsync" << endl;
    XStoreReportConsumableFulfillmentAsync(nullptr,nullptr,0,{},nullptr);

    cout << "XStoreReportConsumableFulfillmentResult" << endl;
    XStoreReportConsumableFulfillmentResult(nullptr,nullptr);

    cout << "XStoreGetUserCollectionsIdAsync" << endl;
    XStoreGetUserCollectionsIdAsync(nullptr,nullptr,nullptr,nullptr);

    cout << "XStoreGetUserCollectionsIdResultSize" << endl;
    XStoreGetUserCollectionsIdResultSize(nullptr,nullptr);

    cout << "XStoreGetUserCollectionsIdResult" << endl;
    XStoreGetUserCollectionsIdResult(nullptr,0,nullptr);

    cout << "XStoreGetUserPurchaseIdAsync" << endl;
    XStoreGetUserPurchaseIdAsync(nullptr,nullptr,nullptr,nullptr);

    cout << "XStoreGetUserPurchaseIdResultSize" << endl;
    XStoreGetUserPurchaseIdResultSize(nullptr,nullptr);

    cout << "XStoreGetUserPurchaseIdResult" << endl;
    XStoreGetUserPurchaseIdResult(nullptr,0,nullptr);

    cout << "XStoreQueryLicenseTokenAsync" << endl;
    XStoreQueryLicenseTokenAsync(nullptr,nullptr,0,nullptr,nullptr);

    cout << "XStoreQueryLicenseTokenResultSize" << endl;
    XStoreQueryLicenseTokenResultSize(nullptr,nullptr);

    cout << "XStoreQueryLicenseTokenResult" << endl;
    XStoreQueryLicenseTokenResult(nullptr,0,nullptr);

    cout << "XStoreShowPurchaseUIAsync" << endl;
    XStoreShowPurchaseUIAsync(nullptr,nullptr,nullptr,nullptr,nullptr);

    cout << "XStoreShowPurchaseUIResult" << endl;
    XStoreShowPurchaseUIResult(nullptr);

    cout << "XStoreShowRateAndReviewUIAsync" << endl;
    XStoreShowRateAndReviewUIAsync(nullptr,nullptr);

    cout << "XStoreShowRateAndReviewUIResult" << endl;
    XStoreShowRateAndReviewUIResult(nullptr,nullptr);

    cout << "XStoreShowRedeemTokenUIAsync" << endl;
    XStoreShowRedeemTokenUIAsync(nullptr,nullptr,nullptr,0,0,nullptr);

    cout << "XStoreShowRedeemTokenUIResult" << endl;
    XStoreShowRedeemTokenUIResult(nullptr);

    cout << "XStoreQueryGameAndDlcPackageUpdatesAsync" << endl;
    XStoreQueryGameAndDlcPackageUpdatesAsync(nullptr,nullptr);

    cout << "XStoreQueryGameAndDlcPackageUpdatesResultCount" << endl;
    XStoreQueryGameAndDlcPackageUpdatesResultCount(nullptr,nullptr);

    cout << "XStoreQueryGameAndDlcPackageUpdatesResult" << endl;
    XStoreQueryGameAndDlcPackageUpdatesResult(nullptr,0,nullptr);

    cout << "XStoreDownloadPackageUpdatesAsync" << endl;
    XStoreDownloadPackageUpdatesAsync(nullptr,nullptr,0,nullptr);

    cout << "XStoreDownloadPackageUpdatesResult" << endl;
    XStoreDownloadPackageUpdatesResult(nullptr);

    cout << "XStoreDownloadAndInstallPackageUpdatesAsync" << endl;
    XStoreDownloadAndInstallPackageUpdatesAsync(nullptr,nullptr,0,nullptr);

    cout << "XStoreDownloadAndInstallPackageUpdatesResult" << endl;
    XStoreDownloadAndInstallPackageUpdatesResult(nullptr);

    cout << "XStoreDownloadAndInstallPackagesAsync" << endl;
    XStoreDownloadAndInstallPackagesAsync(nullptr,nullptr,0,nullptr);

    cout << "XStoreDownloadAndInstallPackagesResultCount" << endl;
    XStoreDownloadAndInstallPackagesResultCount(nullptr,nullptr);

    cout << "XStoreDownloadAndInstallPackagesResult" << endl;
    XStoreDownloadAndInstallPackagesResult(nullptr,0,nullptr);

    cout << "XStoreQueryPackageIdentifier" << endl;
    XStoreQueryPackageIdentifier(nullptr,0,nullptr);

    cout << "XStoreRegisterGameLicenseChanged" << endl;
    XStoreRegisterGameLicenseChanged(nullptr,nullptr,nullptr,nullptr,nullptr);

    cout << "XStoreUnregisterGameLicenseChanged" << endl;
    XStoreUnregisterGameLicenseChanged(nullptr,{},0);

    cout << "XStoreRegisterPackageLicenseLost" << endl;
    XStoreRegisterPackageLicenseLost(nullptr,nullptr,nullptr,nullptr,nullptr);

    cout << "XStoreUnregisterPackageLicenseLost" << endl;
    XStoreUnregisterPackageLicenseLost(nullptr,{},0);

    cout << "XStoreIsAvailabilityPurchasable" << endl;
    XStoreIsAvailabilityPurchasable({});

    cout << "XStoreAcquireLicenseForDurablesAsync" << endl;
    XStoreAcquireLicenseForDurablesAsync(nullptr,nullptr,nullptr);

    cout << "XStoreAcquireLicenseForDurablesResult" << endl;
    XStoreAcquireLicenseForDurablesResult(nullptr,nullptr);

    cout << "XStoreShowAssociatedProductsUIAsync" << endl;
    XStoreShowAssociatedProductsUIAsync(nullptr,nullptr,{},nullptr);

    cout << "XStoreShowAssociatedProductsUIResult" << endl;
    XStoreShowAssociatedProductsUIResult(nullptr);

    cout << "XStoreShowProductPageUIAsync" << endl;
    XStoreShowProductPageUIAsync(nullptr,nullptr,nullptr);

    cout << "XStoreShowProductPageUIResult" << endl;
    XStoreShowProductPageUIResult(nullptr);

    cout << "XStoreQueryAssociatedProductsForStoreIdAsync" << endl;
    XStoreQueryAssociatedProductsForStoreIdAsync(nullptr,nullptr,{},0,nullptr);

    cout << "XStoreQueryAssociatedProductsForStoreIdResult" << endl;
    XStoreQueryAssociatedProductsForStoreIdResult(nullptr,nullptr);

    cout << "XStoreQueryPackageUpdatesAsync" << endl;
    XStoreQueryPackageUpdatesAsync(nullptr,nullptr,0,nullptr);

    cout << "XStoreQueryPackageUpdatesResultCount" << endl;
    XStoreQueryPackageUpdatesResultCount(nullptr,nullptr);

    cout << "XStoreQueryPackageUpdatesResult" << endl;
    XStoreQueryPackageUpdatesResult(nullptr,0,nullptr);

    cout << "XStoreShowGiftingUIAsync" << endl;
    XStoreShowGiftingUIAsync(nullptr,nullptr,nullptr,nullptr,nullptr);

    cout << "XStoreShowGiftingUIResult" << endl;
    XStoreShowGiftingUIResult(nullptr);

    return 0;
}
