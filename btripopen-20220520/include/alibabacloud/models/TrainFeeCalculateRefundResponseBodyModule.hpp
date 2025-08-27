// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateRefundResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateRefundResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(refund_train_details, refundTrainDetails_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateRefundResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(refund_train_details, refundTrainDetails_);
    };
    TrainFeeCalculateRefundResponseBodyModule() = default ;
    TrainFeeCalculateRefundResponseBodyModule(const TrainFeeCalculateRefundResponseBodyModule &) = default ;
    TrainFeeCalculateRefundResponseBodyModule(TrainFeeCalculateRefundResponseBodyModule &&) = default ;
    TrainFeeCalculateRefundResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateRefundResponseBodyModule() = default ;
    TrainFeeCalculateRefundResponseBodyModule& operator=(const TrainFeeCalculateRefundResponseBodyModule &) = default ;
    TrainFeeCalculateRefundResponseBodyModule& operator=(TrainFeeCalculateRefundResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->distributeOrderId_ != nullptr
        && this->orderId_ != nullptr && this->refundTrainDetails_ != nullptr; };
    // distributeOrderId Field Functions 
    bool hasDistributeOrderId() const { return this->distributeOrderId_ != nullptr;};
    void deleteDistributeOrderId() { this->distributeOrderId_ = nullptr;};
    inline string distributeOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributeOrderId_, "") };
    inline TrainFeeCalculateRefundResponseBodyModule& setDistributeOrderId(string distributeOrderId) { DARABONBA_PTR_SET_VALUE(distributeOrderId_, distributeOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainFeeCalculateRefundResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // refundTrainDetails Field Functions 
    bool hasRefundTrainDetails() const { return this->refundTrainDetails_ != nullptr;};
    void deleteRefundTrainDetails() { this->refundTrainDetails_ = nullptr;};
    inline const vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails> & refundTrainDetails() const { DARABONBA_PTR_GET_CONST(refundTrainDetails_, vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails>) };
    inline vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails> refundTrainDetails() { DARABONBA_PTR_GET(refundTrainDetails_, vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails>) };
    inline TrainFeeCalculateRefundResponseBodyModule& setRefundTrainDetails(const vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails> & refundTrainDetails) { DARABONBA_PTR_SET_VALUE(refundTrainDetails_, refundTrainDetails) };
    inline TrainFeeCalculateRefundResponseBodyModule& setRefundTrainDetails(vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails> && refundTrainDetails) { DARABONBA_PTR_SET_RVALUE(refundTrainDetails_, refundTrainDetails) };


  protected:
    std::shared_ptr<string> distributeOrderId_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<vector<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetails>> refundTrainDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
