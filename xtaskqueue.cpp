#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XTaskQueueCloseHandle" << endl;
    XTaskQueueCloseHandle(nullptr);

    cout << "XTaskQueueCreate" << endl;
    XTaskQueueCreate({},{},nullptr);

    cout << "XTaskQueueCreateComposite" << endl;
    XTaskQueueCreateComposite(nullptr,nullptr,nullptr);

    cout << "XTaskQueueDispatch" << endl;
    XTaskQueueDispatch(nullptr,{},0);

    cout << "XTaskQueueDuplicateHandle" << endl;
    XTaskQueueDuplicateHandle(nullptr,nullptr);

    cout << "XTaskQueueGetCurrentProcessTaskQueue" << endl;
    XTaskQueueGetCurrentProcessTaskQueue(nullptr);

    cout << "XTaskQueueGetPort" << endl;
    XTaskQueueGetPort(nullptr,{},nullptr);

    cout << "XTaskQueueRegisterMonitor" << endl;
    XTaskQueueRegisterMonitor(nullptr,nullptr,nullptr,nullptr);

    cout << "XTaskQueueRegisterWaiter" << endl;
    XTaskQueueRegisterWaiter(nullptr,{},nullptr,nullptr,nullptr,nullptr);

    cout << "XTaskQueueSetCurrentProcessTaskQueue" << endl;
    XTaskQueueSetCurrentProcessTaskQueue(nullptr);

    cout << "XTaskQueueSubmitCallback" << endl;
    XTaskQueueSubmitCallback(nullptr,{},nullptr,nullptr);

    cout << "XTaskQueueSubmitDelayedCallback" << endl;
    XTaskQueueSubmitDelayedCallback(nullptr,{},0,nullptr,nullptr);

    cout << "XTaskQueueTerminate" << endl;
    XTaskQueueTerminate(nullptr,0,nullptr,nullptr);

    cout << "XTaskQueueUnregisterMonitor" << endl;
    XTaskQueueUnregisterMonitor(nullptr,{});

    cout << "XTaskQueueUnregisterWaiter" << endl;
    XTaskQueueUnregisterWaiter(nullptr,{});

    return 0;
}
