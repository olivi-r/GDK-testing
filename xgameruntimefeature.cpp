#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XGameRuntimeIsFeatureAvailable" << endl;
    XGameRuntimeIsFeatureAvailable({});

    return 0;
}
