#include <iostream>
#include <windows.h>
#include <xgameruntime.h>

using namespace std;

int main(void)
{
    cout << "XClosedCaptionGetProperties" << endl;
    XClosedCaptionGetProperties(nullptr);

    cout << "XClosedCaptionSetEnabled" << endl;
    XClosedCaptionSetEnabled(0);

    cout << "XHighContrastGetMode" << endl;
    XHighContrastGetMode(nullptr);

    cout << "XSpeechToTextSetPositionHint" << endl;
    XSpeechToTextSetPositionHint({});

    cout << "XSpeechToTextSendString" << endl;
    XSpeechToTextSendString(nullptr,nullptr,{});

    cout << "XSpeechToTextBeginHypothesisString" << endl;
    XSpeechToTextBeginHypothesisString(nullptr,nullptr,{},nullptr);

    cout << "XSpeechToTextUpdateHypothesisString" << endl;
    XSpeechToTextUpdateHypothesisString(0,nullptr);

    cout << "XSpeechToTextFinalizeHypothesisString" << endl;
    XSpeechToTextFinalizeHypothesisString(0,nullptr);

    cout << "XSpeechToTextCancelHypothesisString" << endl;
    XSpeechToTextCancelHypothesisString(0);

    return 0;
}
