// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFORMATIONINSTSBYTASKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFORMATIONINSTSBYTASKIDRESPONSEBODY_HPP_
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
  class QueryFormationInstsByTaskIDResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFormationInstsByTaskIDResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFormationInstsByTaskIDResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryFormationInstsByTaskIDResponseBody() = default ;
    QueryFormationInstsByTaskIDResponseBody(const QueryFormationInstsByTaskIDResponseBody &) = default ;
    QueryFormationInstsByTaskIDResponseBody(QueryFormationInstsByTaskIDResponseBody &&) = default ;
    QueryFormationInstsByTaskIDResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFormationInstsByTaskIDResponseBody() = default ;
    QueryFormationInstsByTaskIDResponseBody& operator=(const QueryFormationInstsByTaskIDResponseBody &) = default ;
    QueryFormationInstsByTaskIDResponseBody& operator=(QueryFormationInstsByTaskIDResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastTaskInstCostTime, lastTaskInstCostTime_);
        DARABONBA_PTR_TO_JSON(LastTaskInstID, lastTaskInstID_);
        DARABONBA_PTR_TO_JSON(LastTaskInstMessage, lastTaskInstMessage_);
        DARABONBA_PTR_TO_JSON(LastTaskInstState, lastTaskInstState_);
        DARABONBA_PTR_TO_JSON(ScheduleState, scheduleState_);
        DARABONBA_PTR_TO_JSON(Schema, schema_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(SyncTime, syncTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastTaskInstCostTime, lastTaskInstCostTime_);
        DARABONBA_PTR_FROM_JSON(LastTaskInstID, lastTaskInstID_);
        DARABONBA_PTR_FROM_JSON(LastTaskInstMessage, lastTaskInstMessage_);
        DARABONBA_PTR_FROM_JSON(LastTaskInstState, lastTaskInstState_);
        DARABONBA_PTR_FROM_JSON(ScheduleState, scheduleState_);
        DARABONBA_PTR_FROM_JSON(Schema, schema_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(SyncTime, syncTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->lastTaskInstCostTime_ == nullptr && this->lastTaskInstID_ == nullptr && this->lastTaskInstMessage_ == nullptr && this->lastTaskInstState_ == nullptr && this->scheduleState_ == nullptr
        && this->schema_ == nullptr && this->sourceType_ == nullptr && this->syncTime_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr
        && this->taskType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastTaskInstCostTime Field Functions 
      bool hasLastTaskInstCostTime() const { return this->lastTaskInstCostTime_ != nullptr;};
      void deleteLastTaskInstCostTime() { this->lastTaskInstCostTime_ = nullptr;};
      inline string getLastTaskInstCostTime() const { DARABONBA_PTR_GET_DEFAULT(lastTaskInstCostTime_, "") };
      inline Data& setLastTaskInstCostTime(string lastTaskInstCostTime) { DARABONBA_PTR_SET_VALUE(lastTaskInstCostTime_, lastTaskInstCostTime) };


      // lastTaskInstID Field Functions 
      bool hasLastTaskInstID() const { return this->lastTaskInstID_ != nullptr;};
      void deleteLastTaskInstID() { this->lastTaskInstID_ = nullptr;};
      inline string getLastTaskInstID() const { DARABONBA_PTR_GET_DEFAULT(lastTaskInstID_, "") };
      inline Data& setLastTaskInstID(string lastTaskInstID) { DARABONBA_PTR_SET_VALUE(lastTaskInstID_, lastTaskInstID) };


      // lastTaskInstMessage Field Functions 
      bool hasLastTaskInstMessage() const { return this->lastTaskInstMessage_ != nullptr;};
      void deleteLastTaskInstMessage() { this->lastTaskInstMessage_ = nullptr;};
      inline string getLastTaskInstMessage() const { DARABONBA_PTR_GET_DEFAULT(lastTaskInstMessage_, "") };
      inline Data& setLastTaskInstMessage(string lastTaskInstMessage) { DARABONBA_PTR_SET_VALUE(lastTaskInstMessage_, lastTaskInstMessage) };


      // lastTaskInstState Field Functions 
      bool hasLastTaskInstState() const { return this->lastTaskInstState_ != nullptr;};
      void deleteLastTaskInstState() { this->lastTaskInstState_ = nullptr;};
      inline string getLastTaskInstState() const { DARABONBA_PTR_GET_DEFAULT(lastTaskInstState_, "") };
      inline Data& setLastTaskInstState(string lastTaskInstState) { DARABONBA_PTR_SET_VALUE(lastTaskInstState_, lastTaskInstState) };


      // scheduleState Field Functions 
      bool hasScheduleState() const { return this->scheduleState_ != nullptr;};
      void deleteScheduleState() { this->scheduleState_ = nullptr;};
      inline string getScheduleState() const { DARABONBA_PTR_GET_DEFAULT(scheduleState_, "") };
      inline Data& setScheduleState(string scheduleState) { DARABONBA_PTR_SET_VALUE(scheduleState_, scheduleState) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
      inline Data& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Data& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // syncTime Field Functions 
      bool hasSyncTime() const { return this->syncTime_ != nullptr;};
      void deleteSyncTime() { this->syncTime_ = nullptr;};
      inline string getSyncTime() const { DARABONBA_PTR_GET_DEFAULT(syncTime_, "") };
      inline Data& setSyncTime(string syncTime) { DARABONBA_PTR_SET_VALUE(syncTime_, syncTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Data& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The time when the task was created.
      shared_ptr<string> createTime_ {};
      // The execution duration of the most recent task.
      shared_ptr<string> lastTaskInstCostTime_ {};
      // The instance ID of the most recent task.
      shared_ptr<string> lastTaskInstID_ {};
      // The error message of the most recent task.
      shared_ptr<string> lastTaskInstMessage_ {};
      // The instance status of the most recent node.
      shared_ptr<string> lastTaskInstState_ {};
      // The task status.
      shared_ptr<string> scheduleState_ {};
      // The schema ID assigned to the instance by the system.
      shared_ptr<string> schema_ {};
      // The task source. Valid values:
      // - **system**: system.
      // - **custom**: custom.
      shared_ptr<string> sourceType_ {};
      // The synchronization time, accurate to milliseconds. Format: yyyy-MM-ddTHH:mm:ssZ.
      shared_ptr<string> syncTime_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The task type.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFormationInstsByTaskIDResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryFormationInstsByTaskIDResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryFormationInstsByTaskIDResponseBody::Data>) };
    inline vector<QueryFormationInstsByTaskIDResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryFormationInstsByTaskIDResponseBody::Data>) };
    inline QueryFormationInstsByTaskIDResponseBody& setData(const vector<QueryFormationInstsByTaskIDResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryFormationInstsByTaskIDResponseBody& setData(vector<QueryFormationInstsByTaskIDResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryFormationInstsByTaskIDResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Darabonba::Json> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getItems() { DARABONBA_PTR_GET(items_, vector<Darabonba::Json>) };
    inline QueryFormationInstsByTaskIDResponseBody& setItems(const vector<Darabonba::Json> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryFormationInstsByTaskIDResponseBody& setItems(vector<Darabonba::Json> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryFormationInstsByTaskIDResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline QueryFormationInstsByTaskIDResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline QueryFormationInstsByTaskIDResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFormationInstsByTaskIDResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryFormationInstsByTaskIDResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline QueryFormationInstsByTaskIDResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The returned task list.
    shared_ptr<vector<QueryFormationInstsByTaskIDResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The task list.
    shared_ptr<vector<Darabonba::Json>> items_ {};
    // The response message. OK is returned if the request was successful.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The total number of pages.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
