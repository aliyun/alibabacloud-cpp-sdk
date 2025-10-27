// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGMACHINERESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGMACHINERESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckItemWarningMachineResponseBodyListFixList.hpp>
#include <alibabacloud/models/ListCheckItemWarningMachineResponseBodyListWarningRiskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemWarningMachineResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemWarningMachineResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_TO_JSON(Bind, bind_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(FixList, fixList_);
      DARABONBA_PTR_TO_JSON(FixStatus, fixStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(LastHandleTime, lastHandleTime_);
      DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_TO_JSON(PortOpen, portOpen_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(WarningRiskList, warningRiskList_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemWarningMachineResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_FROM_JSON(Bind, bind_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(FixList, fixList_);
      DARABONBA_PTR_FROM_JSON(FixStatus, fixStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(LastHandleTime, lastHandleTime_);
      DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_FROM_JSON(PortOpen, portOpen_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(WarningRiskList, warningRiskList_);
    };
    ListCheckItemWarningMachineResponseBodyList() = default ;
    ListCheckItemWarningMachineResponseBodyList(const ListCheckItemWarningMachineResponseBodyList &) = default ;
    ListCheckItemWarningMachineResponseBodyList(ListCheckItemWarningMachineResponseBodyList &&) = default ;
    ListCheckItemWarningMachineResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemWarningMachineResponseBodyList() = default ;
    ListCheckItemWarningMachineResponseBodyList& operator=(const ListCheckItemWarningMachineResponseBodyList &) = default ;
    ListCheckItemWarningMachineResponseBodyList& operator=(ListCheckItemWarningMachineResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authVersion_ == nullptr
        && return this->bind_ == nullptr && return this->containerId_ == nullptr && return this->containerName_ == nullptr && return this->fixList_ == nullptr && return this->fixStatus_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->lastHandleTime_ == nullptr
        && return this->lastScanTime_ == nullptr && return this->portOpen_ == nullptr && return this->prompt_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr
        && return this->targetId_ == nullptr && return this->targetName_ == nullptr && return this->targetType_ == nullptr && return this->uuid_ == nullptr && return this->warningRiskList_ == nullptr; };
    // authVersion Field Functions 
    bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
    void deleteAuthVersion() { this->authVersion_ = nullptr;};
    inline int32_t authVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
    inline ListCheckItemWarningMachineResponseBodyList& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


    // bind Field Functions 
    bool hasBind() const { return this->bind_ != nullptr;};
    void deleteBind() { this->bind_ = nullptr;};
    inline bool bind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
    inline ListCheckItemWarningMachineResponseBodyList& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // fixList Field Functions 
    bool hasFixList() const { return this->fixList_ != nullptr;};
    void deleteFixList() { this->fixList_ = nullptr;};
    inline const vector<Models::ListCheckItemWarningMachineResponseBodyListFixList> & fixList() const { DARABONBA_PTR_GET_CONST(fixList_, vector<Models::ListCheckItemWarningMachineResponseBodyListFixList>) };
    inline vector<Models::ListCheckItemWarningMachineResponseBodyListFixList> fixList() { DARABONBA_PTR_GET(fixList_, vector<Models::ListCheckItemWarningMachineResponseBodyListFixList>) };
    inline ListCheckItemWarningMachineResponseBodyList& setFixList(const vector<Models::ListCheckItemWarningMachineResponseBodyListFixList> & fixList) { DARABONBA_PTR_SET_VALUE(fixList_, fixList) };
    inline ListCheckItemWarningMachineResponseBodyList& setFixList(vector<Models::ListCheckItemWarningMachineResponseBodyListFixList> && fixList) { DARABONBA_PTR_SET_RVALUE(fixList_, fixList) };


    // fixStatus Field Functions 
    bool hasFixStatus() const { return this->fixStatus_ != nullptr;};
    void deleteFixStatus() { this->fixStatus_ = nullptr;};
    inline int32_t fixStatus() const { DARABONBA_PTR_GET_DEFAULT(fixStatus_, 0) };
    inline ListCheckItemWarningMachineResponseBodyList& setFixStatus(int32_t fixStatus) { DARABONBA_PTR_SET_VALUE(fixStatus_, fixStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lastHandleTime Field Functions 
    bool hasLastHandleTime() const { return this->lastHandleTime_ != nullptr;};
    void deleteLastHandleTime() { this->lastHandleTime_ = nullptr;};
    inline int64_t lastHandleTime() const { DARABONBA_PTR_GET_DEFAULT(lastHandleTime_, 0L) };
    inline ListCheckItemWarningMachineResponseBodyList& setLastHandleTime(int64_t lastHandleTime) { DARABONBA_PTR_SET_VALUE(lastHandleTime_, lastHandleTime) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline ListCheckItemWarningMachineResponseBodyList& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // portOpen Field Functions 
    bool hasPortOpen() const { return this->portOpen_ != nullptr;};
    void deletePortOpen() { this->portOpen_ = nullptr;};
    inline bool portOpen() const { DARABONBA_PTR_GET_DEFAULT(portOpen_, false) };
    inline ListCheckItemWarningMachineResponseBodyList& setPortOpen(bool portOpen) { DARABONBA_PTR_SET_VALUE(portOpen_, portOpen) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListCheckItemWarningMachineResponseBodyList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListCheckItemWarningMachineResponseBodyList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // warningRiskList Field Functions 
    bool hasWarningRiskList() const { return this->warningRiskList_ != nullptr;};
    void deleteWarningRiskList() { this->warningRiskList_ = nullptr;};
    inline const vector<Models::ListCheckItemWarningMachineResponseBodyListWarningRiskList> & warningRiskList() const { DARABONBA_PTR_GET_CONST(warningRiskList_, vector<Models::ListCheckItemWarningMachineResponseBodyListWarningRiskList>) };
    inline vector<Models::ListCheckItemWarningMachineResponseBodyListWarningRiskList> warningRiskList() { DARABONBA_PTR_GET(warningRiskList_, vector<Models::ListCheckItemWarningMachineResponseBodyListWarningRiskList>) };
    inline ListCheckItemWarningMachineResponseBodyList& setWarningRiskList(const vector<Models::ListCheckItemWarningMachineResponseBodyListWarningRiskList> & warningRiskList) { DARABONBA_PTR_SET_VALUE(warningRiskList_, warningRiskList) };
    inline ListCheckItemWarningMachineResponseBodyList& setWarningRiskList(vector<Models::ListCheckItemWarningMachineResponseBodyListWarningRiskList> && warningRiskList) { DARABONBA_PTR_SET_RVALUE(warningRiskList_, warningRiskList) };


  protected:
    // The edition of Security Center that is authorized to protect the asset. Valid values:
    // 
    // *   **1**: Basic edition
    // *   **6**: Anti-virus edition
    // *   **5**: Advanced edition
    // *   **3**: Enterprise edition
    // *   **7**: Ultimate edition
    // *   **10**: Value-added Plan edition
    std::shared_ptr<int32_t> authVersion_ = nullptr;
    // Indicates whether Security Center is authorized to protect the asset. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> bind_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> containerId_ = nullptr;
    // The name of the container.
    std::shared_ptr<string> containerName_ = nullptr;
    // The details of the baselines for which the risk item can be fixed.
    std::shared_ptr<vector<Models::ListCheckItemWarningMachineResponseBodyListFixList>> fixList_ = nullptr;
    // Whether the repair is supported. Valid values:
    // *   **0**: Supported
    // *   **1**: Not Supported
    std::shared_ptr<int32_t> fixStatus_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the affected asset.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the affected asset.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The timestamp of the latest processing of the check item risk of the machine. Unit: milliseconds.
    std::shared_ptr<int64_t> lastHandleTime_ = nullptr;
    // The timestamp generated when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // Indicates whether a port on the server is accessible over the Internet. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> portOpen_ = nullptr;
    // The prompt for the risk item.
    std::shared_ptr<string> prompt_ = nullptr;
    // The region ID of the asset.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the check item. Valid values:
    // 
    // *   **1**: failed
    // *   **2**: verifying
    // *   **3**: passed
    // *   **6**: ignored
    // *   **7**: fixing
    // *   **8**: fixed
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the asset that is scanned.
    std::shared_ptr<string> targetId_ = nullptr;
    // The name of the asset on which the malicious image sample is detected.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   **ECS_SNAPSHOT**
    // *   **ECS_IMAGE**
    std::shared_ptr<string> targetType_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The information about the baselines on which the risk item is detected.
    std::shared_ptr<vector<Models::ListCheckItemWarningMachineResponseBodyListWarningRiskList>> warningRiskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
