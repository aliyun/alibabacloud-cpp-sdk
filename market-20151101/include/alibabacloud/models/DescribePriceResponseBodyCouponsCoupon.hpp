// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYCOUPONSCOUPON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYCOUPONSCOUPON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribePriceResponseBodyCouponsCoupon : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyCouponsCoupon& obj) { 
      DARABONBA_PTR_TO_JSON(CanPromFee, canPromFee_);
      DARABONBA_PTR_TO_JSON(CouponDesc, couponDesc_);
      DARABONBA_PTR_TO_JSON(CouponName, couponName_);
      DARABONBA_PTR_TO_JSON(CouponOptionCode, couponOptionCode_);
      DARABONBA_PTR_TO_JSON(CouponOptionNo, couponOptionNo_);
      DARABONBA_PTR_TO_JSON(IsSelected, isSelected_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyCouponsCoupon& obj) { 
      DARABONBA_PTR_FROM_JSON(CanPromFee, canPromFee_);
      DARABONBA_PTR_FROM_JSON(CouponDesc, couponDesc_);
      DARABONBA_PTR_FROM_JSON(CouponName, couponName_);
      DARABONBA_PTR_FROM_JSON(CouponOptionCode, couponOptionCode_);
      DARABONBA_PTR_FROM_JSON(CouponOptionNo, couponOptionNo_);
      DARABONBA_PTR_FROM_JSON(IsSelected, isSelected_);
    };
    DescribePriceResponseBodyCouponsCoupon() = default ;
    DescribePriceResponseBodyCouponsCoupon(const DescribePriceResponseBodyCouponsCoupon &) = default ;
    DescribePriceResponseBodyCouponsCoupon(DescribePriceResponseBodyCouponsCoupon &&) = default ;
    DescribePriceResponseBodyCouponsCoupon(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyCouponsCoupon() = default ;
    DescribePriceResponseBodyCouponsCoupon& operator=(const DescribePriceResponseBodyCouponsCoupon &) = default ;
    DescribePriceResponseBodyCouponsCoupon& operator=(DescribePriceResponseBodyCouponsCoupon &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canPromFee_ != nullptr
        && this->couponDesc_ != nullptr && this->couponName_ != nullptr && this->couponOptionCode_ != nullptr && this->couponOptionNo_ != nullptr && this->isSelected_ != nullptr; };
    // canPromFee Field Functions 
    bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
    void deleteCanPromFee() { this->canPromFee_ = nullptr;};
    inline float canPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, 0.0) };
    inline DescribePriceResponseBodyCouponsCoupon& setCanPromFee(float canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


    // couponDesc Field Functions 
    bool hasCouponDesc() const { return this->couponDesc_ != nullptr;};
    void deleteCouponDesc() { this->couponDesc_ = nullptr;};
    inline string couponDesc() const { DARABONBA_PTR_GET_DEFAULT(couponDesc_, "") };
    inline DescribePriceResponseBodyCouponsCoupon& setCouponDesc(string couponDesc) { DARABONBA_PTR_SET_VALUE(couponDesc_, couponDesc) };


    // couponName Field Functions 
    bool hasCouponName() const { return this->couponName_ != nullptr;};
    void deleteCouponName() { this->couponName_ = nullptr;};
    inline string couponName() const { DARABONBA_PTR_GET_DEFAULT(couponName_, "") };
    inline DescribePriceResponseBodyCouponsCoupon& setCouponName(string couponName) { DARABONBA_PTR_SET_VALUE(couponName_, couponName) };


    // couponOptionCode Field Functions 
    bool hasCouponOptionCode() const { return this->couponOptionCode_ != nullptr;};
    void deleteCouponOptionCode() { this->couponOptionCode_ = nullptr;};
    inline string couponOptionCode() const { DARABONBA_PTR_GET_DEFAULT(couponOptionCode_, "") };
    inline DescribePriceResponseBodyCouponsCoupon& setCouponOptionCode(string couponOptionCode) { DARABONBA_PTR_SET_VALUE(couponOptionCode_, couponOptionCode) };


    // couponOptionNo Field Functions 
    bool hasCouponOptionNo() const { return this->couponOptionNo_ != nullptr;};
    void deleteCouponOptionNo() { this->couponOptionNo_ = nullptr;};
    inline string couponOptionNo() const { DARABONBA_PTR_GET_DEFAULT(couponOptionNo_, "") };
    inline DescribePriceResponseBodyCouponsCoupon& setCouponOptionNo(string couponOptionNo) { DARABONBA_PTR_SET_VALUE(couponOptionNo_, couponOptionNo) };


    // isSelected Field Functions 
    bool hasIsSelected() const { return this->isSelected_ != nullptr;};
    void deleteIsSelected() { this->isSelected_ = nullptr;};
    inline bool isSelected() const { DARABONBA_PTR_GET_DEFAULT(isSelected_, false) };
    inline DescribePriceResponseBodyCouponsCoupon& setIsSelected(bool isSelected) { DARABONBA_PTR_SET_VALUE(isSelected_, isSelected) };


  protected:
    std::shared_ptr<float> canPromFee_ = nullptr;
    std::shared_ptr<string> couponDesc_ = nullptr;
    std::shared_ptr<string> couponName_ = nullptr;
    std::shared_ptr<string> couponOptionCode_ = nullptr;
    std::shared_ptr<string> couponOptionNo_ = nullptr;
    std::shared_ptr<bool> isSelected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
