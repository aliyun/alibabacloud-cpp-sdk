// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTRESPONSEBODYCOUPONSCOUPON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTRESPONSEBODYCOUPONSCOUPON_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCouponListResponseBodyCouponsCouponProductCodes.hpp>
#include <alibabacloud/models/DescribeCouponListResponseBodyCouponsCouponTradeTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bss20140714
{
namespace Models
{
  class DescribeCouponListResponseBodyCouponsCoupon : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponListResponseBodyCouponsCoupon& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(BalanceAmount, balanceAmount_);
      DARABONBA_PTR_TO_JSON(CouponNumber, couponNumber_);
      DARABONBA_PTR_TO_JSON(CouponTemplateId, couponTemplateId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredAmount, expiredAmount_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(FrozenAmount, frozenAmount_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(PriceLimit, priceLimit_);
      DARABONBA_PTR_TO_JSON(ProductCodes, productCodes_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_TO_JSON(TradeTypes, tradeTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponListResponseBodyCouponsCoupon& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(BalanceAmount, balanceAmount_);
      DARABONBA_PTR_FROM_JSON(CouponNumber, couponNumber_);
      DARABONBA_PTR_FROM_JSON(CouponTemplateId, couponTemplateId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredAmount, expiredAmount_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(FrozenAmount, frozenAmount_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(PriceLimit, priceLimit_);
      DARABONBA_PTR_FROM_JSON(ProductCodes, productCodes_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_FROM_JSON(TradeTypes, tradeTypes_);
    };
    DescribeCouponListResponseBodyCouponsCoupon() = default ;
    DescribeCouponListResponseBodyCouponsCoupon(const DescribeCouponListResponseBodyCouponsCoupon &) = default ;
    DescribeCouponListResponseBodyCouponsCoupon(DescribeCouponListResponseBodyCouponsCoupon &&) = default ;
    DescribeCouponListResponseBodyCouponsCoupon(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponListResponseBodyCouponsCoupon() = default ;
    DescribeCouponListResponseBodyCouponsCoupon& operator=(const DescribeCouponListResponseBodyCouponsCoupon &) = default ;
    DescribeCouponListResponseBodyCouponsCoupon& operator=(DescribeCouponListResponseBodyCouponsCoupon &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->application_ == nullptr
        && return this->balanceAmount_ == nullptr && return this->couponNumber_ == nullptr && return this->couponTemplateId_ == nullptr && return this->creationTime_ == nullptr && return this->deliveryTime_ == nullptr
        && return this->description_ == nullptr && return this->expiredAmount_ == nullptr && return this->expiredTime_ == nullptr && return this->frozenAmount_ == nullptr && return this->modificationTime_ == nullptr
        && return this->priceLimit_ == nullptr && return this->productCodes_ == nullptr && return this->status_ == nullptr && return this->totalAmount_ == nullptr && return this->tradeTypes_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline string application() const { DARABONBA_PTR_GET_DEFAULT(application_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setApplication(string application) { DARABONBA_PTR_SET_VALUE(application_, application) };


    // balanceAmount Field Functions 
    bool hasBalanceAmount() const { return this->balanceAmount_ != nullptr;};
    void deleteBalanceAmount() { this->balanceAmount_ = nullptr;};
    inline string balanceAmount() const { DARABONBA_PTR_GET_DEFAULT(balanceAmount_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setBalanceAmount(string balanceAmount) { DARABONBA_PTR_SET_VALUE(balanceAmount_, balanceAmount) };


    // couponNumber Field Functions 
    bool hasCouponNumber() const { return this->couponNumber_ != nullptr;};
    void deleteCouponNumber() { this->couponNumber_ = nullptr;};
    inline string couponNumber() const { DARABONBA_PTR_GET_DEFAULT(couponNumber_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setCouponNumber(string couponNumber) { DARABONBA_PTR_SET_VALUE(couponNumber_, couponNumber) };


    // couponTemplateId Field Functions 
    bool hasCouponTemplateId() const { return this->couponTemplateId_ != nullptr;};
    void deleteCouponTemplateId() { this->couponTemplateId_ = nullptr;};
    inline int64_t couponTemplateId() const { DARABONBA_PTR_GET_DEFAULT(couponTemplateId_, 0L) };
    inline DescribeCouponListResponseBodyCouponsCoupon& setCouponTemplateId(int64_t couponTemplateId) { DARABONBA_PTR_SET_VALUE(couponTemplateId_, couponTemplateId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deliveryTime Field Functions 
    bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
    void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
    inline string deliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setDeliveryTime(string deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredAmount Field Functions 
    bool hasExpiredAmount() const { return this->expiredAmount_ != nullptr;};
    void deleteExpiredAmount() { this->expiredAmount_ = nullptr;};
    inline string expiredAmount() const { DARABONBA_PTR_GET_DEFAULT(expiredAmount_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setExpiredAmount(string expiredAmount) { DARABONBA_PTR_SET_VALUE(expiredAmount_, expiredAmount) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // frozenAmount Field Functions 
    bool hasFrozenAmount() const { return this->frozenAmount_ != nullptr;};
    void deleteFrozenAmount() { this->frozenAmount_ = nullptr;};
    inline string frozenAmount() const { DARABONBA_PTR_GET_DEFAULT(frozenAmount_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setFrozenAmount(string frozenAmount) { DARABONBA_PTR_SET_VALUE(frozenAmount_, frozenAmount) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // priceLimit Field Functions 
    bool hasPriceLimit() const { return this->priceLimit_ != nullptr;};
    void deletePriceLimit() { this->priceLimit_ = nullptr;};
    inline string priceLimit() const { DARABONBA_PTR_GET_DEFAULT(priceLimit_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setPriceLimit(string priceLimit) { DARABONBA_PTR_SET_VALUE(priceLimit_, priceLimit) };


    // productCodes Field Functions 
    bool hasProductCodes() const { return this->productCodes_ != nullptr;};
    void deleteProductCodes() { this->productCodes_ = nullptr;};
    inline const Models::DescribeCouponListResponseBodyCouponsCouponProductCodes & productCodes() const { DARABONBA_PTR_GET_CONST(productCodes_, Models::DescribeCouponListResponseBodyCouponsCouponProductCodes) };
    inline Models::DescribeCouponListResponseBodyCouponsCouponProductCodes productCodes() { DARABONBA_PTR_GET(productCodes_, Models::DescribeCouponListResponseBodyCouponsCouponProductCodes) };
    inline DescribeCouponListResponseBodyCouponsCoupon& setProductCodes(const Models::DescribeCouponListResponseBodyCouponsCouponProductCodes & productCodes) { DARABONBA_PTR_SET_VALUE(productCodes_, productCodes) };
    inline DescribeCouponListResponseBodyCouponsCoupon& setProductCodes(Models::DescribeCouponListResponseBodyCouponsCouponProductCodes && productCodes) { DARABONBA_PTR_SET_RVALUE(productCodes_, productCodes) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline string totalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
    inline DescribeCouponListResponseBodyCouponsCoupon& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    // tradeTypes Field Functions 
    bool hasTradeTypes() const { return this->tradeTypes_ != nullptr;};
    void deleteTradeTypes() { this->tradeTypes_ = nullptr;};
    inline const Models::DescribeCouponListResponseBodyCouponsCouponTradeTypes & tradeTypes() const { DARABONBA_PTR_GET_CONST(tradeTypes_, Models::DescribeCouponListResponseBodyCouponsCouponTradeTypes) };
    inline Models::DescribeCouponListResponseBodyCouponsCouponTradeTypes tradeTypes() { DARABONBA_PTR_GET(tradeTypes_, Models::DescribeCouponListResponseBodyCouponsCouponTradeTypes) };
    inline DescribeCouponListResponseBodyCouponsCoupon& setTradeTypes(const Models::DescribeCouponListResponseBodyCouponsCouponTradeTypes & tradeTypes) { DARABONBA_PTR_SET_VALUE(tradeTypes_, tradeTypes) };
    inline DescribeCouponListResponseBodyCouponsCoupon& setTradeTypes(Models::DescribeCouponListResponseBodyCouponsCouponTradeTypes && tradeTypes) { DARABONBA_PTR_SET_RVALUE(tradeTypes_, tradeTypes) };


  protected:
    std::shared_ptr<string> application_ = nullptr;
    std::shared_ptr<string> balanceAmount_ = nullptr;
    std::shared_ptr<string> couponNumber_ = nullptr;
    std::shared_ptr<int64_t> couponTemplateId_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> deliveryTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> expiredAmount_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<string> frozenAmount_ = nullptr;
    std::shared_ptr<string> modificationTime_ = nullptr;
    std::shared_ptr<string> priceLimit_ = nullptr;
    std::shared_ptr<Models::DescribeCouponListResponseBodyCouponsCouponProductCodes> productCodes_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> totalAmount_ = nullptr;
    std::shared_ptr<Models::DescribeCouponListResponseBodyCouponsCouponTradeTypes> tradeTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bss20140714
#endif
