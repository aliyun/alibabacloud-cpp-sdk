// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYCOUPONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYCOUPONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePriceResponseBodyCouponsCoupon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribePriceResponseBodyCoupons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyCoupons& obj) { 
      DARABONBA_PTR_TO_JSON(Coupon, coupon_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyCoupons& obj) { 
      DARABONBA_PTR_FROM_JSON(Coupon, coupon_);
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
    virtual bool empty() const override { this->coupon_ != nullptr; };
    // coupon Field Functions 
    bool hasCoupon() const { return this->coupon_ != nullptr;};
    void deleteCoupon() { this->coupon_ = nullptr;};
    inline const vector<Models::DescribePriceResponseBodyCouponsCoupon> & coupon() const { DARABONBA_PTR_GET_CONST(coupon_, vector<Models::DescribePriceResponseBodyCouponsCoupon>) };
    inline vector<Models::DescribePriceResponseBodyCouponsCoupon> coupon() { DARABONBA_PTR_GET(coupon_, vector<Models::DescribePriceResponseBodyCouponsCoupon>) };
    inline DescribePriceResponseBodyCoupons& setCoupon(const vector<Models::DescribePriceResponseBodyCouponsCoupon> & coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };
    inline DescribePriceResponseBodyCoupons& setCoupon(vector<Models::DescribePriceResponseBodyCouponsCoupon> && coupon) { DARABONBA_PTR_SET_RVALUE(coupon_, coupon) };


  protected:
    std::shared_ptr<vector<Models::DescribePriceResponseBodyCouponsCoupon>> coupon_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
