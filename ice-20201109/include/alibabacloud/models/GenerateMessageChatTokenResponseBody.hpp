// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEMESSAGECHATTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEMESSAGECHATTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GenerateMessageChatTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateMessageChatTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppSign, appSign_);
      DARABONBA_PTR_TO_JSON(Nonce, nonce_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateMessageChatTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppSign, appSign_);
      DARABONBA_PTR_FROM_JSON(Nonce, nonce_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GenerateMessageChatTokenResponseBody() = default ;
    GenerateMessageChatTokenResponseBody(const GenerateMessageChatTokenResponseBody &) = default ;
    GenerateMessageChatTokenResponseBody(GenerateMessageChatTokenResponseBody &&) = default ;
    GenerateMessageChatTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateMessageChatTokenResponseBody() = default ;
    GenerateMessageChatTokenResponseBody& operator=(const GenerateMessageChatTokenResponseBody &) = default ;
    GenerateMessageChatTokenResponseBody& operator=(GenerateMessageChatTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appSign_ == nullptr && return this->nonce_ == nullptr && return this->requestId_ == nullptr && return this->role_ == nullptr && return this->timeStamp_ == nullptr
        && return this->token_ == nullptr && return this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GenerateMessageChatTokenResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appSign Field Functions 
    bool hasAppSign() const { return this->appSign_ != nullptr;};
    void deleteAppSign() { this->appSign_ = nullptr;};
    inline string appSign() const { DARABONBA_PTR_GET_DEFAULT(appSign_, "") };
    inline GenerateMessageChatTokenResponseBody& setAppSign(string appSign) { DARABONBA_PTR_SET_VALUE(appSign_, appSign) };


    // nonce Field Functions 
    bool hasNonce() const { return this->nonce_ != nullptr;};
    void deleteNonce() { this->nonce_ = nullptr;};
    inline string nonce() const { DARABONBA_PTR_GET_DEFAULT(nonce_, "") };
    inline GenerateMessageChatTokenResponseBody& setNonce(string nonce) { DARABONBA_PTR_SET_VALUE(nonce_, nonce) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateMessageChatTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GenerateMessageChatTokenResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline int64_t timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
    inline GenerateMessageChatTokenResponseBody& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GenerateMessageChatTokenResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GenerateMessageChatTokenResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The AppID of the user.
    std::shared_ptr<string> appId_ = nullptr;
    // The application signature.
    std::shared_ptr<string> appSign_ = nullptr;
    // The nonce used to generate the token.
    std::shared_ptr<string> nonce_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The role used to generate the token.
    std::shared_ptr<string> role_ = nullptr;
    // The expiration time. Unit: seconds. Expiration time = Current time + Validity period.
    std::shared_ptr<int64_t> timeStamp_ = nullptr;
    // The generated token.
    std::shared_ptr<string> token_ = nullptr;
    // The ID of the user for joining the channel.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
