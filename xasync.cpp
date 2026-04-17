#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XAsyncCancel" << endl;
    XAsyncCancel(nullptr);

    cout << "XAsyncGetResultSize" << endl;
    XAsyncGetResultSize(nullptr,nullptr);

    cout << "XAsyncGetStatus" << endl;
    XAsyncGetStatus(nullptr,0);

    cout << "XAsyncRun" << endl;
    XAsyncRun(nullptr,nullptr);

    return 0;
}
