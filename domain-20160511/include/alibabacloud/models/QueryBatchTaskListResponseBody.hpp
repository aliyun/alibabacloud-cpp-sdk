// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBATCHTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBATCHTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class QueryBatchTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBatchTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBatchTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryBatchTaskListResponseBody() = default ;
    QueryBatchTaskListResponseBody(const QueryBatchTaskListResponseBody &) = default ;
    QueryBatchTaskListResponseBody(QueryBatchTaskListResponseBody &&) = default ;
    QueryBatchTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBatchTaskListResponseBody() = default ;
    QueryBatchTaskListResponseBody& operator=(const QueryBatchTaskListResponseBody &) = default ;
    QueryBatchTaskListResponseBody& operator=(QueryBatchTaskListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
          DARABONBA_PTR_TO_JSON(TaskNum, taskNum_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        };
        friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Clientip, clientip_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
          DARABONBA_PTR_FROM_JSON(TaskNum, taskNum_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
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
        && this->createTime_ == nullptr && this->taskNo_ == nullptr && this->taskNum_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr; };
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


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline TaskInfo& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline TaskInfo& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        shared_ptr<string> clientip_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> taskNo_ {};
        shared_ptr<int32_t> taskNum_ {};
        shared_ptr<string> taskStatus_ {};
        shared_ptr<string> taskType_ {};
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
    inline QueryBatchTaskListResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryBatchTaskListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryBatchTaskListResponseBody::Data) };
    inline QueryBatchTaskListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryBatchTaskListResponseBody::Data) };
    inline QueryBatchTaskListResponseBody& setData(const QueryBatchTaskListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryBatchTaskListResponseBody& setData(QueryBatchTaskListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline QueryBatchTaskListResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryBatchTaskListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline QueryBatchTaskListResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBatchTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryBatchTaskListResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryBatchTaskListResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<QueryBatchTaskListResponseBody::Data> data_ {};
    shared_ptr<bool> nextPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> prePage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
