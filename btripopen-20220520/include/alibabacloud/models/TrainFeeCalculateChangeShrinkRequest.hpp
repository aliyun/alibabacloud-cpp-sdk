// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateChangeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateChangeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(change_train_details, changeTrainDetailsShrink_);
      DARABONBA_PTR_TO_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateChangeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(change_train_details, changeTrainDetailsShrink_);
      DARABONBA_PTR_FROM_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
    };
    TrainFeeCalculateChangeShrinkRequest() = default ;
    TrainFeeCalculateChangeShrinkRequest(const TrainFeeCalculateChangeShrinkRequest &) = default ;
    TrainFeeCalculateChangeShrinkRequest(TrainFeeCalculateChangeShrinkRequest &&) = default ;
    TrainFeeCalculateChangeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateChangeShrinkRequest() = default ;
    TrainFeeCalculateChangeShrinkRequest& operator=(const TrainFeeCalculateChangeShrinkRequest &) = default ;
    TrainFeeCalculateChangeShrinkRequest& operator=(TrainFeeCalculateChangeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeTrainDetailsShrink_ != nullptr
        && this->distributeOrderId_ != nullptr && this->orderId_ != nullptr; };
    // changeTrainDetailsShrink Field Functions 
    bool hasChangeTrainDetailsShrink() const { return this->changeTrainDetailsShrink_ != nullptr;};
    void deleteChangeTrainDetailsShrink() { this->changeTrainDetailsShrink_ = nullptr;};
    inline string changeTrainDetailsShrink() const { DARABONBA_PTR_GET_DEFAULT(changeTrainDetailsShrink_, "") };
    inline TrainFeeCalculateChangeShrinkRequest& setChangeTrainDetailsShrink(string changeTrainDetailsShrink) { DARABONBA_PTR_SET_VALUE(changeTrainDetailsShrink_, changeTrainDetailsShrink) };


    // distributeOrderId Field Functions 
    bool hasDistributeOrderId() const { return this->distributeOrderId_ != nullptr;};
    void deleteDistributeOrderId() { this->distributeOrderId_ = nullptr;};
    inline string distributeOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributeOrderId_, "") };
    inline TrainFeeCalculateChangeShrinkRequest& setDistributeOrderId(string distributeOrderId) { DARABONBA_PTR_SET_VALUE(distributeOrderId_, distributeOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainFeeCalculateChangeShrinkRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> changeTrainDetailsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> distributeOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
