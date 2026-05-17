#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XTaskQueueCreate" << endl;
    XTaskQueueCreate({},{},nullptr);

    cout << "XTaskQueueCreateComposite" << endl;
    XTaskQueueCreateComposite(nullptr,nullptr,nullptr);

    cout << "XTaskQueueGetPort" << endl;
    XTaskQueueGetPort(nullptr,{},nullptr);

    cout << "XTaskQueueDuplicateHandle" << endl;
    XTaskQueueDuplicateHandle(nullptr,nullptr);

    cout << "XTaskQueueDispatch" << endl;
    XTaskQueueDispatch(nullptr,{},0);

    cout << "XTaskQueueCloseHandle" << endl;
    XTaskQueueCloseHandle(nullptr);

    cout << "XTaskQueueSubmitCallback" << endl;
    XTaskQueueSubmitCallback(nullptr,{},nullptr,nullptr);

    cout << "XTaskQueueSubmitDelayedCallback" << endl;
    XTaskQueueSubmitDelayedCallback(nullptr,{},0,nullptr,nullptr);

    cout << "XTaskQueueRegisterWaiter" << endl;
    XTaskQueueRegisterWaiter(nullptr,{},nullptr,nullptr,nullptr,nullptr);

    cout << "XTaskQueueUnregisterWaiter" << endl;
    XTaskQueueUnregisterWaiter(nullptr,{});

    cout << "XTaskQueueTerminate" << endl;
    XTaskQueueTerminate(nullptr,0,nullptr,nullptr);

    cout << "XTaskQueueRegisterMonitor" << endl;
    XTaskQueueRegisterMonitor(nullptr,nullptr,nullptr,nullptr);

    cout << "XTaskQueueUnregisterMonitor" << endl;
    XTaskQueueUnregisterMonitor(nullptr,{});

    cout << "XTaskQueueGetCurrentProcessTaskQueue" << endl;
    XTaskQueueGetCurrentProcessTaskQueue(nullptr);

    cout << "XTaskQueueSetCurrentProcessTaskQueue" << endl;
    XTaskQueueSetCurrentProcessTaskQueue(nullptr);

    return 0;
}
