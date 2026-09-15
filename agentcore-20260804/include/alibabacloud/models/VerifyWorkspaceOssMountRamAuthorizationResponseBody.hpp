// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYWORKSPACEOSSMOUNTRAMAUTHORIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYWORKSPACEOSSMOUNTRAMAUTHORIZATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class VerifyWorkspaceOssMountRamAuthorizationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyWorkspaceOssMountRamAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyWorkspaceOssMountRamAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    VerifyWorkspaceOssMountRamAuthorizationResponseBody() = default ;
    VerifyWorkspaceOssMountRamAuthorizationResponseBody(const VerifyWorkspaceOssMountRamAuthorizationResponseBody &) = default ;
    VerifyWorkspaceOssMountRamAuthorizationResponseBody(VerifyWorkspaceOssMountRamAuthorizationResponseBody &&) = default ;
    VerifyWorkspaceOssMountRamAuthorizationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyWorkspaceOssMountRamAuthorizationResponseBody() = default ;
    VerifyWorkspaceOssMountRamAuthorizationResponseBody& operator=(const VerifyWorkspaceOssMountRamAuthorizationResponseBody &) = default ;
    VerifyWorkspaceOssMountRamAuthorizationResponseBody& operator=(VerifyWorkspaceOssMountRamAuthorizationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(authorizationStatus, authorizationStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(authorizationStatus, authorizationStatus_);
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
      virtual bool empty() const override { return this->authorizationStatus_ == nullptr; };
      // authorizationStatus Field Functions 
      bool hasAuthorizationStatus() const { return this->authorizationStatus_ != nullptr;};
      void deleteAuthorizationStatus() { this->authorizationStatus_ = nullptr;};
      inline string getAuthorizationStatus() const { DARABONBA_PTR_GET_DEFAULT(authorizationStatus_, "") };
      inline Data& setAuthorizationStatus(string authorizationStatus) { DARABONBA_PTR_SET_VALUE(authorizationStatus_, authorizationStatus) };


    protected:
      // The OSS storage authorization status.
      shared_ptr<string> authorizationStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifyWorkspaceOssMountRamAuthorizationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VerifyWorkspaceOssMountRamAuthorizationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, VerifyWorkspaceOssMountRamAuthorizationResponseBody::Data) };
    inline VerifyWorkspaceOssMountRamAuthorizationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, VerifyWorkspaceOssMountRamAuthorizationResponseBody::Data) };
    inline VerifyWorkspaceOssMountRamAuthorizationResponseBody& setData(const VerifyWorkspaceOssMountRamAuthorizationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VerifyWorkspaceOssMountRamAuthorizationResponseBody& setData(VerifyWorkspaceOssMountRamAuthorizationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline VerifyWorkspaceOssMountRamAuthorizationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyWorkspaceOssMountRamAuthorizationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyWorkspaceOssMountRamAuthorizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VerifyWorkspaceOssMountRamAuthorizationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<VerifyWorkspaceOssMountRamAuthorizationResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
