// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHINSTANCEHAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHINSTANCEHAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class SwitchInstanceHARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchInstanceHARequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SourceNodeId, sourceNodeId_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
      DARABONBA_PTR_TO_JSON(SwitchType, switchType_);
      DARABONBA_PTR_TO_JSON(TargetNodeId, targetNodeId_);
      DARABONBA_PTR_TO_JSON(TargetShardName, targetShardName_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchInstanceHARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SourceNodeId, sourceNodeId_);
      DARABONBA_PTR_FROM_JSON(SwitchMode, switchMode_);
      DARABONBA_PTR_FROM_JSON(SwitchType, switchType_);
      DARABONBA_PTR_FROM_JSON(TargetNodeId, targetNodeId_);
      DARABONBA_PTR_FROM_JSON(TargetShardName, targetShardName_);
    };
    SwitchInstanceHARequest() = default ;
    SwitchInstanceHARequest(const SwitchInstanceHARequest &) = default ;
    SwitchInstanceHARequest(SwitchInstanceHARequest &&) = default ;
    SwitchInstanceHARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchInstanceHARequest() = default ;
    SwitchInstanceHARequest& operator=(const SwitchInstanceHARequest &) = default ;
    SwitchInstanceHARequest& operator=(SwitchInstanceHARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->securityToken_ == nullptr && this->sourceNodeId_ == nullptr && this->switchMode_ == nullptr && this->switchType_ == nullptr && this->targetNodeId_ == nullptr
        && this->targetShardName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SwitchInstanceHARequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline SwitchInstanceHARequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SwitchInstanceHARequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SwitchInstanceHARequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SwitchInstanceHARequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SwitchInstanceHARequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SwitchInstanceHARequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sourceNodeId Field Functions 
    bool hasSourceNodeId() const { return this->sourceNodeId_ != nullptr;};
    void deleteSourceNodeId() { this->sourceNodeId_ = nullptr;};
    inline string getSourceNodeId() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeId_, "") };
    inline SwitchInstanceHARequest& setSourceNodeId(string sourceNodeId) { DARABONBA_PTR_SET_VALUE(sourceNodeId_, sourceNodeId) };


    // switchMode Field Functions 
    bool hasSwitchMode() const { return this->switchMode_ != nullptr;};
    void deleteSwitchMode() { this->switchMode_ = nullptr;};
    inline int32_t getSwitchMode() const { DARABONBA_PTR_GET_DEFAULT(switchMode_, 0) };
    inline SwitchInstanceHARequest& setSwitchMode(int32_t switchMode) { DARABONBA_PTR_SET_VALUE(switchMode_, switchMode) };


    // switchType Field Functions 
    bool hasSwitchType() const { return this->switchType_ != nullptr;};
    void deleteSwitchType() { this->switchType_ = nullptr;};
    inline string getSwitchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, "") };
    inline SwitchInstanceHARequest& setSwitchType(string switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


    // targetNodeId Field Functions 
    bool hasTargetNodeId() const { return this->targetNodeId_ != nullptr;};
    void deleteTargetNodeId() { this->targetNodeId_ = nullptr;};
    inline string getTargetNodeId() const { DARABONBA_PTR_GET_DEFAULT(targetNodeId_, "") };
    inline SwitchInstanceHARequest& setTargetNodeId(string targetNodeId) { DARABONBA_PTR_SET_VALUE(targetNodeId_, targetNodeId) };


    // targetShardName Field Functions 
    bool hasTargetShardName() const { return this->targetShardName_ != nullptr;};
    void deleteTargetShardName() { this->targetShardName_ = nullptr;};
    inline string getTargetShardName() const { DARABONBA_PTR_GET_DEFAULT(targetShardName_, "") };
    inline SwitchInstanceHARequest& setTargetShardName(string targetShardName) { DARABONBA_PTR_SET_VALUE(targetShardName_, targetShardName) };


  protected:
    // The instance ID. You can call [DescribeInstances](https://help.aliyun.com/document_detail/473778.html) to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the data shard node. You can call [DescribeRoleZoneInfo](https://help.aliyun.com/document_detail/473782.html) to obtain the CustinsId parameter. Separate multiple data shard node IDs with commas (,). To specify all nodes, enter `all`.
    // > This parameter is available and required only when the instance uses the cluster or read/write splitting architecture.
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
    // The node ID of the original MASTER node in the shard.
    shared_ptr<string> sourceNodeId_ {};
    // The execution time. Valid values:
    // * **0**: immediately. This is the default value.
    // * **1**: during the maintenance window.
    // 
    // > You can call [ModifyInstanceMaintainTime](https://help.aliyun.com/document_detail/473775.html) to modify the maintenance window of the instance.
    shared_ptr<int32_t> switchMode_ {};
    // The switchover mode. Valid values:
    // * **ReliabilityPriority (default)**: Reliability is prioritized. The primary/secondary switchover is performed only when primary/secondary synchronization has no latency, which prevents data loss. In scenarios with heavy write workloads and persistent synchronization latency, this mode may cause the primary/secondary switchover to fail.
    // * **AvailablePriority**: Availability is prioritized. The primary/secondary switchover is performed immediately regardless of primary/secondary latency, which may cause minor data loss.
    // 
    // > Evaluate your business requirements for data integrity and service availability before selecting a switchover mode.
    shared_ptr<string> switchType_ {};
    // The node ID of the target MASTER node after the switchover.
    shared_ptr<string> targetNodeId_ {};
    // The shard name of the instance.
    shared_ptr<string> targetShardName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
