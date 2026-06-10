// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class GetTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetTokenResponseBody() = default ;
    GetTokenResponseBody(const GetTokenResponseBody &) = default ;
    GetTokenResponseBody(GetTokenResponseBody &&) = default ;
    GetTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenResponseBody() = default ;
    GetTokenResponseBody& operator=(const GetTokenResponseBody &) = default ;
    GetTokenResponseBody& operator=(GetTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
        DARABONBA_PTR_TO_JSON(nonce, nonce_);
        DARABONBA_PTR_TO_JSON(requestIp, requestIp_);
        DARABONBA_PTR_TO_JSON(responseTime, responseTime_);
        DARABONBA_PTR_TO_JSON(signature, signature_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
        DARABONBA_PTR_FROM_JSON(nonce, nonce_);
        DARABONBA_PTR_FROM_JSON(requestIp, requestIp_);
        DARABONBA_PTR_FROM_JSON(responseTime, responseTime_);
        DARABONBA_PTR_FROM_JSON(signature, signature_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->deviceName_ == nullptr && this->nonce_ == nullptr && this->requestIp_ == nullptr && this->responseTime_ == nullptr && this->signature_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline Data& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // nonce Field Functions 
      bool hasNonce() const { return this->nonce_ != nullptr;};
      void deleteNonce() { this->nonce_ = nullptr;};
      inline string getNonce() const { DARABONBA_PTR_GET_DEFAULT(nonce_, "") };
      inline Data& setNonce(string nonce) { DARABONBA_PTR_SET_VALUE(nonce_, nonce) };


      // requestIp Field Functions 
      bool hasRequestIp() const { return this->requestIp_ != nullptr;};
      void deleteRequestIp() { this->requestIp_ = nullptr;};
      inline string getRequestIp() const { DARABONBA_PTR_GET_DEFAULT(requestIp_, "") };
      inline Data& setRequestIp(string requestIp) { DARABONBA_PTR_SET_VALUE(requestIp_, requestIp) };


      // responseTime Field Functions 
      bool hasResponseTime() const { return this->responseTime_ != nullptr;};
      void deleteResponseTime() { this->responseTime_ = nullptr;};
      inline string getResponseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, "") };
      inline Data& setResponseTime(string responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline Data& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> deviceName_ {};
      shared_ptr<string> nonce_ {};
      shared_ptr<string> requestIp_ {};
      shared_ptr<string> responseTime_ {};
      shared_ptr<string> signature_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTokenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTokenResponseBody::Data) };
    inline GetTokenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTokenResponseBody::Data) };
    inline GetTokenResponseBody& setData(const GetTokenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTokenResponseBody& setData(GetTokenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetTokenResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetTokenResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTokenResponseBody::Data> data_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
