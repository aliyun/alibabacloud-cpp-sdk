// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFORMATIONTASKSBYTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFORMATIONTASKSBYTYPERESPONSEBODY_HPP_
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
  class QueryFormationTasksByTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFormationTasksByTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFormationTasksByTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryFormationTasksByTypeResponseBody() = default ;
    QueryFormationTasksByTypeResponseBody(const QueryFormationTasksByTypeResponseBody &) = default ;
    QueryFormationTasksByTypeResponseBody(QueryFormationTasksByTypeResponseBody &&) = default ;
    QueryFormationTasksByTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFormationTasksByTypeResponseBody() = default ;
    QueryFormationTasksByTypeResponseBody& operator=(const QueryFormationTasksByTypeResponseBody &) = default ;
    QueryFormationTasksByTypeResponseBody& operator=(QueryFormationTasksByTypeResponseBody &&) = default ;
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
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The execution duration of the most recent task.
      shared_ptr<string> lastTaskInstCostTime_ {};
      // The instance ID of the most recent task.
      shared_ptr<string> lastTaskInstID_ {};
      // The error message of the most recent task.
      shared_ptr<string> lastTaskInstMessage_ {};
      // The instance status of the most recent node.
      shared_ptr<string> lastTaskInstState_ {};
      // The scheduling status.
      shared_ptr<string> scheduleState_ {};
      // The database name.
      shared_ptr<string> schema_ {};
      // The source type.
      shared_ptr<string> sourceType_ {};
      // The scheduling frequency.
      shared_ptr<string> syncTime_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The task type.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFormationTasksByTypeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryFormationTasksByTypeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryFormationTasksByTypeResponseBody::Data>) };
    inline vector<QueryFormationTasksByTypeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryFormationTasksByTypeResponseBody::Data>) };
    inline QueryFormationTasksByTypeResponseBody& setData(const vector<QueryFormationTasksByTypeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryFormationTasksByTypeResponseBody& setData(vector<QueryFormationTasksByTypeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryFormationTasksByTypeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryFormationTasksByTypeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFormationTasksByTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryFormationTasksByTypeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The task list.
    shared_ptr<vector<QueryFormationTasksByTypeResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message. OK is returned if the call was successful.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
