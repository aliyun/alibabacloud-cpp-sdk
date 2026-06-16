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
      // 
      // - `true`: Disables all lifecycle hooks.
      // 
      // - `false`: Does not disable lifecycle hooks.
      shared_ptr<bool> disableLifecycleHook_ {};
      // A list of lifecycle hook IDs to ignore for the scaling activity.
      shared_ptr<vector<string>> ignoredLifecycleHookIds_ {};
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
    // A client-generated token to ensure request idempotence. This token must be unique for each request, contain only ASCII characters, and not exceed 64 characters. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to decrease the desired capacity of the scaling group. Valid values:
    // 
    // - `true`: Decreases the desired capacity of the scaling group by the number of removed instances.
    // 
    // - `false`: The desired capacity of the scaling group remains unchanged.
    // 
    // Default value: true.
    shared_ptr<bool> decreaseDesiredCapacity_ {};
    // Specifies whether to ignore invalid instances when you remove multiple instances from a scaling group. Valid values:
    // 
    // - `true`: Invalid instances are ignored. If valid instances are removed while invalid ones are present, the scaling activity status is set to Warning. The invalid instances are listed in the scaling activity details.
    // 
    // - `false`: The request is rejected and an error is returned if it contains any invalid instances.
    // 
    // Default value: false.
    shared_ptr<bool> ignoreInvalidInstance_ {};
    // The IDs of the ECS instances to remove.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    // The context of the lifecycle hook.
    shared_ptr<RemoveInstancesRequest::LifecycleHookContext> lifecycleHookContext_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    shared_ptr<string> regionId_ {};
    // Specifies the action to take on removed ECS instances. Valid values:
    // 
    // - recycle: The ECS instances enter the economical mode.
    // 
    //   > This value takes effect only when the `ScalingPolicy` parameter of the scaling group is set to `recycle`.
    // 
    // - release: The ECS instances are released.
    // 
    // The `ScalingPolicy` parameter of the `CreateScalingGroup` operation specifies the reclamation mode of a scaling group. However, the `RemovePolicy` parameter of the `RemoveInstances` operation determines the action taken when an instance is removed. For example:
    // 
    // - If `ScalingPolicy` is `recycle` and `RemovePolicy` is `recycle`, the ECS instances enter the economical mode.
    // 
    // - If `ScalingPolicy` is `recycle` and `RemovePolicy` is `release`, the ECS instances are released.
    // 
    // - If `ScalingPolicy` is `release` and `RemovePolicy` is `recycle`, the ECS instances are released.
    // 
    // - If `ScalingPolicy` is `release` and `RemovePolicy` is `release`, the ECS instances are released.
    // 
    // Default value: release.
    shared_ptr<string> removePolicy_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The timeout period, in seconds, for an ECS instance to stop during a scale-in. Valid values: 30 to 240.
    // 
    // > - By default, this parameter inherits its value from the scaling group, but you can override it when calling the `RemoveInstances` operation.
    // >
    // > - This parameter takes effect only during scale-in events where `RemovePolicy` is set to `release`.
    // >
    // > - If this parameter is set, the system waits for the specified duration for the instance to stop. The scale-in process continues after the timeout expires, regardless of the instance\\"s state.
    // >
    // > - If this parameter is not set, the system waits until the instance stops before continuing the scale-in process. If the instance fails to stop, the scale-in operation is rolled back and fails.
    shared_ptr<int32_t> stopInstanceTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
