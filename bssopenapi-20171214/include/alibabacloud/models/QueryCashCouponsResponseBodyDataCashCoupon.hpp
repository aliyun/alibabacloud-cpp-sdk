// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCASHCOUPONSRESPONSEBODYDATACASHCOUPON_HPP_
#define ALIBABACLOUD_MODELS_QUERYCASHCOUPONSRESPONSEBODYDATACASHCOUPON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCashCouponsResponseBodyDataCashCoupon : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCashCouponsResponseBodyDataCashCoupon& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_TO_JSON(ApplicableScenarios, applicableScenarios_);
      DARABONBA_PTR_TO_JSON(Balance, balance_);
      DARABONBA_PTR_TO_JSON(CashCouponId, cashCouponId_);
      DARABONBA_PTR_TO_JSON(CashCouponNo, cashCouponNo_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ExpiryTime, expiryTime_);
      DARABONBA_PTR_TO_JSON(GrantedTime, grantedTime_);
      DARABONBA_PTR_TO_JSON(NominalValue, nominalValue_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCashCouponsResponseBodyDataCashCoupon& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_FROM_JSON(ApplicableScenarios, applicableScenarios_);
      DARABONBA_PTR_FROM_JSON(Balance, balance_);
      DARABONBA_PTR_FROM_JSON(CashCouponId, cashCouponId_);
      DARABONBA_PTR_FROM_JSON(CashCouponNo, cashCouponNo_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ExpiryTime, expiryTime_);
      DARABONBA_PTR_FROM_JSON(GrantedTime, grantedTime_);
      DARABONBA_PTR_FROM_JSON(NominalValue, nominalValue_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryCashCouponsResponseBodyDataCashCoupon() = default ;
    QueryCashCouponsResponseBodyDataCashCoupon(const QueryCashCouponsResponseBodyDataCashCoupon &) = default ;
    QueryCashCouponsResponseBodyDataCashCoupon(QueryCashCouponsResponseBodyDataCashCoupon &&) = default ;
    QueryCashCouponsResponseBodyDataCashCoupon(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCashCouponsResponseBodyDataCashCoupon() = default ;
    QueryCashCouponsResponseBodyDataCashCoupon& operator=(const QueryCashCouponsResponseBodyDataCashCoupon &) = default ;
    QueryCashCouponsResponseBodyDataCashCoupon& operator=(QueryCashCouponsResponseBodyDataCashCoupon &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicableProducts_ != nullptr
        && this->applicableScenarios_ != nullptr && this->balance_ != nullptr && this->cashCouponId_ != nullptr && this->cashCouponNo_ != nullptr && this->description_ != nullptr
        && this->effectiveTime_ != nullptr && this->expiryTime_ != nullptr && this->grantedTime_ != nullptr && this->nominalValue_ != nullptr && this->status_ != nullptr; };
    // applicableProducts Field Functions 
    bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
    void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
    inline string applicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


    // applicableScenarios Field Functions 
    bool hasApplicableScenarios() const { return this->applicableScenarios_ != nullptr;};
    void deleteApplicableScenarios() { this->applicableScenarios_ = nullptr;};
    inline string applicableScenarios() const { DARABONBA_PTR_GET_DEFAULT(applicableScenarios_, "") };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setApplicableScenarios(string applicableScenarios) { DARABONBA_PTR_SET_VALUE(applicableScenarios_, applicableScenarios) };


    // balance Field Functions 
    bool hasBalance() const { return this->balance_ != nullptr;};
    void deleteBalance() { this->balance_ = nullptr;};
    inline string balance() const { DARABONBA_PTR_GET_DEFAULT(balance_, "") };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setBalance(string balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


    // cashCouponId Field Functions 
    bool hasCashCouponId() const { return this->cashCouponId_ != nullptr;};
    void deleteCashCouponId() { this->cashCouponId_ = nullptr;};
    inline int64_t cashCouponId() const { DARABONBA_PTR_GET_DEFAULT(cashCouponId_, 0L) };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setCashCouponId(int64_t cashCouponId) { DARABONBA_PTR_SET_VALUE(cashCouponId_, cashCouponId) };


    // cashCouponNo Field Functions 
    bool hasCashCouponNo() const { return this->cashCouponNo_ != nullptr;};
    void deleteCashCouponNo() { this->cashCouponNo_ = nullptr;};
    inline string cashCouponNo() const { DARABONBA_PTR_GET_DEFAULT(cashCouponNo_, "") };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setCashCouponNo(string cashCouponNo) { DARABONBA_PTR_SET_VALUE(cashCouponNo_, cashCouponNo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expiryTime Field Functions 
    bool hasExpiryTime() const { return this->expiryTime_ != nullptr;};
    void deleteExpiryTime() { this->expiryTime_ = nullptr;};
    inline string expiryTime() const { DARABONBA_PTR_GET_DEFAULT(expiryTime_, "") };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setExpiryTime(string expiryTime) { DARABONBA_PTR_SET_VALUE(expiryTime_, expiryTime) };


    // grantedTime Field Functions 
    bool hasGrantedTime() const { return this->grantedTime_ != nullptr;};
    void deleteGrantedTime() { this->grantedTime_ = nullptr;};
    inline string grantedTime() const { DARABONBA_PTR_GET_DEFAULT(grantedTime_, "") };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setGrantedTime(string grantedTime) { DARABONBA_PTR_SET_VALUE(grantedTime_, grantedTime) };


    // nominalValue Field Functions 
    bool hasNominalValue() const { return this->nominalValue_ != nullptr;};
    void deleteNominalValue() { this->nominalValue_ = nullptr;};
    inline string nominalValue() const { DARABONBA_PTR_GET_DEFAULT(nominalValue_, "") };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setNominalValue(string nominalValue) { DARABONBA_PTR_SET_VALUE(nominalValue_, nominalValue) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryCashCouponsResponseBodyDataCashCoupon& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The service to which the voucher is applicable.
    std::shared_ptr<string> applicableProducts_ = nullptr;
    // The scenario to which the voucher is applicable.
    std::shared_ptr<string> applicableScenarios_ = nullptr;
    // The remaining quota of the voucher.
    std::shared_ptr<string> balance_ = nullptr;
    // The ID of the voucher.
    std::shared_ptr<int64_t> cashCouponId_ = nullptr;
    // The code of the voucher.
    std::shared_ptr<string> cashCouponNo_ = nullptr;
    // The description of the voucher.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the voucher took effect.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The time when the voucher expired.
    std::shared_ptr<string> expiryTime_ = nullptr;
    // The time when the voucher was released.
    std::shared_ptr<string> grantedTime_ = nullptr;
    // The denomination of the voucher.
    std::shared_ptr<string> nominalValue_ = nullptr;
    // The state of the voucher. Valid values:
    // 
    // *   Available: The voucher is valid.
    // *   Expired: The voucher has expired.
    // *   Cancelled: The voucher is canceled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
