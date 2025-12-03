// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETREDISVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETREDISVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class SetRedisValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRedisValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunKp, aliyunKp_);
      DARABONBA_PTR_TO_JSON(ApiType, apiType_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OriginalRequest, originalRequest_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserBid, userBid_);
      DARABONBA_PTR_TO_JSON(UserCallerParentId, userCallerParentId_);
      DARABONBA_PTR_TO_JSON(UserCallerType, userCallerType_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(UserKp, userKp_);
      DARABONBA_PTR_TO_JSON(UserMfaPresent, userMfaPresent_);
      DARABONBA_PTR_TO_JSON(UserSecurityToken, userSecurityToken_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SetRedisValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunKp, aliyunKp_);
      DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OriginalRequest, originalRequest_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserBid, userBid_);
      DARABONBA_PTR_FROM_JSON(UserCallerParentId, userCallerParentId_);
      DARABONBA_PTR_FROM_JSON(UserCallerType, userCallerType_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(UserKp, userKp_);
      DARABONBA_PTR_FROM_JSON(UserMfaPresent, userMfaPresent_);
      DARABONBA_PTR_FROM_JSON(UserSecurityToken, userSecurityToken_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SetRedisValueRequest() = default ;
    SetRedisValueRequest(const SetRedisValueRequest &) = default ;
    SetRedisValueRequest(SetRedisValueRequest &&) = default ;
    SetRedisValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRedisValueRequest() = default ;
    SetRedisValueRequest& operator=(const SetRedisValueRequest &) = default ;
    SetRedisValueRequest& operator=(SetRedisValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunKp_ == nullptr
        && return this->apiType_ == nullptr && return this->bid_ == nullptr && return this->key_ == nullptr && return this->lang_ == nullptr && return this->originalRequest_ == nullptr
        && return this->requestId_ == nullptr && return this->timeout_ == nullptr && return this->userAccessKeyId_ == nullptr && return this->userBid_ == nullptr && return this->userCallerParentId_ == nullptr
        && return this->userCallerType_ == nullptr && return this->userClientIp_ == nullptr && return this->userKp_ == nullptr && return this->userMfaPresent_ == nullptr && return this->userSecurityToken_ == nullptr
        && return this->value_ == nullptr; };
    // aliyunKp Field Functions 
    bool hasAliyunKp() const { return this->aliyunKp_ != nullptr;};
    void deleteAliyunKp() { this->aliyunKp_ = nullptr;};
    inline string aliyunKp() const { DARABONBA_PTR_GET_DEFAULT(aliyunKp_, "") };
    inline SetRedisValueRequest& setAliyunKp(string aliyunKp) { DARABONBA_PTR_SET_VALUE(aliyunKp_, aliyunKp) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline SetRedisValueRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline SetRedisValueRequest& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SetRedisValueRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetRedisValueRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // originalRequest Field Functions 
    bool hasOriginalRequest() const { return this->originalRequest_ != nullptr;};
    void deleteOriginalRequest() { this->originalRequest_ = nullptr;};
    inline string originalRequest() const { DARABONBA_PTR_GET_DEFAULT(originalRequest_, "") };
    inline SetRedisValueRequest& setOriginalRequest(string originalRequest) { DARABONBA_PTR_SET_VALUE(originalRequest_, originalRequest) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetRedisValueRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline SetRedisValueRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string userAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline SetRedisValueRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userBid Field Functions 
    bool hasUserBid() const { return this->userBid_ != nullptr;};
    void deleteUserBid() { this->userBid_ = nullptr;};
    inline string userBid() const { DARABONBA_PTR_GET_DEFAULT(userBid_, "") };
    inline SetRedisValueRequest& setUserBid(string userBid) { DARABONBA_PTR_SET_VALUE(userBid_, userBid) };


    // userCallerParentId Field Functions 
    bool hasUserCallerParentId() const { return this->userCallerParentId_ != nullptr;};
    void deleteUserCallerParentId() { this->userCallerParentId_ = nullptr;};
    inline int64_t userCallerParentId() const { DARABONBA_PTR_GET_DEFAULT(userCallerParentId_, 0L) };
    inline SetRedisValueRequest& setUserCallerParentId(int64_t userCallerParentId) { DARABONBA_PTR_SET_VALUE(userCallerParentId_, userCallerParentId) };


    // userCallerType Field Functions 
    bool hasUserCallerType() const { return this->userCallerType_ != nullptr;};
    void deleteUserCallerType() { this->userCallerType_ = nullptr;};
    inline string userCallerType() const { DARABONBA_PTR_GET_DEFAULT(userCallerType_, "") };
    inline SetRedisValueRequest& setUserCallerType(string userCallerType) { DARABONBA_PTR_SET_VALUE(userCallerType_, userCallerType) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SetRedisValueRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // userKp Field Functions 
    bool hasUserKp() const { return this->userKp_ != nullptr;};
    void deleteUserKp() { this->userKp_ = nullptr;};
    inline string userKp() const { DARABONBA_PTR_GET_DEFAULT(userKp_, "") };
    inline SetRedisValueRequest& setUserKp(string userKp) { DARABONBA_PTR_SET_VALUE(userKp_, userKp) };


    // userMfaPresent Field Functions 
    bool hasUserMfaPresent() const { return this->userMfaPresent_ != nullptr;};
    void deleteUserMfaPresent() { this->userMfaPresent_ = nullptr;};
    inline bool userMfaPresent() const { DARABONBA_PTR_GET_DEFAULT(userMfaPresent_, false) };
    inline SetRedisValueRequest& setUserMfaPresent(bool userMfaPresent) { DARABONBA_PTR_SET_VALUE(userMfaPresent_, userMfaPresent) };


    // userSecurityToken Field Functions 
    bool hasUserSecurityToken() const { return this->userSecurityToken_ != nullptr;};
    void deleteUserSecurityToken() { this->userSecurityToken_ = nullptr;};
    inline string userSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(userSecurityToken_, "") };
    inline SetRedisValueRequest& setUserSecurityToken(string userSecurityToken) { DARABONBA_PTR_SET_VALUE(userSecurityToken_, userSecurityToken) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SetRedisValueRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // aliyunKp
    std::shared_ptr<string> aliyunKp_ = nullptr;
    // apiType
    std::shared_ptr<string> apiType_ = nullptr;
    // bid
    std::shared_ptr<string> bid_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    // lang
    std::shared_ptr<string> lang_ = nullptr;
    // originalRequest
    std::shared_ptr<string> originalRequest_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    // timeout
    std::shared_ptr<int64_t> timeout_ = nullptr;
    // userAccessKeyId
    std::shared_ptr<string> userAccessKeyId_ = nullptr;
    // userBid
    std::shared_ptr<string> userBid_ = nullptr;
    // userCallerParentId
    std::shared_ptr<int64_t> userCallerParentId_ = nullptr;
    // userCallerType
    std::shared_ptr<string> userCallerType_ = nullptr;
    // userClientIp
    std::shared_ptr<string> userClientIp_ = nullptr;
    // userKp
    std::shared_ptr<string> userKp_ = nullptr;
    // userMfaPresent
    std::shared_ptr<bool> userMfaPresent_ = nullptr;
    // userSecurityToken
    std::shared_ptr<string> userSecurityToken_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
