// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREDEEMRESPONSEBODYDATAREDEEMREDEEM_HPP_
#define ALIBABACLOUD_MODELS_QUERYREDEEMRESPONSEBODYDATAREDEEMREDEEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRedeemResponseBodyDataRedeemRedeem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRedeemResponseBodyDataRedeemRedeem& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_TO_JSON(Balance, balance_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ExpiryTime, expiryTime_);
      DARABONBA_PTR_TO_JSON(GrantedTime, grantedTime_);
      DARABONBA_PTR_TO_JSON(NominalValue, nominalValue_);
      DARABONBA_PTR_TO_JSON(RedeemId, redeemId_);
      DARABONBA_PTR_TO_JSON(RedeemNo, redeemNo_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRedeemResponseBodyDataRedeemRedeem& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_FROM_JSON(Balance, balance_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ExpiryTime, expiryTime_);
      DARABONBA_PTR_FROM_JSON(GrantedTime, grantedTime_);
      DARABONBA_PTR_FROM_JSON(NominalValue, nominalValue_);
      DARABONBA_PTR_FROM_JSON(RedeemId, redeemId_);
      DARABONBA_PTR_FROM_JSON(RedeemNo, redeemNo_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryRedeemResponseBodyDataRedeemRedeem() = default ;
    QueryRedeemResponseBodyDataRedeemRedeem(const QueryRedeemResponseBodyDataRedeemRedeem &) = default ;
    QueryRedeemResponseBodyDataRedeemRedeem(QueryRedeemResponseBodyDataRedeemRedeem &&) = default ;
    QueryRedeemResponseBodyDataRedeemRedeem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRedeemResponseBodyDataRedeemRedeem() = default ;
    QueryRedeemResponseBodyDataRedeemRedeem& operator=(const QueryRedeemResponseBodyDataRedeemRedeem &) = default ;
    QueryRedeemResponseBodyDataRedeemRedeem& operator=(QueryRedeemResponseBodyDataRedeemRedeem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicableProducts_ != nullptr
        && this->balance_ != nullptr && this->effectiveTime_ != nullptr && this->expiryTime_ != nullptr && this->grantedTime_ != nullptr && this->nominalValue_ != nullptr
        && this->redeemId_ != nullptr && this->redeemNo_ != nullptr && this->specification_ != nullptr && this->status_ != nullptr; };
    // applicableProducts Field Functions 
    bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
    void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
    inline string applicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
    inline QueryRedeemResponseBodyDataRedeemRedeem& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


    // balance Field Functions 
    bool hasBalance() const { return this->balance_ != nullptr;};
    void deleteBalance() { this->balance_ = nullptr;};
    inline string balance() const { DARABONBA_PTR_GET_DEFAULT(balance_, "") };
    inline QueryRedeemResponseBodyDataRedeemRedeem& setBalance(string balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline QueryRedeemResponseBodyDataRedeemRedeem& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expiryTime Field Functions 
    bool hasExpiryTime() const { return this->expiryTime_ != nullptr;};
    void deleteExpiryTime() { this->expiryTime_ = nullptr;};
    inline string expiryTime() const { DARABONBA_PTR_GET_DEFAULT(expiryTime_, "") };
    inline QueryRedeemResponseBodyDataRedeemRedeem& setExpiryTime(string expiryTime) { DARABONBA_PTR_SET_VALUE(expiryTime_, expiryTime) };


    // grantedTime Field Functions 
    bool hasGrantedTime() const { return this->grantedTime_ != nullptr;};
    void deleteGrantedTime() { this->grantedTime_ = nullptr;};
    inline string grantedTime() const { DARABONBA_PTR_GET_DEFAULT(grantedTime_, "") };
    inline QueryRedeemResponseBodyDataRedeemRedeem& setGrantedTime(string grantedTime) { DARABONBA_PTR_SET_VALUE(grantedTime_, grantedTime) };


    // nominalValue Field Functions 
    bool hasNominalValue() const { return this->nominalValue_ != nullptr;};
    void deleteNominalValue() { this->nominalValue_ = nullptr;};
    inline string nominalValue() const { DARABONBA_PTR_GET_DEFAULT(nominalValue_, "") };
    inline QueryRedeemResponseBodyDataRedeemRedeem& setNominalValue(string nominalValue) { DARABONBA_PTR_SET_VALUE(nominalValue_, nominalValue) };


    // redeemId Field Functions 
    bool hasRedeemId() const { return this->redeemId_ != nullptr;};
    void deleteRedeemId() { this->redeemId_ = nullptr;};
    inline string redeemId() const { DARABONBA_PTR_GET_DEFAULT(redeemId_, "") };
    inline QueryRedeemResponseBodyDataRedeemRedeem& setRedeemId(string redeemId) { DARABONBA_PTR_SET_VALUE(redeemId_, redeemId) };


    // redeemNo Field Functions 
    bool hasRedeemNo() const { return this->redeemNo_ != nullptr;};
    void deleteRedeemNo() { this->redeemNo_ = nullptr;};
    inline string redeemNo() const { DARABONBA_PTR_GET_DEFAULT(redeemNo_, "") };
    inline QueryRedeemResponseBodyDataRedeemRedeem& setRedeemNo(string redeemNo) { DARABONBA_PTR_SET_VALUE(redeemNo_, redeemNo) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline QueryRedeemResponseBodyDataRedeemRedeem& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryRedeemResponseBodyDataRedeemRedeem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The services to which the redemption coupon is applicable.
    std::shared_ptr<string> applicableProducts_ = nullptr;
    // The balance of the redemption coupon.
    std::shared_ptr<string> balance_ = nullptr;
    // The time when the redemption coupon took effect.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The time when the redemption coupon expired.
    std::shared_ptr<string> expiryTime_ = nullptr;
    // The time when the redemption coupon was issued.
    std::shared_ptr<string> grantedTime_ = nullptr;
    // The nominal value of the redemption coupon.
    std::shared_ptr<string> nominalValue_ = nullptr;
    // The ID of the redemption coupon.
    std::shared_ptr<string> redeemId_ = nullptr;
    // The number of the redemption coupon.
    std::shared_ptr<string> redeemNo_ = nullptr;
    // The specifications of the redemption coupon.
    std::shared_ptr<string> specification_ = nullptr;
    // The status of the redemption coupon. Valid values:
    // 
    // *   Generated
    // *   CallBack
    // *   RefundPending
    // *   Canceled
    // *   Order_Canceled
    // *   ActivePending
    // *   ActiveSuccess
    // *   ExchangePending
    // *   ExchangeSuccess
    // *   Expired
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
