// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(refund_order_num, refundOrderNum_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(refund_order_num, refundOrderNum_);
    };
    RefundDetailRequest() = default ;
    RefundDetailRequest(const RefundDetailRequest &) = default ;
    RefundDetailRequest(RefundDetailRequest &&) = default ;
    RefundDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailRequest() = default ;
    RefundDetailRequest& operator=(const RefundDetailRequest &) = default ;
    RefundDetailRequest& operator=(RefundDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refundOrderNum_ == nullptr; };
    // refundOrderNum Field Functions 
    bool hasRefundOrderNum() const { return this->refundOrderNum_ != nullptr;};
    void deleteRefundOrderNum() { this->refundOrderNum_ = nullptr;};
    inline int64_t refundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(refundOrderNum_, 0L) };
    inline RefundDetailRequest& setRefundOrderNum(int64_t refundOrderNum) { DARABONBA_PTR_SET_VALUE(refundOrderNum_, refundOrderNum) };


  protected:
    // refund order number
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> refundOrderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
