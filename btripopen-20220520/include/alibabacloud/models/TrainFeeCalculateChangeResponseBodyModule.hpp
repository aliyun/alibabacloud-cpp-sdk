// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateChangeResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateChangeResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(change_train_details, changeTrainDetails_);
      DARABONBA_PTR_TO_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateChangeResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(change_train_details, changeTrainDetails_);
      DARABONBA_PTR_FROM_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
    };
    TrainFeeCalculateChangeResponseBodyModule() = default ;
    TrainFeeCalculateChangeResponseBodyModule(const TrainFeeCalculateChangeResponseBodyModule &) = default ;
    TrainFeeCalculateChangeResponseBodyModule(TrainFeeCalculateChangeResponseBodyModule &&) = default ;
    TrainFeeCalculateChangeResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateChangeResponseBodyModule() = default ;
    TrainFeeCalculateChangeResponseBodyModule& operator=(const TrainFeeCalculateChangeResponseBodyModule &) = default ;
    TrainFeeCalculateChangeResponseBodyModule& operator=(TrainFeeCalculateChangeResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeTrainDetails_ != nullptr
        && this->distributeOrderId_ != nullptr && this->orderId_ != nullptr; };
    // changeTrainDetails Field Functions 
    bool hasChangeTrainDetails() const { return this->changeTrainDetails_ != nullptr;};
    void deleteChangeTrainDetails() { this->changeTrainDetails_ = nullptr;};
    inline const vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails> & changeTrainDetails() const { DARABONBA_PTR_GET_CONST(changeTrainDetails_, vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails>) };
    inline vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails> changeTrainDetails() { DARABONBA_PTR_GET(changeTrainDetails_, vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails>) };
    inline TrainFeeCalculateChangeResponseBodyModule& setChangeTrainDetails(const vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails> & changeTrainDetails) { DARABONBA_PTR_SET_VALUE(changeTrainDetails_, changeTrainDetails) };
    inline TrainFeeCalculateChangeResponseBodyModule& setChangeTrainDetails(vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails> && changeTrainDetails) { DARABONBA_PTR_SET_RVALUE(changeTrainDetails_, changeTrainDetails) };


    // distributeOrderId Field Functions 
    bool hasDistributeOrderId() const { return this->distributeOrderId_ != nullptr;};
    void deleteDistributeOrderId() { this->distributeOrderId_ = nullptr;};
    inline string distributeOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributeOrderId_, "") };
    inline TrainFeeCalculateChangeResponseBodyModule& setDistributeOrderId(string distributeOrderId) { DARABONBA_PTR_SET_VALUE(distributeOrderId_, distributeOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainFeeCalculateChangeResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    std::shared_ptr<vector<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetails>> changeTrainDetails_ = nullptr;
    std::shared_ptr<string> distributeOrderId_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
