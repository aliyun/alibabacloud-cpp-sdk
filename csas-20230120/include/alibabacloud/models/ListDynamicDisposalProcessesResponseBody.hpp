// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESRESPONSEBODY_HPP_
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
  class ListDynamicDisposalProcessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicDisposalProcessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DisposalProcesses, disposalProcesses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicDisposalProcessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DisposalProcesses, disposalProcesses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListDynamicDisposalProcessesResponseBody() = default ;
    ListDynamicDisposalProcessesResponseBody(const ListDynamicDisposalProcessesResponseBody &) = default ;
    ListDynamicDisposalProcessesResponseBody(ListDynamicDisposalProcessesResponseBody &&) = default ;
    ListDynamicDisposalProcessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicDisposalProcessesResponseBody() = default ;
    ListDynamicDisposalProcessesResponseBody& operator=(const ListDynamicDisposalProcessesResponseBody &) = default ;
    ListDynamicDisposalProcessesResponseBody& operator=(ListDynamicDisposalProcessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DisposalProcesses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DisposalProcesses& obj) { 
        DARABONBA_PTR_TO_JSON(Department, department_);
        DARABONBA_PTR_TO_JSON(DevTag, devTag_);
        DARABONBA_PTR_TO_JSON(DeviceBasicInfo, deviceBasicInfo_);
        DARABONBA_PTR_TO_JSON(DeviceStatusInfo, deviceStatusInfo_);
        DARABONBA_PTR_TO_JSON(DisposalActions, disposalActions_);
        DARABONBA_PTR_TO_JSON(DisposalProcessId, disposalProcessId_);
        DARABONBA_PTR_TO_JSON(DisposalTime, disposalTime_);
        DARABONBA_PTR_TO_JSON(DynamicPolicyId, dynamicPolicyId_);
        DARABONBA_PTR_TO_JSON(DynamicPolicyName, dynamicPolicyName_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(RecoveryType, recoveryType_);
        DARABONBA_ANY_TO_JSON(RuleContent, ruleContent_);
        DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, DisposalProcesses& obj) { 
        DARABONBA_PTR_FROM_JSON(Department, department_);
        DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
        DARABONBA_PTR_FROM_JSON(DeviceBasicInfo, deviceBasicInfo_);
        DARABONBA_PTR_FROM_JSON(DeviceStatusInfo, deviceStatusInfo_);
        DARABONBA_PTR_FROM_JSON(DisposalActions, disposalActions_);
        DARABONBA_PTR_FROM_JSON(DisposalProcessId, disposalProcessId_);
        DARABONBA_PTR_FROM_JSON(DisposalTime, disposalTime_);
        DARABONBA_PTR_FROM_JSON(DynamicPolicyId, dynamicPolicyId_);
        DARABONBA_PTR_FROM_JSON(DynamicPolicyName, dynamicPolicyName_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(RecoveryType, recoveryType_);
        DARABONBA_ANY_FROM_JSON(RuleContent, ruleContent_);
        DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      DisposalProcesses() = default ;
      DisposalProcesses(const DisposalProcesses &) = default ;
      DisposalProcesses(DisposalProcesses &&) = default ;
      DisposalProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DisposalProcesses() = default ;
      DisposalProcesses& operator=(const DisposalProcesses &) = default ;
      DisposalProcesses& operator=(DisposalProcesses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeviceStatusInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceStatusInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_TO_JSON(Department, department_);
          DARABONBA_PTR_TO_JSON(DlpStatus, dlpStatus_);
          DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
          DARABONBA_PTR_TO_JSON(LaStatus, laStatus_);
          DARABONBA_PTR_TO_JSON(LoginStatus, loginStatus_);
          DARABONBA_PTR_TO_JSON(NacStatus, nacStatus_);
          DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
          DARABONBA_PTR_TO_JSON(Username, username_);
          DARABONBA_PTR_TO_JSON(Workshop, workshop_);
          DARABONBA_PTR_TO_JSON(ZtnaStatus, ztnaStatus_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceStatusInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_FROM_JSON(Department, department_);
          DARABONBA_PTR_FROM_JSON(DlpStatus, dlpStatus_);
          DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
          DARABONBA_PTR_FROM_JSON(LaStatus, laStatus_);
          DARABONBA_PTR_FROM_JSON(LoginStatus, loginStatus_);
          DARABONBA_PTR_FROM_JSON(NacStatus, nacStatus_);
          DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
          DARABONBA_PTR_FROM_JSON(Workshop, workshop_);
          DARABONBA_PTR_FROM_JSON(ZtnaStatus, ztnaStatus_);
        };
        DeviceStatusInfo() = default ;
        DeviceStatusInfo(const DeviceStatusInfo &) = default ;
        DeviceStatusInfo(DeviceStatusInfo &&) = default ;
        DeviceStatusInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceStatusInfo() = default ;
        DeviceStatusInfo& operator=(const DeviceStatusInfo &) = default ;
        DeviceStatusInfo& operator=(DeviceStatusInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appVersion_ == nullptr
        && this->department_ == nullptr && this->dlpStatus_ == nullptr && this->internetIp_ == nullptr && this->laStatus_ == nullptr && this->loginStatus_ == nullptr
        && this->nacStatus_ == nullptr && this->privateIp_ == nullptr && this->saseUserId_ == nullptr && this->username_ == nullptr && this->workshop_ == nullptr
        && this->ztnaStatus_ == nullptr; };
        // appVersion Field Functions 
        bool hasAppVersion() const { return this->appVersion_ != nullptr;};
        void deleteAppVersion() { this->appVersion_ = nullptr;};
        inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
        inline DeviceStatusInfo& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


        // department Field Functions 
        bool hasDepartment() const { return this->department_ != nullptr;};
        void deleteDepartment() { this->department_ = nullptr;};
        inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
        inline DeviceStatusInfo& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


        // dlpStatus Field Functions 
        bool hasDlpStatus() const { return this->dlpStatus_ != nullptr;};
        void deleteDlpStatus() { this->dlpStatus_ = nullptr;};
        inline string getDlpStatus() const { DARABONBA_PTR_GET_DEFAULT(dlpStatus_, "") };
        inline DeviceStatusInfo& setDlpStatus(string dlpStatus) { DARABONBA_PTR_SET_VALUE(dlpStatus_, dlpStatus) };


        // internetIp Field Functions 
        bool hasInternetIp() const { return this->internetIp_ != nullptr;};
        void deleteInternetIp() { this->internetIp_ = nullptr;};
        inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
        inline DeviceStatusInfo& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


        // laStatus Field Functions 
        bool hasLaStatus() const { return this->laStatus_ != nullptr;};
        void deleteLaStatus() { this->laStatus_ = nullptr;};
        inline string getLaStatus() const { DARABONBA_PTR_GET_DEFAULT(laStatus_, "") };
        inline DeviceStatusInfo& setLaStatus(string laStatus) { DARABONBA_PTR_SET_VALUE(laStatus_, laStatus) };


        // loginStatus Field Functions 
        bool hasLoginStatus() const { return this->loginStatus_ != nullptr;};
        void deleteLoginStatus() { this->loginStatus_ = nullptr;};
        inline string getLoginStatus() const { DARABONBA_PTR_GET_DEFAULT(loginStatus_, "") };
        inline DeviceStatusInfo& setLoginStatus(string loginStatus) { DARABONBA_PTR_SET_VALUE(loginStatus_, loginStatus) };


        // nacStatus Field Functions 
        bool hasNacStatus() const { return this->nacStatus_ != nullptr;};
        void deleteNacStatus() { this->nacStatus_ = nullptr;};
        inline string getNacStatus() const { DARABONBA_PTR_GET_DEFAULT(nacStatus_, "") };
        inline DeviceStatusInfo& setNacStatus(string nacStatus) { DARABONBA_PTR_SET_VALUE(nacStatus_, nacStatus) };


        // privateIp Field Functions 
        bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
        void deletePrivateIp() { this->privateIp_ = nullptr;};
        inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
        inline DeviceStatusInfo& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


        // saseUserId Field Functions 
        bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
        void deleteSaseUserId() { this->saseUserId_ = nullptr;};
        inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
        inline DeviceStatusInfo& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline DeviceStatusInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        // workshop Field Functions 
        bool hasWorkshop() const { return this->workshop_ != nullptr;};
        void deleteWorkshop() { this->workshop_ = nullptr;};
        inline string getWorkshop() const { DARABONBA_PTR_GET_DEFAULT(workshop_, "") };
        inline DeviceStatusInfo& setWorkshop(string workshop) { DARABONBA_PTR_SET_VALUE(workshop_, workshop) };


        // ztnaStatus Field Functions 
        bool hasZtnaStatus() const { return this->ztnaStatus_ != nullptr;};
        void deleteZtnaStatus() { this->ztnaStatus_ = nullptr;};
        inline string getZtnaStatus() const { DARABONBA_PTR_GET_DEFAULT(ztnaStatus_, "") };
        inline DeviceStatusInfo& setZtnaStatus(string ztnaStatus) { DARABONBA_PTR_SET_VALUE(ztnaStatus_, ztnaStatus) };


      protected:
        // Client version.
        shared_ptr<string> appVersion_ {};
        // Department to which the user belongs.
        shared_ptr<string> department_ {};
        // Office data protection status. Values:
        // - **Enabled**: Enabled.
        // - **Disabled**: Disabled.
        // - **Unprovisioned**: Not configured.
        // - **Unauthorized**: Unauthorized.
        shared_ptr<string> dlpStatus_ {};
        // Public IP address.
        shared_ptr<string> internetIp_ {};
        // Internet behavior management enablement status.
        shared_ptr<string> laStatus_ {};
        // Login status.
        shared_ptr<string> loginStatus_ {};
        // Network access control status. Values:
        // - **Enabled**: Enabled.
        // - **Disabled**: Disabled.
        // - **Unprovisioned**: Not configured.
        shared_ptr<string> nacStatus_ {};
        // Private IP address.
        shared_ptr<string> privateIp_ {};
        // Unique ID of the SASE user.
        shared_ptr<string> saseUserId_ {};
        // Username.
        shared_ptr<string> username_ {};
        // Identified office area name.
        shared_ptr<string> workshop_ {};
        // ZTNA enablement status.
        shared_ptr<string> ztnaStatus_ {};
      };

      class DeviceBasicInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceBasicInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(DevTag, devTag_);
          DARABONBA_PTR_TO_JSON(DevType, devType_);
          DARABONBA_PTR_TO_JSON(Disk, disk_);
          DARABONBA_PTR_TO_JSON(Hostname, hostname_);
          DARABONBA_PTR_TO_JSON(Mac, mac_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceBasicInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
          DARABONBA_PTR_FROM_JSON(DevType, devType_);
          DARABONBA_PTR_FROM_JSON(Disk, disk_);
          DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
          DARABONBA_PTR_FROM_JSON(Mac, mac_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
        };
        DeviceBasicInfo() = default ;
        DeviceBasicInfo(const DeviceBasicInfo &) = default ;
        DeviceBasicInfo(DeviceBasicInfo &&) = default ;
        DeviceBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceBasicInfo() = default ;
        DeviceBasicInfo& operator=(const DeviceBasicInfo &) = default ;
        DeviceBasicInfo& operator=(DeviceBasicInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->devTag_ == nullptr && this->devType_ == nullptr && this->disk_ == nullptr && this->hostname_ == nullptr && this->mac_ == nullptr
        && this->memory_ == nullptr && this->osVersion_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
        inline DeviceBasicInfo& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // devTag Field Functions 
        bool hasDevTag() const { return this->devTag_ != nullptr;};
        void deleteDevTag() { this->devTag_ = nullptr;};
        inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
        inline DeviceBasicInfo& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


        // devType Field Functions 
        bool hasDevType() const { return this->devType_ != nullptr;};
        void deleteDevType() { this->devType_ = nullptr;};
        inline string getDevType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
        inline DeviceBasicInfo& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline string getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, "") };
        inline DeviceBasicInfo& setDisk(string disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // hostname Field Functions 
        bool hasHostname() const { return this->hostname_ != nullptr;};
        void deleteHostname() { this->hostname_ = nullptr;};
        inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
        inline DeviceBasicInfo& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


        // mac Field Functions 
        bool hasMac() const { return this->mac_ != nullptr;};
        void deleteMac() { this->mac_ = nullptr;};
        inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
        inline DeviceBasicInfo& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
        inline DeviceBasicInfo& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // osVersion Field Functions 
        bool hasOsVersion() const { return this->osVersion_ != nullptr;};
        void deleteOsVersion() { this->osVersion_ = nullptr;};
        inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
        inline DeviceBasicInfo& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


      protected:
        // CPU model.
        shared_ptr<string> cpu_ {};
        // Device ID.
        shared_ptr<string> devTag_ {};
        // Device operating system type. Values:
        // - **Windows**：Windows system.
        // - **macOS**：macOS system.
        // - **Linux**：Linux system.
        // - **Android**：Android system.
        // - **iOS**：iOS system.
        // - **Windows_Wuying**：Wuying cloud desktop system.
        shared_ptr<string> devType_ {};
        // Device disk model.
        shared_ptr<string> disk_ {};
        // Device name.
        shared_ptr<string> hostname_ {};
        // Device MAC address.
        shared_ptr<string> mac_ {};
        // Device memory capacity. Unit: GB.
        shared_ptr<string> memory_ {};
        // Operating system version
        shared_ptr<string> osVersion_ {};
      };

      virtual bool empty() const override { return this->department_ == nullptr
        && this->devTag_ == nullptr && this->deviceBasicInfo_ == nullptr && this->deviceStatusInfo_ == nullptr && this->disposalActions_ == nullptr && this->disposalProcessId_ == nullptr
        && this->disposalTime_ == nullptr && this->dynamicPolicyId_ == nullptr && this->dynamicPolicyName_ == nullptr && this->hostname_ == nullptr && this->recoveryType_ == nullptr
        && this->ruleContent_ == nullptr && this->saseUserId_ == nullptr && this->status_ == nullptr && this->userName_ == nullptr; };
      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline DisposalProcesses& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // devTag Field Functions 
      bool hasDevTag() const { return this->devTag_ != nullptr;};
      void deleteDevTag() { this->devTag_ = nullptr;};
      inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
      inline DisposalProcesses& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


      // deviceBasicInfo Field Functions 
      bool hasDeviceBasicInfo() const { return this->deviceBasicInfo_ != nullptr;};
      void deleteDeviceBasicInfo() { this->deviceBasicInfo_ = nullptr;};
      inline const DisposalProcesses::DeviceBasicInfo & getDeviceBasicInfo() const { DARABONBA_PTR_GET_CONST(deviceBasicInfo_, DisposalProcesses::DeviceBasicInfo) };
      inline DisposalProcesses::DeviceBasicInfo getDeviceBasicInfo() { DARABONBA_PTR_GET(deviceBasicInfo_, DisposalProcesses::DeviceBasicInfo) };
      inline DisposalProcesses& setDeviceBasicInfo(const DisposalProcesses::DeviceBasicInfo & deviceBasicInfo) { DARABONBA_PTR_SET_VALUE(deviceBasicInfo_, deviceBasicInfo) };
      inline DisposalProcesses& setDeviceBasicInfo(DisposalProcesses::DeviceBasicInfo && deviceBasicInfo) { DARABONBA_PTR_SET_RVALUE(deviceBasicInfo_, deviceBasicInfo) };


      // deviceStatusInfo Field Functions 
      bool hasDeviceStatusInfo() const { return this->deviceStatusInfo_ != nullptr;};
      void deleteDeviceStatusInfo() { this->deviceStatusInfo_ = nullptr;};
      inline const DisposalProcesses::DeviceStatusInfo & getDeviceStatusInfo() const { DARABONBA_PTR_GET_CONST(deviceStatusInfo_, DisposalProcesses::DeviceStatusInfo) };
      inline DisposalProcesses::DeviceStatusInfo getDeviceStatusInfo() { DARABONBA_PTR_GET(deviceStatusInfo_, DisposalProcesses::DeviceStatusInfo) };
      inline DisposalProcesses& setDeviceStatusInfo(const DisposalProcesses::DeviceStatusInfo & deviceStatusInfo) { DARABONBA_PTR_SET_VALUE(deviceStatusInfo_, deviceStatusInfo) };
      inline DisposalProcesses& setDeviceStatusInfo(DisposalProcesses::DeviceStatusInfo && deviceStatusInfo) { DARABONBA_PTR_SET_RVALUE(deviceStatusInfo_, deviceStatusInfo) };


      // disposalActions Field Functions 
      bool hasDisposalActions() const { return this->disposalActions_ != nullptr;};
      void deleteDisposalActions() { this->disposalActions_ = nullptr;};
      inline const vector<string> & getDisposalActions() const { DARABONBA_PTR_GET_CONST(disposalActions_, vector<string>) };
      inline vector<string> getDisposalActions() { DARABONBA_PTR_GET(disposalActions_, vector<string>) };
      inline DisposalProcesses& setDisposalActions(const vector<string> & disposalActions) { DARABONBA_PTR_SET_VALUE(disposalActions_, disposalActions) };
      inline DisposalProcesses& setDisposalActions(vector<string> && disposalActions) { DARABONBA_PTR_SET_RVALUE(disposalActions_, disposalActions) };


      // disposalProcessId Field Functions 
      bool hasDisposalProcessId() const { return this->disposalProcessId_ != nullptr;};
      void deleteDisposalProcessId() { this->disposalProcessId_ = nullptr;};
      inline string getDisposalProcessId() const { DARABONBA_PTR_GET_DEFAULT(disposalProcessId_, "") };
      inline DisposalProcesses& setDisposalProcessId(string disposalProcessId) { DARABONBA_PTR_SET_VALUE(disposalProcessId_, disposalProcessId) };


      // disposalTime Field Functions 
      bool hasDisposalTime() const { return this->disposalTime_ != nullptr;};
      void deleteDisposalTime() { this->disposalTime_ = nullptr;};
      inline string getDisposalTime() const { DARABONBA_PTR_GET_DEFAULT(disposalTime_, "") };
      inline DisposalProcesses& setDisposalTime(string disposalTime) { DARABONBA_PTR_SET_VALUE(disposalTime_, disposalTime) };


      // dynamicPolicyId Field Functions 
      bool hasDynamicPolicyId() const { return this->dynamicPolicyId_ != nullptr;};
      void deleteDynamicPolicyId() { this->dynamicPolicyId_ = nullptr;};
      inline string getDynamicPolicyId() const { DARABONBA_PTR_GET_DEFAULT(dynamicPolicyId_, "") };
      inline DisposalProcesses& setDynamicPolicyId(string dynamicPolicyId) { DARABONBA_PTR_SET_VALUE(dynamicPolicyId_, dynamicPolicyId) };


      // dynamicPolicyName Field Functions 
      bool hasDynamicPolicyName() const { return this->dynamicPolicyName_ != nullptr;};
      void deleteDynamicPolicyName() { this->dynamicPolicyName_ = nullptr;};
      inline string getDynamicPolicyName() const { DARABONBA_PTR_GET_DEFAULT(dynamicPolicyName_, "") };
      inline DisposalProcesses& setDynamicPolicyName(string dynamicPolicyName) { DARABONBA_PTR_SET_VALUE(dynamicPolicyName_, dynamicPolicyName) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline DisposalProcesses& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // recoveryType Field Functions 
      bool hasRecoveryType() const { return this->recoveryType_ != nullptr;};
      void deleteRecoveryType() { this->recoveryType_ = nullptr;};
      inline string getRecoveryType() const { DARABONBA_PTR_GET_DEFAULT(recoveryType_, "") };
      inline DisposalProcesses& setRecoveryType(string recoveryType) { DARABONBA_PTR_SET_VALUE(recoveryType_, recoveryType) };


      // ruleContent Field Functions 
      bool hasRuleContent() const { return this->ruleContent_ != nullptr;};
      void deleteRuleContent() { this->ruleContent_ = nullptr;};
      inline       const Darabonba::Json & getRuleContent() const { DARABONBA_GET(ruleContent_) };
      Darabonba::Json & getRuleContent() { DARABONBA_GET(ruleContent_) };
      inline DisposalProcesses& setRuleContent(const Darabonba::Json & ruleContent) { DARABONBA_SET_VALUE(ruleContent_, ruleContent) };
      inline DisposalProcesses& setRuleContent(Darabonba::Json && ruleContent) { DARABONBA_SET_RVALUE(ruleContent_, ruleContent) };


      // saseUserId Field Functions 
      bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
      void deleteSaseUserId() { this->saseUserId_ = nullptr;};
      inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
      inline DisposalProcesses& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DisposalProcesses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline DisposalProcesses& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // User\\"s department.
      shared_ptr<string> department_ {};
      // Device ID.
      shared_ptr<string> devTag_ {};
      // Basic device information.
      shared_ptr<DisposalProcesses::DeviceBasicInfo> deviceBasicInfo_ {};
      // 设备状态信息。
      shared_ptr<DisposalProcesses::DeviceStatusInfo> deviceStatusInfo_ {};
      // List of disposal actions.
      shared_ptr<vector<string>> disposalActions_ {};
      // Disposal process ID.
      shared_ptr<string> disposalProcessId_ {};
      // Disposal time, in seconds since the epoch.
      shared_ptr<string> disposalTime_ {};
      // Dynamic policy ID.
      shared_ptr<string> dynamicPolicyId_ {};
      // Dynamic policy name.
      shared_ptr<string> dynamicPolicyName_ {};
      // Terminal device name. Length: 1~128 characters, supporting Chinese and uppercase/lowercase English letters, and can include numbers, half-width periods (.), commas (,), semicolons (;), hyphens (-), underscores (_), slashes (/), at (@) symbols, and spaces. Entering an underscore (_) alone will additionally query all terminal devices with 4-byte UTF-8 characters in their names.
      shared_ptr<string> hostname_ {};
      // Recovery type.
      // - **auto**：Automatic recovery.
      // - **console**：Console recovery.
      // - **auth**：Certification and reporting recovery.
      shared_ptr<string> recoveryType_ {};
      // Rule content.
      Darabonba::Json ruleContent_ {};
      // SASE用户ID。
      shared_ptr<string> saseUserId_ {};
      // Disposal status. Values:
      // - **disposal**: In the disposal state.
      // - **finished**: Already automatically recovered.
      // - **recovery**: Recovered by authentication and reporting or console recovery.
      shared_ptr<string> status_ {};
      // Username.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->disposalProcesses_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // disposalProcesses Field Functions 
    bool hasDisposalProcesses() const { return this->disposalProcesses_ != nullptr;};
    void deleteDisposalProcesses() { this->disposalProcesses_ = nullptr;};
    inline const vector<ListDynamicDisposalProcessesResponseBody::DisposalProcesses> & getDisposalProcesses() const { DARABONBA_PTR_GET_CONST(disposalProcesses_, vector<ListDynamicDisposalProcessesResponseBody::DisposalProcesses>) };
    inline vector<ListDynamicDisposalProcessesResponseBody::DisposalProcesses> getDisposalProcesses() { DARABONBA_PTR_GET(disposalProcesses_, vector<ListDynamicDisposalProcessesResponseBody::DisposalProcesses>) };
    inline ListDynamicDisposalProcessesResponseBody& setDisposalProcesses(const vector<ListDynamicDisposalProcessesResponseBody::DisposalProcesses> & disposalProcesses) { DARABONBA_PTR_SET_VALUE(disposalProcesses_, disposalProcesses) };
    inline ListDynamicDisposalProcessesResponseBody& setDisposalProcesses(vector<ListDynamicDisposalProcessesResponseBody::DisposalProcesses> && disposalProcesses) { DARABONBA_PTR_SET_RVALUE(disposalProcesses_, disposalProcesses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDynamicDisposalProcessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListDynamicDisposalProcessesResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // List of disposal processes.
    shared_ptr<vector<ListDynamicDisposalProcessesResponseBody::DisposalProcesses>> disposalProcesses_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total number of dynamic disposal processes.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
