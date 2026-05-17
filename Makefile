CXX = cl
LD = link

.PHONY: all
all: xaccessibility.exe xappcapture.exe xasync.exe xasyncprovider.exe xdisplay.exe xerror.exe xgame.exe \
xgameactivation.exe xgameevent.exe xgameinvite.exe xgameprotocol.exe xgameruntimefeature.exe xgameruntimeinit.exe \
xgamesave.exe xgamesavefiles.exe xgamestreaming.exe xgameui.exe xlauncher.exe xnetworking.exe xpackage.exe \
xpersistentlocalstorage.exe xspeechsynthesis.exe xstore.exe xsystem.exe xtaskqueue.exe xthread.exe xuser.exe

.PHONY: clean
clean:
	del *.obj *.exe

xaccessibility.obj: xaccessibility.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xaccessibility.exe: xaccessibility.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xappcapture.obj: xappcapture.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xappcapture.exe: xappcapture.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xasync.obj: xasync.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xasync.exe: xasync.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xasyncprovider.obj: xasyncprovider.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xasyncprovider.exe: xasyncprovider.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xdisplay.obj: xdisplay.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xdisplay.exe: xdisplay.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xerror.obj: xerror.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xerror.exe: xerror.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgame.obj: xgame.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgame.exe: xgame.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgameactivation.obj: xgameactivation.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgameactivation.exe: xgameactivation.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgameevent.obj: xgameevent.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgameevent.exe: xgameevent.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgameinvite.obj: xgameinvite.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgameinvite.exe: xgameinvite.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgameprotocol.obj: xgameprotocol.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgameprotocol.exe: xgameprotocol.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgameruntimefeature.obj: xgameruntimefeature.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgameruntimefeature.exe: xgameruntimefeature.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgameruntimeinit.obj: xgameruntimeinit.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgameruntimeinit.exe: xgameruntimeinit.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgamesave.obj: xgamesave.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgamesave.exe: xgamesave.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgamesavefiles.obj: xgamesavefiles.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgamesavefiles.exe: xgamesavefiles.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgamestreaming.obj: xgamestreaming.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgamestreaming.exe: xgamestreaming.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xgameui.obj: xgameui.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xgameui.exe: xgameui.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xlauncher.obj: xlauncher.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xlauncher.exe: xlauncher.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xnetworking.obj: xnetworking.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xnetworking.exe: xnetworking.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xpackage.obj: xpackage.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xpackage.exe: xpackage.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xpersistentlocalstorage.obj: xpersistentlocalstorage.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xpersistentlocalstorage.exe: xpersistentlocalstorage.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xspeechsynthesis.obj: xspeechsynthesis.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xspeechsynthesis.exe: xspeechsynthesis.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xstore.obj: xstore.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xstore.exe: xstore.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xsystem.obj: xsystem.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xsystem.exe: xsystem.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xtaskqueue.obj: xtaskqueue.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xtaskqueue.exe: xtaskqueue.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xthread.obj: xthread.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xthread.exe: xthread.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
xuser.obj: xuser.cpp
	$(CXX) /Fo$@ /c $^ /EHsc $(CXXFLAGS)
xuser.exe: xuser.obj
	$(LD) /OUT:$@ $^ advapi32.lib xgameruntime.lib $(LDFLAGS)
