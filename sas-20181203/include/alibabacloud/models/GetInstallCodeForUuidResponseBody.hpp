// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTALLCODEFORUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTALLCODEFORUUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstallCodeForUuidResponseBodyInstallCode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInstallCodeForUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstallCodeForUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstallCode, installCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstallCodeForUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstallCode, installCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstallCodeForUuidResponseBody() = default ;
    GetInstallCodeForUuidResponseBody(const GetInstallCodeForUuidResponseBody &) = default ;
    GetInstallCodeForUuidResponseBody(GetInstallCodeForUuidResponseBody &&) = default ;
    GetInstallCodeForUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstallCodeForUuidResponseBody() = default ;
    GetInstallCodeForUuidResponseBody& operator=(const GetInstallCodeForUuidResponseBody &) = default ;
    GetInstallCodeForUuidResponseBody& operator=(GetInstallCodeForUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->installCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetInstallCodeForUuidResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline GetInstallCodeForUuidResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // installCode Field Functions 
    bool hasInstallCode() const { return this->installCode_ != nullptr;};
    void deleteInstallCode() { this->installCode_ = nullptr;};
    inline const GetInstallCodeForUuidResponseBodyInstallCode & installCode() const { DARABONBA_PTR_GET_CONST(installCode_, GetInstallCodeForUuidResponseBodyInstallCode) };
    inline GetInstallCodeForUuidResponseBodyInstallCode installCode() { DARABONBA_PTR_GET(installCode_, GetInstallCodeForUuidResponseBodyInstallCode) };
    inline GetInstallCodeForUuidResponseBody& setInstallCode(const GetInstallCodeForUuidResponseBodyInstallCode & installCode) { DARABONBA_PTR_SET_VALUE(installCode_, installCode) };
    inline GetInstallCodeForUuidResponseBody& setInstallCode(GetInstallCodeForUuidResponseBodyInstallCode && installCode) { DARABONBA_PTR_SET_RVALUE(installCode_, installCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstallCodeForUuidResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstallCodeForUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstallCodeForUuidResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // API status code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // HTTP status code
    std::shared_ptr<int64_t> httpStatusCode_ = nullptr;
    // Client installation code.
    std::shared_ptr<GetInstallCodeForUuidResponseBodyInstallCode> installCode_ = nullptr;
    // Response message from the request.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the current request, a unique identifier generated by Alibaba Cloud for troubleshooting and issue localization.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the returned query result. Values: - **true**: Success - **false**: Failure
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
