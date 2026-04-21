#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameRuntimeInitialize" << endl;
    XGameRuntimeInitialize();

    cout << "XGameRuntimeInitializeWithOptions" << endl;
    XGameRuntimeInitializeWithOptions(NULL);

    cout << "XGameRuntimeUninitialize" << endl;
    XGameRuntimeUninitialize();

    return 0;
}
