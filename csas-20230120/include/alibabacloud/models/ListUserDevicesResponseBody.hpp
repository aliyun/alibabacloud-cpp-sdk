// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEVICESRESPONSEBODY_HPP_
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
  class ListUserDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Devices, devices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Devices, devices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListUserDevicesResponseBody() = default ;
    ListUserDevicesResponseBody(const ListUserDevicesResponseBody &) = default ;
    ListUserDevicesResponseBody(ListUserDevicesResponseBody &&) = default ;
    ListUserDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDevicesResponseBody() = default ;
    ListUserDevicesResponseBody& operator=(const ListUserDevicesResponseBody &) = default ;
    ListUserDevicesResponseBody& operator=(ListUserDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Devices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Devices& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Devices& obj) { 
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
      Devices() = default ;
      Devices(const Devices &) = default ;
      Devices(Devices &&) = default ;
      Devices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Devices() = default ;
      Devices& operator=(const Devices &) = default ;
      Devices& operator=(Devices &&) = default ;
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

      virtual bool empty() const override { return this->appStatus_ == nullptr
        && this->appVersion_ == nullptr && this->autoLoginStatus_ == nullptr && this->CPU_ == nullptr && this->createTime_ == nullptr && this->department_ == nullptr
        && this->deviceBelong_ == nullptr && this->deviceModel_ == nullptr && this->deviceStatus_ == nullptr && this->deviceTag_ == nullptr && this->deviceType_ == nullptr
        && this->deviceVersion_ == nullptr && this->disk_ == nullptr && this->dlpStatus_ == nullptr && this->edrStatus_ == nullptr && this->hostname_ == nullptr
        && this->iaStatus_ == nullptr && this->innerIP_ == nullptr && this->mac_ == nullptr && this->matchDeviceGroupIds_ == nullptr && this->memory_ == nullptr
        && this->nacStatus_ == nullptr && this->netInterfaceInfo_ == nullptr && this->paStatus_ == nullptr && this->saseUserId_ == nullptr && this->sharingStatus_ == nullptr
        && this->snBaseBoard_ == nullptr && this->snBios_ == nullptr && this->snDiskDrive_ == nullptr && this->snProcessor_ == nullptr && this->snSystem_ == nullptr
        && this->srcIP_ == nullptr && this->updateTime_ == nullptr && this->username_ == nullptr && this->workshop_ == nullptr; };
      // appStatus Field Functions 
      bool hasAppStatus() const { return this->appStatus_ != nullptr;};
      void deleteAppStatus() { this->appStatus_ = nullptr;};
      inline string getAppStatus() const { DARABONBA_PTR_GET_DEFAULT(appStatus_, "") };
      inline Devices& setAppStatus(string appStatus) { DARABONBA_PTR_SET_VALUE(appStatus_, appStatus) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline Devices& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // autoLoginStatus Field Functions 
      bool hasAutoLoginStatus() const { return this->autoLoginStatus_ != nullptr;};
      void deleteAutoLoginStatus() { this->autoLoginStatus_ = nullptr;};
      inline string getAutoLoginStatus() const { DARABONBA_PTR_GET_DEFAULT(autoLoginStatus_, "") };
      inline Devices& setAutoLoginStatus(string autoLoginStatus) { DARABONBA_PTR_SET_VALUE(autoLoginStatus_, autoLoginStatus) };


      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
      inline Devices& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Devices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline Devices& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // deviceBelong Field Functions 
      bool hasDeviceBelong() const { return this->deviceBelong_ != nullptr;};
      void deleteDeviceBelong() { this->deviceBelong_ = nullptr;};
      inline string getDeviceBelong() const { DARABONBA_PTR_GET_DEFAULT(deviceBelong_, "") };
      inline Devices& setDeviceBelong(string deviceBelong) { DARABONBA_PTR_SET_VALUE(deviceBelong_, deviceBelong) };


      // deviceModel Field Functions 
      bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
      void deleteDeviceModel() { this->deviceModel_ = nullptr;};
      inline string getDeviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
      inline Devices& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


      // deviceStatus Field Functions 
      bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
      void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
      inline string getDeviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
      inline Devices& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


      // deviceTag Field Functions 
      bool hasDeviceTag() const { return this->deviceTag_ != nullptr;};
      void deleteDeviceTag() { this->deviceTag_ = nullptr;};
      inline string getDeviceTag() const { DARABONBA_PTR_GET_DEFAULT(deviceTag_, "") };
      inline Devices& setDeviceTag(string deviceTag) { DARABONBA_PTR_SET_VALUE(deviceTag_, deviceTag) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline Devices& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // deviceVersion Field Functions 
      bool hasDeviceVersion() const { return this->deviceVersion_ != nullptr;};
      void deleteDeviceVersion() { this->deviceVersion_ = nullptr;};
      inline string getDeviceVersion() const { DARABONBA_PTR_GET_DEFAULT(deviceVersion_, "") };
      inline Devices& setDeviceVersion(string deviceVersion) { DARABONBA_PTR_SET_VALUE(deviceVersion_, deviceVersion) };


      // disk Field Functions 
      bool hasDisk() const { return this->disk_ != nullptr;};
      void deleteDisk() { this->disk_ = nullptr;};
      inline string getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, "") };
      inline Devices& setDisk(string disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


      // dlpStatus Field Functions 
      bool hasDlpStatus() const { return this->dlpStatus_ != nullptr;};
      void deleteDlpStatus() { this->dlpStatus_ = nullptr;};
      inline string getDlpStatus() const { DARABONBA_PTR_GET_DEFAULT(dlpStatus_, "") };
      inline Devices& setDlpStatus(string dlpStatus) { DARABONBA_PTR_SET_VALUE(dlpStatus_, dlpStatus) };


      // edrStatus Field Functions 
      bool hasEdrStatus() const { return this->edrStatus_ != nullptr;};
      void deleteEdrStatus() { this->edrStatus_ = nullptr;};
      inline string getEdrStatus() const { DARABONBA_PTR_GET_DEFAULT(edrStatus_, "") };
      inline Devices& setEdrStatus(string edrStatus) { DARABONBA_PTR_SET_VALUE(edrStatus_, edrStatus) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Devices& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // iaStatus Field Functions 
      bool hasIaStatus() const { return this->iaStatus_ != nullptr;};
      void deleteIaStatus() { this->iaStatus_ = nullptr;};
      inline string getIaStatus() const { DARABONBA_PTR_GET_DEFAULT(iaStatus_, "") };
      inline Devices& setIaStatus(string iaStatus) { DARABONBA_PTR_SET_VALUE(iaStatus_, iaStatus) };


      // innerIP Field Functions 
      bool hasInnerIP() const { return this->innerIP_ != nullptr;};
      void deleteInnerIP() { this->innerIP_ = nullptr;};
      inline string getInnerIP() const { DARABONBA_PTR_GET_DEFAULT(innerIP_, "") };
      inline Devices& setInnerIP(string innerIP) { DARABONBA_PTR_SET_VALUE(innerIP_, innerIP) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline Devices& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // matchDeviceGroupIds Field Functions 
      bool hasMatchDeviceGroupIds() const { return this->matchDeviceGroupIds_ != nullptr;};
      void deleteMatchDeviceGroupIds() { this->matchDeviceGroupIds_ = nullptr;};
      inline const vector<string> & getMatchDeviceGroupIds() const { DARABONBA_PTR_GET_CONST(matchDeviceGroupIds_, vector<string>) };
      inline vector<string> getMatchDeviceGroupIds() { DARABONBA_PTR_GET(matchDeviceGroupIds_, vector<string>) };
      inline Devices& setMatchDeviceGroupIds(const vector<string> & matchDeviceGroupIds) { DARABONBA_PTR_SET_VALUE(matchDeviceGroupIds_, matchDeviceGroupIds) };
      inline Devices& setMatchDeviceGroupIds(vector<string> && matchDeviceGroupIds) { DARABONBA_PTR_SET_RVALUE(matchDeviceGroupIds_, matchDeviceGroupIds) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline Devices& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // nacStatus Field Functions 
      bool hasNacStatus() const { return this->nacStatus_ != nullptr;};
      void deleteNacStatus() { this->nacStatus_ = nullptr;};
      inline string getNacStatus() const { DARABONBA_PTR_GET_DEFAULT(nacStatus_, "") };
      inline Devices& setNacStatus(string nacStatus) { DARABONBA_PTR_SET_VALUE(nacStatus_, nacStatus) };


      // netInterfaceInfo Field Functions 
      bool hasNetInterfaceInfo() const { return this->netInterfaceInfo_ != nullptr;};
      void deleteNetInterfaceInfo() { this->netInterfaceInfo_ = nullptr;};
      inline const vector<Devices::NetInterfaceInfo> & getNetInterfaceInfo() const { DARABONBA_PTR_GET_CONST(netInterfaceInfo_, vector<Devices::NetInterfaceInfo>) };
      inline vector<Devices::NetInterfaceInfo> getNetInterfaceInfo() { DARABONBA_PTR_GET(netInterfaceInfo_, vector<Devices::NetInterfaceInfo>) };
      inline Devices& setNetInterfaceInfo(const vector<Devices::NetInterfaceInfo> & netInterfaceInfo) { DARABONBA_PTR_SET_VALUE(netInterfaceInfo_, netInterfaceInfo) };
      inline Devices& setNetInterfaceInfo(vector<Devices::NetInterfaceInfo> && netInterfaceInfo) { DARABONBA_PTR_SET_RVALUE(netInterfaceInfo_, netInterfaceInfo) };


      // paStatus Field Functions 
      bool hasPaStatus() const { return this->paStatus_ != nullptr;};
      void deletePaStatus() { this->paStatus_ = nullptr;};
      inline string getPaStatus() const { DARABONBA_PTR_GET_DEFAULT(paStatus_, "") };
      inline Devices& setPaStatus(string paStatus) { DARABONBA_PTR_SET_VALUE(paStatus_, paStatus) };


      // saseUserId Field Functions 
      bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
      void deleteSaseUserId() { this->saseUserId_ = nullptr;};
      inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
      inline Devices& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


      // sharingStatus Field Functions 
      bool hasSharingStatus() const { return this->sharingStatus_ != nullptr;};
      void deleteSharingStatus() { this->sharingStatus_ = nullptr;};
      inline bool getSharingStatus() const { DARABONBA_PTR_GET_DEFAULT(sharingStatus_, false) };
      inline Devices& setSharingStatus(bool sharingStatus) { DARABONBA_PTR_SET_VALUE(sharingStatus_, sharingStatus) };


      // snBaseBoard Field Functions 
      bool hasSnBaseBoard() const { return this->snBaseBoard_ != nullptr;};
      void deleteSnBaseBoard() { this->snBaseBoard_ = nullptr;};
      inline string getSnBaseBoard() const { DARABONBA_PTR_GET_DEFAULT(snBaseBoard_, "") };
      inline Devices& setSnBaseBoard(string snBaseBoard) { DARABONBA_PTR_SET_VALUE(snBaseBoard_, snBaseBoard) };


      // snBios Field Functions 
      bool hasSnBios() const { return this->snBios_ != nullptr;};
      void deleteSnBios() { this->snBios_ = nullptr;};
      inline string getSnBios() const { DARABONBA_PTR_GET_DEFAULT(snBios_, "") };
      inline Devices& setSnBios(string snBios) { DARABONBA_PTR_SET_VALUE(snBios_, snBios) };


      // snDiskDrive Field Functions 
      bool hasSnDiskDrive() const { return this->snDiskDrive_ != nullptr;};
      void deleteSnDiskDrive() { this->snDiskDrive_ = nullptr;};
      inline string getSnDiskDrive() const { DARABONBA_PTR_GET_DEFAULT(snDiskDrive_, "") };
      inline Devices& setSnDiskDrive(string snDiskDrive) { DARABONBA_PTR_SET_VALUE(snDiskDrive_, snDiskDrive) };


      // snProcessor Field Functions 
      bool hasSnProcessor() const { return this->snProcessor_ != nullptr;};
      void deleteSnProcessor() { this->snProcessor_ = nullptr;};
      inline string getSnProcessor() const { DARABONBA_PTR_GET_DEFAULT(snProcessor_, "") };
      inline Devices& setSnProcessor(string snProcessor) { DARABONBA_PTR_SET_VALUE(snProcessor_, snProcessor) };


      // snSystem Field Functions 
      bool hasSnSystem() const { return this->snSystem_ != nullptr;};
      void deleteSnSystem() { this->snSystem_ = nullptr;};
      inline string getSnSystem() const { DARABONBA_PTR_GET_DEFAULT(snSystem_, "") };
      inline Devices& setSnSystem(string snSystem) { DARABONBA_PTR_SET_VALUE(snSystem_, snSystem) };


      // srcIP Field Functions 
      bool hasSrcIP() const { return this->srcIP_ != nullptr;};
      void deleteSrcIP() { this->srcIP_ = nullptr;};
      inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
      inline Devices& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Devices& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Devices& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      // workshop Field Functions 
      bool hasWorkshop() const { return this->workshop_ != nullptr;};
      void deleteWorkshop() { this->workshop_ = nullptr;};
      inline string getWorkshop() const { DARABONBA_PTR_GET_DEFAULT(workshop_, "") };
      inline Devices& setWorkshop(string workshop) { DARABONBA_PTR_SET_VALUE(workshop_, workshop) };


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
      shared_ptr<string> hostname_ {};
      shared_ptr<string> iaStatus_ {};
      shared_ptr<string> innerIP_ {};
      shared_ptr<string> mac_ {};
      shared_ptr<vector<string>> matchDeviceGroupIds_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<string> nacStatus_ {};
      shared_ptr<vector<Devices::NetInterfaceInfo>> netInterfaceInfo_ {};
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

    virtual bool empty() const override { return this->devices_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<ListUserDevicesResponseBody::Devices> & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, vector<ListUserDevicesResponseBody::Devices>) };
    inline vector<ListUserDevicesResponseBody::Devices> getDevices() { DARABONBA_PTR_GET(devices_, vector<ListUserDevicesResponseBody::Devices>) };
    inline ListUserDevicesResponseBody& setDevices(const vector<ListUserDevicesResponseBody::Devices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline ListUserDevicesResponseBody& setDevices(vector<ListUserDevicesResponseBody::Devices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListUserDevicesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    shared_ptr<vector<ListUserDevicesResponseBody::Devices>> devices_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
