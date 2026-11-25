// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class RemoveInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DecreaseDesiredCapacity, decreaseDesiredCapacity_);
      DARABONBA_PTR_TO_JSON(IgnoreInvalidInstance, ignoreInvalidInstance_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LifecycleHookContext, lifecycleHookContext_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemovePolicy, removePolicy_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(StopInstanceTimeout, stopInstanceTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DecreaseDesiredCapacity, decreaseDesiredCapacity_);
      DARABONBA_PTR_FROM_JSON(IgnoreInvalidInstance, ignoreInvalidInstance_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookContext, lifecycleHookContext_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemovePolicy, removePolicy_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(StopInstanceTimeout, stopInstanceTimeout_);
    };
    RemoveInstancesRequest() = default ;
    RemoveInstancesRequest(const RemoveInstancesRequest &) = default ;
    RemoveInstancesRequest(RemoveInstancesRequest &&) = default ;
    RemoveInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveInstancesRequest() = default ;
    RemoveInstancesRequest& operator=(const RemoveInstancesRequest &) = default ;
    RemoveInstancesRequest& operator=(RemoveInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LifecycleHookContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LifecycleHookContext& obj) { 
        DARABONBA_PTR_TO_JSON(DisableLifecycleHook, disableLifecycleHook_);
        DARABONBA_PTR_TO_JSON(IgnoredLifecycleHookIds, ignoredLifecycleHookIds_);
        DARABONBA_PTR_TO_JSON(LifecycleHookResult, lifecycleHookResult_);
      };
      friend void from_json(const Darabonba::Json& j, LifecycleHookContext& obj) { 
        DARABONBA_PTR_FROM_JSON(DisableLifecycleHook, disableLifecycleHook_);
        DARABONBA_PTR_FROM_JSON(IgnoredLifecycleHookIds, ignoredLifecycleHookIds_);
        DARABONBA_PTR_FROM_JSON(LifecycleHookResult, lifecycleHookResult_);
      };
      LifecycleHookContext() = default ;
      LifecycleHookContext(const LifecycleHookContext &) = default ;
      LifecycleHookContext(LifecycleHookContext &&) = default ;
      LifecycleHookContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LifecycleHookContext() = default ;
      LifecycleHookContext& operator=(const LifecycleHookContext &) = default ;
      LifecycleHookContext& operator=(LifecycleHookContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->disableLifecycleHook_ == nullptr
        && this->ignoredLifecycleHookIds_ == nullptr && this->lifecycleHookResult_ == nullptr; };
      // disableLifecycleHook Field Functions 
      bool hasDisableLifecycleHook() const { return this->disableLifecycleHook_ != nullptr;};
      void deleteDisableLifecycleHook() { this->disableLifecycleHook_ = nullptr;};
      inline bool getDisableLifecycleHook() const { DARABONBA_PTR_GET_DEFAULT(disableLifecycleHook_, false) };
      inline LifecycleHookContext& setDisableLifecycleHook(bool disableLifecycleHook) { DARABONBA_PTR_SET_VALUE(disableLifecycleHook_, disableLifecycleHook) };


      // ignoredLifecycleHookIds Field Functions 
      bool hasIgnoredLifecycleHookIds() const { return this->ignoredLifecycleHookIds_ != nullptr;};
      void deleteIgnoredLifecycleHookIds() { this->ignoredLifecycleHookIds_ = nullptr;};
      inline const vector<string> & getIgnoredLifecycleHookIds() const { DARABONBA_PTR_GET_CONST(ignoredLifecycleHookIds_, vector<string>) };
      inline vector<string> getIgnoredLifecycleHookIds() { DARABONBA_PTR_GET(ignoredLifecycleHookIds_, vector<string>) };
      inline LifecycleHookContext& setIgnoredLifecycleHookIds(const vector<string> & ignoredLifecycleHookIds) { DARABONBA_PTR_SET_VALUE(ignoredLifecycleHookIds_, ignoredLifecycleHookIds) };
      inline LifecycleHookContext& setIgnoredLifecycleHookIds(vector<string> && ignoredLifecycleHookIds) { DARABONBA_PTR_SET_RVALUE(ignoredLifecycleHookIds_, ignoredLifecycleHookIds) };


      // lifecycleHookResult Field Functions 
      bool hasLifecycleHookResult() const { return this->lifecycleHookResult_ != nullptr;};
      void deleteLifecycleHookResult() { this->lifecycleHookResult_ = nullptr;};
      inline string getLifecycleHookResult() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookResult_, "") };
      inline LifecycleHookContext& setLifecycleHookResult(string lifecycleHookResult) { DARABONBA_PTR_SET_VALUE(lifecycleHookResult_, lifecycleHookResult) };


    protected:
      // Specifies whether to disable all lifecycle hooks for the scaling activity. Valid values:
      // - true: Disables all lifecycle hooks.
      // - false: Does not disable lifecycle hooks.
      shared_ptr<bool> disableLifecycleHook_ {};
      // The IDs of the lifecycle hooks disabled for the scaling activity.
      shared_ptr<vector<string>> ignoredLifecycleHookIds_ {};
      // The default execution result of the lifecycle hook in this scaling activity. After this parameter is set, it overwrites the original default execution result of the hook.
      shared_ptr<string> lifecycleHookResult_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->decreaseDesiredCapacity_ == nullptr && this->ignoreInvalidInstance_ == nullptr && this->instanceIds_ == nullptr && this->lifecycleHookContext_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->removePolicy_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->scalingGroupId_ == nullptr && this->stopInstanceTimeout_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // decreaseDesiredCapacity Field Functions 
    bool hasDecreaseDesiredCapacity() const { return this->decreaseDesiredCapacity_ != nullptr;};
    void deleteDecreaseDesiredCapacity() { this->decreaseDesiredCapacity_ = nullptr;};
    inline bool getDecreaseDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(decreaseDesiredCapacity_, false) };
    inline RemoveInstancesRequest& setDecreaseDesiredCapacity(bool decreaseDesiredCapacity) { DARABONBA_PTR_SET_VALUE(decreaseDesiredCapacity_, decreaseDesiredCapacity) };


    // ignoreInvalidInstance Field Functions 
    bool hasIgnoreInvalidInstance() const { return this->ignoreInvalidInstance_ != nullptr;};
    void deleteIgnoreInvalidInstance() { this->ignoreInvalidInstance_ = nullptr;};
    inline bool getIgnoreInvalidInstance() const { DARABONBA_PTR_GET_DEFAULT(ignoreInvalidInstance_, false) };
    inline RemoveInstancesRequest& setIgnoreInvalidInstance(bool ignoreInvalidInstance) { DARABONBA_PTR_SET_VALUE(ignoreInvalidInstance_, ignoreInvalidInstance) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RemoveInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RemoveInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // lifecycleHookContext Field Functions 
    bool hasLifecycleHookContext() const { return this->lifecycleHookContext_ != nullptr;};
    void deleteLifecycleHookContext() { this->lifecycleHookContext_ = nullptr;};
    inline const RemoveInstancesRequest::LifecycleHookContext & getLifecycleHookContext() const { DARABONBA_PTR_GET_CONST(lifecycleHookContext_, RemoveInstancesRequest::LifecycleHookContext) };
    inline RemoveInstancesRequest::LifecycleHookContext getLifecycleHookContext() { DARABONBA_PTR_GET(lifecycleHookContext_, RemoveInstancesRequest::LifecycleHookContext) };
    inline RemoveInstancesRequest& setLifecycleHookContext(const RemoveInstancesRequest::LifecycleHookContext & lifecycleHookContext) { DARABONBA_PTR_SET_VALUE(lifecycleHookContext_, lifecycleHookContext) };
    inline RemoveInstancesRequest& setLifecycleHookContext(RemoveInstancesRequest::LifecycleHookContext && lifecycleHookContext) { DARABONBA_PTR_SET_RVALUE(lifecycleHookContext_, lifecycleHookContext) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RemoveInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RemoveInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removePolicy Field Functions 
    bool hasRemovePolicy() const { return this->removePolicy_ != nullptr;};
    void deleteRemovePolicy() { this->removePolicy_ = nullptr;};
    inline string getRemovePolicy() const { DARABONBA_PTR_GET_DEFAULT(removePolicy_, "") };
    inline RemoveInstancesRequest& setRemovePolicy(string removePolicy) { DARABONBA_PTR_SET_VALUE(removePolicy_, removePolicy) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RemoveInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RemoveInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline RemoveInstancesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // stopInstanceTimeout Field Functions 
    bool hasStopInstanceTimeout() const { return this->stopInstanceTimeout_ != nullptr;};
    void deleteStopInstanceTimeout() { this->stopInstanceTimeout_ = nullptr;};
    inline int32_t getStopInstanceTimeout() const { DARABONBA_PTR_GET_DEFAULT(stopInstanceTimeout_, 0) };
    inline RemoveInstancesRequest& setStopInstanceTimeout(int32_t stopInstanceTimeout) { DARABONBA_PTR_SET_VALUE(stopInstanceTimeout_, stopInstanceTimeout) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can only contain ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to modify the expected number of instances. Valid values:
    // 
    // - true: After the ECS instances are removed from the scaling group, the expected number of instances is decreased by the number of removed instances.
    // - false: After the ECS instances are removed from the scaling group, the expected number of instances remains unchanged.
    // 
    // Default value: true.
    shared_ptr<bool> decreaseDesiredCapacity_ {};
    // Specifies whether to ignore invalid instances when removing a batch of instances from the scaling group. Valid values:
    // - true: Invalid instances are ignored when removing a batch of instances from the scaling group. If invalid instances exist and valid instances are successfully removed, the execution status of the scaling activity is displayed as Warning. You can view the invalid instances in the scaling activity details.
    // - false: Invalid instances are not ignored when removing a batch of instances from the scaling group. If invalid instances exist in the batch, an error is reported.
    // 
    // Default value: false.
    shared_ptr<bool> ignoreInvalidInstance_ {};
    // The IDs of the ECS instances to be removed.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    // The context information of the lifecycle hook.
    shared_ptr<RemoveInstancesRequest::LifecycleHookContext> lifecycleHookContext_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    shared_ptr<string> regionId_ {};
    // Specifies the action for the removed ECS instances. Valid values:
    // 
    // - recycle: The ECS instances are stopped in economical mode.
    // 
    //     > This value takes effect only when `ScalingPolicy` is set to `recycle`.
    // - release: The ECS instances are released.
    // 
    // The ScalingPolicy parameter of CreateScalingGroup specifies the reclaim mode of the scaling group, but the specific action when an instance is removed is determined by the RemovePolicy parameter of RemoveInstances. Examples:
    // 
    // - If ScalingPolicy is set to recycle and RemovePolicy is set to recycle, the ECS instances are stopped in economical mode.
    // - If ScalingPolicy is set to recycle and RemovePolicy is set to release, the ECS instances are released.
    // - If ScalingPolicy is set to release and RemovePolicy is set to recycle, the ECS instances are released.
    // - If ScalingPolicy is set to release and RemovePolicy is set to release, the ECS instances are released.
    // 
    // Default value: release.
    shared_ptr<string> removePolicy_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The timeout period for waiting for the ECS instances to be successfully stopped during the scale-in process. Unit: seconds.
    // Valid values: 30 to 240.
    // 
    // > - By default, this parameter inherits the value from the scaling group. You can also reset it when calling RemoveInstances.
    // > - This parameter takes effect only in the scale-in process when RemovePolicy is set to release.  
    // > - If this parameter is set, the system waits for a maximum of the StopInstanceTimeout period for the instances to be successfully stopped. After the timeout period, the scale-in process continues regardless of whether the instances are successfully stopped.  
    // > - If this parameter is not set, the system waits for a long time for the instances to be successfully stopped. The scale-in process continues only after the instances are successfully stopped. If the instances fail to be stopped, the scale-in process is rolled back and the scale-in fails.
    shared_ptr<int32_t> stopInstanceTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
