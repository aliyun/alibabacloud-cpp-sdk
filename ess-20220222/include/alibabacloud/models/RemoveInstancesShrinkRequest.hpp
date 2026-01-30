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
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to adjust the expected number of ECS instances in the scaling group. Valid values:
    // 
    // *   true: After ECS instances are removed from the scaling group, the expected number of ECS instances in the scaling group decreases.
    // *   false: After ECS instances are removed from the scaling group, the expected number of ECS instances in the scaling group remains unchanged.
    // 
    // Default value: true.
    shared_ptr<bool> decreaseDesiredCapacity_ {};
    // Specifies whether to ignore invalid instances when you remove a batch of instances from the scaling group. Valid values:
    // 
    // *   true: ignores invalid instances. If invalid instances exist and valid instances are deleted, the corresponding scaling activity enters the Warning state. You can check the scaling activity details to view the invalid instances that are ignored.
    // *   false: does not ignore invalid instances. If invalid instances exist in the batch of instances that you want to remove from the scaling group, an error is reported.
    // 
    // Default value: false.
    shared_ptr<bool> ignoreInvalidInstance_ {};
    // The IDs of the ECS instances that you want to remove from the scaling group.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    // The context of the lifecycle hook.
    shared_ptr<string> lifecycleHookContextShrink_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    shared_ptr<string> regionId_ {};
    // The action subsequent to the removal of the Elastic Compute Service (ECS) instances. Valid values:
    // 
    // *   recycle: The ECS instances enter the Economical Mode.
    // 
    //     **
    // 
    //     **Note** This setting is applicable only if you set `ScalingPolicy` to `recycle`.
    // 
    // *   release: The ECS instances are released.
    // 
    // ScalingPolicy of the CreateScalingGroup operation specifies the reclaim mode of the scaling group while RemovePolicy of the RemoveInstances operation specifies the subsequent action when an ECS instance is removed from the scaling group. Examples:
    // 
    // *   If you set ScalingPolicy and RemovePolicy to recycle, the ECS instances enter the Economical Mode when they are removed.
    // *   If you set ScalingPolicy to recycle and RemovePolicy to release, the ECS instances are released when they are removed.
    // *   If you set ScalingPolicy to release and RemovePolicy to recycle, the ECS instances are released when they are removed.
    // *   If you set ScalingPolicy and RemovePolicy to release, the ECS instances are released when they are removed.
    // 
    // Default value: release.
    shared_ptr<string> removePolicy_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The period of time required by the ECS instance to enter the Stopped state. Unit: seconds. Valid values: 30 to 240.
    // 
    // > 
    // 
    // *   By default, this parameter inherits the value of StopInstanceTimeout specified in the CreateScalingGroup or ModifyScalingGroup operation. You can also specify a different value for this parameter in the RemoveInstances operation.
    // 
    // *   This parameter takes effect only if you set RemovePolicy to release.
    // 
    // *   If you specify this parameter, the system waits for the ECS instance to enter the Stopped state only for up to the specified period of time before continuing with the scale-in operation, regardless of the status of the ECS instance.
    // 
    // *   If you do not specify this parameter, the system continues with the scale-in operation until the ECS instance enters the Stopped state. If the ECS instance is not successfully stopped, the scale-in process is rolled back and considered failed.
    shared_ptr<int32_t> stopInstanceTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
