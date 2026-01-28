// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKLISTRESPONSEBODY_HPP_
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
  class QueryTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryTaskListResponseBody() = default ;
    QueryTaskListResponseBody(const QueryTaskListResponseBody &) = default ;
    QueryTaskListResponseBody(QueryTaskListResponseBody &&) = default ;
    QueryTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskListResponseBody() = default ;
    QueryTaskListResponseBody& operator=(const QueryTaskListResponseBody &) = default ;
    QueryTaskListResponseBody& operator=(QueryTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
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
      class TaskInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Clientip, clientip_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(TaskBizType, taskBizType_);
          DARABONBA_PTR_TO_JSON(TaskCancelStatus, taskCancelStatus_);
          DARABONBA_PTR_TO_JSON(TaskCancelStatusCode, taskCancelStatusCode_);
          DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
          DARABONBA_PTR_TO_JSON(TaskNum, taskNum_);
          DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(TaskTypeCode, taskTypeCode_);
          DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
        };
        friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Clientip, clientip_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(TaskBizType, taskBizType_);
          DARABONBA_PTR_FROM_JSON(TaskCancelStatus, taskCancelStatus_);
          DARABONBA_PTR_FROM_JSON(TaskCancelStatusCode, taskCancelStatusCode_);
          DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
          DARABONBA_PTR_FROM_JSON(TaskNum, taskNum_);
          DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(TaskTypeCode, taskTypeCode_);
          DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
        };
        TaskInfo() = default ;
        TaskInfo(const TaskInfo &) = default ;
        TaskInfo(TaskInfo &&) = default ;
        TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskInfo() = default ;
        TaskInfo& operator=(const TaskInfo &) = default ;
        TaskInfo& operator=(TaskInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientip_ == nullptr
        && this->createTime_ == nullptr && this->taskBizType_ == nullptr && this->taskCancelStatus_ == nullptr && this->taskCancelStatusCode_ == nullptr && this->taskNo_ == nullptr
        && this->taskNum_ == nullptr && this->taskResult_ == nullptr && this->taskStatus_ == nullptr && this->taskStatusCode_ == nullptr && this->taskType_ == nullptr
        && this->taskTypeCode_ == nullptr && this->taskTypeDescription_ == nullptr; };
        // clientip Field Functions 
        bool hasClientip() const { return this->clientip_ != nullptr;};
        void deleteClientip() { this->clientip_ = nullptr;};
        inline string getClientip() const { DARABONBA_PTR_GET_DEFAULT(clientip_, "") };
        inline TaskInfo& setClientip(string clientip) { DARABONBA_PTR_SET_VALUE(clientip_, clientip) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline TaskInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // taskBizType Field Functions 
        bool hasTaskBizType() const { return this->taskBizType_ != nullptr;};
        void deleteTaskBizType() { this->taskBizType_ = nullptr;};
        inline string getTaskBizType() const { DARABONBA_PTR_GET_DEFAULT(taskBizType_, "") };
        inline TaskInfo& setTaskBizType(string taskBizType) { DARABONBA_PTR_SET_VALUE(taskBizType_, taskBizType) };


        // taskCancelStatus Field Functions 
        bool hasTaskCancelStatus() const { return this->taskCancelStatus_ != nullptr;};
        void deleteTaskCancelStatus() { this->taskCancelStatus_ = nullptr;};
        inline string getTaskCancelStatus() const { DARABONBA_PTR_GET_DEFAULT(taskCancelStatus_, "") };
        inline TaskInfo& setTaskCancelStatus(string taskCancelStatus) { DARABONBA_PTR_SET_VALUE(taskCancelStatus_, taskCancelStatus) };


        // taskCancelStatusCode Field Functions 
        bool hasTaskCancelStatusCode() const { return this->taskCancelStatusCode_ != nullptr;};
        void deleteTaskCancelStatusCode() { this->taskCancelStatusCode_ = nullptr;};
        inline int32_t getTaskCancelStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskCancelStatusCode_, 0) };
        inline TaskInfo& setTaskCancelStatusCode(int32_t taskCancelStatusCode) { DARABONBA_PTR_SET_VALUE(taskCancelStatusCode_, taskCancelStatusCode) };


        // taskNo Field Functions 
        bool hasTaskNo() const { return this->taskNo_ != nullptr;};
        void deleteTaskNo() { this->taskNo_ = nullptr;};
        inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
        inline TaskInfo& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


        // taskNum Field Functions 
        bool hasTaskNum() const { return this->taskNum_ != nullptr;};
        void deleteTaskNum() { this->taskNum_ = nullptr;};
        inline int32_t getTaskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
        inline TaskInfo& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


        // taskResult Field Functions 
        bool hasTaskResult() const { return this->taskResult_ != nullptr;};
        void deleteTaskResult() { this->taskResult_ = nullptr;};
        inline string getTaskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
        inline TaskInfo& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline TaskInfo& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // taskStatusCode Field Functions 
        bool hasTaskStatusCode() const { return this->taskStatusCode_ != nullptr;};
        void deleteTaskStatusCode() { this->taskStatusCode_ = nullptr;};
        inline int32_t getTaskStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskStatusCode_, 0) };
        inline TaskInfo& setTaskStatusCode(int32_t taskStatusCode) { DARABONBA_PTR_SET_VALUE(taskStatusCode_, taskStatusCode) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline TaskInfo& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // taskTypeCode Field Functions 
        bool hasTaskTypeCode() const { return this->taskTypeCode_ != nullptr;};
        void deleteTaskTypeCode() { this->taskTypeCode_ = nullptr;};
        inline int32_t getTaskTypeCode() const { DARABONBA_PTR_GET_DEFAULT(taskTypeCode_, 0) };
        inline TaskInfo& setTaskTypeCode(int32_t taskTypeCode) { DARABONBA_PTR_SET_VALUE(taskTypeCode_, taskTypeCode) };


        // taskTypeDescription Field Functions 
        bool hasTaskTypeDescription() const { return this->taskTypeDescription_ != nullptr;};
        void deleteTaskTypeDescription() { this->taskTypeDescription_ = nullptr;};
        inline string getTaskTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(taskTypeDescription_, "") };
        inline TaskInfo& setTaskTypeDescription(string taskTypeDescription) { DARABONBA_PTR_SET_VALUE(taskTypeDescription_, taskTypeDescription) };


      protected:
        shared_ptr<string> clientip_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> taskBizType_ {};
        shared_ptr<string> taskCancelStatus_ {};
        shared_ptr<int32_t> taskCancelStatusCode_ {};
        shared_ptr<string> taskNo_ {};
        shared_ptr<int32_t> taskNum_ {};
        shared_ptr<string> taskResult_ {};
        shared_ptr<string> taskStatus_ {};
        shared_ptr<int32_t> taskStatusCode_ {};
        shared_ptr<string> taskType_ {};
        shared_ptr<int32_t> taskTypeCode_ {};
        shared_ptr<string> taskTypeDescription_ {};
      };

      virtual bool empty() const override { return this->taskInfo_ == nullptr; };
      // taskInfo Field Functions 
      bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
      void deleteTaskInfo() { this->taskInfo_ = nullptr;};
      inline const vector<Data::TaskInfo> & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, vector<Data::TaskInfo>) };
      inline vector<Data::TaskInfo> getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, vector<Data::TaskInfo>) };
      inline Data& setTaskInfo(const vector<Data::TaskInfo> & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
      inline Data& setTaskInfo(vector<Data::TaskInfo> && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    protected:
      shared_ptr<vector<Data::TaskInfo>> taskInfo_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->requestId_ == nullptr
        && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryTaskListResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTaskListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTaskListResponseBody::Data) };
    inline QueryTaskListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTaskListResponseBody::Data) };
    inline QueryTaskListResponseBody& setData(const QueryTaskListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTaskListResponseBody& setData(QueryTaskListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline QueryTaskListResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline QueryTaskListResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryTaskListResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryTaskListResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<QueryTaskListResponseBody::Data> data_ {};
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
