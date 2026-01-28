// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKDETAILLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKDETAILLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskDetailListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskDetailListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskDetailListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryTaskDetailListResponseBody() = default ;
    QueryTaskDetailListResponseBody(const QueryTaskDetailListResponseBody &) = default ;
    QueryTaskDetailListResponseBody(QueryTaskDetailListResponseBody &&) = default ;
    QueryTaskDetailListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskDetailListResponseBody() = default ;
    QueryTaskDetailListResponseBody& operator=(const QueryTaskDetailListResponseBody &) = default ;
    QueryTaskDetailListResponseBody& operator=(QueryTaskDetailListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TaskDetail, taskDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskDetail, taskDetail_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskDetail& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(FailReason, failReason_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(TaskDetailNo, taskDetailNo_);
          DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
          DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
          DARABONBA_PTR_TO_JSON(TryCount, tryCount_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, TaskDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(TaskDetailNo, taskDetailNo_);
          DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
          DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
          DARABONBA_PTR_FROM_JSON(TryCount, tryCount_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        TaskDetail() = default ;
        TaskDetail(const TaskDetail &) = default ;
        TaskDetail(TaskDetail &&) = default ;
        TaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskDetail() = default ;
        TaskDetail& operator=(const TaskDetail &) = default ;
        TaskDetail& operator=(TaskDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->domainName_ == nullptr && this->errorMsg_ == nullptr && this->failReason_ == nullptr && this->instanceId_ == nullptr && this->taskDetailNo_ == nullptr
        && this->taskNo_ == nullptr && this->taskResult_ == nullptr && this->taskStatus_ == nullptr && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr
        && this->taskTypeDescription_ == nullptr && this->tryCount_ == nullptr && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline TaskDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline TaskDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline TaskDetail& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // failReason Field Functions 
        bool hasFailReason() const { return this->failReason_ != nullptr;};
        void deleteFailReason() { this->failReason_ = nullptr;};
        inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
        inline TaskDetail& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline TaskDetail& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // taskDetailNo Field Functions 
        bool hasTaskDetailNo() const { return this->taskDetailNo_ != nullptr;};
        void deleteTaskDetailNo() { this->taskDetailNo_ = nullptr;};
        inline string getTaskDetailNo() const { DARABONBA_PTR_GET_DEFAULT(taskDetailNo_, "") };
        inline TaskDetail& setTaskDetailNo(string taskDetailNo) { DARABONBA_PTR_SET_VALUE(taskDetailNo_, taskDetailNo) };


        // taskNo Field Functions 
        bool hasTaskNo() const { return this->taskNo_ != nullptr;};
        void deleteTaskNo() { this->taskNo_ = nullptr;};
        inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
        inline TaskDetail& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


        // taskResult Field Functions 
        bool hasTaskResult() const { return this->taskResult_ != nullptr;};
        void deleteTaskResult() { this->taskResult_ = nullptr;};
        inline string getTaskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
        inline TaskDetail& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline TaskDetail& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // taskStatusCode Field Functions 
        bool hasTaskStatusCode() const { return this->taskStatusCode_ != nullptr;};
        void deleteTaskStatusCode() { this->taskStatusCode_ = nullptr;};
        inline int32_t getTaskStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskStatusCode_, 0) };
        inline TaskDetail& setTaskStatusCode(int32_t taskStatusCode) { DARABONBA_PTR_SET_VALUE(taskStatusCode_, taskStatusCode) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline TaskDetail& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // taskTypeDescription Field Functions 
        bool hasTaskTypeDescription() const { return this->taskTypeDescription_ != nullptr;};
        void deleteTaskTypeDescription() { this->taskTypeDescription_ = nullptr;};
        inline string getTaskTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(taskTypeDescription_, "") };
        inline TaskDetail& setTaskTypeDescription(string taskTypeDescription) { DARABONBA_PTR_SET_VALUE(taskTypeDescription_, taskTypeDescription) };


        // tryCount Field Functions 
        bool hasTryCount() const { return this->tryCount_ != nullptr;};
        void deleteTryCount() { this->tryCount_ = nullptr;};
        inline int32_t getTryCount() const { DARABONBA_PTR_GET_DEFAULT(tryCount_, 0) };
        inline TaskDetail& setTryCount(int32_t tryCount) { DARABONBA_PTR_SET_VALUE(tryCount_, tryCount) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline TaskDetail& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The time when the task was created.
        shared_ptr<string> createTime_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The error message returned when the task failed.
        shared_ptr<string> errorMsg_ {};
        // The cause of a domain name task failure.
        shared_ptr<string> failReason_ {};
        // The instance ID of the domain name.
        shared_ptr<string> instanceId_ {};
        // The ID of the task details.
        shared_ptr<string> taskDetailNo_ {};
        // The task ID.
        shared_ptr<string> taskNo_ {};
        // The result of the task.
        shared_ptr<string> taskResult_ {};
        // The task status. Valid values:
        // 
        // *   **WAITING_EXECUTE**: To be executed
        // *   **EXECUTING**: being executed
        // *   **EXECUTE_SUCCESS**: successful
        // *   **EXECUTE_FAILURE**: failed
        shared_ptr<string> taskStatus_ {};
        // The status code of the task. Valid values:
        // 
        // *   **0**: waiting for execution
        // *   **1**: being executed
        // *   **2**: successful
        // *   **3**: failed
        shared_ptr<int32_t> taskStatusCode_ {};
        // The task type. Valid values:
        // 
        // *   **CHG_HOLDER**: The task is run to modify the domain name registrant.
        // *   **CHG_DNS**: The task is run to change the Domain Name System (DNS) servers.
        // *   **SET_WHOIS_PROTECT**: The task is run to configure privacy protection for the domain name.
        // *   **UPDATE_ADMIN_CONTACT**: The task is run to modify the information about the administrator of the domain name.
        // *   **UPDATE_BILLING_CONTACT**: The task is run to modify the information about the payer for the domain name.
        // *   **UPDATE_TECH_CONTACT**: The task is run to modify the information about the technical support for the domain name.
        // *   **SET_UPDATE_PROHIBITED**: The task is run to configure the security lock for the domain name.
        // *   **SET_TRANSFER_PROHIBITED**: The task is run to configure the transfer lock for the domain name.
        // *   **ORDER_ACTIVATE**: The task is run to create a registration order for the domain name.
        // *   **ORDER_RENEW**: The task is run to create a renewal order for the domain name.
        // *   **ORDER_REDEEM**: The task is run to create a redemption order for the domain name.
        // *   **CREATE_DNSHOST**: The task is run to create a DNS server for the domain name.
        // *   **UPDATE_DNSHOST**: The task is run to update the information about a DNS server for the domain name.
        // *   **SYNC_DNSHOST**: The task is run to synchronize a DNS server for the domain name.
        shared_ptr<string> taskType_ {};
        // The description of the task type.
        shared_ptr<string> taskTypeDescription_ {};
        // The number of times the task was retried.
        shared_ptr<int32_t> tryCount_ {};
        // The last time when the task was run.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->taskDetail_ == nullptr; };
      // taskDetail Field Functions 
      bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
      void deleteTaskDetail() { this->taskDetail_ = nullptr;};
      inline const vector<Data::TaskDetail> & getTaskDetail() const { DARABONBA_PTR_GET_CONST(taskDetail_, vector<Data::TaskDetail>) };
      inline vector<Data::TaskDetail> getTaskDetail() { DARABONBA_PTR_GET(taskDetail_, vector<Data::TaskDetail>) };
      inline Data& setTaskDetail(const vector<Data::TaskDetail> & taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };
      inline Data& setTaskDetail(vector<Data::TaskDetail> && taskDetail) { DARABONBA_PTR_SET_RVALUE(taskDetail_, taskDetail) };


    protected:
      shared_ptr<vector<Data::TaskDetail>> taskDetail_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->requestId_ == nullptr
        && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryTaskDetailListResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTaskDetailListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTaskDetailListResponseBody::Data) };
    inline QueryTaskDetailListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTaskDetailListResponseBody::Data) };
    inline QueryTaskDetailListResponseBody& setData(const QueryTaskDetailListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTaskDetailListResponseBody& setData(QueryTaskDetailListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline QueryTaskDetailListResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskDetailListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline QueryTaskDetailListResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTaskDetailListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryTaskDetailListResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryTaskDetailListResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    // The page number returned.
    shared_ptr<int32_t> currentPageNum_ {};
    // The tasks.
    shared_ptr<QueryTaskDetailListResponseBody::Data> data_ {};
    // Indicates whether the current page is followed by a page.
    shared_ptr<bool> nextPage_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Indicates whether the current page is preceded by a page.
    shared_ptr<bool> prePage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalItemNum_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
