// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NlsCloudMeta20180518
{
namespace Models
{
  class CreateTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(NlsRequestId, nlsRequestId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(NlsRequestId, nlsRequestId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    CreateTokenResponseBody() = default ;
    CreateTokenResponseBody(const CreateTokenResponseBody &) = default ;
    CreateTokenResponseBody(CreateTokenResponseBody &&) = default ;
    CreateTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenResponseBody() = default ;
    CreateTokenResponseBody& operator=(const CreateTokenResponseBody &) = default ;
    CreateTokenResponseBody& operator=(CreateTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Token : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Token& obj) { 
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Token& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Token() = default ;
      Token(const Token &) = default ;
      Token(Token &&) = default ;
      Token(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Token() = default ;
      Token& operator=(const Token &) = default ;
      Token& operator=(Token &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->id_ == nullptr && this->userId_ == nullptr; };
      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Token& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Token& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Token& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMsg_ == nullptr && this->nlsRequestId_ == nullptr && this->requestId_ == nullptr && this->token_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline int32_t getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, 0) };
    inline CreateTokenResponseBody& setErrCode(int32_t errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline CreateTokenResponseBody& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // nlsRequestId Field Functions 
    bool hasNlsRequestId() const { return this->nlsRequestId_ != nullptr;};
    void deleteNlsRequestId() { this->nlsRequestId_ = nullptr;};
    inline string getNlsRequestId() const { DARABONBA_PTR_GET_DEFAULT(nlsRequestId_, "") };
    inline CreateTokenResponseBody& setNlsRequestId(string nlsRequestId) { DARABONBA_PTR_SET_VALUE(nlsRequestId_, nlsRequestId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline const CreateTokenResponseBody::Token & getToken() const { DARABONBA_PTR_GET_CONST(token_, CreateTokenResponseBody::Token) };
    inline CreateTokenResponseBody::Token getToken() { DARABONBA_PTR_GET(token_, CreateTokenResponseBody::Token) };
    inline CreateTokenResponseBody& setToken(const CreateTokenResponseBody::Token & token) { DARABONBA_PTR_SET_VALUE(token_, token) };
    inline CreateTokenResponseBody& setToken(CreateTokenResponseBody::Token && token) { DARABONBA_PTR_SET_RVALUE(token_, token) };


  protected:
    shared_ptr<int32_t> errCode_ {};
    shared_ptr<string> errMsg_ {};
    shared_ptr<string> nlsRequestId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateTokenResponseBody::Token> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NlsCloudMeta20180518
#endif
