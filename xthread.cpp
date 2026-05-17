#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XThreadSetTimeSensitive" << endl;
    XThreadSetTimeSensitive(0);

    cout << "XThreadAssertNotTimeSensitive" << endl;
    XThreadAssertNotTimeSensitive();

    cout << "XThreadIsTimeSensitive" << endl;
    XThreadIsTimeSensitive();

    return 0;
}
