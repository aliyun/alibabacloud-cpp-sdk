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
    virtual bool empty() const override { this->activityMetadata_ != nullptr
        && this->adjustmentType_ != nullptr && this->adjustmentValue_ != nullptr && this->clientToken_ != nullptr && this->executionMode_ != nullptr && this->lifecycleHookContextShrink_ != nullptr
        && this->minAdjustmentMagnitude_ != nullptr && this->overridesShrink_ != nullptr && this->ownerId_ != nullptr && this->parallelTask_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->scalingGroupId_ != nullptr && this->syncActivity_ != nullptr; };
    // activityMetadata Field Functions 
    bool hasActivityMetadata() const { return this->activityMetadata_ != nullptr;};
    void deleteActivityMetadata() { this->activityMetadata_ = nullptr;};
    inline string activityMetadata() const { DARABONBA_PTR_GET_DEFAULT(activityMetadata_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setActivityMetadata(string activityMetadata) { DARABONBA_PTR_SET_VALUE(activityMetadata_, activityMetadata) };


    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string adjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t adjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ScaleWithAdjustmentShrinkRequest& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // lifecycleHookContextShrink Field Functions 
    bool hasLifecycleHookContextShrink() const { return this->lifecycleHookContextShrink_ != nullptr;};
    void deleteLifecycleHookContextShrink() { this->lifecycleHookContextShrink_ = nullptr;};
    inline string lifecycleHookContextShrink() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookContextShrink_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setLifecycleHookContextShrink(string lifecycleHookContextShrink) { DARABONBA_PTR_SET_VALUE(lifecycleHookContextShrink_, lifecycleHookContextShrink) };


    // minAdjustmentMagnitude Field Functions 
    bool hasMinAdjustmentMagnitude() const { return this->minAdjustmentMagnitude_ != nullptr;};
    void deleteMinAdjustmentMagnitude() { this->minAdjustmentMagnitude_ = nullptr;};
    inline int32_t minAdjustmentMagnitude() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentMagnitude_, 0) };
    inline ScaleWithAdjustmentShrinkRequest& setMinAdjustmentMagnitude(int32_t minAdjustmentMagnitude) { DARABONBA_PTR_SET_VALUE(minAdjustmentMagnitude_, minAdjustmentMagnitude) };


    // overridesShrink Field Functions 
    bool hasOverridesShrink() const { return this->overridesShrink_ != nullptr;};
    void deleteOverridesShrink() { this->overridesShrink_ = nullptr;};
    inline string overridesShrink() const { DARABONBA_PTR_GET_DEFAULT(overridesShrink_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setOverridesShrink(string overridesShrink) { DARABONBA_PTR_SET_VALUE(overridesShrink_, overridesShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ScaleWithAdjustmentShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parallelTask Field Functions 
    bool hasParallelTask() const { return this->parallelTask_ != nullptr;};
    void deleteParallelTask() { this->parallelTask_ = nullptr;};
    inline bool parallelTask() const { DARABONBA_PTR_GET_DEFAULT(parallelTask_, false) };
    inline ScaleWithAdjustmentShrinkRequest& setParallelTask(bool parallelTask) { DARABONBA_PTR_SET_VALUE(parallelTask_, parallelTask) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ScaleWithAdjustmentShrinkRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // syncActivity Field Functions 
    bool hasSyncActivity() const { return this->syncActivity_ != nullptr;};
    void deleteSyncActivity() { this->syncActivity_ = nullptr;};
    inline bool syncActivity() const { DARABONBA_PTR_GET_DEFAULT(syncActivity_, false) };
    inline ScaleWithAdjustmentShrinkRequest& setSyncActivity(bool syncActivity) { DARABONBA_PTR_SET_VALUE(syncActivity_, syncActivity) };


  protected:
    // The metadata of the scaling activity.
    std::shared_ptr<string> activityMetadata_ = nullptr;
    // The type of the scaling policy. Valid values:
    // 
    // *   QuantityChangeInCapacity: adds the specified number of ECS instances to or removes the specified number of ECS instances from the scaling group.
    // *   PercentChangeInCapacity: adds the specified percentage of ECS instances to or removes the specified percentage of ECS instances from the scaling group.
    // *   TotalCapacity: adjusts the number of ECS instances in the scaling group to a specified number.
    // 
    // This parameter is required.
    std::shared_ptr<string> adjustmentType_ = nullptr;
    // The number of instances in each adjustment. The number of ECS instances in each adjustment cannot exceed 1,000.
    // 
    // *   Valid values if you set the AdjustmentType parameter to QuantityChangeInCapacity: -1000 to 1000.
    // *   Valid values if you set the AdjustmentType parameter to PercentChangeInCapacity: -100 to 10000.
    // *   Valid values if you set the AdjustmentType parameter to TotalCapacity: 0 to 2000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> adjustmentValue_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The execution mode. Valid values:
    // 
    // *   None: If this is not specified, auto scaling is performed.
    // *   PlanOnly: Scaling is not triggered. Only elastic planning is performed. The planning result is returned in PlanResult, including the instance type, zone ID, billing type, and number of created instances.
    // 
    // Default value: None.
    std::shared_ptr<string> executionMode_ = nullptr;
    // The context of the lifecycle hook.
    std::shared_ptr<string> lifecycleHookContextShrink_ = nullptr;
    // The minimum number of instances allowed in each adjustment. This parameter takes effect only if you set the `AdjustmentType` parameter to `PercentChangeInCapacity`.
    std::shared_ptr<int32_t> minAdjustmentMagnitude_ = nullptr;
    // The overrides that allow you to adjust the scaling group of the Elastic Container Instance type during a scale-out event.
    std::shared_ptr<string> overridesShrink_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Whether the current scale-out task supports concurrency.
    std::shared_ptr<bool> parallelTask_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // Specifies whether to trigger the scaling task in a synchronous manner. This parameter takes effect only on scaling groups for which you specified an expected number of instances. Valid Values:
    // 
    // *   true: triggers the scaling task in a synchronous manner. A scaling activity is triggered at the time when the scaling rule is executed.
    // *   false: does not trigger the scaling task in a synchronous manner. After you change the expected number of instances for the scaling group, Auto Scaling checks whether the total number of instances in the scaling group matches the new expected number and determines whether to trigger the scaling activity based on the check result.
    // 
    // >  For more information, see [Expected number of instances](https://help.aliyun.com/document_detail/146231.html).
    // 
    // Default value: false.
    std::shared_ptr<bool> syncActivity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
