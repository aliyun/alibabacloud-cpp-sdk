// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINAPPLYREFUNDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINAPPLYREFUNDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainApplyRefundRequestRefundTrainInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainApplyRefundRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainApplyRefundRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_refund_id, outRefundId_);
      DARABONBA_PTR_TO_JSON(refund_train_infos, refundTrainInfos_);
    };
    friend void from_json(const Darabonba::Json& j, TrainApplyRefundRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_refund_id, outRefundId_);
      DARABONBA_PTR_FROM_JSON(refund_train_infos, refundTrainInfos_);
    };
    TrainApplyRefundRequest() = default ;
    TrainApplyRefundRequest(const TrainApplyRefundRequest &) = default ;
    TrainApplyRefundRequest(TrainApplyRefundRequest &&) = default ;
    TrainApplyRefundRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainApplyRefundRequest() = default ;
    TrainApplyRefundRequest& operator=(const TrainApplyRefundRequest &) = default ;
    TrainApplyRefundRequest& operator=(TrainApplyRefundRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->outOrderId_ != nullptr && this->outRefundId_ != nullptr && this->refundTrainInfos_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainApplyRefundRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainApplyRefundRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outRefundId Field Functions 
    bool hasOutRefundId() const { return this->outRefundId_ != nullptr;};
    void deleteOutRefundId() { this->outRefundId_ = nullptr;};
    inline string outRefundId() const { DARABONBA_PTR_GET_DEFAULT(outRefundId_, "") };
    inline TrainApplyRefundRequest& setOutRefundId(string outRefundId) { DARABONBA_PTR_SET_VALUE(outRefundId_, outRefundId) };


    // refundTrainInfos Field Functions 
    bool hasRefundTrainInfos() const { return this->refundTrainInfos_ != nullptr;};
    void deleteRefundTrainInfos() { this->refundTrainInfos_ = nullptr;};
    inline const vector<TrainApplyRefundRequestRefundTrainInfos> & refundTrainInfos() const { DARABONBA_PTR_GET_CONST(refundTrainInfos_, vector<TrainApplyRefundRequestRefundTrainInfos>) };
    inline vector<TrainApplyRefundRequestRefundTrainInfos> refundTrainInfos() { DARABONBA_PTR_GET(refundTrainInfos_, vector<TrainApplyRefundRequestRefundTrainInfos>) };
    inline TrainApplyRefundRequest& setRefundTrainInfos(const vector<TrainApplyRefundRequestRefundTrainInfos> & refundTrainInfos) { DARABONBA_PTR_SET_VALUE(refundTrainInfos_, refundTrainInfos) };
    inline TrainApplyRefundRequest& setRefundTrainInfos(vector<TrainApplyRefundRequestRefundTrainInfos> && refundTrainInfos) { DARABONBA_PTR_SET_RVALUE(refundTrainInfos_, refundTrainInfos) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outRefundId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<TrainApplyRefundRequestRefundTrainInfos>> refundTrainInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
