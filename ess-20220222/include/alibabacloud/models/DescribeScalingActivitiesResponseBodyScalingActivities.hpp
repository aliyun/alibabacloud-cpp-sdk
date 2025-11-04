// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESRESPONSEBODYSCALINGACTIVITIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESRESPONSEBODYSCALINGACTIVITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages.hpp>
#include <alibabacloud/models/DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingActivitiesResponseBodyScalingActivities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivitiesResponseBodyScalingActivities& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityMetadata, activityMetadata_);
      DARABONBA_PTR_TO_JSON(AttachedCapacity, attachedCapacity_);
      DARABONBA_PTR_TO_JSON(AutoCreatedCapacity, autoCreatedCapacity_);
      DARABONBA_PTR_TO_JSON(Cause, cause_);
      DARABONBA_PTR_TO_JSON(CreatedCapacity, createdCapacity_);
      DARABONBA_PTR_TO_JSON(CreatedInstances, createdInstances_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestroyedCapacity, destroyedCapacity_);
      DARABONBA_PTR_TO_JSON(DestroyedInstances, destroyedInstances_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ErrorMessages, errorMessages_);
      DARABONBA_PTR_TO_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
      DARABONBA_PTR_TO_JSON(LifecycleHookContext, lifecycleHookContext_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingInstanceNumber, scalingInstanceNumber_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartedCapacity, startedCapacity_);
      DARABONBA_PTR_TO_JSON(StartedInstances, startedInstances_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_TO_JSON(StoppedCapacity, stoppedCapacity_);
      DARABONBA_PTR_TO_JSON(StoppedInstances, stoppedInstances_);
      DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_TO_JSON(TriggerSourceId, triggerSourceId_);
      DARABONBA_PTR_TO_JSON(TriggerSourceType, triggerSourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivitiesResponseBodyScalingActivities& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityMetadata, activityMetadata_);
      DARABONBA_PTR_FROM_JSON(AttachedCapacity, attachedCapacity_);
      DARABONBA_PTR_FROM_JSON(AutoCreatedCapacity, autoCreatedCapacity_);
      DARABONBA_PTR_FROM_JSON(Cause, cause_);
      DARABONBA_PTR_FROM_JSON(CreatedCapacity, createdCapacity_);
      DARABONBA_PTR_FROM_JSON(CreatedInstances, createdInstances_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestroyedCapacity, destroyedCapacity_);
      DARABONBA_PTR_FROM_JSON(DestroyedInstances, destroyedInstances_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorMessages, errorMessages_);
      DARABONBA_PTR_FROM_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookContext, lifecycleHookContext_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingInstanceNumber, scalingInstanceNumber_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartedCapacity, startedCapacity_);
      DARABONBA_PTR_FROM_JSON(StartedInstances, startedInstances_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_FROM_JSON(StoppedCapacity, stoppedCapacity_);
      DARABONBA_PTR_FROM_JSON(StoppedInstances, stoppedInstances_);
      DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_FROM_JSON(TriggerSourceId, triggerSourceId_);
      DARABONBA_PTR_FROM_JSON(TriggerSourceType, triggerSourceType_);
    };
    DescribeScalingActivitiesResponseBodyScalingActivities() = default ;
    DescribeScalingActivitiesResponseBodyScalingActivities(const DescribeScalingActivitiesResponseBodyScalingActivities &) = default ;
    DescribeScalingActivitiesResponseBodyScalingActivities(DescribeScalingActivitiesResponseBodyScalingActivities &&) = default ;
    DescribeScalingActivitiesResponseBodyScalingActivities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivitiesResponseBodyScalingActivities() = default ;
    DescribeScalingActivitiesResponseBodyScalingActivities& operator=(const DescribeScalingActivitiesResponseBodyScalingActivities &) = default ;
    DescribeScalingActivitiesResponseBodyScalingActivities& operator=(DescribeScalingActivitiesResponseBodyScalingActivities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityMetadata_ == nullptr
        && return this->attachedCapacity_ == nullptr && return this->autoCreatedCapacity_ == nullptr && return this->cause_ == nullptr && return this->createdCapacity_ == nullptr && return this->createdInstances_ == nullptr
        && return this->description_ == nullptr && return this->destroyedCapacity_ == nullptr && return this->destroyedInstances_ == nullptr && return this->detail_ == nullptr && return this->endTime_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->errorMessages_ == nullptr && return this->instanceRefreshTaskId_ == nullptr && return this->lifecycleHookContext_ == nullptr
        && return this->progress_ == nullptr && return this->scalingActivityId_ == nullptr && return this->scalingGroupId_ == nullptr && return this->scalingInstanceNumber_ == nullptr && return this->startTime_ == nullptr
        && return this->startedCapacity_ == nullptr && return this->startedInstances_ == nullptr && return this->statusCode_ == nullptr && return this->statusMessage_ == nullptr && return this->stoppedCapacity_ == nullptr
        && return this->stoppedInstances_ == nullptr && return this->totalCapacity_ == nullptr && return this->triggerSourceId_ == nullptr && return this->triggerSourceType_ == nullptr; };
    // activityMetadata Field Functions 
    bool hasActivityMetadata() const { return this->activityMetadata_ != nullptr;};
    void deleteActivityMetadata() { this->activityMetadata_ = nullptr;};
    inline string activityMetadata() const { DARABONBA_PTR_GET_DEFAULT(activityMetadata_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setActivityMetadata(string activityMetadata) { DARABONBA_PTR_SET_VALUE(activityMetadata_, activityMetadata) };


    // attachedCapacity Field Functions 
    bool hasAttachedCapacity() const { return this->attachedCapacity_ != nullptr;};
    void deleteAttachedCapacity() { this->attachedCapacity_ = nullptr;};
    inline string attachedCapacity() const { DARABONBA_PTR_GET_DEFAULT(attachedCapacity_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setAttachedCapacity(string attachedCapacity) { DARABONBA_PTR_SET_VALUE(attachedCapacity_, attachedCapacity) };


    // autoCreatedCapacity Field Functions 
    bool hasAutoCreatedCapacity() const { return this->autoCreatedCapacity_ != nullptr;};
    void deleteAutoCreatedCapacity() { this->autoCreatedCapacity_ = nullptr;};
    inline string autoCreatedCapacity() const { DARABONBA_PTR_GET_DEFAULT(autoCreatedCapacity_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setAutoCreatedCapacity(string autoCreatedCapacity) { DARABONBA_PTR_SET_VALUE(autoCreatedCapacity_, autoCreatedCapacity) };


    // cause Field Functions 
    bool hasCause() const { return this->cause_ != nullptr;};
    void deleteCause() { this->cause_ = nullptr;};
    inline string cause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


    // createdCapacity Field Functions 
    bool hasCreatedCapacity() const { return this->createdCapacity_ != nullptr;};
    void deleteCreatedCapacity() { this->createdCapacity_ = nullptr;};
    inline int32_t createdCapacity() const { DARABONBA_PTR_GET_DEFAULT(createdCapacity_, 0) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setCreatedCapacity(int32_t createdCapacity) { DARABONBA_PTR_SET_VALUE(createdCapacity_, createdCapacity) };


    // createdInstances Field Functions 
    bool hasCreatedInstances() const { return this->createdInstances_ != nullptr;};
    void deleteCreatedInstances() { this->createdInstances_ = nullptr;};
    inline const vector<string> & createdInstances() const { DARABONBA_PTR_GET_CONST(createdInstances_, vector<string>) };
    inline vector<string> createdInstances() { DARABONBA_PTR_GET(createdInstances_, vector<string>) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setCreatedInstances(const vector<string> & createdInstances) { DARABONBA_PTR_SET_VALUE(createdInstances_, createdInstances) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setCreatedInstances(vector<string> && createdInstances) { DARABONBA_PTR_SET_RVALUE(createdInstances_, createdInstances) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destroyedCapacity Field Functions 
    bool hasDestroyedCapacity() const { return this->destroyedCapacity_ != nullptr;};
    void deleteDestroyedCapacity() { this->destroyedCapacity_ = nullptr;};
    inline int32_t destroyedCapacity() const { DARABONBA_PTR_GET_DEFAULT(destroyedCapacity_, 0) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setDestroyedCapacity(int32_t destroyedCapacity) { DARABONBA_PTR_SET_VALUE(destroyedCapacity_, destroyedCapacity) };


    // destroyedInstances Field Functions 
    bool hasDestroyedInstances() const { return this->destroyedInstances_ != nullptr;};
    void deleteDestroyedInstances() { this->destroyedInstances_ = nullptr;};
    inline const vector<string> & destroyedInstances() const { DARABONBA_PTR_GET_CONST(destroyedInstances_, vector<string>) };
    inline vector<string> destroyedInstances() { DARABONBA_PTR_GET(destroyedInstances_, vector<string>) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setDestroyedInstances(const vector<string> & destroyedInstances) { DARABONBA_PTR_SET_VALUE(destroyedInstances_, destroyedInstances) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setDestroyedInstances(vector<string> && destroyedInstances) { DARABONBA_PTR_SET_RVALUE(destroyedInstances_, destroyedInstances) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // errorMessages Field Functions 
    bool hasErrorMessages() const { return this->errorMessages_ != nullptr;};
    void deleteErrorMessages() { this->errorMessages_ = nullptr;};
    inline const vector<Models::DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages> & errorMessages() const { DARABONBA_PTR_GET_CONST(errorMessages_, vector<Models::DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages>) };
    inline vector<Models::DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages> errorMessages() { DARABONBA_PTR_GET(errorMessages_, vector<Models::DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages>) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setErrorMessages(const vector<Models::DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages> & errorMessages) { DARABONBA_PTR_SET_VALUE(errorMessages_, errorMessages) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setErrorMessages(vector<Models::DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages> && errorMessages) { DARABONBA_PTR_SET_RVALUE(errorMessages_, errorMessages) };


    // instanceRefreshTaskId Field Functions 
    bool hasInstanceRefreshTaskId() const { return this->instanceRefreshTaskId_ != nullptr;};
    void deleteInstanceRefreshTaskId() { this->instanceRefreshTaskId_ = nullptr;};
    inline string instanceRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(instanceRefreshTaskId_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setInstanceRefreshTaskId(string instanceRefreshTaskId) { DARABONBA_PTR_SET_VALUE(instanceRefreshTaskId_, instanceRefreshTaskId) };


    // lifecycleHookContext Field Functions 
    bool hasLifecycleHookContext() const { return this->lifecycleHookContext_ != nullptr;};
    void deleteLifecycleHookContext() { this->lifecycleHookContext_ = nullptr;};
    inline const Models::DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext & lifecycleHookContext() const { DARABONBA_PTR_GET_CONST(lifecycleHookContext_, Models::DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext) };
    inline Models::DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext lifecycleHookContext() { DARABONBA_PTR_GET(lifecycleHookContext_, Models::DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setLifecycleHookContext(const Models::DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext & lifecycleHookContext) { DARABONBA_PTR_SET_VALUE(lifecycleHookContext_, lifecycleHookContext) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setLifecycleHookContext(Models::DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext && lifecycleHookContext) { DARABONBA_PTR_SET_RVALUE(lifecycleHookContext_, lifecycleHookContext) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string scalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingInstanceNumber Field Functions 
    bool hasScalingInstanceNumber() const { return this->scalingInstanceNumber_ != nullptr;};
    void deleteScalingInstanceNumber() { this->scalingInstanceNumber_ = nullptr;};
    inline int32_t scalingInstanceNumber() const { DARABONBA_PTR_GET_DEFAULT(scalingInstanceNumber_, 0) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setScalingInstanceNumber(int32_t scalingInstanceNumber) { DARABONBA_PTR_SET_VALUE(scalingInstanceNumber_, scalingInstanceNumber) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startedCapacity Field Functions 
    bool hasStartedCapacity() const { return this->startedCapacity_ != nullptr;};
    void deleteStartedCapacity() { this->startedCapacity_ = nullptr;};
    inline int32_t startedCapacity() const { DARABONBA_PTR_GET_DEFAULT(startedCapacity_, 0) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setStartedCapacity(int32_t startedCapacity) { DARABONBA_PTR_SET_VALUE(startedCapacity_, startedCapacity) };


    // startedInstances Field Functions 
    bool hasStartedInstances() const { return this->startedInstances_ != nullptr;};
    void deleteStartedInstances() { this->startedInstances_ = nullptr;};
    inline const vector<string> & startedInstances() const { DARABONBA_PTR_GET_CONST(startedInstances_, vector<string>) };
    inline vector<string> startedInstances() { DARABONBA_PTR_GET(startedInstances_, vector<string>) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setStartedInstances(const vector<string> & startedInstances) { DARABONBA_PTR_SET_VALUE(startedInstances_, startedInstances) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setStartedInstances(vector<string> && startedInstances) { DARABONBA_PTR_SET_RVALUE(startedInstances_, startedInstances) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // stoppedCapacity Field Functions 
    bool hasStoppedCapacity() const { return this->stoppedCapacity_ != nullptr;};
    void deleteStoppedCapacity() { this->stoppedCapacity_ = nullptr;};
    inline int32_t stoppedCapacity() const { DARABONBA_PTR_GET_DEFAULT(stoppedCapacity_, 0) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setStoppedCapacity(int32_t stoppedCapacity) { DARABONBA_PTR_SET_VALUE(stoppedCapacity_, stoppedCapacity) };


    // stoppedInstances Field Functions 
    bool hasStoppedInstances() const { return this->stoppedInstances_ != nullptr;};
    void deleteStoppedInstances() { this->stoppedInstances_ = nullptr;};
    inline const vector<string> & stoppedInstances() const { DARABONBA_PTR_GET_CONST(stoppedInstances_, vector<string>) };
    inline vector<string> stoppedInstances() { DARABONBA_PTR_GET(stoppedInstances_, vector<string>) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setStoppedInstances(const vector<string> & stoppedInstances) { DARABONBA_PTR_SET_VALUE(stoppedInstances_, stoppedInstances) };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setStoppedInstances(vector<string> && stoppedInstances) { DARABONBA_PTR_SET_RVALUE(stoppedInstances_, stoppedInstances) };


    // totalCapacity Field Functions 
    bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
    void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
    inline string totalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setTotalCapacity(string totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


    // triggerSourceId Field Functions 
    bool hasTriggerSourceId() const { return this->triggerSourceId_ != nullptr;};
    void deleteTriggerSourceId() { this->triggerSourceId_ = nullptr;};
    inline string triggerSourceId() const { DARABONBA_PTR_GET_DEFAULT(triggerSourceId_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setTriggerSourceId(string triggerSourceId) { DARABONBA_PTR_SET_VALUE(triggerSourceId_, triggerSourceId) };


    // triggerSourceType Field Functions 
    bool hasTriggerSourceType() const { return this->triggerSourceType_ != nullptr;};
    void deleteTriggerSourceType() { this->triggerSourceType_ = nullptr;};
    inline string triggerSourceType() const { DARABONBA_PTR_GET_DEFAULT(triggerSourceType_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivities& setTriggerSourceType(string triggerSourceType) { DARABONBA_PTR_SET_VALUE(triggerSourceType_, triggerSourceType) };


  protected:
    // The metadata of the scaling activity.
    std::shared_ptr<string> activityMetadata_ = nullptr;
    // The total number of instances that are manually added to the scaling group after the scaling activity is complete.
    std::shared_ptr<string> attachedCapacity_ = nullptr;
    // The total number of instances that are created by Auto Scaling after the scaling activity was complete.
    std::shared_ptr<string> autoCreatedCapacity_ = nullptr;
    // The reason why the scaling activity was triggered.
    std::shared_ptr<string> cause_ = nullptr;
    // The number of instances that are created during the scale-out event.
    std::shared_ptr<int32_t> createdCapacity_ = nullptr;
    // The instances that are created during the scale-out event.
    std::shared_ptr<vector<string>> createdInstances_ = nullptr;
    // The description of the scaling activity.
    std::shared_ptr<string> description_ = nullptr;
    // The number of instances that are released during the scale-in event.
    std::shared_ptr<int32_t> destroyedCapacity_ = nullptr;
    // The instances that are released during the scale-in event.
    std::shared_ptr<vector<string>> destroyedInstances_ = nullptr;
    // Details of the scaling activity.
    std::shared_ptr<string> detail_ = nullptr;
    // The time when the scaling activity was complete.
    std::shared_ptr<string> endTime_ = nullptr;
    // The error code that is returned when the scaling activity failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message that is returned when the scaling activity failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The error messages that are returned when the scaling activities failed or are partially successful.
    std::shared_ptr<vector<Models::DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages>> errorMessages_ = nullptr;
    // The ID of the instance refresh task.
    std::shared_ptr<string> instanceRefreshTaskId_ = nullptr;
    // The context of the lifecycle hook.
    std::shared_ptr<Models::DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext> lifecycleHookContext_ = nullptr;
    // The execution progress of the scaling activity.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The ID of the scaling activity.
    std::shared_ptr<string> scalingActivityId_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // *   If you query a scale-out activity, the value of this parameter indicates the number of instances that are created or the number of instances that are started from Economical Mode.
    // *   If you query a scale-in activity, the value of this parameter indicates the number of instances that are deleted or the number of instances that are stopped in Economical Mode.
    std::shared_ptr<int32_t> scalingInstanceNumber_ = nullptr;
    // The time when the scaling activity was started.
    std::shared_ptr<string> startTime_ = nullptr;
    // The number of instances that are started from the Economical Mode during the scale-out event.
    std::shared_ptr<int32_t> startedCapacity_ = nullptr;
    // The instances that are started from the Economical Mode during the scale-out event.
    std::shared_ptr<vector<string>> startedInstances_ = nullptr;
    // The status of the scaling activity. Valid values:
    // 
    // *   Successful: The scaling activity is successful.
    // *   Warning: The scaling activity is partially successful.
    // *   Failed: The scaling activity failed.
    // *   InProgress: The scaling activity is in progress.
    // *   Rejected: The request to trigger the scaling activity is rejected.
    std::shared_ptr<string> statusCode_ = nullptr;
    // The status message of the scaling activity.
    std::shared_ptr<string> statusMessage_ = nullptr;
    // The number of instances that are stopped in the Economical Mode during the scale-in event.
    std::shared_ptr<int32_t> stoppedCapacity_ = nullptr;
    // The instances that are stopped in the Economical Mode during the scale-in event.
    std::shared_ptr<vector<string>> stoppedInstances_ = nullptr;
    // The total number of instances in the scaling group after the scaling activity was complete.
    std::shared_ptr<string> totalCapacity_ = nullptr;
    // The ID of the trigger source of the scaling activity. Valid values:
    // 
    // *   If the scaling activity is triggered by an event-triggered task, the ID of the trigger source is the ID of the event-triggered task.
    // *   If the scaling activity is triggered by calling an API operation, the ID of the trigger source is the ID of the Alibaba Cloud account or Resource Access Management (RAM) user that you use to call the API operation.
    // *   If the scaling activity is triggered by Auto Scaling, the ID of the trigger source is null.
    std::shared_ptr<string> triggerSourceId_ = nullptr;
    // The type of the trigger source of the scaling activity. Valid values:
    // 
    // *   Cms: The scaling activity is triggered by an event-triggered task.
    // *   APIs: The scaling activity is triggered by calling an API operation.
    // *   Ess: The scaling activity is triggered by Auto Scaling.
    std::shared_ptr<string> triggerSourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
