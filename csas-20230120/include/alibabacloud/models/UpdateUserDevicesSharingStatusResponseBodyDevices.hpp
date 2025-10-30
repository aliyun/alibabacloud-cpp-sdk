// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERDEVICESSHARINGSTATUSRESPONSEBODYDEVICES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERDEVICESSHARINGSTATUSRESPONSEBODYDEVICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateUserDevicesSharingStatusResponseBodyDevicesNetInterfaceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateUserDevicesSharingStatusResponseBodyDevices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserDevicesSharingStatusResponseBodyDevices& obj) { 
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
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(IaStatus, iaStatus_);
      DARABONBA_PTR_TO_JSON(InnerIP, innerIP_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NacStatus, nacStatus_);
      DARABONBA_PTR_TO_JSON(NetInterfaceInfo, netInterfaceInfo_);
      DARABONBA_PTR_TO_JSON(PaStatus, paStatus_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(SharingStatus, sharingStatus_);
      DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserDevicesSharingStatusResponseBodyDevices& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(IaStatus, iaStatus_);
      DARABONBA_PTR_FROM_JSON(InnerIP, innerIP_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NacStatus, nacStatus_);
      DARABONBA_PTR_FROM_JSON(NetInterfaceInfo, netInterfaceInfo_);
      DARABONBA_PTR_FROM_JSON(PaStatus, paStatus_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(SharingStatus, sharingStatus_);
      DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    UpdateUserDevicesSharingStatusResponseBodyDevices() = default ;
    UpdateUserDevicesSharingStatusResponseBodyDevices(const UpdateUserDevicesSharingStatusResponseBodyDevices &) = default ;
    UpdateUserDevicesSharingStatusResponseBodyDevices(UpdateUserDevicesSharingStatusResponseBodyDevices &&) = default ;
    UpdateUserDevicesSharingStatusResponseBodyDevices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserDevicesSharingStatusResponseBodyDevices() = default ;
    UpdateUserDevicesSharingStatusResponseBodyDevices& operator=(const UpdateUserDevicesSharingStatusResponseBodyDevices &) = default ;
    UpdateUserDevicesSharingStatusResponseBodyDevices& operator=(UpdateUserDevicesSharingStatusResponseBodyDevices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appStatus_ == nullptr
        && return this->appVersion_ == nullptr && return this->CPU_ == nullptr && return this->createTime_ == nullptr && return this->department_ == nullptr && return this->deviceBelong_ == nullptr
        && return this->deviceModel_ == nullptr && return this->deviceStatus_ == nullptr && return this->deviceTag_ == nullptr && return this->deviceType_ == nullptr && return this->deviceVersion_ == nullptr
        && return this->disk_ == nullptr && return this->dlpStatus_ == nullptr && return this->hostname_ == nullptr && return this->iaStatus_ == nullptr && return this->innerIP_ == nullptr
        && return this->mac_ == nullptr && return this->memory_ == nullptr && return this->nacStatus_ == nullptr && return this->netInterfaceInfo_ == nullptr && return this->paStatus_ == nullptr
        && return this->saseUserId_ == nullptr && return this->sharingStatus_ == nullptr && return this->srcIP_ == nullptr && return this->updateTime_ == nullptr && return this->username_ == nullptr; };
    // appStatus Field Functions 
    bool hasAppStatus() const { return this->appStatus_ != nullptr;};
    void deleteAppStatus() { this->appStatus_ = nullptr;};
    inline string appStatus() const { DARABONBA_PTR_GET_DEFAULT(appStatus_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setAppStatus(string appStatus) { DARABONBA_PTR_SET_VALUE(appStatus_, appStatus) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // deviceBelong Field Functions 
    bool hasDeviceBelong() const { return this->deviceBelong_ != nullptr;};
    void deleteDeviceBelong() { this->deviceBelong_ = nullptr;};
    inline string deviceBelong() const { DARABONBA_PTR_GET_DEFAULT(deviceBelong_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setDeviceBelong(string deviceBelong) { DARABONBA_PTR_SET_VALUE(deviceBelong_, deviceBelong) };


    // deviceModel Field Functions 
    bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
    void deleteDeviceModel() { this->deviceModel_ = nullptr;};
    inline string deviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


    // deviceStatus Field Functions 
    bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
    void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
    inline string deviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


    // deviceTag Field Functions 
    bool hasDeviceTag() const { return this->deviceTag_ != nullptr;};
    void deleteDeviceTag() { this->deviceTag_ = nullptr;};
    inline string deviceTag() const { DARABONBA_PTR_GET_DEFAULT(deviceTag_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setDeviceTag(string deviceTag) { DARABONBA_PTR_SET_VALUE(deviceTag_, deviceTag) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // deviceVersion Field Functions 
    bool hasDeviceVersion() const { return this->deviceVersion_ != nullptr;};
    void deleteDeviceVersion() { this->deviceVersion_ = nullptr;};
    inline string deviceVersion() const { DARABONBA_PTR_GET_DEFAULT(deviceVersion_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setDeviceVersion(string deviceVersion) { DARABONBA_PTR_SET_VALUE(deviceVersion_, deviceVersion) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline string disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setDisk(string disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // dlpStatus Field Functions 
    bool hasDlpStatus() const { return this->dlpStatus_ != nullptr;};
    void deleteDlpStatus() { this->dlpStatus_ = nullptr;};
    inline string dlpStatus() const { DARABONBA_PTR_GET_DEFAULT(dlpStatus_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setDlpStatus(string dlpStatus) { DARABONBA_PTR_SET_VALUE(dlpStatus_, dlpStatus) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // iaStatus Field Functions 
    bool hasIaStatus() const { return this->iaStatus_ != nullptr;};
    void deleteIaStatus() { this->iaStatus_ = nullptr;};
    inline string iaStatus() const { DARABONBA_PTR_GET_DEFAULT(iaStatus_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setIaStatus(string iaStatus) { DARABONBA_PTR_SET_VALUE(iaStatus_, iaStatus) };


    // innerIP Field Functions 
    bool hasInnerIP() const { return this->innerIP_ != nullptr;};
    void deleteInnerIP() { this->innerIP_ = nullptr;};
    inline string innerIP() const { DARABONBA_PTR_GET_DEFAULT(innerIP_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setInnerIP(string innerIP) { DARABONBA_PTR_SET_VALUE(innerIP_, innerIP) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nacStatus Field Functions 
    bool hasNacStatus() const { return this->nacStatus_ != nullptr;};
    void deleteNacStatus() { this->nacStatus_ = nullptr;};
    inline string nacStatus() const { DARABONBA_PTR_GET_DEFAULT(nacStatus_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setNacStatus(string nacStatus) { DARABONBA_PTR_SET_VALUE(nacStatus_, nacStatus) };


    // netInterfaceInfo Field Functions 
    bool hasNetInterfaceInfo() const { return this->netInterfaceInfo_ != nullptr;};
    void deleteNetInterfaceInfo() { this->netInterfaceInfo_ = nullptr;};
    inline const vector<Models::UpdateUserDevicesSharingStatusResponseBodyDevicesNetInterfaceInfo> & netInterfaceInfo() const { DARABONBA_PTR_GET_CONST(netInterfaceInfo_, vector<Models::UpdateUserDevicesSharingStatusResponseBodyDevicesNetInterfaceInfo>) };
    inline vector<Models::UpdateUserDevicesSharingStatusResponseBodyDevicesNetInterfaceInfo> netInterfaceInfo() { DARABONBA_PTR_GET(netInterfaceInfo_, vector<Models::UpdateUserDevicesSharingStatusResponseBodyDevicesNetInterfaceInfo>) };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setNetInterfaceInfo(const vector<Models::UpdateUserDevicesSharingStatusResponseBodyDevicesNetInterfaceInfo> & netInterfaceInfo) { DARABONBA_PTR_SET_VALUE(netInterfaceInfo_, netInterfaceInfo) };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setNetInterfaceInfo(vector<Models::UpdateUserDevicesSharingStatusResponseBodyDevicesNetInterfaceInfo> && netInterfaceInfo) { DARABONBA_PTR_SET_RVALUE(netInterfaceInfo_, netInterfaceInfo) };


    // paStatus Field Functions 
    bool hasPaStatus() const { return this->paStatus_ != nullptr;};
    void deletePaStatus() { this->paStatus_ = nullptr;};
    inline string paStatus() const { DARABONBA_PTR_GET_DEFAULT(paStatus_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setPaStatus(string paStatus) { DARABONBA_PTR_SET_VALUE(paStatus_, paStatus) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // sharingStatus Field Functions 
    bool hasSharingStatus() const { return this->sharingStatus_ != nullptr;};
    void deleteSharingStatus() { this->sharingStatus_ = nullptr;};
    inline bool sharingStatus() const { DARABONBA_PTR_GET_DEFAULT(sharingStatus_, false) };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setSharingStatus(bool sharingStatus) { DARABONBA_PTR_SET_VALUE(sharingStatus_, sharingStatus) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string srcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline UpdateUserDevicesSharingStatusResponseBodyDevices& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


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
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> iaStatus_ = nullptr;
    std::shared_ptr<string> innerIP_ = nullptr;
    std::shared_ptr<string> mac_ = nullptr;
    std::shared_ptr<string> memory_ = nullptr;
    std::shared_ptr<string> nacStatus_ = nullptr;
    std::shared_ptr<vector<Models::UpdateUserDevicesSharingStatusResponseBodyDevicesNetInterfaceInfo>> netInterfaceInfo_ = nullptr;
    std::shared_ptr<string> paStatus_ = nullptr;
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<bool> sharingStatus_ = nullptr;
    std::shared_ptr<string> srcIP_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
