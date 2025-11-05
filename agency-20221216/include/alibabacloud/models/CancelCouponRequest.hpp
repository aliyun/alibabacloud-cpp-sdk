// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELCOUPONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELCOUPONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class CancelCouponRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelCouponRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponId, couponId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelCouponRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
    };
    CancelCouponRequest() = default ;
    CancelCouponRequest(const CancelCouponRequest &) = default ;
    CancelCouponRequest(CancelCouponRequest &&) = default ;
    CancelCouponRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelCouponRequest() = default ;
    CancelCouponRequest& operator=(const CancelCouponRequest &) = default ;
    CancelCouponRequest& operator=(CancelCouponRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->couponId_ == nullptr; };
    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline int64_t couponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, 0L) };
    inline CancelCouponRequest& setCouponId(int64_t couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> couponId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
