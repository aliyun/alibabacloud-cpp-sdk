// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSMARTCALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LLMSMARTCALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class LlmSmartCallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmSmartCallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallRecordId, callRecordId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, LlmSmartCallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallRecordId, callRecordId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    LlmSmartCallResponseBody() = default ;
    LlmSmartCallResponseBody(const LlmSmartCallResponseBody &) = default ;
    LlmSmartCallResponseBody(LlmSmartCallResponseBody &&) = default ;
    LlmSmartCallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmSmartCallResponseBody() = default ;
    LlmSmartCallResponseBody& operator=(const LlmSmartCallResponseBody &) = default ;
    LlmSmartCallResponseBody& operator=(LlmSmartCallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callRecordId_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // callRecordId Field Functions 
    bool hasCallRecordId() const { return this->callRecordId_ != nullptr;};
    void deleteCallRecordId() { this->callRecordId_ = nullptr;};
    inline string getCallRecordId() const { DARABONBA_PTR_GET_DEFAULT(callRecordId_, "") };
    inline LlmSmartCallResponseBody& setCallRecordId(string callRecordId) { DARABONBA_PTR_SET_VALUE(callRecordId_, callRecordId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline LlmSmartCallResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline LlmSmartCallResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LlmSmartCallResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline LlmSmartCallResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> callRecordId_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
