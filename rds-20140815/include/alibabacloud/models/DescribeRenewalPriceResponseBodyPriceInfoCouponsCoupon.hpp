// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFOCOUPONSCOUPON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFOCOUPONSCOUPON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon& obj) { 
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsSelected, isSelected_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsSelected, isSelected_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon(const DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon(DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon &&) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon& operator=(const DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon& operator=(DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->couponNo_ == nullptr
        && return this->description_ == nullptr && return this->isSelected_ == nullptr && return this->name_ == nullptr; };
    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string couponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isSelected Field Functions 
    bool hasIsSelected() const { return this->isSelected_ != nullptr;};
    void deleteIsSelected() { this->isSelected_ = nullptr;};
    inline string isSelected() const { DARABONBA_PTR_GET_DEFAULT(isSelected_, "") };
    inline DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon& setIsSelected(string isSelected) { DARABONBA_PTR_SET_VALUE(isSelected_, isSelected) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRenewalPriceResponseBodyPriceInfoCouponsCoupon& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The coupon ID.
    std::shared_ptr<string> couponNo_ = nullptr;
    // The description of the coupon.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the coupon is selected.
    std::shared_ptr<string> isSelected_ = nullptr;
    // The name of the coupon.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
