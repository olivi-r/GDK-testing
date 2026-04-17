#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameRuntimeInitialize" << endl;
    XGameRuntimeInitialize();

    cout << "XGameRuntimeUninitialize" << endl;
    XGameRuntimeUninitialize();

    return 0;
}
