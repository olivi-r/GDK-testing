#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XThreadAssertNotTimeSensitive" << endl;
    XThreadAssertNotTimeSensitive();

    cout << "XThreadIsTimeSensitive" << endl;
    XThreadIsTimeSensitive();

    cout << "XThreadSetTimeSensitive" << endl;
    XThreadSetTimeSensitive(0);

    return 0;
}
