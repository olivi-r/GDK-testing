#include <iostream>
#include <windows.h>
#include <xgameruntime.h>
#include <xasyncprovider.h>

using namespace std;

int main(void)
{
    cout << "XAsyncBegin" << endl;
    XAsyncBegin(nullptr,nullptr,nullptr,nullptr,nullptr);

    cout << "XAsyncSchedule" << endl;
    XAsyncSchedule(nullptr,0);

    cout << "XAsyncComplete" << endl;
    XAsyncComplete(nullptr,0,0);

    cout << "XAsyncGetResult" << endl;
    XAsyncGetResult(nullptr,nullptr,0,nullptr,nullptr);

    return 0;
}
