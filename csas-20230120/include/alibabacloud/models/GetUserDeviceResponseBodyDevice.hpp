// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERDEVICERESPONSEBODYDEVICE_HPP_
#define ALIBABACLOUD_MODELS_GETUSERDEVICERESPONSEBODYDEVICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUserDeviceResponseBodyDeviceHistoryUsers.hpp>
#include <alibabacloud/models/GetUserDeviceResponseBodyDeviceNetInterfaceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetUserDeviceResponseBodyDevice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserDeviceResponseBodyDevice& obj) { 
      DARABONBA_PTR_TO_JSON(AppStatus, appStatus_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
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
    friend void from_json(const Darabonba::Json& j, GetUserDeviceResponseBodyDevice& obj) { 
      DARABONBA_PTR_FROM_JSON(AppStatus, appStatus_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
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
    GetUserDeviceResponseBodyDevice() = default ;
    GetUserDeviceResponseBodyDevice(const GetUserDeviceResponseBodyDevice &) = default ;
    GetUserDeviceResponseBodyDevice(GetUserDeviceResponseBodyDevice &&) = default ;
    GetUserDeviceResponseBodyDevice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserDeviceResponseBodyDevice() = default ;
    GetUserDeviceResponseBodyDevice& operator=(const GetUserDeviceResponseBodyDevice &) = default ;
    GetUserDeviceResponseBodyDevice& operator=(GetUserDeviceResponseBodyDevice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appStatus_ != nullptr
        && this->appVersion_ != nullptr && this->CPU_ != nullptr && this->createTime_ != nullptr && this->department_ != nullptr && this->deviceBelong_ != nullptr
        && this->deviceModel_ != nullptr && this->deviceStatus_ != nullptr && this->deviceTag_ != nullptr && this->deviceType_ != nullptr && this->deviceVersion_ != nullptr
        && this->disk_ != nullptr && this->dlpStatus_ != nullptr && this->edrStatus_ != nullptr && this->historyUsers_ != nullptr && this->hostname_ != nullptr
        && this->iaStatus_ != nullptr && this->innerIP_ != nullptr && this->mac_ != nullptr && this->matchDeviceGroupIds_ != nullptr && this->memory_ != nullptr
        && this->nacStatus_ != nullptr && this->netInterfaceInfo_ != nullptr && this->paStatus_ != nullptr && this->saseUserId_ != nullptr && this->sharingStatus_ != nullptr
        && this->snBaseBoard_ != nullptr && this->snBios_ != nullptr && this->snDiskDrive_ != nullptr && this->snProcessor_ != nullptr && this->snSystem_ != nullptr
        && this->srcIP_ != nullptr && this->updateTime_ != nullptr && this->username_ != nullptr && this->workshop_ != nullptr; };
    // appStatus Field Functions 
    bool hasAppStatus() const { return this->appStatus_ != nullptr;};
    void deleteAppStatus() { this->appStatus_ = nullptr;};
    inline string appStatus() const { DARABONBA_PTR_GET_DEFAULT(appStatus_, "") };
    inline GetUserDeviceResponseBodyDevice& setAppStatus(string appStatus) { DARABONBA_PTR_SET_VALUE(appStatus_, appStatus) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline GetUserDeviceResponseBodyDevice& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline GetUserDeviceResponseBodyDevice& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetUserDeviceResponseBodyDevice& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline GetUserDeviceResponseBodyDevice& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // deviceBelong Field Functions 
    bool hasDeviceBelong() const { return this->deviceBelong_ != nullptr;};
    void deleteDeviceBelong() { this->deviceBelong_ = nullptr;};
    inline string deviceBelong() const { DARABONBA_PTR_GET_DEFAULT(deviceBelong_, "") };
    inline GetUserDeviceResponseBodyDevice& setDeviceBelong(string deviceBelong) { DARABONBA_PTR_SET_VALUE(deviceBelong_, deviceBelong) };


    // deviceModel Field Functions 
    bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
    void deleteDeviceModel() { this->deviceModel_ = nullptr;};
    inline string deviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
    inline GetUserDeviceResponseBodyDevice& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


    // deviceStatus Field Functions 
    bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
    void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
    inline string deviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
    inline GetUserDeviceResponseBodyDevice& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


    // deviceTag Field Functions 
    bool hasDeviceTag() const { return this->deviceTag_ != nullptr;};
    void deleteDeviceTag() { this->deviceTag_ = nullptr;};
    inline string deviceTag() const { DARABONBA_PTR_GET_DEFAULT(deviceTag_, "") };
    inline GetUserDeviceResponseBodyDevice& setDeviceTag(string deviceTag) { DARABONBA_PTR_SET_VALUE(deviceTag_, deviceTag) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline GetUserDeviceResponseBodyDevice& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // deviceVersion Field Functions 
    bool hasDeviceVersion() const { return this->deviceVersion_ != nullptr;};
    void deleteDeviceVersion() { this->deviceVersion_ = nullptr;};
    inline string deviceVersion() const { DARABONBA_PTR_GET_DEFAULT(deviceVersion_, "") };
    inline GetUserDeviceResponseBodyDevice& setDeviceVersion(string deviceVersion) { DARABONBA_PTR_SET_VALUE(deviceVersion_, deviceVersion) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline string disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, "") };
    inline GetUserDeviceResponseBodyDevice& setDisk(string disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // dlpStatus Field Functions 
    bool hasDlpStatus() const { return this->dlpStatus_ != nullptr;};
    void deleteDlpStatus() { this->dlpStatus_ = nullptr;};
    inline string dlpStatus() const { DARABONBA_PTR_GET_DEFAULT(dlpStatus_, "") };
    inline GetUserDeviceResponseBodyDevice& setDlpStatus(string dlpStatus) { DARABONBA_PTR_SET_VALUE(dlpStatus_, dlpStatus) };


    // edrStatus Field Functions 
    bool hasEdrStatus() const { return this->edrStatus_ != nullptr;};
    void deleteEdrStatus() { this->edrStatus_ = nullptr;};
    inline string edrStatus() const { DARABONBA_PTR_GET_DEFAULT(edrStatus_, "") };
    inline GetUserDeviceResponseBodyDevice& setEdrStatus(string edrStatus) { DARABONBA_PTR_SET_VALUE(edrStatus_, edrStatus) };


    // historyUsers Field Functions 
    bool hasHistoryUsers() const { return this->historyUsers_ != nullptr;};
    void deleteHistoryUsers() { this->historyUsers_ = nullptr;};
    inline const vector<Models::GetUserDeviceResponseBodyDeviceHistoryUsers> & historyUsers() const { DARABONBA_PTR_GET_CONST(historyUsers_, vector<Models::GetUserDeviceResponseBodyDeviceHistoryUsers>) };
    inline vector<Models::GetUserDeviceResponseBodyDeviceHistoryUsers> historyUsers() { DARABONBA_PTR_GET(historyUsers_, vector<Models::GetUserDeviceResponseBodyDeviceHistoryUsers>) };
    inline GetUserDeviceResponseBodyDevice& setHistoryUsers(const vector<Models::GetUserDeviceResponseBodyDeviceHistoryUsers> & historyUsers) { DARABONBA_PTR_SET_VALUE(historyUsers_, historyUsers) };
    inline GetUserDeviceResponseBodyDevice& setHistoryUsers(vector<Models::GetUserDeviceResponseBodyDeviceHistoryUsers> && historyUsers) { DARABONBA_PTR_SET_RVALUE(historyUsers_, historyUsers) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline GetUserDeviceResponseBodyDevice& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // iaStatus Field Functions 
    bool hasIaStatus() const { return this->iaStatus_ != nullptr;};
    void deleteIaStatus() { this->iaStatus_ = nullptr;};
    inline string iaStatus() const { DARABONBA_PTR_GET_DEFAULT(iaStatus_, "") };
    inline GetUserDeviceResponseBodyDevice& setIaStatus(string iaStatus) { DARABONBA_PTR_SET_VALUE(iaStatus_, iaStatus) };


    // innerIP Field Functions 
    bool hasInnerIP() const { return this->innerIP_ != nullptr;};
    void deleteInnerIP() { this->innerIP_ = nullptr;};
    inline string innerIP() const { DARABONBA_PTR_GET_DEFAULT(innerIP_, "") };
    inline GetUserDeviceResponseBodyDevice& setInnerIP(string innerIP) { DARABONBA_PTR_SET_VALUE(innerIP_, innerIP) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline GetUserDeviceResponseBodyDevice& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // matchDeviceGroupIds Field Functions 
    bool hasMatchDeviceGroupIds() const { return this->matchDeviceGroupIds_ != nullptr;};
    void deleteMatchDeviceGroupIds() { this->matchDeviceGroupIds_ = nullptr;};
    inline const vector<string> & matchDeviceGroupIds() const { DARABONBA_PTR_GET_CONST(matchDeviceGroupIds_, vector<string>) };
    inline vector<string> matchDeviceGroupIds() { DARABONBA_PTR_GET(matchDeviceGroupIds_, vector<string>) };
    inline GetUserDeviceResponseBodyDevice& setMatchDeviceGroupIds(const vector<string> & matchDeviceGroupIds) { DARABONBA_PTR_SET_VALUE(matchDeviceGroupIds_, matchDeviceGroupIds) };
    inline GetUserDeviceResponseBodyDevice& setMatchDeviceGroupIds(vector<string> && matchDeviceGroupIds) { DARABONBA_PTR_SET_RVALUE(matchDeviceGroupIds_, matchDeviceGroupIds) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline GetUserDeviceResponseBodyDevice& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nacStatus Field Functions 
    bool hasNacStatus() const { return this->nacStatus_ != nullptr;};
    void deleteNacStatus() { this->nacStatus_ = nullptr;};
    inline string nacStatus() const { DARABONBA_PTR_GET_DEFAULT(nacStatus_, "") };
    inline GetUserDeviceResponseBodyDevice& setNacStatus(string nacStatus) { DARABONBA_PTR_SET_VALUE(nacStatus_, nacStatus) };


    // netInterfaceInfo Field Functions 
    bool hasNetInterfaceInfo() const { return this->netInterfaceInfo_ != nullptr;};
    void deleteNetInterfaceInfo() { this->netInterfaceInfo_ = nullptr;};
    inline const vector<Models::GetUserDeviceResponseBodyDeviceNetInterfaceInfo> & netInterfaceInfo() const { DARABONBA_PTR_GET_CONST(netInterfaceInfo_, vector<Models::GetUserDeviceResponseBodyDeviceNetInterfaceInfo>) };
    inline vector<Models::GetUserDeviceResponseBodyDeviceNetInterfaceInfo> netInterfaceInfo() { DARABONBA_PTR_GET(netInterfaceInfo_, vector<Models::GetUserDeviceResponseBodyDeviceNetInterfaceInfo>) };
    inline GetUserDeviceResponseBodyDevice& setNetInterfaceInfo(const vector<Models::GetUserDeviceResponseBodyDeviceNetInterfaceInfo> & netInterfaceInfo) { DARABONBA_PTR_SET_VALUE(netInterfaceInfo_, netInterfaceInfo) };
    inline GetUserDeviceResponseBodyDevice& setNetInterfaceInfo(vector<Models::GetUserDeviceResponseBodyDeviceNetInterfaceInfo> && netInterfaceInfo) { DARABONBA_PTR_SET_RVALUE(netInterfaceInfo_, netInterfaceInfo) };


    // paStatus Field Functions 
    bool hasPaStatus() const { return this->paStatus_ != nullptr;};
    void deletePaStatus() { this->paStatus_ = nullptr;};
    inline string paStatus() const { DARABONBA_PTR_GET_DEFAULT(paStatus_, "") };
    inline GetUserDeviceResponseBodyDevice& setPaStatus(string paStatus) { DARABONBA_PTR_SET_VALUE(paStatus_, paStatus) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline GetUserDeviceResponseBodyDevice& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // sharingStatus Field Functions 
    bool hasSharingStatus() const { return this->sharingStatus_ != nullptr;};
    void deleteSharingStatus() { this->sharingStatus_ = nullptr;};
    inline bool sharingStatus() const { DARABONBA_PTR_GET_DEFAULT(sharingStatus_, false) };
    inline GetUserDeviceResponseBodyDevice& setSharingStatus(bool sharingStatus) { DARABONBA_PTR_SET_VALUE(sharingStatus_, sharingStatus) };


    // snBaseBoard Field Functions 
    bool hasSnBaseBoard() const { return this->snBaseBoard_ != nullptr;};
    void deleteSnBaseBoard() { this->snBaseBoard_ = nullptr;};
    inline string snBaseBoard() const { DARABONBA_PTR_GET_DEFAULT(snBaseBoard_, "") };
    inline GetUserDeviceResponseBodyDevice& setSnBaseBoard(string snBaseBoard) { DARABONBA_PTR_SET_VALUE(snBaseBoard_, snBaseBoard) };


    // snBios Field Functions 
    bool hasSnBios() const { return this->snBios_ != nullptr;};
    void deleteSnBios() { this->snBios_ = nullptr;};
    inline string snBios() const { DARABONBA_PTR_GET_DEFAULT(snBios_, "") };
    inline GetUserDeviceResponseBodyDevice& setSnBios(string snBios) { DARABONBA_PTR_SET_VALUE(snBios_, snBios) };


    // snDiskDrive Field Functions 
    bool hasSnDiskDrive() const { return this->snDiskDrive_ != nullptr;};
    void deleteSnDiskDrive() { this->snDiskDrive_ = nullptr;};
    inline string snDiskDrive() const { DARABONBA_PTR_GET_DEFAULT(snDiskDrive_, "") };
    inline GetUserDeviceResponseBodyDevice& setSnDiskDrive(string snDiskDrive) { DARABONBA_PTR_SET_VALUE(snDiskDrive_, snDiskDrive) };


    // snProcessor Field Functions 
    bool hasSnProcessor() const { return this->snProcessor_ != nullptr;};
    void deleteSnProcessor() { this->snProcessor_ = nullptr;};
    inline string snProcessor() const { DARABONBA_PTR_GET_DEFAULT(snProcessor_, "") };
    inline GetUserDeviceResponseBodyDevice& setSnProcessor(string snProcessor) { DARABONBA_PTR_SET_VALUE(snProcessor_, snProcessor) };


    // snSystem Field Functions 
    bool hasSnSystem() const { return this->snSystem_ != nullptr;};
    void deleteSnSystem() { this->snSystem_ = nullptr;};
    inline string snSystem() const { DARABONBA_PTR_GET_DEFAULT(snSystem_, "") };
    inline GetUserDeviceResponseBodyDevice& setSnSystem(string snSystem) { DARABONBA_PTR_SET_VALUE(snSystem_, snSystem) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string srcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline GetUserDeviceResponseBodyDevice& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetUserDeviceResponseBodyDevice& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetUserDeviceResponseBodyDevice& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workshop Field Functions 
    bool hasWorkshop() const { return this->workshop_ != nullptr;};
    void deleteWorkshop() { this->workshop_ = nullptr;};
    inline string workshop() const { DARABONBA_PTR_GET_DEFAULT(workshop_, "") };
    inline GetUserDeviceResponseBodyDevice& setWorkshop(string workshop) { DARABONBA_PTR_SET_VALUE(workshop_, workshop) };


  protected:
    std::shared_ptr<string> appStatus_ = nullptr;
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<string> CPU_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> deviceBelong_ = nullptr;
    std::shared_ptr<string> deviceModel_ = nullptr;
    std::shared_ptr<string> deviceStatus_ = nullptr;
    std::shared_ptr<string> deviceTag_ = nullptr;
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<string> deviceVersion_ = nullptr;
    std::shared_ptr<string> disk_ = nullptr;
    std::shared_ptr<string> dlpStatus_ = nullptr;
    std::shared_ptr<string> edrStatus_ = nullptr;
    std::shared_ptr<vector<Models::GetUserDeviceResponseBodyDeviceHistoryUsers>> historyUsers_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> iaStatus_ = nullptr;
    std::shared_ptr<string> innerIP_ = nullptr;
    std::shared_ptr<string> mac_ = nullptr;
    std::shared_ptr<vector<string>> matchDeviceGroupIds_ = nullptr;
    std::shared_ptr<string> memory_ = nullptr;
    std::shared_ptr<string> nacStatus_ = nullptr;
    std::shared_ptr<vector<Models::GetUserDeviceResponseBodyDeviceNetInterfaceInfo>> netInterfaceInfo_ = nullptr;
    std::shared_ptr<string> paStatus_ = nullptr;
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<bool> sharingStatus_ = nullptr;
    std::shared_ptr<string> snBaseBoard_ = nullptr;
    std::shared_ptr<string> snBios_ = nullptr;
    std::shared_ptr<string> snDiskDrive_ = nullptr;
    std::shared_ptr<string> snProcessor_ = nullptr;
    std::shared_ptr<string> snSystem_ = nullptr;
    std::shared_ptr<string> srcIP_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<string> workshop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
