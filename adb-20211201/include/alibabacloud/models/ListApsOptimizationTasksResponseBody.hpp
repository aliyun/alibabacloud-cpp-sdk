// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPSOPTIMIZATIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPSOPTIMIZATIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListApsOptimizationTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApsOptimizationTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApsOptimizationTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApsOptimizationTasksResponseBody() = default ;
    ListApsOptimizationTasksResponseBody(const ListApsOptimizationTasksResponseBody &) = default ;
    ListApsOptimizationTasksResponseBody(ListApsOptimizationTasksResponseBody &&) = default ;
    ListApsOptimizationTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApsOptimizationTasksResponseBody() = default ;
    ListApsOptimizationTasksResponseBody& operator=(const ListApsOptimizationTasksResponseBody &) = default ;
    ListApsOptimizationTasksResponseBody& operator=(ListApsOptimizationTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ComputeUnit, computeUnit_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
        DARABONBA_PTR_TO_JSON(TaskDesc, taskDesc_);
        DARABONBA_PTR_TO_JSON(TaskDuration, taskDuration_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskMessage, taskMessage_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ComputeUnit, computeUnit_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
        DARABONBA_PTR_FROM_JSON(TaskDesc, taskDesc_);
        DARABONBA_PTR_FROM_JSON(TaskDuration, taskDuration_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskMessage, taskMessage_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->computeUnit_ == nullptr
        && this->createdTime_ == nullptr && this->DBClusterId_ == nullptr && this->modifiedTime_ == nullptr && this->strategyType_ == nullptr && this->taskDesc_ == nullptr
        && this->taskDuration_ == nullptr && this->taskId_ == nullptr && this->taskMessage_ == nullptr && this->taskStatus_ == nullptr; };
      // computeUnit Field Functions 
      bool hasComputeUnit() const { return this->computeUnit_ != nullptr;};
      void deleteComputeUnit() { this->computeUnit_ = nullptr;};
      inline string getComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(computeUnit_, "") };
      inline Items& setComputeUnit(string computeUnit) { DARABONBA_PTR_SET_VALUE(computeUnit_, computeUnit) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Items& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Items& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Items& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // strategyType Field Functions 
      bool hasStrategyType() const { return this->strategyType_ != nullptr;};
      void deleteStrategyType() { this->strategyType_ = nullptr;};
      inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
      inline Items& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


      // taskDesc Field Functions 
      bool hasTaskDesc() const { return this->taskDesc_ != nullptr;};
      void deleteTaskDesc() { this->taskDesc_ = nullptr;};
      inline string getTaskDesc() const { DARABONBA_PTR_GET_DEFAULT(taskDesc_, "") };
      inline Items& setTaskDesc(string taskDesc) { DARABONBA_PTR_SET_VALUE(taskDesc_, taskDesc) };


      // taskDuration Field Functions 
      bool hasTaskDuration() const { return this->taskDuration_ != nullptr;};
      void deleteTaskDuration() { this->taskDuration_ = nullptr;};
      inline int64_t getTaskDuration() const { DARABONBA_PTR_GET_DEFAULT(taskDuration_, 0L) };
      inline Items& setTaskDuration(int64_t taskDuration) { DARABONBA_PTR_SET_VALUE(taskDuration_, taskDuration) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskMessage Field Functions 
      bool hasTaskMessage() const { return this->taskMessage_ != nullptr;};
      void deleteTaskMessage() { this->taskMessage_ = nullptr;};
      inline string getTaskMessage() const { DARABONBA_PTR_GET_DEFAULT(taskMessage_, "") };
      inline Items& setTaskMessage(string taskMessage) { DARABONBA_PTR_SET_VALUE(taskMessage_, taskMessage) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Items& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      // The computing resources used by the optimization job.
      shared_ptr<string> computeUnit_ {};
      // The time when the optimization job was created.
      shared_ptr<string> createdTime_ {};
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The time when the optimization job was modified.
      shared_ptr<string> modifiedTime_ {};
      // The type of the lifecycle management policy.
      shared_ptr<string> strategyType_ {};
      // The description of the optimization job.
      shared_ptr<string> taskDesc_ {};
      // The execution duration of the optimization job.
      shared_ptr<int64_t> taskDuration_ {};
      // The job ID.
      shared_ptr<string> taskId_ {};
      // The error message.
      shared_ptr<string> taskMessage_ {};
      // The execution status. Valid values:
      // 
      // 1.  NEW
      // 2.  RUNNING
      // 3.  SUCCESS
      // 4.  STOPPED
      // 5.  FAILED
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApsOptimizationTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListApsOptimizationTasksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListApsOptimizationTasksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListApsOptimizationTasksResponseBody::Items>) };
    inline vector<ListApsOptimizationTasksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListApsOptimizationTasksResponseBody::Items>) };
    inline ListApsOptimizationTasksResponseBody& setItems(const vector<ListApsOptimizationTasksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListApsOptimizationTasksResponseBody& setItems(vector<ListApsOptimizationTasksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApsOptimizationTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApsOptimizationTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApsOptimizationTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApsOptimizationTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApsOptimizationTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApsOptimizationTasksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code or the error code.
    shared_ptr<string> code_ {};
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The queried optimization jobs.
    shared_ptr<vector<ListApsOptimizationTasksResponseBody::Items>> items_ {};
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
