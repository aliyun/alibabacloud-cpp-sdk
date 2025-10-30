// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConfigXRequestSequenceCalls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class ConfigXRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigXRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallAbility, callAbility_);
      DARABONBA_PTR_TO_JSON(CallerParentId, callerParentId_);
      DARABONBA_PTR_TO_JSON(CustomerPoolKey, customerPoolKey_);
      DARABONBA_PTR_TO_JSON(GNFlag, GNFlag_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SequenceCalls, sequenceCalls_);
      DARABONBA_PTR_TO_JSON(SequenceMode, sequenceMode_);
      DARABONBA_PTR_TO_JSON(SmsAbility, smsAbility_);
      DARABONBA_PTR_TO_JSON(SmsSignMode, smsSignMode_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigXRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallAbility, callAbility_);
      DARABONBA_PTR_FROM_JSON(CallerParentId, callerParentId_);
      DARABONBA_PTR_FROM_JSON(CustomerPoolKey, customerPoolKey_);
      DARABONBA_PTR_FROM_JSON(GNFlag, GNFlag_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SequenceCalls, sequenceCalls_);
      DARABONBA_PTR_FROM_JSON(SequenceMode, sequenceMode_);
      DARABONBA_PTR_FROM_JSON(SmsAbility, smsAbility_);
      DARABONBA_PTR_FROM_JSON(SmsSignMode, smsSignMode_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
    };
    ConfigXRequest() = default ;
    ConfigXRequest(const ConfigXRequest &) = default ;
    ConfigXRequest(ConfigXRequest &&) = default ;
    ConfigXRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigXRequest() = default ;
    ConfigXRequest& operator=(const ConfigXRequest &) = default ;
    ConfigXRequest& operator=(ConfigXRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callAbility_ == nullptr
        && return this->callerParentId_ == nullptr && return this->customerPoolKey_ == nullptr && return this->GNFlag_ == nullptr && return this->ownerId_ == nullptr && return this->reqId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sequenceCalls_ == nullptr && return this->sequenceMode_ == nullptr && return this->smsAbility_ == nullptr
        && return this->smsSignMode_ == nullptr && return this->telX_ == nullptr; };
    // callAbility Field Functions 
    bool hasCallAbility() const { return this->callAbility_ != nullptr;};
    void deleteCallAbility() { this->callAbility_ = nullptr;};
    inline string callAbility() const { DARABONBA_PTR_GET_DEFAULT(callAbility_, "") };
    inline ConfigXRequest& setCallAbility(string callAbility) { DARABONBA_PTR_SET_VALUE(callAbility_, callAbility) };


    // callerParentId Field Functions 
    bool hasCallerParentId() const { return this->callerParentId_ != nullptr;};
    void deleteCallerParentId() { this->callerParentId_ = nullptr;};
    inline int64_t callerParentId() const { DARABONBA_PTR_GET_DEFAULT(callerParentId_, 0L) };
    inline ConfigXRequest& setCallerParentId(int64_t callerParentId) { DARABONBA_PTR_SET_VALUE(callerParentId_, callerParentId) };


    // customerPoolKey Field Functions 
    bool hasCustomerPoolKey() const { return this->customerPoolKey_ != nullptr;};
    void deleteCustomerPoolKey() { this->customerPoolKey_ = nullptr;};
    inline string customerPoolKey() const { DARABONBA_PTR_GET_DEFAULT(customerPoolKey_, "") };
    inline ConfigXRequest& setCustomerPoolKey(string customerPoolKey) { DARABONBA_PTR_SET_VALUE(customerPoolKey_, customerPoolKey) };


    // GNFlag Field Functions 
    bool hasGNFlag() const { return this->GNFlag_ != nullptr;};
    void deleteGNFlag() { this->GNFlag_ = nullptr;};
    inline string GNFlag() const { DARABONBA_PTR_GET_DEFAULT(GNFlag_, "") };
    inline ConfigXRequest& setGNFlag(string GNFlag) { DARABONBA_PTR_SET_VALUE(GNFlag_, GNFlag) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ConfigXRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string reqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline ConfigXRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ConfigXRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ConfigXRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sequenceCalls Field Functions 
    bool hasSequenceCalls() const { return this->sequenceCalls_ != nullptr;};
    void deleteSequenceCalls() { this->sequenceCalls_ = nullptr;};
    inline const vector<ConfigXRequestSequenceCalls> & sequenceCalls() const { DARABONBA_PTR_GET_CONST(sequenceCalls_, vector<ConfigXRequestSequenceCalls>) };
    inline vector<ConfigXRequestSequenceCalls> sequenceCalls() { DARABONBA_PTR_GET(sequenceCalls_, vector<ConfigXRequestSequenceCalls>) };
    inline ConfigXRequest& setSequenceCalls(const vector<ConfigXRequestSequenceCalls> & sequenceCalls) { DARABONBA_PTR_SET_VALUE(sequenceCalls_, sequenceCalls) };
    inline ConfigXRequest& setSequenceCalls(vector<ConfigXRequestSequenceCalls> && sequenceCalls) { DARABONBA_PTR_SET_RVALUE(sequenceCalls_, sequenceCalls) };


    // sequenceMode Field Functions 
    bool hasSequenceMode() const { return this->sequenceMode_ != nullptr;};
    void deleteSequenceMode() { this->sequenceMode_ = nullptr;};
    inline string sequenceMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceMode_, "") };
    inline ConfigXRequest& setSequenceMode(string sequenceMode) { DARABONBA_PTR_SET_VALUE(sequenceMode_, sequenceMode) };


    // smsAbility Field Functions 
    bool hasSmsAbility() const { return this->smsAbility_ != nullptr;};
    void deleteSmsAbility() { this->smsAbility_ = nullptr;};
    inline string smsAbility() const { DARABONBA_PTR_GET_DEFAULT(smsAbility_, "") };
    inline ConfigXRequest& setSmsAbility(string smsAbility) { DARABONBA_PTR_SET_VALUE(smsAbility_, smsAbility) };


    // smsSignMode Field Functions 
    bool hasSmsSignMode() const { return this->smsSignMode_ != nullptr;};
    void deleteSmsSignMode() { this->smsSignMode_ = nullptr;};
    inline string smsSignMode() const { DARABONBA_PTR_GET_DEFAULT(smsSignMode_, "") };
    inline ConfigXRequest& setSmsSignMode(string smsSignMode) { DARABONBA_PTR_SET_VALUE(smsSignMode_, smsSignMode) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string telX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline ConfigXRequest& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


  protected:
    // 开/关呼叫能力状态‘0’：禁用‘1’：开启
    std::shared_ptr<string> callAbility_ = nullptr;
    // 客户uid
    std::shared_ptr<int64_t> callerParentId_ = nullptr;
    // 号码池key
    // 
    // This parameter is required.
    std::shared_ptr<string> customerPoolKey_ = nullptr;
    // 是否透传来显为真实主叫：00-非透传：互相拨打时都显示工作号;10-透传：A客户为主叫时,B员工的来显为客户A号码;B员工为主叫时,A客户的来显为工作号;默认为 00
    std::shared_ptr<string> GNFlag_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // 请求去重ID, reqId最大长度为20位,接入方需要保持原子性
    // 
    // This parameter is required.
    std::shared_ptr<string> reqId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // 顺振控制参数
    std::shared_ptr<vector<ConfigXRequestSequenceCalls>> sequenceCalls_ = nullptr;
    // 顺振模式：0-不顺振（默认）1-有条件顺振，先接续calledNo指定被叫，如果该被叫未能接通，再顺振sequenceCalls号码列表2-无条件顺振，不接续calledNo指定被叫，直接顺振sequenceCalls号码列表
    std::shared_ptr<string> sequenceMode_ = nullptr;
    // 开/关短信功能状态‘0’：禁用；‘1’：开启；
    std::shared_ptr<string> smsAbility_ = nullptr;
    // 是否透传来显为真实用户0：不透传; 1：透传默认：0不透传
    std::shared_ptr<string> smsSignMode_ = nullptr;
    // X号码
    // 
    // This parameter is required.
    std::shared_ptr<string> telX_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
