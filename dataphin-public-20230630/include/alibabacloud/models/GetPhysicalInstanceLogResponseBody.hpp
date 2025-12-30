// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALINSTANCELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALINSTANCELOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalInstanceLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalInstanceLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskrunLogList, taskrunLogList_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalInstanceLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskrunLogList, taskrunLogList_);
    };
    GetPhysicalInstanceLogResponseBody() = default ;
    GetPhysicalInstanceLogResponseBody(const GetPhysicalInstanceLogResponseBody &) = default ;
    GetPhysicalInstanceLogResponseBody(GetPhysicalInstanceLogResponseBody &&) = default ;
    GetPhysicalInstanceLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalInstanceLogResponseBody() = default ;
    GetPhysicalInstanceLogResponseBody& operator=(const GetPhysicalInstanceLogResponseBody &) = default ;
    GetPhysicalInstanceLogResponseBody& operator=(GetPhysicalInstanceLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskrunLogList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskrunLogList& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(LogContent, logContent_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskrunId, taskrunId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskrunLogList& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(LogContent, logContent_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskrunId, taskrunId_);
      };
      TaskrunLogList() = default ;
      TaskrunLogList(const TaskrunLogList &) = default ;
      TaskrunLogList(TaskrunLogList &&) = default ;
      TaskrunLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskrunLogList() = default ;
      TaskrunLogList& operator=(const TaskrunLogList &) = default ;
      TaskrunLogList& operator=(TaskrunLogList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->endTime_ == nullptr && this->logContent_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->taskrunId_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline TaskrunLogList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline TaskrunLogList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // logContent Field Functions 
      bool hasLogContent() const { return this->logContent_ != nullptr;};
      void deleteLogContent() { this->logContent_ = nullptr;};
      inline string getLogContent() const { DARABONBA_PTR_GET_DEFAULT(logContent_, "") };
      inline TaskrunLogList& setLogContent(string logContent) { DARABONBA_PTR_SET_VALUE(logContent_, logContent) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline TaskrunLogList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskrunLogList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskrunId Field Functions 
      bool hasTaskrunId() const { return this->taskrunId_ != nullptr;};
      void deleteTaskrunId() { this->taskrunId_ = nullptr;};
      inline string getTaskrunId() const { DARABONBA_PTR_GET_DEFAULT(taskrunId_, "") };
      inline TaskrunLogList& setTaskrunId(string taskrunId) { DARABONBA_PTR_SET_VALUE(taskrunId_, taskrunId) };


    protected:
      shared_ptr<string> duration_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> logContent_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskrunId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->taskrunLogList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPhysicalInstanceLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPhysicalInstanceLogResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPhysicalInstanceLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPhysicalInstanceLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPhysicalInstanceLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskrunLogList Field Functions 
    bool hasTaskrunLogList() const { return this->taskrunLogList_ != nullptr;};
    void deleteTaskrunLogList() { this->taskrunLogList_ = nullptr;};
    inline const vector<GetPhysicalInstanceLogResponseBody::TaskrunLogList> & getTaskrunLogList() const { DARABONBA_PTR_GET_CONST(taskrunLogList_, vector<GetPhysicalInstanceLogResponseBody::TaskrunLogList>) };
    inline vector<GetPhysicalInstanceLogResponseBody::TaskrunLogList> getTaskrunLogList() { DARABONBA_PTR_GET(taskrunLogList_, vector<GetPhysicalInstanceLogResponseBody::TaskrunLogList>) };
    inline GetPhysicalInstanceLogResponseBody& setTaskrunLogList(const vector<GetPhysicalInstanceLogResponseBody::TaskrunLogList> & taskrunLogList) { DARABONBA_PTR_SET_VALUE(taskrunLogList_, taskrunLogList) };
    inline GetPhysicalInstanceLogResponseBody& setTaskrunLogList(vector<GetPhysicalInstanceLogResponseBody::TaskrunLogList> && taskrunLogList) { DARABONBA_PTR_SET_RVALUE(taskrunLogList_, taskrunLogList) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<GetPhysicalInstanceLogResponseBody::TaskrunLogList>> taskrunLogList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
