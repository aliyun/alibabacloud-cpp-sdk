// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVARIABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVARIABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class GetVariableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVariableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetVariableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetVariableResponseBody() = default ;
    GetVariableResponseBody(const GetVariableResponseBody &) = default ;
    GetVariableResponseBody(GetVariableResponseBody &&) = default ;
    GetVariableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVariableResponseBody() = default ;
    GetVariableResponseBody& operator=(const GetVariableResponseBody &) = default ;
    GetVariableResponseBody& operator=(GetVariableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowRetry_ == nullptr
        && return this->appName_ == nullptr && return this->dynamicCode_ == nullptr && return this->dynamicMessage_ == nullptr && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->module_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool allowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline GetVariableResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetVariableResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string dynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetVariableResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetVariableResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetVariableResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetVariableResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetVariableResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline GetVariableResponseBody& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVariableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetVariableResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // allowRetry
    std::shared_ptr<bool> allowRetry_ = nullptr;
    // appName
    std::shared_ptr<string> appName_ = nullptr;
    // dynamicCode
    std::shared_ptr<string> dynamicCode_ = nullptr;
    // dynamicMessage
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // errorCode
    std::shared_ptr<string> errorCode_ = nullptr;
    // errorMsg
    std::shared_ptr<string> errorMsg_ = nullptr;
    // httpStatusCode
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // module
    std::shared_ptr<string> module_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    // success
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
