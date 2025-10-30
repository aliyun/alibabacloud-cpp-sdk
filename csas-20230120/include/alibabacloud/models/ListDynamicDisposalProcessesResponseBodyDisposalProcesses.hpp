// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESRESPONSEBODYDISPOSALPROCESSES_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESRESPONSEBODYDISPOSALPROCESSES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo.hpp>
#include <alibabacloud/models/ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDynamicDisposalProcessesResponseBodyDisposalProcesses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicDisposalProcessesResponseBodyDisposalProcesses& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDynamicDisposalProcessesResponseBodyDisposalProcesses& obj) { 
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
    ListDynamicDisposalProcessesResponseBodyDisposalProcesses() = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcesses(const ListDynamicDisposalProcessesResponseBodyDisposalProcesses &) = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcesses(ListDynamicDisposalProcessesResponseBodyDisposalProcesses &&) = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicDisposalProcessesResponseBodyDisposalProcesses() = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcesses& operator=(const ListDynamicDisposalProcessesResponseBodyDisposalProcesses &) = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcesses& operator=(ListDynamicDisposalProcessesResponseBodyDisposalProcesses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->department_ == nullptr
        && return this->devTag_ == nullptr && return this->deviceBasicInfo_ == nullptr && return this->deviceStatusInfo_ == nullptr && return this->disposalActions_ == nullptr && return this->disposalProcessId_ == nullptr
        && return this->disposalTime_ == nullptr && return this->dynamicPolicyId_ == nullptr && return this->dynamicPolicyName_ == nullptr && return this->hostname_ == nullptr && return this->recoveryType_ == nullptr
        && return this->ruleContent_ == nullptr && return this->saseUserId_ == nullptr && return this->status_ == nullptr && return this->userName_ == nullptr; };
    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string devTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // deviceBasicInfo Field Functions 
    bool hasDeviceBasicInfo() const { return this->deviceBasicInfo_ != nullptr;};
    void deleteDeviceBasicInfo() { this->deviceBasicInfo_ = nullptr;};
    inline const Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo & deviceBasicInfo() const { DARABONBA_PTR_GET_CONST(deviceBasicInfo_, Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo) };
    inline Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo deviceBasicInfo() { DARABONBA_PTR_GET(deviceBasicInfo_, Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo) };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDeviceBasicInfo(const Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo & deviceBasicInfo) { DARABONBA_PTR_SET_VALUE(deviceBasicInfo_, deviceBasicInfo) };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDeviceBasicInfo(Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo && deviceBasicInfo) { DARABONBA_PTR_SET_RVALUE(deviceBasicInfo_, deviceBasicInfo) };


    // deviceStatusInfo Field Functions 
    bool hasDeviceStatusInfo() const { return this->deviceStatusInfo_ != nullptr;};
    void deleteDeviceStatusInfo() { this->deviceStatusInfo_ = nullptr;};
    inline const Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo & deviceStatusInfo() const { DARABONBA_PTR_GET_CONST(deviceStatusInfo_, Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo) };
    inline Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo deviceStatusInfo() { DARABONBA_PTR_GET(deviceStatusInfo_, Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo) };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDeviceStatusInfo(const Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo & deviceStatusInfo) { DARABONBA_PTR_SET_VALUE(deviceStatusInfo_, deviceStatusInfo) };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDeviceStatusInfo(Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo && deviceStatusInfo) { DARABONBA_PTR_SET_RVALUE(deviceStatusInfo_, deviceStatusInfo) };


    // disposalActions Field Functions 
    bool hasDisposalActions() const { return this->disposalActions_ != nullptr;};
    void deleteDisposalActions() { this->disposalActions_ = nullptr;};
    inline const vector<string> & disposalActions() const { DARABONBA_PTR_GET_CONST(disposalActions_, vector<string>) };
    inline vector<string> disposalActions() { DARABONBA_PTR_GET(disposalActions_, vector<string>) };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDisposalActions(const vector<string> & disposalActions) { DARABONBA_PTR_SET_VALUE(disposalActions_, disposalActions) };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDisposalActions(vector<string> && disposalActions) { DARABONBA_PTR_SET_RVALUE(disposalActions_, disposalActions) };


    // disposalProcessId Field Functions 
    bool hasDisposalProcessId() const { return this->disposalProcessId_ != nullptr;};
    void deleteDisposalProcessId() { this->disposalProcessId_ = nullptr;};
    inline string disposalProcessId() const { DARABONBA_PTR_GET_DEFAULT(disposalProcessId_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDisposalProcessId(string disposalProcessId) { DARABONBA_PTR_SET_VALUE(disposalProcessId_, disposalProcessId) };


    // disposalTime Field Functions 
    bool hasDisposalTime() const { return this->disposalTime_ != nullptr;};
    void deleteDisposalTime() { this->disposalTime_ = nullptr;};
    inline string disposalTime() const { DARABONBA_PTR_GET_DEFAULT(disposalTime_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDisposalTime(string disposalTime) { DARABONBA_PTR_SET_VALUE(disposalTime_, disposalTime) };


    // dynamicPolicyId Field Functions 
    bool hasDynamicPolicyId() const { return this->dynamicPolicyId_ != nullptr;};
    void deleteDynamicPolicyId() { this->dynamicPolicyId_ = nullptr;};
    inline string dynamicPolicyId() const { DARABONBA_PTR_GET_DEFAULT(dynamicPolicyId_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDynamicPolicyId(string dynamicPolicyId) { DARABONBA_PTR_SET_VALUE(dynamicPolicyId_, dynamicPolicyId) };


    // dynamicPolicyName Field Functions 
    bool hasDynamicPolicyName() const { return this->dynamicPolicyName_ != nullptr;};
    void deleteDynamicPolicyName() { this->dynamicPolicyName_ = nullptr;};
    inline string dynamicPolicyName() const { DARABONBA_PTR_GET_DEFAULT(dynamicPolicyName_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setDynamicPolicyName(string dynamicPolicyName) { DARABONBA_PTR_SET_VALUE(dynamicPolicyName_, dynamicPolicyName) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // recoveryType Field Functions 
    bool hasRecoveryType() const { return this->recoveryType_ != nullptr;};
    void deleteRecoveryType() { this->recoveryType_ = nullptr;};
    inline string recoveryType() const { DARABONBA_PTR_GET_DEFAULT(recoveryType_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setRecoveryType(string recoveryType) { DARABONBA_PTR_SET_VALUE(recoveryType_, recoveryType) };


    // ruleContent Field Functions 
    bool hasRuleContent() const { return this->ruleContent_ != nullptr;};
    void deleteRuleContent() { this->ruleContent_ = nullptr;};
    inline     const Darabonba::Json & ruleContent() const { DARABONBA_GET(ruleContent_) };
    Darabonba::Json & ruleContent() { DARABONBA_GET(ruleContent_) };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setRuleContent(const Darabonba::Json & ruleContent) { DARABONBA_SET_VALUE(ruleContent_, ruleContent) };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setRuleContent(Darabonba::Json & ruleContent) { DARABONBA_SET_RVALUE(ruleContent_, ruleContent) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcesses& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // User\\"s department.
    std::shared_ptr<string> department_ = nullptr;
    // Device ID.
    std::shared_ptr<string> devTag_ = nullptr;
    // Basic device information.
    std::shared_ptr<Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo> deviceBasicInfo_ = nullptr;
    // 设备状态信息。
    std::shared_ptr<Models::ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceStatusInfo> deviceStatusInfo_ = nullptr;
    // List of disposal actions.
    std::shared_ptr<vector<string>> disposalActions_ = nullptr;
    // Disposal process ID.
    std::shared_ptr<string> disposalProcessId_ = nullptr;
    // Disposal time, in seconds since the epoch.
    std::shared_ptr<string> disposalTime_ = nullptr;
    // Dynamic policy ID.
    std::shared_ptr<string> dynamicPolicyId_ = nullptr;
    // Dynamic policy name.
    std::shared_ptr<string> dynamicPolicyName_ = nullptr;
    // Terminal device name. Length: 1~128 characters, supporting Chinese and uppercase/lowercase English letters, and can include numbers, half-width periods (.), commas (,), semicolons (;), hyphens (-), underscores (_), slashes (/), at (@) symbols, and spaces. Entering an underscore (_) alone will additionally query all terminal devices with 4-byte UTF-8 characters in their names.
    std::shared_ptr<string> hostname_ = nullptr;
    // Recovery type.
    // - **auto**：Automatic recovery.
    // - **console**：Console recovery.
    // - **auth**：Certification and reporting recovery.
    std::shared_ptr<string> recoveryType_ = nullptr;
    // Rule content.
    Darabonba::Json ruleContent_ = nullptr;
    // SASE用户ID。
    std::shared_ptr<string> saseUserId_ = nullptr;
    // Disposal status. Values:
    // - **disposal**: In the disposal state.
    // - **finished**: Already automatically recovered.
    // - **recovery**: Recovered by authentication and reporting or console recovery.
    std::shared_ptr<string> status_ = nullptr;
    // Username.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
