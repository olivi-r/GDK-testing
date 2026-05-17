#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XAsyncGetStatus" << endl;
    XAsyncGetStatus(nullptr,0);

    cout << "XAsyncGetResultSize" << endl;
    XAsyncGetResultSize(nullptr,nullptr);

    cout << "XAsyncCancel" << endl;
    XAsyncCancel(nullptr);

    cout << "XAsyncRun" << endl;
    XAsyncRun(nullptr,nullptr);

    return 0;
}
