// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRUNNINGINSTANCERESPONSEBODYDATACHANNEL_HPP_
#define ALIBABACLOUD_MODELS_QUERYRUNNINGINSTANCERESPONSEBODYDATACHANNEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryRunningInstanceResponseBodyDataChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRunningInstanceResponseBodyDataChannel& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(Gslb, gslb_);
      DARABONBA_PTR_TO_JSON(Nonce, nonce_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserInfoInChannel, userInfoInChannel_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRunningInstanceResponseBodyDataChannel& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(Gslb, gslb_);
      DARABONBA_PTR_FROM_JSON(Nonce, nonce_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserInfoInChannel, userInfoInChannel_);
    };
    QueryRunningInstanceResponseBodyDataChannel() = default ;
    QueryRunningInstanceResponseBodyDataChannel(const QueryRunningInstanceResponseBodyDataChannel &) = default ;
    QueryRunningInstanceResponseBodyDataChannel(QueryRunningInstanceResponseBodyDataChannel &&) = default ;
    QueryRunningInstanceResponseBodyDataChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRunningInstanceResponseBodyDataChannel() = default ;
    QueryRunningInstanceResponseBodyDataChannel& operator=(const QueryRunningInstanceResponseBodyDataChannel &) = default ;
    QueryRunningInstanceResponseBodyDataChannel& operator=(QueryRunningInstanceResponseBodyDataChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->channelId_ != nullptr && this->expiredTime_ != nullptr && this->gslb_ != nullptr && this->nonce_ != nullptr && this->token_ != nullptr
        && this->type_ != nullptr && this->userId_ != nullptr && this->userInfoInChannel_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryRunningInstanceResponseBodyDataChannel& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline QueryRunningInstanceResponseBodyDataChannel& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline QueryRunningInstanceResponseBodyDataChannel& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // gslb Field Functions 
    bool hasGslb() const { return this->gslb_ != nullptr;};
    void deleteGslb() { this->gslb_ = nullptr;};
    inline const vector<string> & gslb() const { DARABONBA_PTR_GET_CONST(gslb_, vector<string>) };
    inline vector<string> gslb() { DARABONBA_PTR_GET(gslb_, vector<string>) };
    inline QueryRunningInstanceResponseBodyDataChannel& setGslb(const vector<string> & gslb) { DARABONBA_PTR_SET_VALUE(gslb_, gslb) };
    inline QueryRunningInstanceResponseBodyDataChannel& setGslb(vector<string> && gslb) { DARABONBA_PTR_SET_RVALUE(gslb_, gslb) };


    // nonce Field Functions 
    bool hasNonce() const { return this->nonce_ != nullptr;};
    void deleteNonce() { this->nonce_ = nullptr;};
    inline string nonce() const { DARABONBA_PTR_GET_DEFAULT(nonce_, "") };
    inline QueryRunningInstanceResponseBodyDataChannel& setNonce(string nonce) { DARABONBA_PTR_SET_VALUE(nonce_, nonce) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline QueryRunningInstanceResponseBodyDataChannel& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryRunningInstanceResponseBodyDataChannel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryRunningInstanceResponseBodyDataChannel& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userInfoInChannel Field Functions 
    bool hasUserInfoInChannel() const { return this->userInfoInChannel_ != nullptr;};
    void deleteUserInfoInChannel() { this->userInfoInChannel_ = nullptr;};
    inline string userInfoInChannel() const { DARABONBA_PTR_GET_DEFAULT(userInfoInChannel_, "") };
    inline QueryRunningInstanceResponseBodyDataChannel& setUserInfoInChannel(string userInfoInChannel) { DARABONBA_PTR_SET_VALUE(userInfoInChannel_, userInfoInChannel) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<vector<string>> gslb_ = nullptr;
    std::shared_ptr<string> nonce_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userInfoInChannel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
