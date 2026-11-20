// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class SequenceCalls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SequenceCalls& obj) { 
        DARABONBA_PTR_TO_JSON(SequenceCallNoPlayCode, sequenceCallNoPlayCode_);
        DARABONBA_PTR_TO_JSON(SequenceCalledNo, sequenceCalledNo_);
        DARABONBA_PTR_TO_JSON(SequenceCalledPlayCode, sequenceCalledPlayCode_);
      };
      friend void from_json(const Darabonba::Json& j, SequenceCalls& obj) { 
        DARABONBA_PTR_FROM_JSON(SequenceCallNoPlayCode, sequenceCallNoPlayCode_);
        DARABONBA_PTR_FROM_JSON(SequenceCalledNo, sequenceCalledNo_);
        DARABONBA_PTR_FROM_JSON(SequenceCalledPlayCode, sequenceCalledPlayCode_);
      };
      SequenceCalls() = default ;
      SequenceCalls(const SequenceCalls &) = default ;
      SequenceCalls(SequenceCalls &&) = default ;
      SequenceCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SequenceCalls() = default ;
      SequenceCalls& operator=(const SequenceCalls &) = default ;
      SequenceCalls& operator=(SequenceCalls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sequenceCallNoPlayCode_ == nullptr
        && this->sequenceCalledNo_ == nullptr && this->sequenceCalledPlayCode_ == nullptr; };
      // sequenceCallNoPlayCode Field Functions 
      bool hasSequenceCallNoPlayCode() const { return this->sequenceCallNoPlayCode_ != nullptr;};
      void deleteSequenceCallNoPlayCode() { this->sequenceCallNoPlayCode_ = nullptr;};
      inline string getSequenceCallNoPlayCode() const { DARABONBA_PTR_GET_DEFAULT(sequenceCallNoPlayCode_, "") };
      inline SequenceCalls& setSequenceCallNoPlayCode(string sequenceCallNoPlayCode) { DARABONBA_PTR_SET_VALUE(sequenceCallNoPlayCode_, sequenceCallNoPlayCode) };


      // sequenceCalledNo Field Functions 
      bool hasSequenceCalledNo() const { return this->sequenceCalledNo_ != nullptr;};
      void deleteSequenceCalledNo() { this->sequenceCalledNo_ = nullptr;};
      inline string getSequenceCalledNo() const { DARABONBA_PTR_GET_DEFAULT(sequenceCalledNo_, "") };
      inline SequenceCalls& setSequenceCalledNo(string sequenceCalledNo) { DARABONBA_PTR_SET_VALUE(sequenceCalledNo_, sequenceCalledNo) };


      // sequenceCalledPlayCode Field Functions 
      bool hasSequenceCalledPlayCode() const { return this->sequenceCalledPlayCode_ != nullptr;};
      void deleteSequenceCalledPlayCode() { this->sequenceCalledPlayCode_ = nullptr;};
      inline string getSequenceCalledPlayCode() const { DARABONBA_PTR_GET_DEFAULT(sequenceCalledPlayCode_, "") };
      inline SequenceCalls& setSequenceCalledPlayCode(string sequenceCalledPlayCode) { DARABONBA_PTR_SET_VALUE(sequenceCalledPlayCode_, sequenceCalledPlayCode) };


    protected:
      // The playback code for the sequential ringing prompt tone. The format is the same as callNoPlayCode.
      shared_ptr<string> sequenceCallNoPlayCode_ {};
      // The callee number for sequential ringing.
      shared_ptr<string> sequenceCalledNo_ {};
      // The playback code for the caller and callee after the call is connected. The format is the same as calledPlayCode.
      shared_ptr<string> sequenceCalledPlayCode_ {};
    };

    virtual bool empty() const override { return this->callAbility_ == nullptr
        && this->callerParentId_ == nullptr && this->customerPoolKey_ == nullptr && this->GNFlag_ == nullptr && this->ownerId_ == nullptr && this->reqId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sequenceCalls_ == nullptr && this->sequenceMode_ == nullptr && this->smsAbility_ == nullptr
        && this->smsSignMode_ == nullptr && this->telX_ == nullptr; };
    // callAbility Field Functions 
    bool hasCallAbility() const { return this->callAbility_ != nullptr;};
    void deleteCallAbility() { this->callAbility_ = nullptr;};
    inline string getCallAbility() const { DARABONBA_PTR_GET_DEFAULT(callAbility_, "") };
    inline ConfigXRequest& setCallAbility(string callAbility) { DARABONBA_PTR_SET_VALUE(callAbility_, callAbility) };


    // callerParentId Field Functions 
    bool hasCallerParentId() const { return this->callerParentId_ != nullptr;};
    void deleteCallerParentId() { this->callerParentId_ = nullptr;};
    inline int64_t getCallerParentId() const { DARABONBA_PTR_GET_DEFAULT(callerParentId_, 0L) };
    inline ConfigXRequest& setCallerParentId(int64_t callerParentId) { DARABONBA_PTR_SET_VALUE(callerParentId_, callerParentId) };


    // customerPoolKey Field Functions 
    bool hasCustomerPoolKey() const { return this->customerPoolKey_ != nullptr;};
    void deleteCustomerPoolKey() { this->customerPoolKey_ = nullptr;};
    inline string getCustomerPoolKey() const { DARABONBA_PTR_GET_DEFAULT(customerPoolKey_, "") };
    inline ConfigXRequest& setCustomerPoolKey(string customerPoolKey) { DARABONBA_PTR_SET_VALUE(customerPoolKey_, customerPoolKey) };


    // GNFlag Field Functions 
    bool hasGNFlag() const { return this->GNFlag_ != nullptr;};
    void deleteGNFlag() { this->GNFlag_ = nullptr;};
    inline string getGNFlag() const { DARABONBA_PTR_GET_DEFAULT(GNFlag_, "") };
    inline ConfigXRequest& setGNFlag(string GNFlag) { DARABONBA_PTR_SET_VALUE(GNFlag_, GNFlag) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ConfigXRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline ConfigXRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ConfigXRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ConfigXRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sequenceCalls Field Functions 
    bool hasSequenceCalls() const { return this->sequenceCalls_ != nullptr;};
    void deleteSequenceCalls() { this->sequenceCalls_ = nullptr;};
    inline const vector<ConfigXRequest::SequenceCalls> & getSequenceCalls() const { DARABONBA_PTR_GET_CONST(sequenceCalls_, vector<ConfigXRequest::SequenceCalls>) };
    inline vector<ConfigXRequest::SequenceCalls> getSequenceCalls() { DARABONBA_PTR_GET(sequenceCalls_, vector<ConfigXRequest::SequenceCalls>) };
    inline ConfigXRequest& setSequenceCalls(const vector<ConfigXRequest::SequenceCalls> & sequenceCalls) { DARABONBA_PTR_SET_VALUE(sequenceCalls_, sequenceCalls) };
    inline ConfigXRequest& setSequenceCalls(vector<ConfigXRequest::SequenceCalls> && sequenceCalls) { DARABONBA_PTR_SET_RVALUE(sequenceCalls_, sequenceCalls) };


    // sequenceMode Field Functions 
    bool hasSequenceMode() const { return this->sequenceMode_ != nullptr;};
    void deleteSequenceMode() { this->sequenceMode_ = nullptr;};
    inline string getSequenceMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceMode_, "") };
    inline ConfigXRequest& setSequenceMode(string sequenceMode) { DARABONBA_PTR_SET_VALUE(sequenceMode_, sequenceMode) };


    // smsAbility Field Functions 
    bool hasSmsAbility() const { return this->smsAbility_ != nullptr;};
    void deleteSmsAbility() { this->smsAbility_ = nullptr;};
    inline string getSmsAbility() const { DARABONBA_PTR_GET_DEFAULT(smsAbility_, "") };
    inline ConfigXRequest& setSmsAbility(string smsAbility) { DARABONBA_PTR_SET_VALUE(smsAbility_, smsAbility) };


    // smsSignMode Field Functions 
    bool hasSmsSignMode() const { return this->smsSignMode_ != nullptr;};
    void deleteSmsSignMode() { this->smsSignMode_ = nullptr;};
    inline string getSmsSignMode() const { DARABONBA_PTR_GET_DEFAULT(smsSignMode_, "") };
    inline ConfigXRequest& setSmsSignMode(string smsSignMode) { DARABONBA_PTR_SET_VALUE(smsSignMode_, smsSignMode) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline ConfigXRequest& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


  protected:
    // Specifies whether to enable the call capability. Valid values:
    // 
    // - 0: Disable.
    // 
    // - 1: Enable.
    shared_ptr<string> callAbility_ {};
    // The customer UID.
    shared_ptr<int64_t> callerParentId_ {};
    // The key of the number pool.
    // 
    // This parameter is required.
    shared_ptr<string> customerPoolKey_ {};
    // Specifies whether to pass through the caller ID to display the actual caller. Valid values:
    // 
    // - 00: No pass-through. The work number is displayed when either party calls the other.
    // 
    // - 10: Pass-through. When Customer A is the caller, the caller ID displayed to Employee B is the number of Customer A. When Employee B is the caller, the caller ID displayed to Customer A is the work number.
    // 
    // Default value: 00.
    shared_ptr<string> GNFlag_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The request deduplication ID. The maximum length of reqId is 20 characters. The caller must ensure atomicity.
    // 
    // This parameter is required.
    shared_ptr<string> reqId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The sequential ringing control parameters.
    shared_ptr<vector<ConfigXRequest::SequenceCalls>> sequenceCalls_ {};
    // The sequential ringing mode. Valid values:
    // 
    // - 0: No sequential ringing. This is the default value.
    // 
    // - 1: Conditional sequential ringing. The system first connects to the callee specified by calledNo. If the callee cannot be connected, the system sequentially rings the numbers in the sequenceCalls list.
    // 
    // - 2: Unconditional sequential ringing. The system does not connect to the callee specified by calledNo and directly sequentially rings the numbers in the sequenceCalls list.
    shared_ptr<string> sequenceMode_ {};
    // Specifies whether to enable the SMS feature. Valid values:
    // 
    // - 0: Disable.
    // 
    // - 1: Enable.
    shared_ptr<string> smsAbility_ {};
    // Specifies whether to pass through the SMS signature to display the actual user. Valid values:
    // 
    // - 0: No pass-through.
    // 
    // - 1: Pass-through.
    // 
    // Default value: 0.
    shared_ptr<string> smsSignMode_ {};
    // The X number.
    // 
    // This parameter is required.
    shared_ptr<string> telX_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
