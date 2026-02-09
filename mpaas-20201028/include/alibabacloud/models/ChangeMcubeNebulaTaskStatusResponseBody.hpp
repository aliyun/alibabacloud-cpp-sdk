// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEMCUBENEBULATASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGEMCUBENEBULATASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ChangeMcubeNebulaTaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeMcubeNebulaTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeMcubeNebulaTaskStatusResult, changeMcubeNebulaTaskStatusResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeMcubeNebulaTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeMcubeNebulaTaskStatusResult, changeMcubeNebulaTaskStatusResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ChangeMcubeNebulaTaskStatusResponseBody() = default ;
    ChangeMcubeNebulaTaskStatusResponseBody(const ChangeMcubeNebulaTaskStatusResponseBody &) = default ;
    ChangeMcubeNebulaTaskStatusResponseBody(ChangeMcubeNebulaTaskStatusResponseBody &&) = default ;
    ChangeMcubeNebulaTaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeMcubeNebulaTaskStatusResponseBody() = default ;
    ChangeMcubeNebulaTaskStatusResponseBody& operator=(const ChangeMcubeNebulaTaskStatusResponseBody &) = default ;
    ChangeMcubeNebulaTaskStatusResponseBody& operator=(ChangeMcubeNebulaTaskStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChangeMcubeNebulaTaskStatusResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangeMcubeNebulaTaskStatusResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, ChangeMcubeNebulaTaskStatusResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      ChangeMcubeNebulaTaskStatusResult() = default ;
      ChangeMcubeNebulaTaskStatusResult(const ChangeMcubeNebulaTaskStatusResult &) = default ;
      ChangeMcubeNebulaTaskStatusResult(ChangeMcubeNebulaTaskStatusResult &&) = default ;
      ChangeMcubeNebulaTaskStatusResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangeMcubeNebulaTaskStatusResult() = default ;
      ChangeMcubeNebulaTaskStatusResult& operator=(const ChangeMcubeNebulaTaskStatusResult &) = default ;
      ChangeMcubeNebulaTaskStatusResult& operator=(ChangeMcubeNebulaTaskStatusResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ChangeMcubeNebulaTaskStatusResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ChangeMcubeNebulaTaskStatusResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ChangeMcubeNebulaTaskStatusResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ChangeMcubeNebulaTaskStatusResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->changeMcubeNebulaTaskStatusResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // changeMcubeNebulaTaskStatusResult Field Functions 
    bool hasChangeMcubeNebulaTaskStatusResult() const { return this->changeMcubeNebulaTaskStatusResult_ != nullptr;};
    void deleteChangeMcubeNebulaTaskStatusResult() { this->changeMcubeNebulaTaskStatusResult_ = nullptr;};
    inline const ChangeMcubeNebulaTaskStatusResponseBody::ChangeMcubeNebulaTaskStatusResult & getChangeMcubeNebulaTaskStatusResult() const { DARABONBA_PTR_GET_CONST(changeMcubeNebulaTaskStatusResult_, ChangeMcubeNebulaTaskStatusResponseBody::ChangeMcubeNebulaTaskStatusResult) };
    inline ChangeMcubeNebulaTaskStatusResponseBody::ChangeMcubeNebulaTaskStatusResult getChangeMcubeNebulaTaskStatusResult() { DARABONBA_PTR_GET(changeMcubeNebulaTaskStatusResult_, ChangeMcubeNebulaTaskStatusResponseBody::ChangeMcubeNebulaTaskStatusResult) };
    inline ChangeMcubeNebulaTaskStatusResponseBody& setChangeMcubeNebulaTaskStatusResult(const ChangeMcubeNebulaTaskStatusResponseBody::ChangeMcubeNebulaTaskStatusResult & changeMcubeNebulaTaskStatusResult) { DARABONBA_PTR_SET_VALUE(changeMcubeNebulaTaskStatusResult_, changeMcubeNebulaTaskStatusResult) };
    inline ChangeMcubeNebulaTaskStatusResponseBody& setChangeMcubeNebulaTaskStatusResult(ChangeMcubeNebulaTaskStatusResponseBody::ChangeMcubeNebulaTaskStatusResult && changeMcubeNebulaTaskStatusResult) { DARABONBA_PTR_SET_RVALUE(changeMcubeNebulaTaskStatusResult_, changeMcubeNebulaTaskStatusResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeMcubeNebulaTaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ChangeMcubeNebulaTaskStatusResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ChangeMcubeNebulaTaskStatusResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ChangeMcubeNebulaTaskStatusResponseBody::ChangeMcubeNebulaTaskStatusResult> changeMcubeNebulaTaskStatusResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
