// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMODITYVALUERESULTCOUPONS_HPP_
#define ALIBABACLOUD_MODELS_COMMODITYVALUERESULTCOUPONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CommodityValueResultCoupons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommodityValueResultCoupons& obj) { 
      DARABONBA_PTR_TO_JSON(CanPromFee, canPromFee_);
      DARABONBA_PTR_TO_JSON(CouponDesc, couponDesc_);
      DARABONBA_PTR_TO_JSON(CouponName, couponName_);
      DARABONBA_PTR_TO_JSON(CouponOptionNo, couponOptionNo_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, CommodityValueResultCoupons& obj) { 
      DARABONBA_PTR_FROM_JSON(CanPromFee, canPromFee_);
      DARABONBA_PTR_FROM_JSON(CouponDesc, couponDesc_);
      DARABONBA_PTR_FROM_JSON(CouponName, couponName_);
      DARABONBA_PTR_FROM_JSON(CouponOptionNo, couponOptionNo_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
    };
    CommodityValueResultCoupons() = default ;
    CommodityValueResultCoupons(const CommodityValueResultCoupons &) = default ;
    CommodityValueResultCoupons(CommodityValueResultCoupons &&) = default ;
    CommodityValueResultCoupons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommodityValueResultCoupons() = default ;
    CommodityValueResultCoupons& operator=(const CommodityValueResultCoupons &) = default ;
    CommodityValueResultCoupons& operator=(CommodityValueResultCoupons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canPromFee_ != nullptr
        && this->couponDesc_ != nullptr && this->couponName_ != nullptr && this->couponOptionNo_ != nullptr && this->selected_ != nullptr; };
    // canPromFee Field Functions 
    bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
    void deleteCanPromFee() { this->canPromFee_ = nullptr;};
    inline double canPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, 0.0) };
    inline CommodityValueResultCoupons& setCanPromFee(double canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


    // couponDesc Field Functions 
    bool hasCouponDesc() const { return this->couponDesc_ != nullptr;};
    void deleteCouponDesc() { this->couponDesc_ = nullptr;};
    inline string couponDesc() const { DARABONBA_PTR_GET_DEFAULT(couponDesc_, "") };
    inline CommodityValueResultCoupons& setCouponDesc(string couponDesc) { DARABONBA_PTR_SET_VALUE(couponDesc_, couponDesc) };


    // couponName Field Functions 
    bool hasCouponName() const { return this->couponName_ != nullptr;};
    void deleteCouponName() { this->couponName_ = nullptr;};
    inline string couponName() const { DARABONBA_PTR_GET_DEFAULT(couponName_, "") };
    inline CommodityValueResultCoupons& setCouponName(string couponName) { DARABONBA_PTR_SET_VALUE(couponName_, couponName) };


    // couponOptionNo Field Functions 
    bool hasCouponOptionNo() const { return this->couponOptionNo_ != nullptr;};
    void deleteCouponOptionNo() { this->couponOptionNo_ = nullptr;};
    inline string couponOptionNo() const { DARABONBA_PTR_GET_DEFAULT(couponOptionNo_, "") };
    inline CommodityValueResultCoupons& setCouponOptionNo(string couponOptionNo) { DARABONBA_PTR_SET_VALUE(couponOptionNo_, couponOptionNo) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline CommodityValueResultCoupons& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    // The payable amount.
    std::shared_ptr<double> canPromFee_ = nullptr;
    // The description of the coupon.
    std::shared_ptr<string> couponDesc_ = nullptr;
    // The name of the coupon.
    std::shared_ptr<string> couponName_ = nullptr;
    // The coupon ID.
    std::shared_ptr<string> couponOptionNo_ = nullptr;
    // Indicates whether the coupon is selected.
    std::shared_ptr<bool> selected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
