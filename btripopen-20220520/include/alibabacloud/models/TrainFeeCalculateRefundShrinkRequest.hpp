// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateRefundShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateRefundShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(refund_train_infos, refundTrainInfosShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateRefundShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(refund_train_infos, refundTrainInfosShrink_);
    };
    TrainFeeCalculateRefundShrinkRequest() = default ;
    TrainFeeCalculateRefundShrinkRequest(const TrainFeeCalculateRefundShrinkRequest &) = default ;
    TrainFeeCalculateRefundShrinkRequest(TrainFeeCalculateRefundShrinkRequest &&) = default ;
    TrainFeeCalculateRefundShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateRefundShrinkRequest() = default ;
    TrainFeeCalculateRefundShrinkRequest& operator=(const TrainFeeCalculateRefundShrinkRequest &) = default ;
    TrainFeeCalculateRefundShrinkRequest& operator=(TrainFeeCalculateRefundShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->distributeOrderId_ != nullptr
        && this->orderId_ != nullptr && this->refundTrainInfosShrink_ != nullptr; };
    // distributeOrderId Field Functions 
    bool hasDistributeOrderId() const { return this->distributeOrderId_ != nullptr;};
    void deleteDistributeOrderId() { this->distributeOrderId_ = nullptr;};
    inline string distributeOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributeOrderId_, "") };
    inline TrainFeeCalculateRefundShrinkRequest& setDistributeOrderId(string distributeOrderId) { DARABONBA_PTR_SET_VALUE(distributeOrderId_, distributeOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainFeeCalculateRefundShrinkRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // refundTrainInfosShrink Field Functions 
    bool hasRefundTrainInfosShrink() const { return this->refundTrainInfosShrink_ != nullptr;};
    void deleteRefundTrainInfosShrink() { this->refundTrainInfosShrink_ = nullptr;};
    inline string refundTrainInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(refundTrainInfosShrink_, "") };
    inline TrainFeeCalculateRefundShrinkRequest& setRefundTrainInfosShrink(string refundTrainInfosShrink) { DARABONBA_PTR_SET_VALUE(refundTrainInfosShrink_, refundTrainInfosShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> distributeOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> refundTrainInfosShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
