// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTRESPONSEBODYCOUPONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTRESPONSEBODYCOUPONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCouponListResponseBodyCouponsCoupon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bss20140714
{
namespace Models
{
  class DescribeCouponListResponseBodyCoupons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponListResponseBodyCoupons& obj) { 
      DARABONBA_PTR_TO_JSON(Coupon, coupon_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponListResponseBodyCoupons& obj) { 
      DARABONBA_PTR_FROM_JSON(Coupon, coupon_);
    };
    DescribeCouponListResponseBodyCoupons() = default ;
    DescribeCouponListResponseBodyCoupons(const DescribeCouponListResponseBodyCoupons &) = default ;
    DescribeCouponListResponseBodyCoupons(DescribeCouponListResponseBodyCoupons &&) = default ;
    DescribeCouponListResponseBodyCoupons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponListResponseBodyCoupons() = default ;
    DescribeCouponListResponseBodyCoupons& operator=(const DescribeCouponListResponseBodyCoupons &) = default ;
    DescribeCouponListResponseBodyCoupons& operator=(DescribeCouponListResponseBodyCoupons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coupon_ == nullptr; };
    // coupon Field Functions 
    bool hasCoupon() const { return this->coupon_ != nullptr;};
    void deleteCoupon() { this->coupon_ = nullptr;};
    inline const vector<Models::DescribeCouponListResponseBodyCouponsCoupon> & coupon() const { DARABONBA_PTR_GET_CONST(coupon_, vector<Models::DescribeCouponListResponseBodyCouponsCoupon>) };
    inline vector<Models::DescribeCouponListResponseBodyCouponsCoupon> coupon() { DARABONBA_PTR_GET(coupon_, vector<Models::DescribeCouponListResponseBodyCouponsCoupon>) };
    inline DescribeCouponListResponseBodyCoupons& setCoupon(const vector<Models::DescribeCouponListResponseBodyCouponsCoupon> & coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };
    inline DescribeCouponListResponseBodyCoupons& setCoupon(vector<Models::DescribeCouponListResponseBodyCouponsCoupon> && coupon) { DARABONBA_PTR_SET_RVALUE(coupon_, coupon) };


  protected:
    std::shared_ptr<vector<Models::DescribeCouponListResponseBodyCouponsCoupon>> coupon_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bss20140714
#endif
