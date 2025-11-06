// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCE_HPP_
#define ALIBABACLOUD_MODELS_INSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class Instance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Instance& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentAmount, currentAmount_);
      DARABONBA_PTR_TO_JSON(Detached, detached_);
      DARABONBA_PTR_TO_JSON(ExternalIP, externalIP_);
      DARABONBA_PTR_TO_JSON(ExternalInstancePort, externalInstancePort_);
      DARABONBA_PTR_TO_JSON(HostIP, hostIP_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InnerIP, innerIP_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstancePort, instancePort_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IsLatest, isLatest_);
      DARABONBA_PTR_TO_JSON(IsReplica, isReplica_);
      DARABONBA_PTR_TO_JSON(IsSpot, isSpot_);
      DARABONBA_PTR_TO_JSON(Isolated, isolated_);
      DARABONBA_PTR_TO_JSON(LastState, lastState_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_TO_JSON(ReadyProcesses, readyProcesses_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ReplicaName, replicaName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RestartCount, restartCount_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(StartAt, startAt_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantHostIP, tenantHostIP_);
      DARABONBA_PTR_TO_JSON(TenantInstanceIP, tenantInstanceIP_);
      DARABONBA_PTR_TO_JSON(TotalProcesses, totalProcesses_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, Instance& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentAmount, currentAmount_);
      DARABONBA_PTR_FROM_JSON(Detached, detached_);
      DARABONBA_PTR_FROM_JSON(ExternalIP, externalIP_);
      DARABONBA_PTR_FROM_JSON(ExternalInstancePort, externalInstancePort_);
      DARABONBA_PTR_FROM_JSON(HostIP, hostIP_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InnerIP, innerIP_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstancePort, instancePort_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IsLatest, isLatest_);
      DARABONBA_PTR_FROM_JSON(IsReplica, isReplica_);
      DARABONBA_PTR_FROM_JSON(IsSpot, isSpot_);
      DARABONBA_PTR_FROM_JSON(Isolated, isolated_);
      DARABONBA_PTR_FROM_JSON(LastState, lastState_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_FROM_JSON(ReadyProcesses, readyProcesses_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ReplicaName, replicaName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RestartCount, restartCount_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(StartAt, startAt_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantHostIP, tenantHostIP_);
      DARABONBA_PTR_FROM_JSON(TenantInstanceIP, tenantInstanceIP_);
      DARABONBA_PTR_FROM_JSON(TotalProcesses, totalProcesses_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    Instance() = default ;
    Instance(const Instance &) = default ;
    Instance(Instance &&) = default ;
    Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Instance() = default ;
    Instance& operator=(const Instance &) = default ;
    Instance& operator=(Instance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentAmount_ == nullptr
        && return this->detached_ == nullptr && return this->externalIP_ == nullptr && return this->externalInstancePort_ == nullptr && return this->hostIP_ == nullptr && return this->hostName_ == nullptr
        && return this->innerIP_ == nullptr && return this->instanceName_ == nullptr && return this->instancePort_ == nullptr && return this->instanceType_ == nullptr && return this->isLatest_ == nullptr
        && return this->isReplica_ == nullptr && return this->isSpot_ == nullptr && return this->isolated_ == nullptr && return this->lastState_ == nullptr && return this->namespace_ == nullptr
        && return this->originalAmount_ == nullptr && return this->readyProcesses_ == nullptr && return this->reason_ == nullptr && return this->replicaName_ == nullptr && return this->resourceType_ == nullptr
        && return this->restartCount_ == nullptr && return this->role_ == nullptr && return this->startAt_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->tenantHostIP_ == nullptr && return this->tenantInstanceIP_ == nullptr && return this->totalProcesses_ == nullptr && return this->zone_ == nullptr; };
    // currentAmount Field Functions 
    bool hasCurrentAmount() const { return this->currentAmount_ != nullptr;};
    void deleteCurrentAmount() { this->currentAmount_ = nullptr;};
    inline float currentAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmount_, 0.0) };
    inline Instance& setCurrentAmount(float currentAmount) { DARABONBA_PTR_SET_VALUE(currentAmount_, currentAmount) };


    // detached Field Functions 
    bool hasDetached() const { return this->detached_ != nullptr;};
    void deleteDetached() { this->detached_ = nullptr;};
    inline bool detached() const { DARABONBA_PTR_GET_DEFAULT(detached_, false) };
    inline Instance& setDetached(bool detached) { DARABONBA_PTR_SET_VALUE(detached_, detached) };


    // externalIP Field Functions 
    bool hasExternalIP() const { return this->externalIP_ != nullptr;};
    void deleteExternalIP() { this->externalIP_ = nullptr;};
    inline string externalIP() const { DARABONBA_PTR_GET_DEFAULT(externalIP_, "") };
    inline Instance& setExternalIP(string externalIP) { DARABONBA_PTR_SET_VALUE(externalIP_, externalIP) };


    // externalInstancePort Field Functions 
    bool hasExternalInstancePort() const { return this->externalInstancePort_ != nullptr;};
    void deleteExternalInstancePort() { this->externalInstancePort_ = nullptr;};
    inline int32_t externalInstancePort() const { DARABONBA_PTR_GET_DEFAULT(externalInstancePort_, 0) };
    inline Instance& setExternalInstancePort(int32_t externalInstancePort) { DARABONBA_PTR_SET_VALUE(externalInstancePort_, externalInstancePort) };


    // hostIP Field Functions 
    bool hasHostIP() const { return this->hostIP_ != nullptr;};
    void deleteHostIP() { this->hostIP_ = nullptr;};
    inline string hostIP() const { DARABONBA_PTR_GET_DEFAULT(hostIP_, "") };
    inline Instance& setHostIP(string hostIP) { DARABONBA_PTR_SET_VALUE(hostIP_, hostIP) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline Instance& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // innerIP Field Functions 
    bool hasInnerIP() const { return this->innerIP_ != nullptr;};
    void deleteInnerIP() { this->innerIP_ = nullptr;};
    inline string innerIP() const { DARABONBA_PTR_GET_DEFAULT(innerIP_, "") };
    inline Instance& setInnerIP(string innerIP) { DARABONBA_PTR_SET_VALUE(innerIP_, innerIP) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instancePort Field Functions 
    bool hasInstancePort() const { return this->instancePort_ != nullptr;};
    void deleteInstancePort() { this->instancePort_ = nullptr;};
    inline int32_t instancePort() const { DARABONBA_PTR_GET_DEFAULT(instancePort_, 0) };
    inline Instance& setInstancePort(int32_t instancePort) { DARABONBA_PTR_SET_VALUE(instancePort_, instancePort) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline Instance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isLatest Field Functions 
    bool hasIsLatest() const { return this->isLatest_ != nullptr;};
    void deleteIsLatest() { this->isLatest_ = nullptr;};
    inline bool isLatest() const { DARABONBA_PTR_GET_DEFAULT(isLatest_, false) };
    inline Instance& setIsLatest(bool isLatest) { DARABONBA_PTR_SET_VALUE(isLatest_, isLatest) };


    // isReplica Field Functions 
    bool hasIsReplica() const { return this->isReplica_ != nullptr;};
    void deleteIsReplica() { this->isReplica_ = nullptr;};
    inline bool isReplica() const { DARABONBA_PTR_GET_DEFAULT(isReplica_, false) };
    inline Instance& setIsReplica(bool isReplica) { DARABONBA_PTR_SET_VALUE(isReplica_, isReplica) };


    // isSpot Field Functions 
    bool hasIsSpot() const { return this->isSpot_ != nullptr;};
    void deleteIsSpot() { this->isSpot_ = nullptr;};
    inline bool isSpot() const { DARABONBA_PTR_GET_DEFAULT(isSpot_, false) };
    inline Instance& setIsSpot(bool isSpot) { DARABONBA_PTR_SET_VALUE(isSpot_, isSpot) };


    // isolated Field Functions 
    bool hasIsolated() const { return this->isolated_ != nullptr;};
    void deleteIsolated() { this->isolated_ = nullptr;};
    inline bool isolated() const { DARABONBA_PTR_GET_DEFAULT(isolated_, false) };
    inline Instance& setIsolated(bool isolated) { DARABONBA_PTR_SET_VALUE(isolated_, isolated) };


    // lastState Field Functions 
    bool hasLastState() const { return this->lastState_ != nullptr;};
    void deleteLastState() { this->lastState_ = nullptr;};
    inline const vector<Darabonba::Json> & lastState() const { DARABONBA_PTR_GET_CONST(lastState_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> lastState() { DARABONBA_PTR_GET(lastState_, vector<Darabonba::Json>) };
    inline Instance& setLastState(const vector<Darabonba::Json> & lastState) { DARABONBA_PTR_SET_VALUE(lastState_, lastState) };
    inline Instance& setLastState(vector<Darabonba::Json> && lastState) { DARABONBA_PTR_SET_RVALUE(lastState_, lastState) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline Instance& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline float originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
    inline Instance& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    // readyProcesses Field Functions 
    bool hasReadyProcesses() const { return this->readyProcesses_ != nullptr;};
    void deleteReadyProcesses() { this->readyProcesses_ = nullptr;};
    inline int32_t readyProcesses() const { DARABONBA_PTR_GET_DEFAULT(readyProcesses_, 0) };
    inline Instance& setReadyProcesses(int32_t readyProcesses) { DARABONBA_PTR_SET_VALUE(readyProcesses_, readyProcesses) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline Instance& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // replicaName Field Functions 
    bool hasReplicaName() const { return this->replicaName_ != nullptr;};
    void deleteReplicaName() { this->replicaName_ = nullptr;};
    inline string replicaName() const { DARABONBA_PTR_GET_DEFAULT(replicaName_, "") };
    inline Instance& setReplicaName(string replicaName) { DARABONBA_PTR_SET_VALUE(replicaName_, replicaName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline Instance& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // restartCount Field Functions 
    bool hasRestartCount() const { return this->restartCount_ != nullptr;};
    void deleteRestartCount() { this->restartCount_ = nullptr;};
    inline int32_t restartCount() const { DARABONBA_PTR_GET_DEFAULT(restartCount_, 0) };
    inline Instance& setRestartCount(int32_t restartCount) { DARABONBA_PTR_SET_VALUE(restartCount_, restartCount) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline Instance& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // startAt Field Functions 
    bool hasStartAt() const { return this->startAt_ != nullptr;};
    void deleteStartAt() { this->startAt_ = nullptr;};
    inline string startAt() const { DARABONBA_PTR_GET_DEFAULT(startAt_, "") };
    inline Instance& setStartAt(string startAt) { DARABONBA_PTR_SET_VALUE(startAt_, startAt) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline Instance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantHostIP Field Functions 
    bool hasTenantHostIP() const { return this->tenantHostIP_ != nullptr;};
    void deleteTenantHostIP() { this->tenantHostIP_ = nullptr;};
    inline string tenantHostIP() const { DARABONBA_PTR_GET_DEFAULT(tenantHostIP_, "") };
    inline Instance& setTenantHostIP(string tenantHostIP) { DARABONBA_PTR_SET_VALUE(tenantHostIP_, tenantHostIP) };


    // tenantInstanceIP Field Functions 
    bool hasTenantInstanceIP() const { return this->tenantInstanceIP_ != nullptr;};
    void deleteTenantInstanceIP() { this->tenantInstanceIP_ = nullptr;};
    inline string tenantInstanceIP() const { DARABONBA_PTR_GET_DEFAULT(tenantInstanceIP_, "") };
    inline Instance& setTenantInstanceIP(string tenantInstanceIP) { DARABONBA_PTR_SET_VALUE(tenantInstanceIP_, tenantInstanceIP) };


    // totalProcesses Field Functions 
    bool hasTotalProcesses() const { return this->totalProcesses_ != nullptr;};
    void deleteTotalProcesses() { this->totalProcesses_ = nullptr;};
    inline int32_t totalProcesses() const { DARABONBA_PTR_GET_DEFAULT(totalProcesses_, 0) };
    inline Instance& setTotalProcesses(int32_t totalProcesses) { DARABONBA_PTR_SET_VALUE(totalProcesses_, totalProcesses) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline Instance& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    std::shared_ptr<float> currentAmount_ = nullptr;
    std::shared_ptr<bool> detached_ = nullptr;
    std::shared_ptr<string> externalIP_ = nullptr;
    std::shared_ptr<int32_t> externalInstancePort_ = nullptr;
    std::shared_ptr<string> hostIP_ = nullptr;
    std::shared_ptr<string> hostName_ = nullptr;
    std::shared_ptr<string> innerIP_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<int32_t> instancePort_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<bool> isLatest_ = nullptr;
    std::shared_ptr<bool> isReplica_ = nullptr;
    std::shared_ptr<bool> isSpot_ = nullptr;
    std::shared_ptr<bool> isolated_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> lastState_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<float> originalAmount_ = nullptr;
    std::shared_ptr<int32_t> readyProcesses_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> replicaName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<int32_t> restartCount_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> startAt_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> tenantHostIP_ = nullptr;
    std::shared_ptr<string> tenantInstanceIP_ = nullptr;
    std::shared_ptr<int32_t> totalProcesses_ = nullptr;
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
