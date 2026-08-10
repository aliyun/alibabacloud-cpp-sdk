// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELAPPLYREFUNDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELAPPLYREFUNDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelApplyRefundRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelApplyRefundRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_TO_JSON(RefundReason, refundReason_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelApplyRefundRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_FROM_JSON(RefundReason, refundReason_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelApplyRefundRequest() = default ;
    GlobalHotelApplyRefundRequest(const GlobalHotelApplyRefundRequest &) = default ;
    GlobalHotelApplyRefundRequest(GlobalHotelApplyRefundRequest &&) = default ;
    GlobalHotelApplyRefundRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelApplyRefundRequest() = default ;
    GlobalHotelApplyRefundRequest& operator=(const GlobalHotelApplyRefundRequest &) = default ;
    GlobalHotelApplyRefundRequest& operator=(GlobalHotelApplyRefundRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->orderNo_ == nullptr && this->refundReason_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline GlobalHotelApplyRefundRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // orderNo Field Functions 
    bool hasOrderNo() const { return this->orderNo_ != nullptr;};
    void deleteOrderNo() { this->orderNo_ = nullptr;};
    inline string getOrderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
    inline GlobalHotelApplyRefundRequest& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


    // refundReason Field Functions 
    bool hasRefundReason() const { return this->refundReason_ != nullptr;};
    void deleteRefundReason() { this->refundReason_ = nullptr;};
    inline string getRefundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
    inline GlobalHotelApplyRefundRequest& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelApplyRefundRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The distributor account ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // The sales order number.
    // 
    // This parameter is required.
    shared_ptr<string> orderNo_ {};
    // The refund reason.
    shared_ptr<string> refundReason_ {};
    // TraceId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
