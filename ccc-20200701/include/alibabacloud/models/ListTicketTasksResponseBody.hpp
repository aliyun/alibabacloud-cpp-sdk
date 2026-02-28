// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListTicketTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTicketTasksResponseBody() = default ;
    ListTicketTasksResponseBody(const ListTicketTasksResponseBody &) = default ;
    ListTicketTasksResponseBody(ListTicketTasksResponseBody &&) = default ;
    ListTicketTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketTasksResponseBody() = default ;
    ListTicketTasksResponseBody& operator=(const ListTicketTasksResponseBody &) = default ;
    ListTicketTasksResponseBody& operator=(ListTicketTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(Assignee, assignee_);
        DARABONBA_PTR_TO_JSON(AssigneeName, assigneeName_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FileKeys, fileKeys_);
        DARABONBA_PTR_TO_JSON(FileUrls, fileUrls_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TaskDefinitionNodeId, taskDefinitionNodeId_);
        DARABONBA_PTR_TO_JSON(TaskDefinitionNodeType, taskDefinitionNodeType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(Assignee, assignee_);
        DARABONBA_PTR_FROM_JSON(AssigneeName, assigneeName_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FileKeys, fileKeys_);
        DARABONBA_PTR_FROM_JSON(FileUrls, fileUrls_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TaskDefinitionNodeId, taskDefinitionNodeId_);
        DARABONBA_PTR_FROM_JSON(TaskDefinitionNodeType, taskDefinitionNodeType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
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
      virtual bool empty() const override { return this->action_ == nullptr
        && this->assignee_ == nullptr && this->assigneeName_ == nullptr && this->comment_ == nullptr && this->endTime_ == nullptr && this->fileKeys_ == nullptr
        && this->fileUrls_ == nullptr && this->instanceId_ == nullptr && this->startTime_ == nullptr && this->taskDefinitionNodeId_ == nullptr && this->taskDefinitionNodeType_ == nullptr
        && this->taskId_ == nullptr && this->taskName_ == nullptr && this->ticketId_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Data& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // assignee Field Functions 
      bool hasAssignee() const { return this->assignee_ != nullptr;};
      void deleteAssignee() { this->assignee_ = nullptr;};
      inline string getAssignee() const { DARABONBA_PTR_GET_DEFAULT(assignee_, "") };
      inline Data& setAssignee(string assignee) { DARABONBA_PTR_SET_VALUE(assignee_, assignee) };


      // assigneeName Field Functions 
      bool hasAssigneeName() const { return this->assigneeName_ != nullptr;};
      void deleteAssigneeName() { this->assigneeName_ = nullptr;};
      inline string getAssigneeName() const { DARABONBA_PTR_GET_DEFAULT(assigneeName_, "") };
      inline Data& setAssigneeName(string assigneeName) { DARABONBA_PTR_SET_VALUE(assigneeName_, assigneeName) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Data& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // fileKeys Field Functions 
      bool hasFileKeys() const { return this->fileKeys_ != nullptr;};
      void deleteFileKeys() { this->fileKeys_ = nullptr;};
      inline const vector<string> & getFileKeys() const { DARABONBA_PTR_GET_CONST(fileKeys_, vector<string>) };
      inline vector<string> getFileKeys() { DARABONBA_PTR_GET(fileKeys_, vector<string>) };
      inline Data& setFileKeys(const vector<string> & fileKeys) { DARABONBA_PTR_SET_VALUE(fileKeys_, fileKeys) };
      inline Data& setFileKeys(vector<string> && fileKeys) { DARABONBA_PTR_SET_RVALUE(fileKeys_, fileKeys) };


      // fileUrls Field Functions 
      bool hasFileUrls() const { return this->fileUrls_ != nullptr;};
      void deleteFileUrls() { this->fileUrls_ = nullptr;};
      inline const vector<string> & getFileUrls() const { DARABONBA_PTR_GET_CONST(fileUrls_, vector<string>) };
      inline vector<string> getFileUrls() { DARABONBA_PTR_GET(fileUrls_, vector<string>) };
      inline Data& setFileUrls(const vector<string> & fileUrls) { DARABONBA_PTR_SET_VALUE(fileUrls_, fileUrls) };
      inline Data& setFileUrls(vector<string> && fileUrls) { DARABONBA_PTR_SET_RVALUE(fileUrls_, fileUrls) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // taskDefinitionNodeId Field Functions 
      bool hasTaskDefinitionNodeId() const { return this->taskDefinitionNodeId_ != nullptr;};
      void deleteTaskDefinitionNodeId() { this->taskDefinitionNodeId_ = nullptr;};
      inline string getTaskDefinitionNodeId() const { DARABONBA_PTR_GET_DEFAULT(taskDefinitionNodeId_, "") };
      inline Data& setTaskDefinitionNodeId(string taskDefinitionNodeId) { DARABONBA_PTR_SET_VALUE(taskDefinitionNodeId_, taskDefinitionNodeId) };


      // taskDefinitionNodeType Field Functions 
      bool hasTaskDefinitionNodeType() const { return this->taskDefinitionNodeType_ != nullptr;};
      void deleteTaskDefinitionNodeType() { this->taskDefinitionNodeType_ = nullptr;};
      inline string getTaskDefinitionNodeType() const { DARABONBA_PTR_GET_DEFAULT(taskDefinitionNodeType_, "") };
      inline Data& setTaskDefinitionNodeType(string taskDefinitionNodeType) { DARABONBA_PTR_SET_VALUE(taskDefinitionNodeType_, taskDefinitionNodeType) };


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


      // ticketId Field Functions 
      bool hasTicketId() const { return this->ticketId_ != nullptr;};
      void deleteTicketId() { this->ticketId_ = nullptr;};
      inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
      inline Data& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> assignee_ {};
      shared_ptr<string> assigneeName_ {};
      shared_ptr<string> comment_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<vector<string>> fileKeys_ {};
      shared_ptr<vector<string>> fileUrls_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> taskDefinitionNodeId_ {};
      shared_ptr<string> taskDefinitionNodeType_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskName_ {};
      shared_ptr<string> ticketId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTicketTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTicketTasksResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTicketTasksResponseBody::Data>) };
    inline vector<ListTicketTasksResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTicketTasksResponseBody::Data>) };
    inline ListTicketTasksResponseBody& setData(const vector<ListTicketTasksResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTicketTasksResponseBody& setData(vector<ListTicketTasksResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTicketTasksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTicketTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListTicketTasksResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListTicketTasksResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTicketTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListTicketTasksResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
