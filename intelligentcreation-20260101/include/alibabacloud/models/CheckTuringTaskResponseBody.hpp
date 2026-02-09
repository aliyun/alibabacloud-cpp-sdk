// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTURINGTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKTURINGTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20260101
{
namespace Models
{
  class CheckTuringTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckTuringTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckTuringTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CheckTuringTaskResponseBody() = default ;
    CheckTuringTaskResponseBody(const CheckTuringTaskResponseBody &) = default ;
    CheckTuringTaskResponseBody(CheckTuringTaskResponseBody &&) = default ;
    CheckTuringTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckTuringTaskResponseBody() = default ;
    CheckTuringTaskResponseBody& operator=(const CheckTuringTaskResponseBody &) = default ;
    CheckTuringTaskResponseBody& operator=(CheckTuringTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(failCode, failCode_);
        DARABONBA_PTR_TO_JSON(failMsg, failMsg_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(failCode, failCode_);
        DARABONBA_PTR_FROM_JSON(failMsg, failMsg_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failCode_ == nullptr
        && this->failMsg_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->videoUrl_ == nullptr; };
      // failCode Field Functions 
      bool hasFailCode() const { return this->failCode_ != nullptr;};
      void deleteFailCode() { this->failCode_ = nullptr;};
      inline string getFailCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
      inline Result& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


      // failMsg Field Functions 
      bool hasFailMsg() const { return this->failMsg_ != nullptr;};
      void deleteFailMsg() { this->failMsg_ = nullptr;};
      inline string getFailMsg() const { DARABONBA_PTR_GET_DEFAULT(failMsg_, "") };
      inline Result& setFailMsg(string failMsg) { DARABONBA_PTR_SET_VALUE(failMsg_, failMsg) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Result& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // videoUrl Field Functions 
      bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
      void deleteVideoUrl() { this->videoUrl_ = nullptr;};
      inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
      inline Result& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


    protected:
      shared_ptr<string> failCode_ {};
      shared_ptr<string> failMsg_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> videoUrl_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CheckTuringTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CheckTuringTaskResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckTuringTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CheckTuringTaskResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CheckTuringTaskResponseBody::Result) };
    inline CheckTuringTaskResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CheckTuringTaskResponseBody::Result) };
    inline CheckTuringTaskResponseBody& setResult(const CheckTuringTaskResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CheckTuringTaskResponseBody& setResult(CheckTuringTaskResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckTuringTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<CheckTuringTaskResponseBody::Result> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20260101
#endif
