// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMANUALTASKINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMANUALTASKINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeManualTaskInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeManualTaskInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EmrClusterId, emrClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExternalAppId, externalAppId_);
      DARABONBA_PTR_TO_JSON(ManualTaskInstanceId, manualTaskInstanceId_);
      DARABONBA_PTR_TO_JSON(ManualTaskInstanceName, manualTaskInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(TaskParams, taskParams_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeManualTaskInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EmrClusterId, emrClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExternalAppId, externalAppId_);
      DARABONBA_PTR_FROM_JSON(ManualTaskInstanceId, manualTaskInstanceId_);
      DARABONBA_PTR_FROM_JSON(ManualTaskInstanceName, manualTaskInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(TaskParams, taskParams_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DescribeManualTaskInstanceResponseBody() = default ;
    DescribeManualTaskInstanceResponseBody(const DescribeManualTaskInstanceResponseBody &) = default ;
    DescribeManualTaskInstanceResponseBody(DescribeManualTaskInstanceResponseBody &&) = default ;
    DescribeManualTaskInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeManualTaskInstanceResponseBody() = default ;
    DescribeManualTaskInstanceResponseBody& operator=(const DescribeManualTaskInstanceResponseBody &) = default ;
    DescribeManualTaskInstanceResponseBody& operator=(DescribeManualTaskInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->emrClusterId_ == nullptr
        && return this->endTime_ == nullptr && return this->externalAppId_ == nullptr && return this->manualTaskInstanceId_ == nullptr && return this->manualTaskInstanceName_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->submitTime_ == nullptr && return this->taskParams_ == nullptr && return this->taskType_ == nullptr
        && return this->requestId_ == nullptr; };
    // emrClusterId Field Functions 
    bool hasEmrClusterId() const { return this->emrClusterId_ != nullptr;};
    void deleteEmrClusterId() { this->emrClusterId_ = nullptr;};
    inline string emrClusterId() const { DARABONBA_PTR_GET_DEFAULT(emrClusterId_, "") };
    inline DescribeManualTaskInstanceResponseBody& setEmrClusterId(string emrClusterId) { DARABONBA_PTR_SET_VALUE(emrClusterId_, emrClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeManualTaskInstanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // externalAppId Field Functions 
    bool hasExternalAppId() const { return this->externalAppId_ != nullptr;};
    void deleteExternalAppId() { this->externalAppId_ = nullptr;};
    inline string externalAppId() const { DARABONBA_PTR_GET_DEFAULT(externalAppId_, "") };
    inline DescribeManualTaskInstanceResponseBody& setExternalAppId(string externalAppId) { DARABONBA_PTR_SET_VALUE(externalAppId_, externalAppId) };


    // manualTaskInstanceId Field Functions 
    bool hasManualTaskInstanceId() const { return this->manualTaskInstanceId_ != nullptr;};
    void deleteManualTaskInstanceId() { this->manualTaskInstanceId_ = nullptr;};
    inline string manualTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskInstanceId_, "") };
    inline DescribeManualTaskInstanceResponseBody& setManualTaskInstanceId(string manualTaskInstanceId) { DARABONBA_PTR_SET_VALUE(manualTaskInstanceId_, manualTaskInstanceId) };


    // manualTaskInstanceName Field Functions 
    bool hasManualTaskInstanceName() const { return this->manualTaskInstanceName_ != nullptr;};
    void deleteManualTaskInstanceName() { this->manualTaskInstanceName_ = nullptr;};
    inline string manualTaskInstanceName() const { DARABONBA_PTR_GET_DEFAULT(manualTaskInstanceName_, "") };
    inline DescribeManualTaskInstanceResponseBody& setManualTaskInstanceName(string manualTaskInstanceName) { DARABONBA_PTR_SET_VALUE(manualTaskInstanceName_, manualTaskInstanceName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeManualTaskInstanceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeManualTaskInstanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeManualTaskInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline DescribeManualTaskInstanceResponseBody& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // taskParams Field Functions 
    bool hasTaskParams() const { return this->taskParams_ != nullptr;};
    void deleteTaskParams() { this->taskParams_ = nullptr;};
    inline string taskParams() const { DARABONBA_PTR_GET_DEFAULT(taskParams_, "") };
    inline DescribeManualTaskInstanceResponseBody& setTaskParams(string taskParams) { DARABONBA_PTR_SET_VALUE(taskParams_, taskParams) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeManualTaskInstanceResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeManualTaskInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> emrClusterId_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> externalAppId_ = nullptr;
    std::shared_ptr<string> manualTaskInstanceId_ = nullptr;
    std::shared_ptr<string> manualTaskInstanceName_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> submitTime_ = nullptr;
    std::shared_ptr<string> taskParams_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
