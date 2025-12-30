// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYWSTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYWSTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ApplyWsTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyWsTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyWsTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ApplyWsTokenResponseBody() = default ;
    ApplyWsTokenResponseBody(const ApplyWsTokenResponseBody &) = default ;
    ApplyWsTokenResponseBody(ApplyWsTokenResponseBody &&) = default ;
    ApplyWsTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyWsTokenResponseBody() = default ;
    ApplyWsTokenResponseBody& operator=(const ApplyWsTokenResponseBody &) = default ;
    ApplyWsTokenResponseBody& operator=(ApplyWsTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(WsEndpoint, wsEndpoint_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(WsEndpoint, wsEndpoint_);
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
      virtual bool empty() const override { return this->sessionId_ == nullptr
        && this->token_ == nullptr && this->wsEndpoint_ == nullptr; };
      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Data& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // wsEndpoint Field Functions 
      bool hasWsEndpoint() const { return this->wsEndpoint_ != nullptr;};
      void deleteWsEndpoint() { this->wsEndpoint_ = nullptr;};
      inline string getWsEndpoint() const { DARABONBA_PTR_GET_DEFAULT(wsEndpoint_, "") };
      inline Data& setWsEndpoint(string wsEndpoint) { DARABONBA_PTR_SET_VALUE(wsEndpoint_, wsEndpoint) };


    protected:
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> token_ {};
      shared_ptr<string> wsEndpoint_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ApplyWsTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ApplyWsTokenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ApplyWsTokenResponseBody::Data) };
    inline ApplyWsTokenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ApplyWsTokenResponseBody::Data) };
    inline ApplyWsTokenResponseBody& setData(const ApplyWsTokenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ApplyWsTokenResponseBody& setData(ApplyWsTokenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ApplyWsTokenResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyWsTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ApplyWsTokenResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
