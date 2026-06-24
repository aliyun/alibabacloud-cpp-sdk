// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAAGENTBILLINGINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DATAAGENTBILLINGINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DataAgentBillingInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataAgentBillingInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AgentSeats, agentSeats_);
      DARABONBA_PTR_TO_JSON(BillingInstanceId, billingInstanceId_);
      DARABONBA_PTR_TO_JSON(BoundWorkspaceIds, boundWorkspaceIds_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(FreeAgentSeats, freeAgentSeats_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(LLM, LLM_);
      DARABONBA_PTR_TO_JSON(PayLevel, payLevel_);
      DARABONBA_PTR_TO_JSON(SessionAvailableDurationQuota, sessionAvailableDurationQuota_);
      DARABONBA_PTR_TO_JSON(SessionSeats, sessionSeats_);
      DARABONBA_PTR_TO_JSON(TokenLimit, tokenLimit_);
    };
    friend void from_json(const Darabonba::Json& j, DataAgentBillingInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentSeats, agentSeats_);
      DARABONBA_PTR_FROM_JSON(BillingInstanceId, billingInstanceId_);
      DARABONBA_PTR_FROM_JSON(BoundWorkspaceIds, boundWorkspaceIds_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(FreeAgentSeats, freeAgentSeats_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(LLM, LLM_);
      DARABONBA_PTR_FROM_JSON(PayLevel, payLevel_);
      DARABONBA_PTR_FROM_JSON(SessionAvailableDurationQuota, sessionAvailableDurationQuota_);
      DARABONBA_PTR_FROM_JSON(SessionSeats, sessionSeats_);
      DARABONBA_PTR_FROM_JSON(TokenLimit, tokenLimit_);
    };
    DataAgentBillingInstance() = default ;
    DataAgentBillingInstance(const DataAgentBillingInstance &) = default ;
    DataAgentBillingInstance(DataAgentBillingInstance &&) = default ;
    DataAgentBillingInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataAgentBillingInstance() = default ;
    DataAgentBillingInstance& operator=(const DataAgentBillingInstance &) = default ;
    DataAgentBillingInstance& operator=(DataAgentBillingInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSeats_ == nullptr
        && this->billingInstanceId_ == nullptr && this->boundWorkspaceIds_ == nullptr && this->chargeType_ == nullptr && this->commodityCode_ == nullptr && this->expireTime_ == nullptr
        && this->freeAgentSeats_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->isDefault_ == nullptr && this->LLM_ == nullptr
        && this->payLevel_ == nullptr && this->sessionAvailableDurationQuota_ == nullptr && this->sessionSeats_ == nullptr && this->tokenLimit_ == nullptr; };
    // agentSeats Field Functions 
    bool hasAgentSeats() const { return this->agentSeats_ != nullptr;};
    void deleteAgentSeats() { this->agentSeats_ = nullptr;};
    inline int32_t getAgentSeats() const { DARABONBA_PTR_GET_DEFAULT(agentSeats_, 0) };
    inline DataAgentBillingInstance& setAgentSeats(int32_t agentSeats) { DARABONBA_PTR_SET_VALUE(agentSeats_, agentSeats) };


    // billingInstanceId Field Functions 
    bool hasBillingInstanceId() const { return this->billingInstanceId_ != nullptr;};
    void deleteBillingInstanceId() { this->billingInstanceId_ = nullptr;};
    inline string getBillingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(billingInstanceId_, "") };
    inline DataAgentBillingInstance& setBillingInstanceId(string billingInstanceId) { DARABONBA_PTR_SET_VALUE(billingInstanceId_, billingInstanceId) };


    // boundWorkspaceIds Field Functions 
    bool hasBoundWorkspaceIds() const { return this->boundWorkspaceIds_ != nullptr;};
    void deleteBoundWorkspaceIds() { this->boundWorkspaceIds_ = nullptr;};
    inline const vector<string> & getBoundWorkspaceIds() const { DARABONBA_PTR_GET_CONST(boundWorkspaceIds_, vector<string>) };
    inline vector<string> getBoundWorkspaceIds() { DARABONBA_PTR_GET(boundWorkspaceIds_, vector<string>) };
    inline DataAgentBillingInstance& setBoundWorkspaceIds(const vector<string> & boundWorkspaceIds) { DARABONBA_PTR_SET_VALUE(boundWorkspaceIds_, boundWorkspaceIds) };
    inline DataAgentBillingInstance& setBoundWorkspaceIds(vector<string> && boundWorkspaceIds) { DARABONBA_PTR_SET_RVALUE(boundWorkspaceIds_, boundWorkspaceIds) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DataAgentBillingInstance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DataAgentBillingInstance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DataAgentBillingInstance& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // freeAgentSeats Field Functions 
    bool hasFreeAgentSeats() const { return this->freeAgentSeats_ != nullptr;};
    void deleteFreeAgentSeats() { this->freeAgentSeats_ = nullptr;};
    inline int32_t getFreeAgentSeats() const { DARABONBA_PTR_GET_DEFAULT(freeAgentSeats_, 0) };
    inline DataAgentBillingInstance& setFreeAgentSeats(int32_t freeAgentSeats) { DARABONBA_PTR_SET_VALUE(freeAgentSeats_, freeAgentSeats) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
    inline DataAgentBillingInstance& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DataAgentBillingInstance& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DataAgentBillingInstance& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // LLM Field Functions 
    bool hasLLM() const { return this->LLM_ != nullptr;};
    void deleteLLM() { this->LLM_ = nullptr;};
    inline int32_t getLLM() const { DARABONBA_PTR_GET_DEFAULT(LLM_, 0) };
    inline DataAgentBillingInstance& setLLM(int32_t LLM) { DARABONBA_PTR_SET_VALUE(LLM_, LLM) };


    // payLevel Field Functions 
    bool hasPayLevel() const { return this->payLevel_ != nullptr;};
    void deletePayLevel() { this->payLevel_ = nullptr;};
    inline string getPayLevel() const { DARABONBA_PTR_GET_DEFAULT(payLevel_, "") };
    inline DataAgentBillingInstance& setPayLevel(string payLevel) { DARABONBA_PTR_SET_VALUE(payLevel_, payLevel) };


    // sessionAvailableDurationQuota Field Functions 
    bool hasSessionAvailableDurationQuota() const { return this->sessionAvailableDurationQuota_ != nullptr;};
    void deleteSessionAvailableDurationQuota() { this->sessionAvailableDurationQuota_ = nullptr;};
    inline int32_t getSessionAvailableDurationQuota() const { DARABONBA_PTR_GET_DEFAULT(sessionAvailableDurationQuota_, 0) };
    inline DataAgentBillingInstance& setSessionAvailableDurationQuota(int32_t sessionAvailableDurationQuota) { DARABONBA_PTR_SET_VALUE(sessionAvailableDurationQuota_, sessionAvailableDurationQuota) };


    // sessionSeats Field Functions 
    bool hasSessionSeats() const { return this->sessionSeats_ != nullptr;};
    void deleteSessionSeats() { this->sessionSeats_ = nullptr;};
    inline int32_t getSessionSeats() const { DARABONBA_PTR_GET_DEFAULT(sessionSeats_, 0) };
    inline DataAgentBillingInstance& setSessionSeats(int32_t sessionSeats) { DARABONBA_PTR_SET_VALUE(sessionSeats_, sessionSeats) };


    // tokenLimit Field Functions 
    bool hasTokenLimit() const { return this->tokenLimit_ != nullptr;};
    void deleteTokenLimit() { this->tokenLimit_ = nullptr;};
    inline int32_t getTokenLimit() const { DARABONBA_PTR_GET_DEFAULT(tokenLimit_, 0) };
    inline DataAgentBillingInstance& setTokenLimit(int32_t tokenLimit) { DARABONBA_PTR_SET_VALUE(tokenLimit_, tokenLimit) };


  protected:
    shared_ptr<int32_t> agentSeats_ {};
    shared_ptr<string> billingInstanceId_ {};
    shared_ptr<vector<string>> boundWorkspaceIds_ {};
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> commodityCode_ {};
    shared_ptr<int64_t> expireTime_ {};
    shared_ptr<int32_t> freeAgentSeats_ {};
    shared_ptr<int64_t> gmtCreated_ {};
    shared_ptr<int64_t> gmtModified_ {};
    shared_ptr<bool> isDefault_ {};
    shared_ptr<int32_t> LLM_ {};
    shared_ptr<string> payLevel_ {};
    shared_ptr<int32_t> sessionAvailableDurationQuota_ {};
    shared_ptr<int32_t> sessionSeats_ {};
    shared_ptr<int32_t> tokenLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
