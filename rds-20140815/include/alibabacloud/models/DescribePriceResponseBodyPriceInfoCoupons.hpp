// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOCOUPONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOCOUPONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoCouponsCoupon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoCoupons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoCoupons& obj) { 
      DARABONBA_PTR_TO_JSON(Coupon, coupon_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoCoupons& obj) { 
      DARABONBA_PTR_FROM_JSON(Coupon, coupon_);
    };
    DescribePriceResponseBodyPriceInfoCoupons() = default ;
    DescribePriceResponseBodyPriceInfoCoupons(const DescribePriceResponseBodyPriceInfoCoupons &) = default ;
    DescribePriceResponseBodyPriceInfoCoupons(DescribePriceResponseBodyPriceInfoCoupons &&) = default ;
    DescribePriceResponseBodyPriceInfoCoupons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoCoupons() = default ;
    DescribePriceResponseBodyPriceInfoCoupons& operator=(const DescribePriceResponseBodyPriceInfoCoupons &) = default ;
    DescribePriceResponseBodyPriceInfoCoupons& operator=(DescribePriceResponseBodyPriceInfoCoupons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coupon_ == nullptr; };
    // coupon Field Functions 
    bool hasCoupon() const { return this->coupon_ != nullptr;};
    void deleteCoupon() { this->coupon_ = nullptr;};
    inline const vector<Models::DescribePriceResponseBodyPriceInfoCouponsCoupon> & coupon() const { DARABONBA_PTR_GET_CONST(coupon_, vector<Models::DescribePriceResponseBodyPriceInfoCouponsCoupon>) };
    inline vector<Models::DescribePriceResponseBodyPriceInfoCouponsCoupon> coupon() { DARABONBA_PTR_GET(coupon_, vector<Models::DescribePriceResponseBodyPriceInfoCouponsCoupon>) };
    inline DescribePriceResponseBodyPriceInfoCoupons& setCoupon(const vector<Models::DescribePriceResponseBodyPriceInfoCouponsCoupon> & coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };
    inline DescribePriceResponseBodyPriceInfoCoupons& setCoupon(vector<Models::DescribePriceResponseBodyPriceInfoCouponsCoupon> && coupon) { DARABONBA_PTR_SET_RVALUE(coupon_, coupon) };


  protected:
    std::shared_ptr<vector<Models::DescribePriceResponseBodyPriceInfoCouponsCoupon>> coupon_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
