// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainFeeCalculateRefundRequestRefundTrainInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateRefundRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateRefundRequest& obj) { 
      DARABONBA_PTR_TO_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(refund_train_infos, refundTrainInfos_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateRefundRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(refund_train_infos, refundTrainInfos_);
    };
    TrainFeeCalculateRefundRequest() = default ;
    TrainFeeCalculateRefundRequest(const TrainFeeCalculateRefundRequest &) = default ;
    TrainFeeCalculateRefundRequest(TrainFeeCalculateRefundRequest &&) = default ;
    TrainFeeCalculateRefundRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateRefundRequest() = default ;
    TrainFeeCalculateRefundRequest& operator=(const TrainFeeCalculateRefundRequest &) = default ;
    TrainFeeCalculateRefundRequest& operator=(TrainFeeCalculateRefundRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->distributeOrderId_ != nullptr
        && this->orderId_ != nullptr && this->refundTrainInfos_ != nullptr; };
    // distributeOrderId Field Functions 
    bool hasDistributeOrderId() const { return this->distributeOrderId_ != nullptr;};
    void deleteDistributeOrderId() { this->distributeOrderId_ = nullptr;};
    inline string distributeOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributeOrderId_, "") };
    inline TrainFeeCalculateRefundRequest& setDistributeOrderId(string distributeOrderId) { DARABONBA_PTR_SET_VALUE(distributeOrderId_, distributeOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainFeeCalculateRefundRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // refundTrainInfos Field Functions 
    bool hasRefundTrainInfos() const { return this->refundTrainInfos_ != nullptr;};
    void deleteRefundTrainInfos() { this->refundTrainInfos_ = nullptr;};
    inline const vector<TrainFeeCalculateRefundRequestRefundTrainInfos> & refundTrainInfos() const { DARABONBA_PTR_GET_CONST(refundTrainInfos_, vector<TrainFeeCalculateRefundRequestRefundTrainInfos>) };
    inline vector<TrainFeeCalculateRefundRequestRefundTrainInfos> refundTrainInfos() { DARABONBA_PTR_GET(refundTrainInfos_, vector<TrainFeeCalculateRefundRequestRefundTrainInfos>) };
    inline TrainFeeCalculateRefundRequest& setRefundTrainInfos(const vector<TrainFeeCalculateRefundRequestRefundTrainInfos> & refundTrainInfos) { DARABONBA_PTR_SET_VALUE(refundTrainInfos_, refundTrainInfos) };
    inline TrainFeeCalculateRefundRequest& setRefundTrainInfos(vector<TrainFeeCalculateRefundRequestRefundTrainInfos> && refundTrainInfos) { DARABONBA_PTR_SET_RVALUE(refundTrainInfos_, refundTrainInfos) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> distributeOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<TrainFeeCalculateRefundRequestRefundTrainInfos>> refundTrainInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
