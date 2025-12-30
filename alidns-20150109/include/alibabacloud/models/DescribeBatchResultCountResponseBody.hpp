// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeBatchResultCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchResultCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchType, batchType_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchResultCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBatchResultCountResponseBody() = default ;
    DescribeBatchResultCountResponseBody(const DescribeBatchResultCountResponseBody &) = default ;
    DescribeBatchResultCountResponseBody(DescribeBatchResultCountResponseBody &&) = default ;
    DescribeBatchResultCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchResultCountResponseBody() = default ;
    DescribeBatchResultCountResponseBody& operator=(const DescribeBatchResultCountResponseBody &) = default ;
    DescribeBatchResultCountResponseBody& operator=(DescribeBatchResultCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchType_ == nullptr
        && this->failedCount_ == nullptr && this->reason_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->successCount_ == nullptr
        && this->taskId_ == nullptr && this->totalCount_ == nullptr; };
    // batchType Field Functions 
    bool hasBatchType() const { return this->batchType_ != nullptr;};
    void deleteBatchType() { this->batchType_ = nullptr;};
    inline string getBatchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
    inline DescribeBatchResultCountResponseBody& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline DescribeBatchResultCountResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeBatchResultCountResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBatchResultCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeBatchResultCountResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DescribeBatchResultCountResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeBatchResultCountResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBatchResultCountResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The type of the batch operation.
    shared_ptr<string> batchType_ {};
    // The total number of domain names or DNS records that failed to be processed.
    shared_ptr<int32_t> failedCount_ {};
    // The cause of the execution failure.
    shared_ptr<string> reason_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The state of the task. Valid values:
    // 
    // *   **-1**: No task for importing domain names or DNS records is submitted.
    // *   **0**: The task is being processed.
    // *   **1**: The task is complete.
    // *   **2**: The task failed.
    shared_ptr<int32_t> status_ {};
    // The total number of domain names or DNS records that were processed.
    shared_ptr<int32_t> successCount_ {};
    // The ID of the last task.
    shared_ptr<int64_t> taskId_ {};
    // The total number of DNS records that were processed in batches.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
