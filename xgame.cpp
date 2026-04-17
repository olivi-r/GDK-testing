#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameGetXboxTitleId" << endl;
    XGameGetXboxTitleId(nullptr);

    cout << "XLaunchNewGame" << endl;
    XLaunchNewGame(nullptr,nullptr,nullptr);

    cout << "XLaunchRestartOnCrash" << endl;
    XLaunchRestartOnCrash(nullptr,0);

    return 0;
}
