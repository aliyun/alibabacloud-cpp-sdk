// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESRESPONSEBODY_HPP_
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
  class DescribeScalingActivitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivities, scalingActivities_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivities, scalingActivities_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeScalingActivitiesResponseBody() = default ;
    DescribeScalingActivitiesResponseBody(const DescribeScalingActivitiesResponseBody &) = default ;
    DescribeScalingActivitiesResponseBody(DescribeScalingActivitiesResponseBody &&) = default ;
    DescribeScalingActivitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivitiesResponseBody() = default ;
    DescribeScalingActivitiesResponseBody& operator=(const DescribeScalingActivitiesResponseBody &) = default ;
    DescribeScalingActivitiesResponseBody& operator=(DescribeScalingActivitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingActivities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingActivities& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ScalingActivities& obj) { 
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
      ScalingActivities() = default ;
      ScalingActivities(const ScalingActivities &) = default ;
      ScalingActivities(ScalingActivities &&) = default ;
      ScalingActivities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingActivities() = default ;
      ScalingActivities& operator=(const ScalingActivities &) = default ;
      ScalingActivities& operator=(ScalingActivities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LifecycleHookContext : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LifecycleHookContext& obj) { 
          DARABONBA_PTR_TO_JSON(DisableLifecycleHook, disableLifecycleHook_);
          DARABONBA_PTR_TO_JSON(IgnoredLifecycleHookIds, ignoredLifecycleHookIds_);
        };
        friend void from_json(const Darabonba::Json& j, LifecycleHookContext& obj) { 
          DARABONBA_PTR_FROM_JSON(DisableLifecycleHook, disableLifecycleHook_);
          DARABONBA_PTR_FROM_JSON(IgnoredLifecycleHookIds, ignoredLifecycleHookIds_);
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
        && this->ignoredLifecycleHookIds_ == nullptr; };
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


      protected:
        // Indicates whether all lifecycle hooks are disabled when the scaling activity is triggered. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> disableLifecycleHook_ {};
        // The IDs of the lifecycle hooks that are disabled.
        shared_ptr<vector<string>> ignoredLifecycleHookIds_ {};
      };

      class ErrorMessages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorMessages& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FailedInstanceIds, failedInstanceIds_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorMessages& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FailedInstanceIds, failedInstanceIds_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        ErrorMessages() = default ;
        ErrorMessages(const ErrorMessages &) = default ;
        ErrorMessages(ErrorMessages &&) = default ;
        ErrorMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorMessages() = default ;
        ErrorMessages& operator=(const ErrorMessages &) = default ;
        ErrorMessages& operator=(ErrorMessages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->failedInstanceIds_ == nullptr && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ErrorMessages& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ErrorMessages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // failedInstanceIds Field Functions 
        bool hasFailedInstanceIds() const { return this->failedInstanceIds_ != nullptr;};
        void deleteFailedInstanceIds() { this->failedInstanceIds_ = nullptr;};
        inline const vector<string> & getFailedInstanceIds() const { DARABONBA_PTR_GET_CONST(failedInstanceIds_, vector<string>) };
        inline vector<string> getFailedInstanceIds() { DARABONBA_PTR_GET(failedInstanceIds_, vector<string>) };
        inline ErrorMessages& setFailedInstanceIds(const vector<string> & failedInstanceIds) { DARABONBA_PTR_SET_VALUE(failedInstanceIds_, failedInstanceIds) };
        inline ErrorMessages& setFailedInstanceIds(vector<string> && failedInstanceIds) { DARABONBA_PTR_SET_RVALUE(failedInstanceIds_, failedInstanceIds) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ErrorMessages& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The error code that is returned when the scaling activity failed.
        shared_ptr<string> code_ {};
        // The description of the scaling activity exception.
        shared_ptr<string> description_ {};
        // The IDs of the instances included in the failed scaling activities.
        shared_ptr<vector<string>> failedInstanceIds_ {};
        // The error message that is returned when the scaling activity failed or is partially successful.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->activityMetadata_ == nullptr
        && this->attachedCapacity_ == nullptr && this->autoCreatedCapacity_ == nullptr && this->cause_ == nullptr && this->createdCapacity_ == nullptr && this->createdInstances_ == nullptr
        && this->description_ == nullptr && this->destroyedCapacity_ == nullptr && this->destroyedInstances_ == nullptr && this->detail_ == nullptr && this->endTime_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->errorMessages_ == nullptr && this->instanceRefreshTaskId_ == nullptr && this->lifecycleHookContext_ == nullptr
        && this->progress_ == nullptr && this->scalingActivityId_ == nullptr && this->scalingGroupId_ == nullptr && this->scalingInstanceNumber_ == nullptr && this->startTime_ == nullptr
        && this->startedCapacity_ == nullptr && this->startedInstances_ == nullptr && this->statusCode_ == nullptr && this->statusMessage_ == nullptr && this->stoppedCapacity_ == nullptr
        && this->stoppedInstances_ == nullptr && this->totalCapacity_ == nullptr && this->triggerSourceId_ == nullptr && this->triggerSourceType_ == nullptr; };
      // activityMetadata Field Functions 
      bool hasActivityMetadata() const { return this->activityMetadata_ != nullptr;};
      void deleteActivityMetadata() { this->activityMetadata_ = nullptr;};
      inline string getActivityMetadata() const { DARABONBA_PTR_GET_DEFAULT(activityMetadata_, "") };
      inline ScalingActivities& setActivityMetadata(string activityMetadata) { DARABONBA_PTR_SET_VALUE(activityMetadata_, activityMetadata) };


      // attachedCapacity Field Functions 
      bool hasAttachedCapacity() const { return this->attachedCapacity_ != nullptr;};
      void deleteAttachedCapacity() { this->attachedCapacity_ = nullptr;};
      inline string getAttachedCapacity() const { DARABONBA_PTR_GET_DEFAULT(attachedCapacity_, "") };
      inline ScalingActivities& setAttachedCapacity(string attachedCapacity) { DARABONBA_PTR_SET_VALUE(attachedCapacity_, attachedCapacity) };


      // autoCreatedCapacity Field Functions 
      bool hasAutoCreatedCapacity() const { return this->autoCreatedCapacity_ != nullptr;};
      void deleteAutoCreatedCapacity() { this->autoCreatedCapacity_ = nullptr;};
      inline string getAutoCreatedCapacity() const { DARABONBA_PTR_GET_DEFAULT(autoCreatedCapacity_, "") };
      inline ScalingActivities& setAutoCreatedCapacity(string autoCreatedCapacity) { DARABONBA_PTR_SET_VALUE(autoCreatedCapacity_, autoCreatedCapacity) };


      // cause Field Functions 
      bool hasCause() const { return this->cause_ != nullptr;};
      void deleteCause() { this->cause_ = nullptr;};
      inline string getCause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
      inline ScalingActivities& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


      // createdCapacity Field Functions 
      bool hasCreatedCapacity() const { return this->createdCapacity_ != nullptr;};
      void deleteCreatedCapacity() { this->createdCapacity_ = nullptr;};
      inline int32_t getCreatedCapacity() const { DARABONBA_PTR_GET_DEFAULT(createdCapacity_, 0) };
      inline ScalingActivities& setCreatedCapacity(int32_t createdCapacity) { DARABONBA_PTR_SET_VALUE(createdCapacity_, createdCapacity) };


      // createdInstances Field Functions 
      bool hasCreatedInstances() const { return this->createdInstances_ != nullptr;};
      void deleteCreatedInstances() { this->createdInstances_ = nullptr;};
      inline const vector<string> & getCreatedInstances() const { DARABONBA_PTR_GET_CONST(createdInstances_, vector<string>) };
      inline vector<string> getCreatedInstances() { DARABONBA_PTR_GET(createdInstances_, vector<string>) };
      inline ScalingActivities& setCreatedInstances(const vector<string> & createdInstances) { DARABONBA_PTR_SET_VALUE(createdInstances_, createdInstances) };
      inline ScalingActivities& setCreatedInstances(vector<string> && createdInstances) { DARABONBA_PTR_SET_RVALUE(createdInstances_, createdInstances) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ScalingActivities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destroyedCapacity Field Functions 
      bool hasDestroyedCapacity() const { return this->destroyedCapacity_ != nullptr;};
      void deleteDestroyedCapacity() { this->destroyedCapacity_ = nullptr;};
      inline int32_t getDestroyedCapacity() const { DARABONBA_PTR_GET_DEFAULT(destroyedCapacity_, 0) };
      inline ScalingActivities& setDestroyedCapacity(int32_t destroyedCapacity) { DARABONBA_PTR_SET_VALUE(destroyedCapacity_, destroyedCapacity) };


      // destroyedInstances Field Functions 
      bool hasDestroyedInstances() const { return this->destroyedInstances_ != nullptr;};
      void deleteDestroyedInstances() { this->destroyedInstances_ = nullptr;};
      inline const vector<string> & getDestroyedInstances() const { DARABONBA_PTR_GET_CONST(destroyedInstances_, vector<string>) };
      inline vector<string> getDestroyedInstances() { DARABONBA_PTR_GET(destroyedInstances_, vector<string>) };
      inline ScalingActivities& setDestroyedInstances(const vector<string> & destroyedInstances) { DARABONBA_PTR_SET_VALUE(destroyedInstances_, destroyedInstances) };
      inline ScalingActivities& setDestroyedInstances(vector<string> && destroyedInstances) { DARABONBA_PTR_SET_RVALUE(destroyedInstances_, destroyedInstances) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline ScalingActivities& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline ScalingActivities& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ScalingActivities& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline ScalingActivities& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // errorMessages Field Functions 
      bool hasErrorMessages() const { return this->errorMessages_ != nullptr;};
      void deleteErrorMessages() { this->errorMessages_ = nullptr;};
      inline const vector<ScalingActivities::ErrorMessages> & getErrorMessages() const { DARABONBA_PTR_GET_CONST(errorMessages_, vector<ScalingActivities::ErrorMessages>) };
      inline vector<ScalingActivities::ErrorMessages> getErrorMessages() { DARABONBA_PTR_GET(errorMessages_, vector<ScalingActivities::ErrorMessages>) };
      inline ScalingActivities& setErrorMessages(const vector<ScalingActivities::ErrorMessages> & errorMessages) { DARABONBA_PTR_SET_VALUE(errorMessages_, errorMessages) };
      inline ScalingActivities& setErrorMessages(vector<ScalingActivities::ErrorMessages> && errorMessages) { DARABONBA_PTR_SET_RVALUE(errorMessages_, errorMessages) };


      // instanceRefreshTaskId Field Functions 
      bool hasInstanceRefreshTaskId() const { return this->instanceRefreshTaskId_ != nullptr;};
      void deleteInstanceRefreshTaskId() { this->instanceRefreshTaskId_ = nullptr;};
      inline string getInstanceRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(instanceRefreshTaskId_, "") };
      inline ScalingActivities& setInstanceRefreshTaskId(string instanceRefreshTaskId) { DARABONBA_PTR_SET_VALUE(instanceRefreshTaskId_, instanceRefreshTaskId) };


      // lifecycleHookContext Field Functions 
      bool hasLifecycleHookContext() const { return this->lifecycleHookContext_ != nullptr;};
      void deleteLifecycleHookContext() { this->lifecycleHookContext_ = nullptr;};
      inline const ScalingActivities::LifecycleHookContext & getLifecycleHookContext() const { DARABONBA_PTR_GET_CONST(lifecycleHookContext_, ScalingActivities::LifecycleHookContext) };
      inline ScalingActivities::LifecycleHookContext getLifecycleHookContext() { DARABONBA_PTR_GET(lifecycleHookContext_, ScalingActivities::LifecycleHookContext) };
      inline ScalingActivities& setLifecycleHookContext(const ScalingActivities::LifecycleHookContext & lifecycleHookContext) { DARABONBA_PTR_SET_VALUE(lifecycleHookContext_, lifecycleHookContext) };
      inline ScalingActivities& setLifecycleHookContext(ScalingActivities::LifecycleHookContext && lifecycleHookContext) { DARABONBA_PTR_SET_RVALUE(lifecycleHookContext_, lifecycleHookContext) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline ScalingActivities& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // scalingActivityId Field Functions 
      bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
      void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
      inline string getScalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
      inline ScalingActivities& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline ScalingActivities& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // scalingInstanceNumber Field Functions 
      bool hasScalingInstanceNumber() const { return this->scalingInstanceNumber_ != nullptr;};
      void deleteScalingInstanceNumber() { this->scalingInstanceNumber_ = nullptr;};
      inline int32_t getScalingInstanceNumber() const { DARABONBA_PTR_GET_DEFAULT(scalingInstanceNumber_, 0) };
      inline ScalingActivities& setScalingInstanceNumber(int32_t scalingInstanceNumber) { DARABONBA_PTR_SET_VALUE(scalingInstanceNumber_, scalingInstanceNumber) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline ScalingActivities& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // startedCapacity Field Functions 
      bool hasStartedCapacity() const { return this->startedCapacity_ != nullptr;};
      void deleteStartedCapacity() { this->startedCapacity_ = nullptr;};
      inline int32_t getStartedCapacity() const { DARABONBA_PTR_GET_DEFAULT(startedCapacity_, 0) };
      inline ScalingActivities& setStartedCapacity(int32_t startedCapacity) { DARABONBA_PTR_SET_VALUE(startedCapacity_, startedCapacity) };


      // startedInstances Field Functions 
      bool hasStartedInstances() const { return this->startedInstances_ != nullptr;};
      void deleteStartedInstances() { this->startedInstances_ = nullptr;};
      inline const vector<string> & getStartedInstances() const { DARABONBA_PTR_GET_CONST(startedInstances_, vector<string>) };
      inline vector<string> getStartedInstances() { DARABONBA_PTR_GET(startedInstances_, vector<string>) };
      inline ScalingActivities& setStartedInstances(const vector<string> & startedInstances) { DARABONBA_PTR_SET_VALUE(startedInstances_, startedInstances) };
      inline ScalingActivities& setStartedInstances(vector<string> && startedInstances) { DARABONBA_PTR_SET_RVALUE(startedInstances_, startedInstances) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline ScalingActivities& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline ScalingActivities& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // stoppedCapacity Field Functions 
      bool hasStoppedCapacity() const { return this->stoppedCapacity_ != nullptr;};
      void deleteStoppedCapacity() { this->stoppedCapacity_ = nullptr;};
      inline int32_t getStoppedCapacity() const { DARABONBA_PTR_GET_DEFAULT(stoppedCapacity_, 0) };
      inline ScalingActivities& setStoppedCapacity(int32_t stoppedCapacity) { DARABONBA_PTR_SET_VALUE(stoppedCapacity_, stoppedCapacity) };


      // stoppedInstances Field Functions 
      bool hasStoppedInstances() const { return this->stoppedInstances_ != nullptr;};
      void deleteStoppedInstances() { this->stoppedInstances_ = nullptr;};
      inline const vector<string> & getStoppedInstances() const { DARABONBA_PTR_GET_CONST(stoppedInstances_, vector<string>) };
      inline vector<string> getStoppedInstances() { DARABONBA_PTR_GET(stoppedInstances_, vector<string>) };
      inline ScalingActivities& setStoppedInstances(const vector<string> & stoppedInstances) { DARABONBA_PTR_SET_VALUE(stoppedInstances_, stoppedInstances) };
      inline ScalingActivities& setStoppedInstances(vector<string> && stoppedInstances) { DARABONBA_PTR_SET_RVALUE(stoppedInstances_, stoppedInstances) };


      // totalCapacity Field Functions 
      bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
      void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
      inline string getTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, "") };
      inline ScalingActivities& setTotalCapacity(string totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


      // triggerSourceId Field Functions 
      bool hasTriggerSourceId() const { return this->triggerSourceId_ != nullptr;};
      void deleteTriggerSourceId() { this->triggerSourceId_ = nullptr;};
      inline string getTriggerSourceId() const { DARABONBA_PTR_GET_DEFAULT(triggerSourceId_, "") };
      inline ScalingActivities& setTriggerSourceId(string triggerSourceId) { DARABONBA_PTR_SET_VALUE(triggerSourceId_, triggerSourceId) };


      // triggerSourceType Field Functions 
      bool hasTriggerSourceType() const { return this->triggerSourceType_ != nullptr;};
      void deleteTriggerSourceType() { this->triggerSourceType_ = nullptr;};
      inline string getTriggerSourceType() const { DARABONBA_PTR_GET_DEFAULT(triggerSourceType_, "") };
      inline ScalingActivities& setTriggerSourceType(string triggerSourceType) { DARABONBA_PTR_SET_VALUE(triggerSourceType_, triggerSourceType) };


    protected:
      // The metadata of the scaling activity.
      shared_ptr<string> activityMetadata_ {};
      // The total number of instances that are manually added to the scaling group after the scaling activity is complete.
      shared_ptr<string> attachedCapacity_ {};
      // The total number of instances that are created by Auto Scaling after the scaling activity was complete.
      shared_ptr<string> autoCreatedCapacity_ {};
      // The reason why the scaling activity was triggered.
      shared_ptr<string> cause_ {};
      // The number of instances that are created during the scale-out event.
      shared_ptr<int32_t> createdCapacity_ {};
      // The instances that are created during the scale-out event.
      shared_ptr<vector<string>> createdInstances_ {};
      // The description of the scaling activity.
      shared_ptr<string> description_ {};
      // The number of instances that are released during the scale-in event.
      shared_ptr<int32_t> destroyedCapacity_ {};
      // The instances that are released during the scale-in event.
      shared_ptr<vector<string>> destroyedInstances_ {};
      // Details of the scaling activity.
      shared_ptr<string> detail_ {};
      // The time when the scaling activity was complete.
      shared_ptr<string> endTime_ {};
      // The error code that is returned when the scaling activity failed.
      shared_ptr<string> errorCode_ {};
      // The error message that is returned when the scaling activity failed.
      shared_ptr<string> errorMessage_ {};
      // The error messages that are returned when the scaling activities failed or are partially successful.
      shared_ptr<vector<ScalingActivities::ErrorMessages>> errorMessages_ {};
      // The ID of the instance refresh task.
      shared_ptr<string> instanceRefreshTaskId_ {};
      // The context of the lifecycle hook.
      shared_ptr<ScalingActivities::LifecycleHookContext> lifecycleHookContext_ {};
      // The execution progress of the scaling activity.
      shared_ptr<int32_t> progress_ {};
      // The ID of the scaling activity.
      shared_ptr<string> scalingActivityId_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // *   If you query a scale-out activity, the value of this parameter indicates the number of instances that are created or the number of instances that are started from Economical Mode.
      // *   If you query a scale-in activity, the value of this parameter indicates the number of instances that are deleted or the number of instances that are stopped in Economical Mode.
      shared_ptr<int32_t> scalingInstanceNumber_ {};
      // The time when the scaling activity was started.
      shared_ptr<string> startTime_ {};
      // The number of instances that are started from the Economical Mode during the scale-out event.
      shared_ptr<int32_t> startedCapacity_ {};
      // The instances that are started from the Economical Mode during the scale-out event.
      shared_ptr<vector<string>> startedInstances_ {};
      // The status of the scaling activity. Valid values:
      // 
      // *   Successful: The scaling activity is successful.
      // *   Warning: The scaling activity is partially successful.
      // *   Failed: The scaling activity failed.
      // *   InProgress: The scaling activity is in progress.
      // *   Rejected: The request to trigger the scaling activity is rejected.
      shared_ptr<string> statusCode_ {};
      // The status message of the scaling activity.
      shared_ptr<string> statusMessage_ {};
      // The number of instances that are stopped in the Economical Mode during the scale-in event.
      shared_ptr<int32_t> stoppedCapacity_ {};
      // The instances that are stopped in the Economical Mode during the scale-in event.
      shared_ptr<vector<string>> stoppedInstances_ {};
      // The total number of instances in the scaling group after the scaling activity was complete.
      shared_ptr<string> totalCapacity_ {};
      // The ID of the trigger source of the scaling activity. Valid values:
      // 
      // *   If the scaling activity is triggered by an event-triggered task, the ID of the trigger source is the ID of the event-triggered task.
      // *   If the scaling activity is triggered by calling an API operation, the ID of the trigger source is the ID of the Alibaba Cloud account or Resource Access Management (RAM) user that you use to call the API operation.
      // *   If the scaling activity is triggered by Auto Scaling, the ID of the trigger source is null.
      shared_ptr<string> triggerSourceId_ {};
      // The type of the trigger source of the scaling activity. Valid values:
      // 
      // *   Cms: The scaling activity is triggered by an event-triggered task.
      // *   APIs: The scaling activity is triggered by calling an API operation.
      // *   Ess: The scaling activity is triggered by Auto Scaling.
      shared_ptr<string> triggerSourceType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->scalingActivities_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingActivitiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingActivitiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingActivitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivities Field Functions 
    bool hasScalingActivities() const { return this->scalingActivities_ != nullptr;};
    void deleteScalingActivities() { this->scalingActivities_ = nullptr;};
    inline const vector<DescribeScalingActivitiesResponseBody::ScalingActivities> & getScalingActivities() const { DARABONBA_PTR_GET_CONST(scalingActivities_, vector<DescribeScalingActivitiesResponseBody::ScalingActivities>) };
    inline vector<DescribeScalingActivitiesResponseBody::ScalingActivities> getScalingActivities() { DARABONBA_PTR_GET(scalingActivities_, vector<DescribeScalingActivitiesResponseBody::ScalingActivities>) };
    inline DescribeScalingActivitiesResponseBody& setScalingActivities(const vector<DescribeScalingActivitiesResponseBody::ScalingActivities> & scalingActivities) { DARABONBA_PTR_SET_VALUE(scalingActivities_, scalingActivities) };
    inline DescribeScalingActivitiesResponseBody& setScalingActivities(vector<DescribeScalingActivitiesResponseBody::ScalingActivities> && scalingActivities) { DARABONBA_PTR_SET_RVALUE(scalingActivities_, scalingActivities) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScalingActivitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The scaling activities.
    shared_ptr<vector<DescribeScalingActivitiesResponseBody::ScalingActivities>> scalingActivities_ {};
    // The total number of scaling activities.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
