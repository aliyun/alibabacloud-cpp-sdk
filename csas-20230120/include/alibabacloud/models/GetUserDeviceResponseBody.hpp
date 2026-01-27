// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERDEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERDEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetUserDeviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserDeviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserDeviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUserDeviceResponseBody() = default ;
    GetUserDeviceResponseBody(const GetUserDeviceResponseBody &) = default ;
    GetUserDeviceResponseBody(GetUserDeviceResponseBody &&) = default ;
    GetUserDeviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserDeviceResponseBody() = default ;
    GetUserDeviceResponseBody& operator=(const GetUserDeviceResponseBody &) = default ;
    GetUserDeviceResponseBody& operator=(GetUserDeviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Device : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Device& obj) { 
        DARABONBA_PTR_TO_JSON(AppStatus, appStatus_);
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(AutoLoginStatus, autoLoginStatus_);
        DARABONBA_PTR_TO_JSON(CPU, CPU_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Department, department_);
        DARABONBA_PTR_TO_JSON(DeviceBelong, deviceBelong_);
        DARABONBA_PTR_TO_JSON(DeviceModel, deviceModel_);
        DARABONBA_PTR_TO_JSON(DeviceStatus, deviceStatus_);
        DARABONBA_PTR_TO_JSON(DeviceTag, deviceTag_);
        DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_TO_JSON(DeviceVersion, deviceVersion_);
        DARABONBA_PTR_TO_JSON(Disk, disk_);
        DARABONBA_PTR_TO_JSON(DlpStatus, dlpStatus_);
        DARABONBA_PTR_TO_JSON(EdrStatus, edrStatus_);
        DARABONBA_PTR_TO_JSON(HistoryUsers, historyUsers_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(IaStatus, iaStatus_);
        DARABONBA_PTR_TO_JSON(InnerIP, innerIP_);
        DARABONBA_PTR_TO_JSON(Mac, mac_);
        DARABONBA_PTR_TO_JSON(MatchDeviceGroupIds, matchDeviceGroupIds_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NacStatus, nacStatus_);
        DARABONBA_PTR_TO_JSON(NetInterfaceInfo, netInterfaceInfo_);
        DARABONBA_PTR_TO_JSON(PaStatus, paStatus_);
        DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
        DARABONBA_PTR_TO_JSON(SharingStatus, sharingStatus_);
        DARABONBA_PTR_TO_JSON(SnBaseBoard, snBaseBoard_);
        DARABONBA_PTR_TO_JSON(SnBios, snBios_);
        DARABONBA_PTR_TO_JSON(SnDiskDrive, snDiskDrive_);
        DARABONBA_PTR_TO_JSON(SnProcessor, snProcessor_);
        DARABONBA_PTR_TO_JSON(SnSystem, snSystem_);
        DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(Username, username_);
        DARABONBA_PTR_TO_JSON(Workshop, workshop_);
      };
      friend void from_json(const Darabonba::Json& j, Device& obj) { 
        DARABONBA_PTR_FROM_JSON(AppStatus, appStatus_);
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(AutoLoginStatus, autoLoginStatus_);
        DARABONBA_PTR_FROM_JSON(CPU, CPU_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Department, department_);
        DARABONBA_PTR_FROM_JSON(DeviceBelong, deviceBelong_);
        DARABONBA_PTR_FROM_JSON(DeviceModel, deviceModel_);
        DARABONBA_PTR_FROM_JSON(DeviceStatus, deviceStatus_);
        DARABONBA_PTR_FROM_JSON(DeviceTag, deviceTag_);
        DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_FROM_JSON(DeviceVersion, deviceVersion_);
        DARABONBA_PTR_FROM_JSON(Disk, disk_);
        DARABONBA_PTR_FROM_JSON(DlpStatus, dlpStatus_);
        DARABONBA_PTR_FROM_JSON(EdrStatus, edrStatus_);
        DARABONBA_PTR_FROM_JSON(HistoryUsers, historyUsers_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(IaStatus, iaStatus_);
        DARABONBA_PTR_FROM_JSON(InnerIP, innerIP_);
        DARABONBA_PTR_FROM_JSON(Mac, mac_);
        DARABONBA_PTR_FROM_JSON(MatchDeviceGroupIds, matchDeviceGroupIds_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NacStatus, nacStatus_);
        DARABONBA_PTR_FROM_JSON(NetInterfaceInfo, netInterfaceInfo_);
        DARABONBA_PTR_FROM_JSON(PaStatus, paStatus_);
        DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
        DARABONBA_PTR_FROM_JSON(SharingStatus, sharingStatus_);
        DARABONBA_PTR_FROM_JSON(SnBaseBoard, snBaseBoard_);
        DARABONBA_PTR_FROM_JSON(SnBios, snBios_);
        DARABONBA_PTR_FROM_JSON(SnDiskDrive, snDiskDrive_);
        DARABONBA_PTR_FROM_JSON(SnProcessor, snProcessor_);
        DARABONBA_PTR_FROM_JSON(SnSystem, snSystem_);
        DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
        DARABONBA_PTR_FROM_JSON(Workshop, workshop_);
      };
      Device() = default ;
      Device(const Device &) = default ;
      Device(Device &&) = default ;
      Device(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Device() = default ;
      Device& operator=(const Device &) = default ;
      Device& operator=(Device &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetInterfaceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetInterfaceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Mac, mac_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, NetInterfaceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Mac, mac_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        NetInterfaceInfo() = default ;
        NetInterfaceInfo(const NetInterfaceInfo &) = default ;
        NetInterfaceInfo(NetInterfaceInfo &&) = default ;
        NetInterfaceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetInterfaceInfo() = default ;
        NetInterfaceInfo& operator=(const NetInterfaceInfo &) = default ;
        NetInterfaceInfo& operator=(NetInterfaceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mac_ == nullptr
        && this->name_ == nullptr; };
        // mac Field Functions 
        bool hasMac() const { return this->mac_ != nullptr;};
        void deleteMac() { this->mac_ = nullptr;};
        inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
        inline NetInterfaceInfo& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NetInterfaceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> mac_ {};
        shared_ptr<string> name_ {};
      };

      class HistoryUsers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HistoryUsers& obj) { 
          DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, HistoryUsers& obj) { 
          DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        HistoryUsers() = default ;
        HistoryUsers(const HistoryUsers &) = default ;
        HistoryUsers(HistoryUsers &&) = default ;
        HistoryUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HistoryUsers() = default ;
        HistoryUsers& operator=(const HistoryUsers &) = default ;
        HistoryUsers& operator=(HistoryUsers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->saseUserId_ == nullptr
        && this->username_ == nullptr; };
        // saseUserId Field Functions 
        bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
        void deleteSaseUserId() { this->saseUserId_ = nullptr;};
        inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
        inline HistoryUsers& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline HistoryUsers& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        shared_ptr<string> saseUserId_ {};
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->appStatus_ == nullptr
        && this->appVersion_ == nullptr && this->autoLoginStatus_ == nullptr && this->CPU_ == nullptr && this->createTime_ == nullptr && this->department_ == nullptr
        && this->deviceBelong_ == nullptr && this->deviceModel_ == nullptr && this->deviceStatus_ == nullptr && this->deviceTag_ == nullptr && this->deviceType_ == nullptr
        && this->deviceVersion_ == nullptr && this->disk_ == nullptr && this->dlpStatus_ == nullptr && this->edrStatus_ == nullptr && this->historyUsers_ == nullptr
        && this->hostname_ == nullptr && this->iaStatus_ == nullptr && this->innerIP_ == nullptr && this->mac_ == nullptr && this->matchDeviceGroupIds_ == nullptr
        && this->memory_ == nullptr && this->nacStatus_ == nullptr && this->netInterfaceInfo_ == nullptr && this->paStatus_ == nullptr && this->saseUserId_ == nullptr
        && this->sharingStatus_ == nullptr && this->snBaseBoard_ == nullptr && this->snBios_ == nullptr && this->snDiskDrive_ == nullptr && this->snProcessor_ == nullptr
        && this->snSystem_ == nullptr && this->srcIP_ == nullptr && this->updateTime_ == nullptr && this->username_ == nullptr && this->workshop_ == nullptr; };
      // appStatus Field Functions 
      bool hasAppStatus() const { return this->appStatus_ != nullptr;};
      void deleteAppStatus() { this->appStatus_ = nullptr;};
      inline string getAppStatus() const { DARABONBA_PTR_GET_DEFAULT(appStatus_, "") };
      inline Device& setAppStatus(string appStatus) { DARABONBA_PTR_SET_VALUE(appStatus_, appStatus) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline Device& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // autoLoginStatus Field Functions 
      bool hasAutoLoginStatus() const { return this->autoLoginStatus_ != nullptr;};
      void deleteAutoLoginStatus() { this->autoLoginStatus_ = nullptr;};
      inline string getAutoLoginStatus() const { DARABONBA_PTR_GET_DEFAULT(autoLoginStatus_, "") };
      inline Device& setAutoLoginStatus(string autoLoginStatus) { DARABONBA_PTR_SET_VALUE(autoLoginStatus_, autoLoginStatus) };


      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
      inline Device& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Device& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline Device& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // deviceBelong Field Functions 
      bool hasDeviceBelong() const { return this->deviceBelong_ != nullptr;};
      void deleteDeviceBelong() { this->deviceBelong_ = nullptr;};
      inline string getDeviceBelong() const { DARABONBA_PTR_GET_DEFAULT(deviceBelong_, "") };
      inline Device& setDeviceBelong(string deviceBelong) { DARABONBA_PTR_SET_VALUE(deviceBelong_, deviceBelong) };


      // deviceModel Field Functions 
      bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
      void deleteDeviceModel() { this->deviceModel_ = nullptr;};
      inline string getDeviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
      inline Device& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


      // deviceStatus Field Functions 
      bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
      void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
      inline string getDeviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
      inline Device& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


      // deviceTag Field Functions 
      bool hasDeviceTag() const { return this->deviceTag_ != nullptr;};
      void deleteDeviceTag() { this->deviceTag_ = nullptr;};
      inline string getDeviceTag() const { DARABONBA_PTR_GET_DEFAULT(deviceTag_, "") };
      inline Device& setDeviceTag(string deviceTag) { DARABONBA_PTR_SET_VALUE(deviceTag_, deviceTag) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline Device& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // deviceVersion Field Functions 
      bool hasDeviceVersion() const { return this->deviceVersion_ != nullptr;};
      void deleteDeviceVersion() { this->deviceVersion_ = nullptr;};
      inline string getDeviceVersion() const { DARABONBA_PTR_GET_DEFAULT(deviceVersion_, "") };
      inline Device& setDeviceVersion(string deviceVersion) { DARABONBA_PTR_SET_VALUE(deviceVersion_, deviceVersion) };


      // disk Field Functions 
      bool hasDisk() const { return this->disk_ != nullptr;};
      void deleteDisk() { this->disk_ = nullptr;};
      inline string getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, "") };
      inline Device& setDisk(string disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


      // dlpStatus Field Functions 
      bool hasDlpStatus() const { return this->dlpStatus_ != nullptr;};
      void deleteDlpStatus() { this->dlpStatus_ = nullptr;};
      inline string getDlpStatus() const { DARABONBA_PTR_GET_DEFAULT(dlpStatus_, "") };
      inline Device& setDlpStatus(string dlpStatus) { DARABONBA_PTR_SET_VALUE(dlpStatus_, dlpStatus) };


      // edrStatus Field Functions 
      bool hasEdrStatus() const { return this->edrStatus_ != nullptr;};
      void deleteEdrStatus() { this->edrStatus_ = nullptr;};
      inline string getEdrStatus() const { DARABONBA_PTR_GET_DEFAULT(edrStatus_, "") };
      inline Device& setEdrStatus(string edrStatus) { DARABONBA_PTR_SET_VALUE(edrStatus_, edrStatus) };


      // historyUsers Field Functions 
      bool hasHistoryUsers() const { return this->historyUsers_ != nullptr;};
      void deleteHistoryUsers() { this->historyUsers_ = nullptr;};
      inline const vector<Device::HistoryUsers> & getHistoryUsers() const { DARABONBA_PTR_GET_CONST(historyUsers_, vector<Device::HistoryUsers>) };
      inline vector<Device::HistoryUsers> getHistoryUsers() { DARABONBA_PTR_GET(historyUsers_, vector<Device::HistoryUsers>) };
      inline Device& setHistoryUsers(const vector<Device::HistoryUsers> & historyUsers) { DARABONBA_PTR_SET_VALUE(historyUsers_, historyUsers) };
      inline Device& setHistoryUsers(vector<Device::HistoryUsers> && historyUsers) { DARABONBA_PTR_SET_RVALUE(historyUsers_, historyUsers) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Device& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // iaStatus Field Functions 
      bool hasIaStatus() const { return this->iaStatus_ != nullptr;};
      void deleteIaStatus() { this->iaStatus_ = nullptr;};
      inline string getIaStatus() const { DARABONBA_PTR_GET_DEFAULT(iaStatus_, "") };
      inline Device& setIaStatus(string iaStatus) { DARABONBA_PTR_SET_VALUE(iaStatus_, iaStatus) };


      // innerIP Field Functions 
      bool hasInnerIP() const { return this->innerIP_ != nullptr;};
      void deleteInnerIP() { this->innerIP_ = nullptr;};
      inline string getInnerIP() const { DARABONBA_PTR_GET_DEFAULT(innerIP_, "") };
      inline Device& setInnerIP(string innerIP) { DARABONBA_PTR_SET_VALUE(innerIP_, innerIP) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline Device& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // matchDeviceGroupIds Field Functions 
      bool hasMatchDeviceGroupIds() const { return this->matchDeviceGroupIds_ != nullptr;};
      void deleteMatchDeviceGroupIds() { this->matchDeviceGroupIds_ = nullptr;};
      inline const vector<string> & getMatchDeviceGroupIds() const { DARABONBA_PTR_GET_CONST(matchDeviceGroupIds_, vector<string>) };
      inline vector<string> getMatchDeviceGroupIds() { DARABONBA_PTR_GET(matchDeviceGroupIds_, vector<string>) };
      inline Device& setMatchDeviceGroupIds(const vector<string> & matchDeviceGroupIds) { DARABONBA_PTR_SET_VALUE(matchDeviceGroupIds_, matchDeviceGroupIds) };
      inline Device& setMatchDeviceGroupIds(vector<string> && matchDeviceGroupIds) { DARABONBA_PTR_SET_RVALUE(matchDeviceGroupIds_, matchDeviceGroupIds) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline Device& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // nacStatus Field Functions 
      bool hasNacStatus() const { return this->nacStatus_ != nullptr;};
      void deleteNacStatus() { this->nacStatus_ = nullptr;};
      inline string getNacStatus() const { DARABONBA_PTR_GET_DEFAULT(nacStatus_, "") };
      inline Device& setNacStatus(string nacStatus) { DARABONBA_PTR_SET_VALUE(nacStatus_, nacStatus) };


      // netInterfaceInfo Field Functions 
      bool hasNetInterfaceInfo() const { return this->netInterfaceInfo_ != nullptr;};
      void deleteNetInterfaceInfo() { this->netInterfaceInfo_ = nullptr;};
      inline const vector<Device::NetInterfaceInfo> & getNetInterfaceInfo() const { DARABONBA_PTR_GET_CONST(netInterfaceInfo_, vector<Device::NetInterfaceInfo>) };
      inline vector<Device::NetInterfaceInfo> getNetInterfaceInfo() { DARABONBA_PTR_GET(netInterfaceInfo_, vector<Device::NetInterfaceInfo>) };
      inline Device& setNetInterfaceInfo(const vector<Device::NetInterfaceInfo> & netInterfaceInfo) { DARABONBA_PTR_SET_VALUE(netInterfaceInfo_, netInterfaceInfo) };
      inline Device& setNetInterfaceInfo(vector<Device::NetInterfaceInfo> && netInterfaceInfo) { DARABONBA_PTR_SET_RVALUE(netInterfaceInfo_, netInterfaceInfo) };


      // paStatus Field Functions 
      bool hasPaStatus() const { return this->paStatus_ != nullptr;};
      void deletePaStatus() { this->paStatus_ = nullptr;};
      inline string getPaStatus() const { DARABONBA_PTR_GET_DEFAULT(paStatus_, "") };
      inline Device& setPaStatus(string paStatus) { DARABONBA_PTR_SET_VALUE(paStatus_, paStatus) };


      // saseUserId Field Functions 
      bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
      void deleteSaseUserId() { this->saseUserId_ = nullptr;};
      inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
      inline Device& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


      // sharingStatus Field Functions 
      bool hasSharingStatus() const { return this->sharingStatus_ != nullptr;};
      void deleteSharingStatus() { this->sharingStatus_ = nullptr;};
      inline bool getSharingStatus() const { DARABONBA_PTR_GET_DEFAULT(sharingStatus_, false) };
      inline Device& setSharingStatus(bool sharingStatus) { DARABONBA_PTR_SET_VALUE(sharingStatus_, sharingStatus) };


      // snBaseBoard Field Functions 
      bool hasSnBaseBoard() const { return this->snBaseBoard_ != nullptr;};
      void deleteSnBaseBoard() { this->snBaseBoard_ = nullptr;};
      inline string getSnBaseBoard() const { DARABONBA_PTR_GET_DEFAULT(snBaseBoard_, "") };
      inline Device& setSnBaseBoard(string snBaseBoard) { DARABONBA_PTR_SET_VALUE(snBaseBoard_, snBaseBoard) };


      // snBios Field Functions 
      bool hasSnBios() const { return this->snBios_ != nullptr;};
      void deleteSnBios() { this->snBios_ = nullptr;};
      inline string getSnBios() const { DARABONBA_PTR_GET_DEFAULT(snBios_, "") };
      inline Device& setSnBios(string snBios) { DARABONBA_PTR_SET_VALUE(snBios_, snBios) };


      // snDiskDrive Field Functions 
      bool hasSnDiskDrive() const { return this->snDiskDrive_ != nullptr;};
      void deleteSnDiskDrive() { this->snDiskDrive_ = nullptr;};
      inline string getSnDiskDrive() const { DARABONBA_PTR_GET_DEFAULT(snDiskDrive_, "") };
      inline Device& setSnDiskDrive(string snDiskDrive) { DARABONBA_PTR_SET_VALUE(snDiskDrive_, snDiskDrive) };


      // snProcessor Field Functions 
      bool hasSnProcessor() const { return this->snProcessor_ != nullptr;};
      void deleteSnProcessor() { this->snProcessor_ = nullptr;};
      inline string getSnProcessor() const { DARABONBA_PTR_GET_DEFAULT(snProcessor_, "") };
      inline Device& setSnProcessor(string snProcessor) { DARABONBA_PTR_SET_VALUE(snProcessor_, snProcessor) };


      // snSystem Field Functions 
      bool hasSnSystem() const { return this->snSystem_ != nullptr;};
      void deleteSnSystem() { this->snSystem_ = nullptr;};
      inline string getSnSystem() const { DARABONBA_PTR_GET_DEFAULT(snSystem_, "") };
      inline Device& setSnSystem(string snSystem) { DARABONBA_PTR_SET_VALUE(snSystem_, snSystem) };


      // srcIP Field Functions 
      bool hasSrcIP() const { return this->srcIP_ != nullptr;};
      void deleteSrcIP() { this->srcIP_ = nullptr;};
      inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
      inline Device& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Device& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Device& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      // workshop Field Functions 
      bool hasWorkshop() const { return this->workshop_ != nullptr;};
      void deleteWorkshop() { this->workshop_ = nullptr;};
      inline string getWorkshop() const { DARABONBA_PTR_GET_DEFAULT(workshop_, "") };
      inline Device& setWorkshop(string workshop) { DARABONBA_PTR_SET_VALUE(workshop_, workshop) };


    protected:
      shared_ptr<string> appStatus_ {};
      shared_ptr<string> appVersion_ {};
      shared_ptr<string> autoLoginStatus_ {};
      shared_ptr<string> CPU_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> department_ {};
      shared_ptr<string> deviceBelong_ {};
      shared_ptr<string> deviceModel_ {};
      shared_ptr<string> deviceStatus_ {};
      shared_ptr<string> deviceTag_ {};
      shared_ptr<string> deviceType_ {};
      shared_ptr<string> deviceVersion_ {};
      shared_ptr<string> disk_ {};
      shared_ptr<string> dlpStatus_ {};
      shared_ptr<string> edrStatus_ {};
      shared_ptr<vector<Device::HistoryUsers>> historyUsers_ {};
      shared_ptr<string> hostname_ {};
      shared_ptr<string> iaStatus_ {};
      shared_ptr<string> innerIP_ {};
      shared_ptr<string> mac_ {};
      shared_ptr<vector<string>> matchDeviceGroupIds_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<string> nacStatus_ {};
      shared_ptr<vector<Device::NetInterfaceInfo>> netInterfaceInfo_ {};
      shared_ptr<string> paStatus_ {};
      shared_ptr<string> saseUserId_ {};
      shared_ptr<bool> sharingStatus_ {};
      shared_ptr<string> snBaseBoard_ {};
      shared_ptr<string> snBios_ {};
      shared_ptr<string> snDiskDrive_ {};
      shared_ptr<string> snProcessor_ {};
      shared_ptr<string> snSystem_ {};
      shared_ptr<string> srcIP_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> username_ {};
      shared_ptr<string> workshop_ {};
    };

    virtual bool empty() const override { return this->device_ == nullptr
        && this->requestId_ == nullptr; };
    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline const GetUserDeviceResponseBody::Device & getDevice() const { DARABONBA_PTR_GET_CONST(device_, GetUserDeviceResponseBody::Device) };
    inline GetUserDeviceResponseBody::Device getDevice() { DARABONBA_PTR_GET(device_, GetUserDeviceResponseBody::Device) };
    inline GetUserDeviceResponseBody& setDevice(const GetUserDeviceResponseBody::Device & device) { DARABONBA_PTR_SET_VALUE(device_, device) };
    inline GetUserDeviceResponseBody& setDevice(GetUserDeviceResponseBody::Device && device) { DARABONBA_PTR_SET_RVALUE(device_, device) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserDeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetUserDeviceResponseBody::Device> device_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
