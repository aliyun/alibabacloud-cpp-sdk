// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTMJOBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTMJOBINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListAgentMJobInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentMJobInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentMJobInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAgentMJobInfoResponseBody() = default ;
    ListAgentMJobInfoResponseBody(const ListAgentMJobInfoResponseBody &) = default ;
    ListAgentMJobInfoResponseBody(ListAgentMJobInfoResponseBody &&) = default ;
    ListAgentMJobInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentMJobInfoResponseBody() = default ;
    ListAgentMJobInfoResponseBody& operator=(const ListAgentMJobInfoResponseBody &) = default ;
    ListAgentMJobInfoResponseBody& operator=(ListAgentMJobInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataEndTime, dataEndTime_);
        DARABONBA_PTR_TO_JSON(DataStartTime, dataStartTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataEndTime, dataEndTime_);
        DARABONBA_PTR_FROM_JSON(DataStartTime, dataStartTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
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
      virtual bool empty() const override { return this->dataEndTime_ == nullptr
        && this->dataStartTime_ == nullptr && this->id_ == nullptr && this->message_ == nullptr && this->status_ == nullptr && this->taskEndTime_ == nullptr
        && this->taskId_ == nullptr && this->taskStartTime_ == nullptr; };
      // dataEndTime Field Functions 
      bool hasDataEndTime() const { return this->dataEndTime_ != nullptr;};
      void deleteDataEndTime() { this->dataEndTime_ = nullptr;};
      inline string getDataEndTime() const { DARABONBA_PTR_GET_DEFAULT(dataEndTime_, "") };
      inline Data& setDataEndTime(string dataEndTime) { DARABONBA_PTR_SET_VALUE(dataEndTime_, dataEndTime) };


      // dataStartTime Field Functions 
      bool hasDataStartTime() const { return this->dataStartTime_ != nullptr;};
      void deleteDataStartTime() { this->dataStartTime_ = nullptr;};
      inline string getDataStartTime() const { DARABONBA_PTR_GET_DEFAULT(dataStartTime_, "") };
      inline Data& setDataStartTime(string dataStartTime) { DARABONBA_PTR_SET_VALUE(dataStartTime_, dataStartTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskEndTime Field Functions 
      bool hasTaskEndTime() const { return this->taskEndTime_ != nullptr;};
      void deleteTaskEndTime() { this->taskEndTime_ = nullptr;};
      inline string getTaskEndTime() const { DARABONBA_PTR_GET_DEFAULT(taskEndTime_, "") };
      inline Data& setTaskEndTime(string taskEndTime) { DARABONBA_PTR_SET_VALUE(taskEndTime_, taskEndTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStartTime Field Functions 
      bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
      void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
      inline string getTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, "") };
      inline Data& setTaskStartTime(string taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


    protected:
      // The end time of the scan range.
      shared_ptr<string> dataEndTime_ {};
      // The start time of the scan range.
      shared_ptr<string> dataStartTime_ {};
      // The task ID.
      shared_ptr<int64_t> id_ {};
      // The error message, if an error occurs.
      shared_ptr<string> message_ {};
      // The task status. Valid values:
      // 
      // - queing: The task is queued.
      // - readyAnalysis: The task is pending analysis.
      // - running: The task is running.
      // - error: The task failed.
      // - finish: The task is complete.
      // - fileUploadUser: The user-specified file is uploaded.
      // - fileUploadSystem: The system-generated file is uploaded.
      // - expired: The task has expired.
      shared_ptr<string> status_ {};
      // The actual end time of the task.
      shared_ptr<string> taskEndTime_ {};
      // The scheduled task ID.
      shared_ptr<string> taskId_ {};
      // The actual start time of the task.
      shared_ptr<string> taskStartTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAgentMJobInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAgentMJobInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAgentMJobInfoResponseBody::Data>) };
    inline vector<ListAgentMJobInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAgentMJobInfoResponseBody::Data>) };
    inline ListAgentMJobInfoResponseBody& setData(const vector<ListAgentMJobInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAgentMJobInfoResponseBody& setData(vector<ListAgentMJobInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAgentMJobInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentMJobInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAgentMJobInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code. A value of **200** indicates success. Other values indicate failure. You can use this field to determine the cause of the failure.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<ListAgentMJobInfoResponseBody::Data>> data_ {};
    // The error message, if an error occurs.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - true: The request was successful.
    // - false/null: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
