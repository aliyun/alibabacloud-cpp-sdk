// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ScaleWithAdjustmentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleWithAdjustmentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityMetadata, activityMetadata_);
      DARABONBA_PTR_TO_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(LifecycleHookContext, lifecycleHookContextShrink_);
      DARABONBA_PTR_TO_JSON(MinAdjustmentMagnitude, minAdjustmentMagnitude_);
      DARABONBA_PTR_TO_JSON(Overrides, overridesShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParallelTask, parallelTask_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(SyncActivity, syncActivity_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleWithAdjustmentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityMetadata, activityMetadata_);
      DARABONBA_PTR_FROM_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookContext, lifecycleHookContextShrink_);
      DARABONBA_PTR_FROM_JSON(MinAdjustmentMagnitude, minAdjustmentMagnitude_);
      DARABONBA_PTR_FROM_JSON(Overrides, overridesShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParallelTask, parallelTask_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(SyncActivity, syncActivity_);
    };
    ScaleWithAdjustmentShrinkRequest() = default ;
    ScaleWithAdjustmentShrinkRequest(const ScaleWithAdjustmentShrinkRequest &) = default ;
    ScaleWithAdjustmentShrinkRequest(ScaleWithAdjustmentShrinkRequest &&) = default ;
    ScaleWithAdjustmentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleWithAdjustmentShrinkRequest() = default ;
    ScaleWithAdjustmentShrinkRequest& operator=(const ScaleWithAdjustmentShrinkRequest &) = default ;
    ScaleWithAdjustmentShrinkRequest& operator=(ScaleWithAdjustmentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityMetadata_ == nullptr
        && this->adjustmentType_ == nullptr && this->adjustmentValue_ == nullptr && this->clientToken_ == nullptr && this->executionMode_ == nullptr && this->lifecycleHookContextShrink_ == nullptr
        && this->minAdjustmentMagnitude_ == nullptr && this->overridesShrink_ == nullptr && this->ownerId_ == nullptr && this->parallelTask_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->scalingGroupId_ == nullptr && this->syncActivity_ == nullptr; };
    // activityMetadata Field Functions 
    bool hasActivityMetadata() const { return this->activityMetadata_ != nullptr;};
    void deleteActivityMetadata() { this->activityMetadata_ = nullptr;};
    inline string getActivityMetadata() const { DARABONBA_PTR_GET_DEFAULT(activityMetadata_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setActivityMetadata(string activityMetadata) { DARABONBA_PTR_SET_VALUE(activityMetadata_, activityMetadata) };


    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string getAdjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t getAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ScaleWithAdjustmentShrinkRequest& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string getExecutionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // lifecycleHookContextShrink Field Functions 
    bool hasLifecycleHookContextShrink() const { return this->lifecycleHookContextShrink_ != nullptr;};
    void deleteLifecycleHookContextShrink() { this->lifecycleHookContextShrink_ = nullptr;};
    inline string getLifecycleHookContextShrink() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookContextShrink_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setLifecycleHookContextShrink(string lifecycleHookContextShrink) { DARABONBA_PTR_SET_VALUE(lifecycleHookContextShrink_, lifecycleHookContextShrink) };


    // minAdjustmentMagnitude Field Functions 
    bool hasMinAdjustmentMagnitude() const { return this->minAdjustmentMagnitude_ != nullptr;};
    void deleteMinAdjustmentMagnitude() { this->minAdjustmentMagnitude_ = nullptr;};
    inline int32_t getMinAdjustmentMagnitude() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentMagnitude_, 0) };
    inline ScaleWithAdjustmentShrinkRequest& setMinAdjustmentMagnitude(int32_t minAdjustmentMagnitude) { DARABONBA_PTR_SET_VALUE(minAdjustmentMagnitude_, minAdjustmentMagnitude) };


    // overridesShrink Field Functions 
    bool hasOverridesShrink() const { return this->overridesShrink_ != nullptr;};
    void deleteOverridesShrink() { this->overridesShrink_ = nullptr;};
    inline string getOverridesShrink() const { DARABONBA_PTR_GET_DEFAULT(overridesShrink_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setOverridesShrink(string overridesShrink) { DARABONBA_PTR_SET_VALUE(overridesShrink_, overridesShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ScaleWithAdjustmentShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parallelTask Field Functions 
    bool hasParallelTask() const { return this->parallelTask_ != nullptr;};
    void deleteParallelTask() { this->parallelTask_ = nullptr;};
    inline bool getParallelTask() const { DARABONBA_PTR_GET_DEFAULT(parallelTask_, false) };
    inline ScaleWithAdjustmentShrinkRequest& setParallelTask(bool parallelTask) { DARABONBA_PTR_SET_VALUE(parallelTask_, parallelTask) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // syncActivity Field Functions 
    bool hasSyncActivity() const { return this->syncActivity_ != nullptr;};
    void deleteSyncActivity() { this->syncActivity_ = nullptr;};
    inline bool getSyncActivity() const { DARABONBA_PTR_GET_DEFAULT(syncActivity_, false) };
    inline ScaleWithAdjustmentShrinkRequest& setSyncActivity(bool syncActivity) { DARABONBA_PTR_SET_VALUE(syncActivity_, syncActivity) };


  protected:
    // The metadata of the scaling activity.
    shared_ptr<string> activityMetadata_ {};
    // The adjustment method for the scaling activity. Valid values:
    // 
    // - QuantityChangeInCapacity: Increases or decreases a specified number of ECS instances.
    // - PercentChangeInCapacity: Increases or decreases a specified percentage of ECS instances.
    // - TotalCapacity: Adjusts the number of ECS instances in the current scaling group to a specified number.
    // 
    // This parameter is required.
    shared_ptr<string> adjustmentType_ {};
    // The adjustment value for the scaling activity. In all cases, the number of ECS instances adjusted in a single operation cannot exceed 1,000. Otherwise, the adjustment fails. Valid values vary based on the adjustment method:
    // - QuantityChangeInCapacity: -1,000 to 1,000.
    // - PercentChangeInCapacity: -100 to 10,000.
    // - TotalCapacity: 0 to 2,000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> adjustmentValue_ {};
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions. You can generate the value of this parameter on the client side. The value must be unique across different requests and can be up to 64 ASCII characters in length. The value cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The execution mode. Valid values:
    // 
    // - None: Not specified. Normal scaling is performed.
    // - PlanOnly: Does not trigger scaling. Only elastic planning is executed. The planning results, including instance types, zone IDs, billing methods, and the number of instances to be created, are returned in PlanResult.
    // 
    // Default value: None.
    shared_ptr<string> executionMode_ {};
    // The context information of the lifecycle hook.
    shared_ptr<string> lifecycleHookContextShrink_ {};
    // The minimum number of instances to be adjusted in the scaling activity. This parameter takes effect only when `AdjustmentType` is set to `PercentChangeInCapacity`.
    shared_ptr<int32_t> minAdjustmentMagnitude_ {};
    // The override parameters specified for scaling out an Elastic Container Instance (ECI) scaling group.
    shared_ptr<string> overridesShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether the current scaling task supports concurrent execution.
    shared_ptr<bool> parallelTask_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // Specifies whether to synchronously execute the scaling activity. This parameter is valid only for scaling groups that have the expected number of instances configured. Valid values:
    // 
    // - true: Synchronous process. When the scaling rule is executed, the scale-out or scale-in activity of the scaling group is directly triggered.
    // - false: Asynchronous process. When the expected number of instances in the scaling group is modified, the actual scale-out or scale-in activity of the scaling group is not immediately triggered. The system automatically detects the difference between the expected number of instances and the current number of instances in the scaling group, and then triggers the scale-out or scale-in activity.
    // 
    // > For more information about the expected number of instances, see [Expected number of instances](https://help.aliyun.com/document_detail/146231.html).
    // 
    // Default value: false.
    shared_ptr<bool> syncActivity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
