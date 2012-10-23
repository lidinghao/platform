//
//  BSystemPlatformService.h
//  platform
//
//  Created by li hao on 12-4-24.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#ifndef platform_BSystemPlatformService_h
#define platform_BSystemPlatformService_h
class BSystemPlatformService:public PlatformService{
public:
    bool allowStationRestart;
    string bajaHome;
    int currentCpuUsage;
    BEngineWatchdogPolicy engineWatchdogPolicy;
    BRelTime engineWatchdogTimeout;
    BVector filesystemAttributes;
    int freePhysicalMemory;
    String hostId;
    boolean isStation;
    boolean isStationAutoSaveEnabled ;
    String javaVmName ;
    String javaVmVendor ;
    String javaVmVersion;
    BDaemonAccessLevel localDaemonAccess;
    int localDaemonPort ;
    String locale;
    String model ;
    String niagaraVersion;
    int numCpus;
    String osArch;
    String osName;
    String osVersion;
    int overallCpuUsage;
    BRelTime stationAutoSaveFrequency ;
    String stationName 
    BPlatformAlarmProxy stationSaveAlarmProxy ;
    BPlatformAlarmSupport stationSaveAlarmSupport;
    int stationSaveBackupCount ;
    BAbsTime systemTime;
    BTimeZone timeZone;
    BDstSupportLevel timezoneDayModeSupport ;
    int totalPhysicalMemory ;
    void crashVM ( BPassword password);
    BVector getAllTimeZones () ;
    BString getFilesystemForPath ( BString filePathBody);
    void reboot ();
    void requestGarbageCollection ();
    void restartStation ();
    void sendThreadDumpToConsole ();
}


#endif
