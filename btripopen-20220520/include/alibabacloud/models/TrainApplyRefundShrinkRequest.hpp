// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINAPPLYREFUNDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINAPPLYREFUNDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainApplyRefundShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainApplyRefundShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_refund_id, outRefundId_);
      DARABONBA_PTR_TO_JSON(refund_train_infos, refundTrainInfosShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TrainApplyRefundShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_refund_id, outRefundId_);
      DARABONBA_PTR_FROM_JSON(refund_train_infos, refundTrainInfosShrink_);
    };
    TrainApplyRefundShrinkRequest() = default ;
    TrainApplyRefundShrinkRequest(const TrainApplyRefundShrinkRequest &) = default ;
    TrainApplyRefundShrinkRequest(TrainApplyRefundShrinkRequest &&) = default ;
    TrainApplyRefundShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainApplyRefundShrinkRequest() = default ;
    TrainApplyRefundShrinkRequest& operator=(const TrainApplyRefundShrinkRequest &) = default ;
    TrainApplyRefundShrinkRequest& operator=(TrainApplyRefundShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->outOrderId_ != nullptr && this->outRefundId_ != nullptr && this->refundTrainInfosShrink_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainApplyRefundShrinkRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainApplyRefundShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outRefundId Field Functions 
    bool hasOutRefundId() const { return this->outRefundId_ != nullptr;};
    void deleteOutRefundId() { this->outRefundId_ = nullptr;};
    inline string outRefundId() const { DARABONBA_PTR_GET_DEFAULT(outRefundId_, "") };
    inline TrainApplyRefundShrinkRequest& setOutRefundId(string outRefundId) { DARABONBA_PTR_SET_VALUE(outRefundId_, outRefundId) };


    // refundTrainInfosShrink Field Functions 
    bool hasRefundTrainInfosShrink() const { return this->refundTrainInfosShrink_ != nullptr;};
    void deleteRefundTrainInfosShrink() { this->refundTrainInfosShrink_ = nullptr;};
    inline string refundTrainInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(refundTrainInfosShrink_, "") };
    inline TrainApplyRefundShrinkRequest& setRefundTrainInfosShrink(string refundTrainInfosShrink) { DARABONBA_PTR_SET_VALUE(refundTrainInfosShrink_, refundTrainInfosShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outRefundId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> refundTrainInfosShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
