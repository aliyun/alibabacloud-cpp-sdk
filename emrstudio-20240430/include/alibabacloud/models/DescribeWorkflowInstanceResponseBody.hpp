// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKFLOWINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeWorkflowInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkflowInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(alertGroupId, alertGroupId_);
      DARABONBA_PTR_TO_JSON(alertStrategy, alertStrategy_);
      DARABONBA_PTR_TO_JSON(emrClusterId, emrClusterId_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(failureStrategy, failureStrategy_);
      DARABONBA_PTR_TO_JSON(isComplementData, isComplementData_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(restartTime, restartTime_);
      DARABONBA_PTR_TO_JSON(runTimes, runTimes_);
      DARABONBA_PTR_TO_JSON(scheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(workflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(workflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_TO_JSON(workflowInstancePriority, workflowInstancePriority_);
      DARABONBA_PTR_TO_JSON(workflowVersion, workflowVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkflowInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(alertGroupId, alertGroupId_);
      DARABONBA_PTR_FROM_JSON(alertStrategy, alertStrategy_);
      DARABONBA_PTR_FROM_JSON(emrClusterId, emrClusterId_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(failureStrategy, failureStrategy_);
      DARABONBA_PTR_FROM_JSON(isComplementData, isComplementData_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(restartTime, restartTime_);
      DARABONBA_PTR_FROM_JSON(runTimes, runTimes_);
      DARABONBA_PTR_FROM_JSON(scheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(workflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(workflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(workflowInstancePriority, workflowInstancePriority_);
      DARABONBA_PTR_FROM_JSON(workflowVersion, workflowVersion_);
    };
    DescribeWorkflowInstanceResponseBody() = default ;
    DescribeWorkflowInstanceResponseBody(const DescribeWorkflowInstanceResponseBody &) = default ;
    DescribeWorkflowInstanceResponseBody(DescribeWorkflowInstanceResponseBody &&) = default ;
    DescribeWorkflowInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkflowInstanceResponseBody() = default ;
    DescribeWorkflowInstanceResponseBody& operator=(const DescribeWorkflowInstanceResponseBody &) = default ;
    DescribeWorkflowInstanceResponseBody& operator=(DescribeWorkflowInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertGroupId_ == nullptr
        && return this->alertStrategy_ == nullptr && return this->emrClusterId_ == nullptr && return this->endTime_ == nullptr && return this->failureStrategy_ == nullptr && return this->isComplementData_ == nullptr
        && return this->name_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->restartTime_ == nullptr && return this->runTimes_ == nullptr
        && return this->scheduleTime_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->timeout_ == nullptr && return this->workflowId_ == nullptr
        && return this->workflowInstanceId_ == nullptr && return this->workflowInstancePriority_ == nullptr && return this->workflowVersion_ == nullptr; };
    // alertGroupId Field Functions 
    bool hasAlertGroupId() const { return this->alertGroupId_ != nullptr;};
    void deleteAlertGroupId() { this->alertGroupId_ = nullptr;};
    inline string alertGroupId() const { DARABONBA_PTR_GET_DEFAULT(alertGroupId_, "") };
    inline DescribeWorkflowInstanceResponseBody& setAlertGroupId(string alertGroupId) { DARABONBA_PTR_SET_VALUE(alertGroupId_, alertGroupId) };


    // alertStrategy Field Functions 
    bool hasAlertStrategy() const { return this->alertStrategy_ != nullptr;};
    void deleteAlertStrategy() { this->alertStrategy_ = nullptr;};
    inline string alertStrategy() const { DARABONBA_PTR_GET_DEFAULT(alertStrategy_, "") };
    inline DescribeWorkflowInstanceResponseBody& setAlertStrategy(string alertStrategy) { DARABONBA_PTR_SET_VALUE(alertStrategy_, alertStrategy) };


    // emrClusterId Field Functions 
    bool hasEmrClusterId() const { return this->emrClusterId_ != nullptr;};
    void deleteEmrClusterId() { this->emrClusterId_ = nullptr;};
    inline string emrClusterId() const { DARABONBA_PTR_GET_DEFAULT(emrClusterId_, "") };
    inline DescribeWorkflowInstanceResponseBody& setEmrClusterId(string emrClusterId) { DARABONBA_PTR_SET_VALUE(emrClusterId_, emrClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeWorkflowInstanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // failureStrategy Field Functions 
    bool hasFailureStrategy() const { return this->failureStrategy_ != nullptr;};
    void deleteFailureStrategy() { this->failureStrategy_ = nullptr;};
    inline string failureStrategy() const { DARABONBA_PTR_GET_DEFAULT(failureStrategy_, "") };
    inline DescribeWorkflowInstanceResponseBody& setFailureStrategy(string failureStrategy) { DARABONBA_PTR_SET_VALUE(failureStrategy_, failureStrategy) };


    // isComplementData Field Functions 
    bool hasIsComplementData() const { return this->isComplementData_ != nullptr;};
    void deleteIsComplementData() { this->isComplementData_ = nullptr;};
    inline bool isComplementData() const { DARABONBA_PTR_GET_DEFAULT(isComplementData_, false) };
    inline DescribeWorkflowInstanceResponseBody& setIsComplementData(bool isComplementData) { DARABONBA_PTR_SET_VALUE(isComplementData_, isComplementData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeWorkflowInstanceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWorkflowInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeWorkflowInstanceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // restartTime Field Functions 
    bool hasRestartTime() const { return this->restartTime_ != nullptr;};
    void deleteRestartTime() { this->restartTime_ = nullptr;};
    inline string restartTime() const { DARABONBA_PTR_GET_DEFAULT(restartTime_, "") };
    inline DescribeWorkflowInstanceResponseBody& setRestartTime(string restartTime) { DARABONBA_PTR_SET_VALUE(restartTime_, restartTime) };


    // runTimes Field Functions 
    bool hasRunTimes() const { return this->runTimes_ != nullptr;};
    void deleteRunTimes() { this->runTimes_ = nullptr;};
    inline int32_t runTimes() const { DARABONBA_PTR_GET_DEFAULT(runTimes_, 0) };
    inline DescribeWorkflowInstanceResponseBody& setRunTimes(int32_t runTimes) { DARABONBA_PTR_SET_VALUE(runTimes_, runTimes) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline DescribeWorkflowInstanceResponseBody& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeWorkflowInstanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeWorkflowInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DescribeWorkflowInstanceResponseBody& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline DescribeWorkflowInstanceResponseBody& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline string workflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, "") };
    inline DescribeWorkflowInstanceResponseBody& setWorkflowInstanceId(string workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    // workflowInstancePriority Field Functions 
    bool hasWorkflowInstancePriority() const { return this->workflowInstancePriority_ != nullptr;};
    void deleteWorkflowInstancePriority() { this->workflowInstancePriority_ = nullptr;};
    inline string workflowInstancePriority() const { DARABONBA_PTR_GET_DEFAULT(workflowInstancePriority_, "") };
    inline DescribeWorkflowInstanceResponseBody& setWorkflowInstancePriority(string workflowInstancePriority) { DARABONBA_PTR_SET_VALUE(workflowInstancePriority_, workflowInstancePriority) };


    // workflowVersion Field Functions 
    bool hasWorkflowVersion() const { return this->workflowVersion_ != nullptr;};
    void deleteWorkflowVersion() { this->workflowVersion_ = nullptr;};
    inline int32_t workflowVersion() const { DARABONBA_PTR_GET_DEFAULT(workflowVersion_, 0) };
    inline DescribeWorkflowInstanceResponseBody& setWorkflowVersion(int32_t workflowVersion) { DARABONBA_PTR_SET_VALUE(workflowVersion_, workflowVersion) };


  protected:
    std::shared_ptr<string> alertGroupId_ = nullptr;
    std::shared_ptr<string> alertStrategy_ = nullptr;
    std::shared_ptr<string> emrClusterId_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> failureStrategy_ = nullptr;
    std::shared_ptr<bool> isComplementData_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> restartTime_ = nullptr;
    std::shared_ptr<int32_t> runTimes_ = nullptr;
    std::shared_ptr<string> scheduleTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<string> workflowId_ = nullptr;
    std::shared_ptr<string> workflowInstanceId_ = nullptr;
    std::shared_ptr<string> workflowInstancePriority_ = nullptr;
    std::shared_ptr<int32_t> workflowVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
