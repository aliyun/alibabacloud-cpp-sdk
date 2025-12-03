// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTRESPONSEBODYCOUPONSCOUPONPRODUCTCODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTRESPONSEBODYCOUPONSCOUPONPRODUCTCODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bss20140714
{
namespace Models
{
  class DescribeCouponListResponseBodyCouponsCouponProductCodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponListResponseBodyCouponsCouponProductCodes& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponListResponseBodyCouponsCouponProductCodes& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    DescribeCouponListResponseBodyCouponsCouponProductCodes() = default ;
    DescribeCouponListResponseBodyCouponsCouponProductCodes(const DescribeCouponListResponseBodyCouponsCouponProductCodes &) = default ;
    DescribeCouponListResponseBodyCouponsCouponProductCodes(DescribeCouponListResponseBodyCouponsCouponProductCodes &&) = default ;
    DescribeCouponListResponseBodyCouponsCouponProductCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponListResponseBodyCouponsCouponProductCodes() = default ;
    DescribeCouponListResponseBodyCouponsCouponProductCodes& operator=(const DescribeCouponListResponseBodyCouponsCouponProductCodes &) = default ;
    DescribeCouponListResponseBodyCouponsCouponProductCodes& operator=(DescribeCouponListResponseBodyCouponsCouponProductCodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productCode_ == nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline const vector<string> & productCode() const { DARABONBA_PTR_GET_CONST(productCode_, vector<string>) };
    inline vector<string> productCode() { DARABONBA_PTR_GET(productCode_, vector<string>) };
    inline DescribeCouponListResponseBodyCouponsCouponProductCodes& setProductCode(const vector<string> & productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };
    inline DescribeCouponListResponseBodyCouponsCouponProductCodes& setProductCode(vector<string> && productCode) { DARABONBA_PTR_SET_RVALUE(productCode_, productCode) };


  protected:
    std::shared_ptr<vector<string>> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bss20140714
#endif
