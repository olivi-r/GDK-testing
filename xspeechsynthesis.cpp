#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XSpeechSynthesizerEnumerateInstalledVoices" << endl;
    XSpeechSynthesizerEnumerateInstalledVoices(nullptr,nullptr);

    cout << "XSpeechSynthesizerCreate" << endl;
    XSpeechSynthesizerCreate(nullptr);

    cout << "XSpeechSynthesizerCloseHandle" << endl;
    XSpeechSynthesizerCloseHandle(nullptr);

    cout << "XSpeechSynthesizerSetDefaultVoice" << endl;
    XSpeechSynthesizerSetDefaultVoice(nullptr);

    cout << "XSpeechSynthesizerSetCustomVoice" << endl;
    XSpeechSynthesizerSetCustomVoice(nullptr,nullptr);

    cout << "XSpeechSynthesizerCreateStreamFromText" << endl;
    XSpeechSynthesizerCreateStreamFromText(nullptr,nullptr,nullptr);

    cout << "XSpeechSynthesizerCloseStreamHandle" << endl;
    XSpeechSynthesizerCloseStreamHandle(nullptr);

    cout << "XSpeechSynthesizerGetStreamDataSize" << endl;
    XSpeechSynthesizerGetStreamDataSize(nullptr,nullptr);

    cout << "XSpeechSynthesizerGetStreamData" << endl;
    XSpeechSynthesizerGetStreamData(nullptr,0,nullptr,nullptr);

    cout << "XSpeechSynthesizerCreateStreamFromSsml" << endl;
    XSpeechSynthesizerCreateStreamFromSsml(nullptr,nullptr,nullptr);

    return 0;
}
