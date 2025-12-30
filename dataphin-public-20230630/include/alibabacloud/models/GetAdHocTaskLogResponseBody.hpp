// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADHOCTASKLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADHOCTASKLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAdHocTaskLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdHocTaskLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(LogInfo, logInfo_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdHocTaskLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(LogInfo, logInfo_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAdHocTaskLogResponseBody() = default ;
    GetAdHocTaskLogResponseBody(const GetAdHocTaskLogResponseBody &) = default ;
    GetAdHocTaskLogResponseBody(GetAdHocTaskLogResponseBody &&) = default ;
    GetAdHocTaskLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdHocTaskLogResponseBody() = default ;
    GetAdHocTaskLogResponseBody& operator=(const GetAdHocTaskLogResponseBody &) = default ;
    GetAdHocTaskLogResponseBody& operator=(GetAdHocTaskLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(HasResult, hasResult_);
        DARABONBA_PTR_TO_JSON(NextOffset, nextOffset_);
        DARABONBA_PTR_TO_JSON(SubTaskId, subTaskId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, LogInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
        DARABONBA_PTR_FROM_JSON(HasResult, hasResult_);
        DARABONBA_PTR_FROM_JSON(NextOffset, nextOffset_);
        DARABONBA_PTR_FROM_JSON(SubTaskId, subTaskId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      };
      LogInfo() = default ;
      LogInfo(const LogInfo &) = default ;
      LogInfo(LogInfo &&) = default ;
      LogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogInfo() = default ;
      LogInfo& operator=(const LogInfo &) = default ;
      LogInfo& operator=(LogInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->hasNext_ == nullptr && this->hasResult_ == nullptr && this->nextOffset_ == nullptr && this->subTaskId_ == nullptr && this->taskId_ == nullptr
        && this->taskStatus_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline LogInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline LogInfo& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


      // hasResult Field Functions 
      bool hasHasResult() const { return this->hasResult_ != nullptr;};
      void deleteHasResult() { this->hasResult_ = nullptr;};
      inline bool getHasResult() const { DARABONBA_PTR_GET_DEFAULT(hasResult_, false) };
      inline LogInfo& setHasResult(bool hasResult) { DARABONBA_PTR_SET_VALUE(hasResult_, hasResult) };


      // nextOffset Field Functions 
      bool hasNextOffset() const { return this->nextOffset_ != nullptr;};
      void deleteNextOffset() { this->nextOffset_ = nullptr;};
      inline int32_t getNextOffset() const { DARABONBA_PTR_GET_DEFAULT(nextOffset_, 0) };
      inline LogInfo& setNextOffset(int32_t nextOffset) { DARABONBA_PTR_SET_VALUE(nextOffset_, nextOffset) };


      // subTaskId Field Functions 
      bool hasSubTaskId() const { return this->subTaskId_ != nullptr;};
      void deleteSubTaskId() { this->subTaskId_ = nullptr;};
      inline int32_t getSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(subTaskId_, 0) };
      inline LogInfo& setSubTaskId(int32_t subTaskId) { DARABONBA_PTR_SET_VALUE(subTaskId_, subTaskId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline LogInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline LogInfo& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<bool> hasNext_ {};
      shared_ptr<bool> hasResult_ {};
      shared_ptr<int32_t> nextOffset_ {};
      shared_ptr<int32_t> subTaskId_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->logInfo_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAdHocTaskLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAdHocTaskLogResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // logInfo Field Functions 
    bool hasLogInfo() const { return this->logInfo_ != nullptr;};
    void deleteLogInfo() { this->logInfo_ = nullptr;};
    inline const GetAdHocTaskLogResponseBody::LogInfo & getLogInfo() const { DARABONBA_PTR_GET_CONST(logInfo_, GetAdHocTaskLogResponseBody::LogInfo) };
    inline GetAdHocTaskLogResponseBody::LogInfo getLogInfo() { DARABONBA_PTR_GET(logInfo_, GetAdHocTaskLogResponseBody::LogInfo) };
    inline GetAdHocTaskLogResponseBody& setLogInfo(const GetAdHocTaskLogResponseBody::LogInfo & logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };
    inline GetAdHocTaskLogResponseBody& setLogInfo(GetAdHocTaskLogResponseBody::LogInfo && logInfo) { DARABONBA_PTR_SET_RVALUE(logInfo_, logInfo) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAdHocTaskLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAdHocTaskLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAdHocTaskLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<GetAdHocTaskLogResponseBody::LogInfo> logInfo_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
