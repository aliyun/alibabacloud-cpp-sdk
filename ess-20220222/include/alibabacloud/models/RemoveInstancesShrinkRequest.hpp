// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEINSTANCESSHRINKREQUEST_HPP_
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
  class RemoveInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DecreaseDesiredCapacity, decreaseDesiredCapacity_);
      DARABONBA_PTR_TO_JSON(IgnoreInvalidInstance, ignoreInvalidInstance_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LifecycleHookContext, lifecycleHookContextShrink_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemovePolicy, removePolicy_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(StopInstanceTimeout, stopInstanceTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DecreaseDesiredCapacity, decreaseDesiredCapacity_);
      DARABONBA_PTR_FROM_JSON(IgnoreInvalidInstance, ignoreInvalidInstance_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookContext, lifecycleHookContextShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemovePolicy, removePolicy_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(StopInstanceTimeout, stopInstanceTimeout_);
    };
    RemoveInstancesShrinkRequest() = default ;
    RemoveInstancesShrinkRequest(const RemoveInstancesShrinkRequest &) = default ;
    RemoveInstancesShrinkRequest(RemoveInstancesShrinkRequest &&) = default ;
    RemoveInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveInstancesShrinkRequest() = default ;
    RemoveInstancesShrinkRequest& operator=(const RemoveInstancesShrinkRequest &) = default ;
    RemoveInstancesShrinkRequest& operator=(RemoveInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->decreaseDesiredCapacity_ == nullptr && this->ignoreInvalidInstance_ == nullptr && this->instanceIds_ == nullptr && this->lifecycleHookContextShrink_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->removePolicy_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->scalingGroupId_ == nullptr && this->stopInstanceTimeout_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveInstancesShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // decreaseDesiredCapacity Field Functions 
    bool hasDecreaseDesiredCapacity() const { return this->decreaseDesiredCapacity_ != nullptr;};
    void deleteDecreaseDesiredCapacity() { this->decreaseDesiredCapacity_ = nullptr;};
    inline bool getDecreaseDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(decreaseDesiredCapacity_, false) };
    inline RemoveInstancesShrinkRequest& setDecreaseDesiredCapacity(bool decreaseDesiredCapacity) { DARABONBA_PTR_SET_VALUE(decreaseDesiredCapacity_, decreaseDesiredCapacity) };


    // ignoreInvalidInstance Field Functions 
    bool hasIgnoreInvalidInstance() const { return this->ignoreInvalidInstance_ != nullptr;};
    void deleteIgnoreInvalidInstance() { this->ignoreInvalidInstance_ = nullptr;};
    inline bool getIgnoreInvalidInstance() const { DARABONBA_PTR_GET_DEFAULT(ignoreInvalidInstance_, false) };
    inline RemoveInstancesShrinkRequest& setIgnoreInvalidInstance(bool ignoreInvalidInstance) { DARABONBA_PTR_SET_VALUE(ignoreInvalidInstance_, ignoreInvalidInstance) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RemoveInstancesShrinkRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RemoveInstancesShrinkRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // lifecycleHookContextShrink Field Functions 
    bool hasLifecycleHookContextShrink() const { return this->lifecycleHookContextShrink_ != nullptr;};
    void deleteLifecycleHookContextShrink() { this->lifecycleHookContextShrink_ = nullptr;};
    inline string getLifecycleHookContextShrink() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookContextShrink_, "") };
    inline RemoveInstancesShrinkRequest& setLifecycleHookContextShrink(string lifecycleHookContextShrink) { DARABONBA_PTR_SET_VALUE(lifecycleHookContextShrink_, lifecycleHookContextShrink) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RemoveInstancesShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RemoveInstancesShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveInstancesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removePolicy Field Functions 
    bool hasRemovePolicy() const { return this->removePolicy_ != nullptr;};
    void deleteRemovePolicy() { this->removePolicy_ = nullptr;};
    inline string getRemovePolicy() const { DARABONBA_PTR_GET_DEFAULT(removePolicy_, "") };
    inline RemoveInstancesShrinkRequest& setRemovePolicy(string removePolicy) { DARABONBA_PTR_SET_VALUE(removePolicy_, removePolicy) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RemoveInstancesShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RemoveInstancesShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline RemoveInstancesShrinkRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // stopInstanceTimeout Field Functions 
    bool hasStopInstanceTimeout() const { return this->stopInstanceTimeout_ != nullptr;};
    void deleteStopInstanceTimeout() { this->stopInstanceTimeout_ = nullptr;};
    inline int32_t getStopInstanceTimeout() const { DARABONBA_PTR_GET_DEFAULT(stopInstanceTimeout_, 0) };
    inline RemoveInstancesShrinkRequest& setStopInstanceTimeout(int32_t stopInstanceTimeout) { DARABONBA_PTR_SET_VALUE(stopInstanceTimeout_, stopInstanceTimeout) };


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
    shared_ptr<string> lifecycleHookContextShrink_ {};
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
