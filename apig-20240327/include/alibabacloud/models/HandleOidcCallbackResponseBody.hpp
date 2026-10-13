// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLEOIDCCALLBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HANDLEOIDCCALLBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HandleOidcCallbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleOidcCallbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, HandleOidcCallbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    HandleOidcCallbackResponseBody() = default ;
    HandleOidcCallbackResponseBody(const HandleOidcCallbackResponseBody &) = default ;
    HandleOidcCallbackResponseBody(HandleOidcCallbackResponseBody &&) = default ;
    HandleOidcCallbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleOidcCallbackResponseBody() = default ;
    HandleOidcCallbackResponseBody& operator=(const HandleOidcCallbackResponseBody &) = default ;
    HandleOidcCallbackResponseBody& operator=(HandleOidcCallbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
        DARABONBA_PTR_TO_JSON(expiresIn, expiresIn_);
        DARABONBA_PTR_TO_JSON(tokenType, tokenType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
        DARABONBA_PTR_FROM_JSON(expiresIn, expiresIn_);
        DARABONBA_PTR_FROM_JSON(tokenType, tokenType_);
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
      virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->expiresIn_ == nullptr && this->tokenType_ == nullptr; };
      // accessToken Field Functions 
      bool hasAccessToken() const { return this->accessToken_ != nullptr;};
      void deleteAccessToken() { this->accessToken_ = nullptr;};
      inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
      inline Data& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


      // expiresIn Field Functions 
      bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
      void deleteExpiresIn() { this->expiresIn_ = nullptr;};
      inline int64_t getExpiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0L) };
      inline Data& setExpiresIn(int64_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


      // tokenType Field Functions 
      bool hasTokenType() const { return this->tokenType_ != nullptr;};
      void deleteTokenType() { this->tokenType_ = nullptr;};
      inline string getTokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
      inline Data& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


    protected:
      // The access token returned for the current OIDC logon. The API definition marks this field as sensitive.
      shared_ptr<string> accessToken_ {};
      // The validity period value of the access token. The unit is not specified in the API definition.
      shared_ptr<int64_t> expiresIn_ {};
      // The type identifier of the access token. The valid values are not specified in the API definition.
      shared_ptr<string> tokenType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HandleOidcCallbackResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const HandleOidcCallbackResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, HandleOidcCallbackResponseBody::Data) };
    inline HandleOidcCallbackResponseBody::Data getData() { DARABONBA_PTR_GET(data_, HandleOidcCallbackResponseBody::Data) };
    inline HandleOidcCallbackResponseBody& setData(const HandleOidcCallbackResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline HandleOidcCallbackResponseBody& setData(HandleOidcCallbackResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HandleOidcCallbackResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HandleOidcCallbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<HandleOidcCallbackResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
