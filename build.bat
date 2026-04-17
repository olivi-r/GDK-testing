@echo off

@REM Networking API
cl xnetworking.cpp advapi32.lib /EHsc

@REM System API
cl xaccessibility.cpp advapi32.lib /EHsc
cl xappcapture.cpp advapi32.lib /EHsc
cl xasync.cpp advapi32.lib /EHsc
cl xasyncprovider.cpp advapi32.lib /EHsc
cl xdisplay.cpp advapi32.lib /EHsc
cl xerror.cpp advapi32.lib /EHsc
cl xgame.cpp advapi32.lib /EHsc
cl xgameevent.cpp advapi32.lib /EHsc
cl xgameinvite.cpp advapi32.lib /EHsc
cl xgameprotocol.cpp advapi32.lib /EHsc
cl xgameruntimefeature.cpp advapi32.lib /EHsc
cl xgameruntimeinit.cpp advapi32.lib /EHsc
cl xgamesave.cpp advapi32.lib /EHsc
cl xgamesavefiles.cpp advapi32.lib /EHsc
cl xgamestreaming.cpp advapi32.lib /EHsc
cl xgameui.cpp advapi32.lib /EHsc
cl xlauncher.cpp advapi32.lib /EHsc
cl xpackage.cpp advapi32.lib /EHsc
cl xpersistentlocalstorage.cpp advapi32.lib /EHsc
cl xspeechsynthesis.cpp advapi32.lib /EHsc
cl xstore.cpp advapi32.lib /EHsc
cl xsystem.cpp advapi32.lib /EHsc
cl xtaskqueue.cpp advapi32.lib /EHsc
cl xthread.cpp advapi32.lib /EHsc
cl xuser.cpp advapi32.lib /EHsc
