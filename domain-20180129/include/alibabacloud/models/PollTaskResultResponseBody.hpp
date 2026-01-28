// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLLTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_POLLTASKRESULTRESPONSEBODY_HPP_
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
  class PollTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PollTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, PollTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    PollTaskResultResponseBody() = default ;
    PollTaskResultResponseBody(const PollTaskResultResponseBody &) = default ;
    PollTaskResultResponseBody(PollTaskResultResponseBody &&) = default ;
    PollTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PollTaskResultResponseBody() = default ;
    PollTaskResultResponseBody& operator=(const PollTaskResultResponseBody &) = default ;
    PollTaskResultResponseBody& operator=(PollTaskResultResponseBody &&) = default ;
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
        && this->domainName_ == nullptr && this->errorMsg_ == nullptr && this->instanceId_ == nullptr && this->taskDetailNo_ == nullptr && this->taskNo_ == nullptr
        && this->taskResult_ == nullptr && this->taskStatus_ == nullptr && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr && this->taskTypeDescription_ == nullptr
        && this->tryCount_ == nullptr && this->updateTime_ == nullptr; };
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
        shared_ptr<string> createTime_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> errorMsg_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> taskDetailNo_ {};
        shared_ptr<string> taskNo_ {};
        shared_ptr<string> taskResult_ {};
        shared_ptr<string> taskStatus_ {};
        shared_ptr<int32_t> taskStatusCode_ {};
        shared_ptr<string> taskType_ {};
        shared_ptr<string> taskTypeDescription_ {};
        shared_ptr<int32_t> tryCount_ {};
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
    inline PollTaskResultResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PollTaskResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PollTaskResultResponseBody::Data) };
    inline PollTaskResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PollTaskResultResponseBody::Data) };
    inline PollTaskResultResponseBody& setData(const PollTaskResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PollTaskResultResponseBody& setData(PollTaskResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline PollTaskResultResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PollTaskResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline PollTaskResultResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PollTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline PollTaskResultResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline PollTaskResultResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<PollTaskResultResponseBody::Data> data_ {};
    shared_ptr<bool> nextPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> prePage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
