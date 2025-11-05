// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOUPONDEDUCTPRODUCTCODERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCOUPONDEDUCTPRODUCTCODERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCoupondeductProductCodeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCoupondeductProductCodeResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCoupondeductProductCodeResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(ProductType, productType_);
    };
    GetCoupondeductProductCodeResponseBodyData() = default ;
    GetCoupondeductProductCodeResponseBodyData(const GetCoupondeductProductCodeResponseBodyData &) = default ;
    GetCoupondeductProductCodeResponseBodyData(GetCoupondeductProductCodeResponseBodyData &&) = default ;
    GetCoupondeductProductCodeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCoupondeductProductCodeResponseBodyData() = default ;
    GetCoupondeductProductCodeResponseBodyData& operator=(const GetCoupondeductProductCodeResponseBodyData &) = default ;
    GetCoupondeductProductCodeResponseBodyData& operator=(GetCoupondeductProductCodeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline     const Darabonba::Json & productType() const { DARABONBA_GET(productType_) };
    Darabonba::Json & productType() { DARABONBA_GET(productType_) };
    inline GetCoupondeductProductCodeResponseBodyData& setProductType(const Darabonba::Json & productType) { DARABONBA_SET_VALUE(productType_, productType) };
    inline GetCoupondeductProductCodeResponseBodyData& setProductType(Darabonba::Json & productType) { DARABONBA_SET_RVALUE(productType_, productType) };


  protected:
    Darabonba::Json productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
