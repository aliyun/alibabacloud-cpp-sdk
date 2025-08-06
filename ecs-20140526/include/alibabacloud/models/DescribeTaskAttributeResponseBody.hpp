// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTaskAttributeResponseBodyOperationProgressSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTaskAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(OperationProgressSet, operationProgressSet_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(SupportCancel, supportCancel_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskProcess, taskProcess_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(OperationProgressSet, operationProgressSet_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(SupportCancel, supportCancel_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskProcess, taskProcess_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTaskAttributeResponseBody() = default ;
    DescribeTaskAttributeResponseBody(const DescribeTaskAttributeResponseBody &) = default ;
    DescribeTaskAttributeResponseBody(DescribeTaskAttributeResponseBody &&) = default ;
    DescribeTaskAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskAttributeResponseBody() = default ;
    DescribeTaskAttributeResponseBody& operator=(const DescribeTaskAttributeResponseBody &) = default ;
    DescribeTaskAttributeResponseBody& operator=(DescribeTaskAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->failedCount_ != nullptr && this->finishedTime_ != nullptr && this->operationProgressSet_ != nullptr && this->regionId_ != nullptr && this->requestId_ != nullptr
        && this->successCount_ != nullptr && this->supportCancel_ != nullptr && this->taskAction_ != nullptr && this->taskId_ != nullptr && this->taskProcess_ != nullptr
        && this->taskStatus_ != nullptr && this->totalCount_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeTaskAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline DescribeTaskAttributeResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline DescribeTaskAttributeResponseBody& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // operationProgressSet Field Functions 
    bool hasOperationProgressSet() const { return this->operationProgressSet_ != nullptr;};
    void deleteOperationProgressSet() { this->operationProgressSet_ = nullptr;};
    inline const DescribeTaskAttributeResponseBodyOperationProgressSet & operationProgressSet() const { DARABONBA_PTR_GET_CONST(operationProgressSet_, DescribeTaskAttributeResponseBodyOperationProgressSet) };
    inline DescribeTaskAttributeResponseBodyOperationProgressSet operationProgressSet() { DARABONBA_PTR_GET(operationProgressSet_, DescribeTaskAttributeResponseBodyOperationProgressSet) };
    inline DescribeTaskAttributeResponseBody& setOperationProgressSet(const DescribeTaskAttributeResponseBodyOperationProgressSet & operationProgressSet) { DARABONBA_PTR_SET_VALUE(operationProgressSet_, operationProgressSet) };
    inline DescribeTaskAttributeResponseBody& setOperationProgressSet(DescribeTaskAttributeResponseBodyOperationProgressSet && operationProgressSet) { DARABONBA_PTR_SET_RVALUE(operationProgressSet_, operationProgressSet) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTaskAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTaskAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DescribeTaskAttributeResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // supportCancel Field Functions 
    bool hasSupportCancel() const { return this->supportCancel_ != nullptr;};
    void deleteSupportCancel() { this->supportCancel_ = nullptr;};
    inline string supportCancel() const { DARABONBA_PTR_GET_DEFAULT(supportCancel_, "") };
    inline DescribeTaskAttributeResponseBody& setSupportCancel(string supportCancel) { DARABONBA_PTR_SET_VALUE(supportCancel_, supportCancel) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline DescribeTaskAttributeResponseBody& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTaskAttributeResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskProcess Field Functions 
    bool hasTaskProcess() const { return this->taskProcess_ != nullptr;};
    void deleteTaskProcess() { this->taskProcess_ = nullptr;};
    inline string taskProcess() const { DARABONBA_PTR_GET_DEFAULT(taskProcess_, "") };
    inline DescribeTaskAttributeResponseBody& setTaskProcess(string taskProcess) { DARABONBA_PTR_SET_VALUE(taskProcess_, taskProcess) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeTaskAttributeResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTaskAttributeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time when the task was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The number of failed tasks.
    std::shared_ptr<int32_t> failedCount_ = nullptr;
    // The time when the task was completed.
    std::shared_ptr<string> finishedTime_ = nullptr;
    // The return data of the task.
    std::shared_ptr<DescribeTaskAttributeResponseBodyOperationProgressSet> operationProgressSet_ = nullptr;
    // The region ID of the task.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of completed tasks.
    std::shared_ptr<int32_t> successCount_ = nullptr;
    // Indicates whether the task can be canceled by calling the [CancelTask](https://help.aliyun.com/document_detail/25624.html) operation. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> supportCancel_ = nullptr;
    // The name of the operation that generated the task.
    std::shared_ptr<string> taskAction_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The progress of the task.
    std::shared_ptr<string> taskProcess_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The total number of tasks.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
