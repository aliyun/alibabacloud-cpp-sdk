// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFOCOUPONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFOCOUPONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRenewalPriceResponseBodyPriceInfoCoupons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBodyPriceInfoCoupons& obj) { 
      DARABONBA_PTR_TO_JSON(Coupon, coupon_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBodyPriceInfoCoupons& obj) { 
      DARABONBA_PTR_FROM_JSON(Coupon, coupon_);
    };
    DescribeRenewalPriceResponseBodyPriceInfoCoupons() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoCoupons(const DescribeRenewalPriceResponseBodyPriceInfoCoupons &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoCoupons(DescribeRenewalPriceResponseBodyPriceInfoCoupons &&) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoCoupons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBodyPriceInfoCoupons() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoCoupons& operator=(const DescribeRenewalPriceResponseBodyPriceInfoCoupons &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoCoupons& operator=(DescribeRenewalPriceResponseBodyPriceInfoCoupons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coupon_ == nullptr; };
    // coupon Field Functions 
    bool hasCoupon() const { return this->coupon_ != nullptr;};
    void deleteCoupon() { this->coupon_ = nullptr;};
    inline const vector<Models::DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon> & coupon() const { DARABONBA_PTR_GET_CONST(coupon_, vector<Models::DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon>) };
    inline vector<Models::DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon> coupon() { DARABONBA_PTR_GET(coupon_, vector<Models::DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon>) };
    inline DescribeRenewalPriceResponseBodyPriceInfoCoupons& setCoupon(const vector<Models::DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon> & coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };
    inline DescribeRenewalPriceResponseBodyPriceInfoCoupons& setCoupon(vector<Models::DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon> && coupon) { DARABONBA_PTR_SET_RVALUE(coupon_, coupon) };


  protected:
    std::shared_ptr<vector<Models::DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon>> coupon_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
