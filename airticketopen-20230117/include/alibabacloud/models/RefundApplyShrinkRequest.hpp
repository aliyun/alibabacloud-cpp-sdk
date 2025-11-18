// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPLYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPLYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundApplyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundApplyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(refund_journeys, refundJourneysShrink_);
      DARABONBA_PTR_TO_JSON(refund_passenger_list, refundPassengerListShrink_);
      DARABONBA_PTR_TO_JSON(refund_type, refundTypeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RefundApplyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(refund_journeys, refundJourneysShrink_);
      DARABONBA_PTR_FROM_JSON(refund_passenger_list, refundPassengerListShrink_);
      DARABONBA_PTR_FROM_JSON(refund_type, refundTypeShrink_);
    };
    RefundApplyShrinkRequest() = default ;
    RefundApplyShrinkRequest(const RefundApplyShrinkRequest &) = default ;
    RefundApplyShrinkRequest(RefundApplyShrinkRequest &&) = default ;
    RefundApplyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundApplyShrinkRequest() = default ;
    RefundApplyShrinkRequest& operator=(const RefundApplyShrinkRequest &) = default ;
    RefundApplyShrinkRequest& operator=(RefundApplyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderNum_ == nullptr
        && return this->refundJourneysShrink_ == nullptr && return this->refundPassengerListShrink_ == nullptr && return this->refundTypeShrink_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline RefundApplyShrinkRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // refundJourneysShrink Field Functions 
    bool hasRefundJourneysShrink() const { return this->refundJourneysShrink_ != nullptr;};
    void deleteRefundJourneysShrink() { this->refundJourneysShrink_ = nullptr;};
    inline string refundJourneysShrink() const { DARABONBA_PTR_GET_DEFAULT(refundJourneysShrink_, "") };
    inline RefundApplyShrinkRequest& setRefundJourneysShrink(string refundJourneysShrink) { DARABONBA_PTR_SET_VALUE(refundJourneysShrink_, refundJourneysShrink) };


    // refundPassengerListShrink Field Functions 
    bool hasRefundPassengerListShrink() const { return this->refundPassengerListShrink_ != nullptr;};
    void deleteRefundPassengerListShrink() { this->refundPassengerListShrink_ = nullptr;};
    inline string refundPassengerListShrink() const { DARABONBA_PTR_GET_DEFAULT(refundPassengerListShrink_, "") };
    inline RefundApplyShrinkRequest& setRefundPassengerListShrink(string refundPassengerListShrink) { DARABONBA_PTR_SET_VALUE(refundPassengerListShrink_, refundPassengerListShrink) };


    // refundTypeShrink Field Functions 
    bool hasRefundTypeShrink() const { return this->refundTypeShrink_ != nullptr;};
    void deleteRefundTypeShrink() { this->refundTypeShrink_ = nullptr;};
    inline string refundTypeShrink() const { DARABONBA_PTR_GET_DEFAULT(refundTypeShrink_, "") };
    inline RefundApplyShrinkRequest& setRefundTypeShrink(string refundTypeShrink) { DARABONBA_PTR_SET_VALUE(refundTypeShrink_, refundTypeShrink) };


  protected:
    // Order number
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    // Itinerary for which a refund is being requested
    // 
    // This parameter is required.
    std::shared_ptr<string> refundJourneysShrink_ = nullptr;
    // List of passengers applying for a refund
    // 
    // This parameter is required.
    std::shared_ptr<string> refundPassengerListShrink_ = nullptr;
    // Refund type - involuntary or voluntary. 
    // attachments are required for involuntary refund application.
    // 
    // This parameter is required.
    std::shared_ptr<string> refundTypeShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
