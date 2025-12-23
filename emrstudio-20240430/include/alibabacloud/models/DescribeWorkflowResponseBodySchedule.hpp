// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWRESPONSEBODYSCHEDULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWRESPONSEBODYSCHEDULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeWorkflowResponseBodySchedule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkflowResponseBodySchedule& obj) { 
      DARABONBA_PTR_TO_JSON(alertGroupId, alertGroupId_);
      DARABONBA_PTR_TO_JSON(alertStrategy, alertStrategy_);
      DARABONBA_PTR_TO_JSON(cronExpr, cronExpr_);
      DARABONBA_PTR_TO_JSON(emrClusterId, emrClusterId_);
      DARABONBA_PTR_TO_JSON(failureStrategy, failureStrategy_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(scheduleEndTime, scheduleEndTime_);
      DARABONBA_PTR_TO_JSON(scheduleStartTime, scheduleStartTime_);
      DARABONBA_PTR_TO_JSON(scheduleState, scheduleState_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(workflowInstancePriority, workflowInstancePriority_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkflowResponseBodySchedule& obj) { 
      DARABONBA_PTR_FROM_JSON(alertGroupId, alertGroupId_);
      DARABONBA_PTR_FROM_JSON(alertStrategy, alertStrategy_);
      DARABONBA_PTR_FROM_JSON(cronExpr, cronExpr_);
      DARABONBA_PTR_FROM_JSON(emrClusterId, emrClusterId_);
      DARABONBA_PTR_FROM_JSON(failureStrategy, failureStrategy_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(scheduleEndTime, scheduleEndTime_);
      DARABONBA_PTR_FROM_JSON(scheduleStartTime, scheduleStartTime_);
      DARABONBA_PTR_FROM_JSON(scheduleState, scheduleState_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(workflowInstancePriority, workflowInstancePriority_);
    };
    DescribeWorkflowResponseBodySchedule() = default ;
    DescribeWorkflowResponseBodySchedule(const DescribeWorkflowResponseBodySchedule &) = default ;
    DescribeWorkflowResponseBodySchedule(DescribeWorkflowResponseBodySchedule &&) = default ;
    DescribeWorkflowResponseBodySchedule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkflowResponseBodySchedule() = default ;
    DescribeWorkflowResponseBodySchedule& operator=(const DescribeWorkflowResponseBodySchedule &) = default ;
    DescribeWorkflowResponseBodySchedule& operator=(DescribeWorkflowResponseBodySchedule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertGroupId_ == nullptr
        && return this->alertStrategy_ == nullptr && return this->cronExpr_ == nullptr && return this->emrClusterId_ == nullptr && return this->failureStrategy_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->scheduleEndTime_ == nullptr && return this->scheduleStartTime_ == nullptr && return this->scheduleState_ == nullptr && return this->timeZone_ == nullptr && return this->workflowInstancePriority_ == nullptr; };
    // alertGroupId Field Functions 
    bool hasAlertGroupId() const { return this->alertGroupId_ != nullptr;};
    void deleteAlertGroupId() { this->alertGroupId_ = nullptr;};
    inline string alertGroupId() const { DARABONBA_PTR_GET_DEFAULT(alertGroupId_, "") };
    inline DescribeWorkflowResponseBodySchedule& setAlertGroupId(string alertGroupId) { DARABONBA_PTR_SET_VALUE(alertGroupId_, alertGroupId) };


    // alertStrategy Field Functions 
    bool hasAlertStrategy() const { return this->alertStrategy_ != nullptr;};
    void deleteAlertStrategy() { this->alertStrategy_ = nullptr;};
    inline string alertStrategy() const { DARABONBA_PTR_GET_DEFAULT(alertStrategy_, "") };
    inline DescribeWorkflowResponseBodySchedule& setAlertStrategy(string alertStrategy) { DARABONBA_PTR_SET_VALUE(alertStrategy_, alertStrategy) };


    // cronExpr Field Functions 
    bool hasCronExpr() const { return this->cronExpr_ != nullptr;};
    void deleteCronExpr() { this->cronExpr_ = nullptr;};
    inline string cronExpr() const { DARABONBA_PTR_GET_DEFAULT(cronExpr_, "") };
    inline DescribeWorkflowResponseBodySchedule& setCronExpr(string cronExpr) { DARABONBA_PTR_SET_VALUE(cronExpr_, cronExpr) };


    // emrClusterId Field Functions 
    bool hasEmrClusterId() const { return this->emrClusterId_ != nullptr;};
    void deleteEmrClusterId() { this->emrClusterId_ = nullptr;};
    inline string emrClusterId() const { DARABONBA_PTR_GET_DEFAULT(emrClusterId_, "") };
    inline DescribeWorkflowResponseBodySchedule& setEmrClusterId(string emrClusterId) { DARABONBA_PTR_SET_VALUE(emrClusterId_, emrClusterId) };


    // failureStrategy Field Functions 
    bool hasFailureStrategy() const { return this->failureStrategy_ != nullptr;};
    void deleteFailureStrategy() { this->failureStrategy_ = nullptr;};
    inline string failureStrategy() const { DARABONBA_PTR_GET_DEFAULT(failureStrategy_, "") };
    inline DescribeWorkflowResponseBodySchedule& setFailureStrategy(string failureStrategy) { DARABONBA_PTR_SET_VALUE(failureStrategy_, failureStrategy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeWorkflowResponseBodySchedule& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduleEndTime Field Functions 
    bool hasScheduleEndTime() const { return this->scheduleEndTime_ != nullptr;};
    void deleteScheduleEndTime() { this->scheduleEndTime_ = nullptr;};
    inline string scheduleEndTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleEndTime_, "") };
    inline DescribeWorkflowResponseBodySchedule& setScheduleEndTime(string scheduleEndTime) { DARABONBA_PTR_SET_VALUE(scheduleEndTime_, scheduleEndTime) };


    // scheduleStartTime Field Functions 
    bool hasScheduleStartTime() const { return this->scheduleStartTime_ != nullptr;};
    void deleteScheduleStartTime() { this->scheduleStartTime_ = nullptr;};
    inline string scheduleStartTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleStartTime_, "") };
    inline DescribeWorkflowResponseBodySchedule& setScheduleStartTime(string scheduleStartTime) { DARABONBA_PTR_SET_VALUE(scheduleStartTime_, scheduleStartTime) };


    // scheduleState Field Functions 
    bool hasScheduleState() const { return this->scheduleState_ != nullptr;};
    void deleteScheduleState() { this->scheduleState_ = nullptr;};
    inline string scheduleState() const { DARABONBA_PTR_GET_DEFAULT(scheduleState_, "") };
    inline DescribeWorkflowResponseBodySchedule& setScheduleState(string scheduleState) { DARABONBA_PTR_SET_VALUE(scheduleState_, scheduleState) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline DescribeWorkflowResponseBodySchedule& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // workflowInstancePriority Field Functions 
    bool hasWorkflowInstancePriority() const { return this->workflowInstancePriority_ != nullptr;};
    void deleteWorkflowInstancePriority() { this->workflowInstancePriority_ = nullptr;};
    inline string workflowInstancePriority() const { DARABONBA_PTR_GET_DEFAULT(workflowInstancePriority_, "") };
    inline DescribeWorkflowResponseBodySchedule& setWorkflowInstancePriority(string workflowInstancePriority) { DARABONBA_PTR_SET_VALUE(workflowInstancePriority_, workflowInstancePriority) };


  protected:
    std::shared_ptr<string> alertGroupId_ = nullptr;
    std::shared_ptr<string> alertStrategy_ = nullptr;
    std::shared_ptr<string> cronExpr_ = nullptr;
    std::shared_ptr<string> emrClusterId_ = nullptr;
    std::shared_ptr<string> failureStrategy_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> scheduleEndTime_ = nullptr;
    std::shared_ptr<string> scheduleStartTime_ = nullptr;
    std::shared_ptr<string> scheduleState_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
    std::shared_ptr<string> workflowInstancePriority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
