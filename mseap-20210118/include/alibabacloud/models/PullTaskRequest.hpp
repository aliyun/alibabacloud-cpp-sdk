// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PULLTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class PullTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunKp, aliyunKp_);
      DARABONBA_PTR_TO_JSON(ApiType, apiType_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OriginalRequest, originalRequest_);
      DARABONBA_PTR_TO_JSON(PrincipalKey, principalKey_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserBid, userBid_);
      DARABONBA_PTR_TO_JSON(UserCallerParentId, userCallerParentId_);
      DARABONBA_PTR_TO_JSON(UserCallerSecurityTransport, userCallerSecurityTransport_);
      DARABONBA_PTR_TO_JSON(UserCallerType, userCallerType_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(UserKp, userKp_);
      DARABONBA_PTR_TO_JSON(UserMfaPresent, userMfaPresent_);
      DARABONBA_PTR_TO_JSON(UserSecurityToken, userSecurityToken_);
    };
    friend void from_json(const Darabonba::Json& j, PullTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunKp, aliyunKp_);
      DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OriginalRequest, originalRequest_);
      DARABONBA_PTR_FROM_JSON(PrincipalKey, principalKey_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserBid, userBid_);
      DARABONBA_PTR_FROM_JSON(UserCallerParentId, userCallerParentId_);
      DARABONBA_PTR_FROM_JSON(UserCallerSecurityTransport, userCallerSecurityTransport_);
      DARABONBA_PTR_FROM_JSON(UserCallerType, userCallerType_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(UserKp, userKp_);
      DARABONBA_PTR_FROM_JSON(UserMfaPresent, userMfaPresent_);
      DARABONBA_PTR_FROM_JSON(UserSecurityToken, userSecurityToken_);
    };
    PullTaskRequest() = default ;
    PullTaskRequest(const PullTaskRequest &) = default ;
    PullTaskRequest(PullTaskRequest &&) = default ;
    PullTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullTaskRequest() = default ;
    PullTaskRequest& operator=(const PullTaskRequest &) = default ;
    PullTaskRequest& operator=(PullTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunKp_ == nullptr
        && return this->apiType_ == nullptr && return this->bid_ == nullptr && return this->bizCode_ == nullptr && return this->lang_ == nullptr && return this->orderId_ == nullptr
        && return this->originalRequest_ == nullptr && return this->principalKey_ == nullptr && return this->taskType_ == nullptr && return this->userAccessKeyId_ == nullptr && return this->userBid_ == nullptr
        && return this->userCallerParentId_ == nullptr && return this->userCallerSecurityTransport_ == nullptr && return this->userCallerType_ == nullptr && return this->userClientIp_ == nullptr && return this->userKp_ == nullptr
        && return this->userMfaPresent_ == nullptr && return this->userSecurityToken_ == nullptr; };
    // aliyunKp Field Functions 
    bool hasAliyunKp() const { return this->aliyunKp_ != nullptr;};
    void deleteAliyunKp() { this->aliyunKp_ = nullptr;};
    inline string aliyunKp() const { DARABONBA_PTR_GET_DEFAULT(aliyunKp_, "") };
    inline PullTaskRequest& setAliyunKp(string aliyunKp) { DARABONBA_PTR_SET_VALUE(aliyunKp_, aliyunKp) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline PullTaskRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline PullTaskRequest& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline PullTaskRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PullTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline PullTaskRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // originalRequest Field Functions 
    bool hasOriginalRequest() const { return this->originalRequest_ != nullptr;};
    void deleteOriginalRequest() { this->originalRequest_ = nullptr;};
    inline string originalRequest() const { DARABONBA_PTR_GET_DEFAULT(originalRequest_, "") };
    inline PullTaskRequest& setOriginalRequest(string originalRequest) { DARABONBA_PTR_SET_VALUE(originalRequest_, originalRequest) };


    // principalKey Field Functions 
    bool hasPrincipalKey() const { return this->principalKey_ != nullptr;};
    void deletePrincipalKey() { this->principalKey_ = nullptr;};
    inline string principalKey() const { DARABONBA_PTR_GET_DEFAULT(principalKey_, "") };
    inline PullTaskRequest& setPrincipalKey(string principalKey) { DARABONBA_PTR_SET_VALUE(principalKey_, principalKey) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline PullTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string userAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline PullTaskRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userBid Field Functions 
    bool hasUserBid() const { return this->userBid_ != nullptr;};
    void deleteUserBid() { this->userBid_ = nullptr;};
    inline string userBid() const { DARABONBA_PTR_GET_DEFAULT(userBid_, "") };
    inline PullTaskRequest& setUserBid(string userBid) { DARABONBA_PTR_SET_VALUE(userBid_, userBid) };


    // userCallerParentId Field Functions 
    bool hasUserCallerParentId() const { return this->userCallerParentId_ != nullptr;};
    void deleteUserCallerParentId() { this->userCallerParentId_ = nullptr;};
    inline int64_t userCallerParentId() const { DARABONBA_PTR_GET_DEFAULT(userCallerParentId_, 0L) };
    inline PullTaskRequest& setUserCallerParentId(int64_t userCallerParentId) { DARABONBA_PTR_SET_VALUE(userCallerParentId_, userCallerParentId) };


    // userCallerSecurityTransport Field Functions 
    bool hasUserCallerSecurityTransport() const { return this->userCallerSecurityTransport_ != nullptr;};
    void deleteUserCallerSecurityTransport() { this->userCallerSecurityTransport_ = nullptr;};
    inline bool userCallerSecurityTransport() const { DARABONBA_PTR_GET_DEFAULT(userCallerSecurityTransport_, false) };
    inline PullTaskRequest& setUserCallerSecurityTransport(bool userCallerSecurityTransport) { DARABONBA_PTR_SET_VALUE(userCallerSecurityTransport_, userCallerSecurityTransport) };


    // userCallerType Field Functions 
    bool hasUserCallerType() const { return this->userCallerType_ != nullptr;};
    void deleteUserCallerType() { this->userCallerType_ = nullptr;};
    inline string userCallerType() const { DARABONBA_PTR_GET_DEFAULT(userCallerType_, "") };
    inline PullTaskRequest& setUserCallerType(string userCallerType) { DARABONBA_PTR_SET_VALUE(userCallerType_, userCallerType) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline PullTaskRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // userKp Field Functions 
    bool hasUserKp() const { return this->userKp_ != nullptr;};
    void deleteUserKp() { this->userKp_ = nullptr;};
    inline string userKp() const { DARABONBA_PTR_GET_DEFAULT(userKp_, "") };
    inline PullTaskRequest& setUserKp(string userKp) { DARABONBA_PTR_SET_VALUE(userKp_, userKp) };


    // userMfaPresent Field Functions 
    bool hasUserMfaPresent() const { return this->userMfaPresent_ != nullptr;};
    void deleteUserMfaPresent() { this->userMfaPresent_ = nullptr;};
    inline bool userMfaPresent() const { DARABONBA_PTR_GET_DEFAULT(userMfaPresent_, false) };
    inline PullTaskRequest& setUserMfaPresent(bool userMfaPresent) { DARABONBA_PTR_SET_VALUE(userMfaPresent_, userMfaPresent) };


    // userSecurityToken Field Functions 
    bool hasUserSecurityToken() const { return this->userSecurityToken_ != nullptr;};
    void deleteUserSecurityToken() { this->userSecurityToken_ = nullptr;};
    inline string userSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(userSecurityToken_, "") };
    inline PullTaskRequest& setUserSecurityToken(string userSecurityToken) { DARABONBA_PTR_SET_VALUE(userSecurityToken_, userSecurityToken) };


  protected:
    // aliyunKp
    std::shared_ptr<string> aliyunKp_ = nullptr;
    // apiType
    std::shared_ptr<string> apiType_ = nullptr;
    // bid
    std::shared_ptr<string> bid_ = nullptr;
    std::shared_ptr<string> bizCode_ = nullptr;
    // lang
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    // originalRequest
    std::shared_ptr<string> originalRequest_ = nullptr;
    std::shared_ptr<string> principalKey_ = nullptr;
    // taskType
    std::shared_ptr<string> taskType_ = nullptr;
    // userAccessKeyId
    std::shared_ptr<string> userAccessKeyId_ = nullptr;
    // userBid
    std::shared_ptr<string> userBid_ = nullptr;
    // userCallerParentId
    std::shared_ptr<int64_t> userCallerParentId_ = nullptr;
    // userCallerSecurityTransport
    std::shared_ptr<bool> userCallerSecurityTransport_ = nullptr;
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
