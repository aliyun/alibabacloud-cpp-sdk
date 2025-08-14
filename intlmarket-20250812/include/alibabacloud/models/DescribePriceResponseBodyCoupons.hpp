// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYCOUPONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYCOUPONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntlMarket20250812
{
namespace Models
{
  class DescribePriceResponseBodyCoupons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyCoupons& obj) { 
      DARABONBA_PTR_TO_JSON(CanPromFee, canPromFee_);
      DARABONBA_PTR_TO_JSON(CouponName, couponName_);
      DARABONBA_PTR_TO_JSON(CouponOptionCode, couponOptionCode_);
      DARABONBA_PTR_TO_JSON(CouponOptionNo, couponOptionNo_);
      DARABONBA_PTR_TO_JSON(IsSelected, isSelected_);
      DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyCoupons& obj) { 
      DARABONBA_PTR_FROM_JSON(CanPromFee, canPromFee_);
      DARABONBA_PTR_FROM_JSON(CouponName, couponName_);
      DARABONBA_PTR_FROM_JSON(CouponOptionCode, couponOptionCode_);
      DARABONBA_PTR_FROM_JSON(CouponOptionNo, couponOptionNo_);
      DARABONBA_PTR_FROM_JSON(IsSelected, isSelected_);
      DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
    };
    DescribePriceResponseBodyCoupons() = default ;
    DescribePriceResponseBodyCoupons(const DescribePriceResponseBodyCoupons &) = default ;
    DescribePriceResponseBodyCoupons(DescribePriceResponseBodyCoupons &&) = default ;
    DescribePriceResponseBodyCoupons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyCoupons() = default ;
    DescribePriceResponseBodyCoupons& operator=(const DescribePriceResponseBodyCoupons &) = default ;
    DescribePriceResponseBodyCoupons& operator=(DescribePriceResponseBodyCoupons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canPromFee_ != nullptr
        && this->couponName_ != nullptr && this->couponOptionCode_ != nullptr && this->couponOptionNo_ != nullptr && this->isSelected_ != nullptr && this->promotionDesc_ != nullptr; };
    // canPromFee Field Functions 
    bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
    void deleteCanPromFee() { this->canPromFee_ = nullptr;};
    inline int64_t canPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, 0L) };
    inline DescribePriceResponseBodyCoupons& setCanPromFee(int64_t canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


    // couponName Field Functions 
    bool hasCouponName() const { return this->couponName_ != nullptr;};
    void deleteCouponName() { this->couponName_ = nullptr;};
    inline string couponName() const { DARABONBA_PTR_GET_DEFAULT(couponName_, "") };
    inline DescribePriceResponseBodyCoupons& setCouponName(string couponName) { DARABONBA_PTR_SET_VALUE(couponName_, couponName) };


    // couponOptionCode Field Functions 
    bool hasCouponOptionCode() const { return this->couponOptionCode_ != nullptr;};
    void deleteCouponOptionCode() { this->couponOptionCode_ = nullptr;};
    inline string couponOptionCode() const { DARABONBA_PTR_GET_DEFAULT(couponOptionCode_, "") };
    inline DescribePriceResponseBodyCoupons& setCouponOptionCode(string couponOptionCode) { DARABONBA_PTR_SET_VALUE(couponOptionCode_, couponOptionCode) };


    // couponOptionNo Field Functions 
    bool hasCouponOptionNo() const { return this->couponOptionNo_ != nullptr;};
    void deleteCouponOptionNo() { this->couponOptionNo_ = nullptr;};
    inline string couponOptionNo() const { DARABONBA_PTR_GET_DEFAULT(couponOptionNo_, "") };
    inline DescribePriceResponseBodyCoupons& setCouponOptionNo(string couponOptionNo) { DARABONBA_PTR_SET_VALUE(couponOptionNo_, couponOptionNo) };


    // isSelected Field Functions 
    bool hasIsSelected() const { return this->isSelected_ != nullptr;};
    void deleteIsSelected() { this->isSelected_ = nullptr;};
    inline bool isSelected() const { DARABONBA_PTR_GET_DEFAULT(isSelected_, false) };
    inline DescribePriceResponseBodyCoupons& setIsSelected(bool isSelected) { DARABONBA_PTR_SET_VALUE(isSelected_, isSelected) };


    // promotionDesc Field Functions 
    bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
    void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
    inline string promotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
    inline DescribePriceResponseBodyCoupons& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


  protected:
    std::shared_ptr<int64_t> canPromFee_ = nullptr;
    std::shared_ptr<string> couponName_ = nullptr;
    std::shared_ptr<string> couponOptionCode_ = nullptr;
    std::shared_ptr<string> couponOptionNo_ = nullptr;
    std::shared_ptr<bool> isSelected_ = nullptr;
    std::shared_ptr<string> promotionDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntlMarket20250812
#endif
