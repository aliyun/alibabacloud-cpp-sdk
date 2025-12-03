// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCouponListResponseBodyCoupons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bss20140714
{
namespace Models
{
  class DescribeCouponListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Coupons, coupons_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCouponListResponseBody() = default ;
    DescribeCouponListResponseBody(const DescribeCouponListResponseBody &) = default ;
    DescribeCouponListResponseBody(DescribeCouponListResponseBody &&) = default ;
    DescribeCouponListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponListResponseBody() = default ;
    DescribeCouponListResponseBody& operator=(const DescribeCouponListResponseBody &) = default ;
    DescribeCouponListResponseBody& operator=(DescribeCouponListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coupons_ == nullptr
        && return this->requestId_ == nullptr; };
    // coupons Field Functions 
    bool hasCoupons() const { return this->coupons_ != nullptr;};
    void deleteCoupons() { this->coupons_ = nullptr;};
    inline const DescribeCouponListResponseBodyCoupons & coupons() const { DARABONBA_PTR_GET_CONST(coupons_, DescribeCouponListResponseBodyCoupons) };
    inline DescribeCouponListResponseBodyCoupons coupons() { DARABONBA_PTR_GET(coupons_, DescribeCouponListResponseBodyCoupons) };
    inline DescribeCouponListResponseBody& setCoupons(const DescribeCouponListResponseBodyCoupons & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
    inline DescribeCouponListResponseBody& setCoupons(DescribeCouponListResponseBodyCoupons && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCouponListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeCouponListResponseBodyCoupons> coupons_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bss20140714
#endif
