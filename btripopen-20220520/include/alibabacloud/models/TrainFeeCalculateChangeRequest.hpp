// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainFeeCalculateChangeRequestChangeTrainDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateChangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateChangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(change_train_details, changeTrainDetails_);
      DARABONBA_PTR_TO_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateChangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(change_train_details, changeTrainDetails_);
      DARABONBA_PTR_FROM_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
    };
    TrainFeeCalculateChangeRequest() = default ;
    TrainFeeCalculateChangeRequest(const TrainFeeCalculateChangeRequest &) = default ;
    TrainFeeCalculateChangeRequest(TrainFeeCalculateChangeRequest &&) = default ;
    TrainFeeCalculateChangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateChangeRequest() = default ;
    TrainFeeCalculateChangeRequest& operator=(const TrainFeeCalculateChangeRequest &) = default ;
    TrainFeeCalculateChangeRequest& operator=(TrainFeeCalculateChangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeTrainDetails_ != nullptr
        && this->distributeOrderId_ != nullptr && this->orderId_ != nullptr; };
    // changeTrainDetails Field Functions 
    bool hasChangeTrainDetails() const { return this->changeTrainDetails_ != nullptr;};
    void deleteChangeTrainDetails() { this->changeTrainDetails_ = nullptr;};
    inline const vector<TrainFeeCalculateChangeRequestChangeTrainDetails> & changeTrainDetails() const { DARABONBA_PTR_GET_CONST(changeTrainDetails_, vector<TrainFeeCalculateChangeRequestChangeTrainDetails>) };
    inline vector<TrainFeeCalculateChangeRequestChangeTrainDetails> changeTrainDetails() { DARABONBA_PTR_GET(changeTrainDetails_, vector<TrainFeeCalculateChangeRequestChangeTrainDetails>) };
    inline TrainFeeCalculateChangeRequest& setChangeTrainDetails(const vector<TrainFeeCalculateChangeRequestChangeTrainDetails> & changeTrainDetails) { DARABONBA_PTR_SET_VALUE(changeTrainDetails_, changeTrainDetails) };
    inline TrainFeeCalculateChangeRequest& setChangeTrainDetails(vector<TrainFeeCalculateChangeRequestChangeTrainDetails> && changeTrainDetails) { DARABONBA_PTR_SET_RVALUE(changeTrainDetails_, changeTrainDetails) };


    // distributeOrderId Field Functions 
    bool hasDistributeOrderId() const { return this->distributeOrderId_ != nullptr;};
    void deleteDistributeOrderId() { this->distributeOrderId_ = nullptr;};
    inline string distributeOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributeOrderId_, "") };
    inline TrainFeeCalculateChangeRequest& setDistributeOrderId(string distributeOrderId) { DARABONBA_PTR_SET_VALUE(distributeOrderId_, distributeOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainFeeCalculateChangeRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<TrainFeeCalculateChangeRequestChangeTrainDetails>> changeTrainDetails_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> distributeOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
