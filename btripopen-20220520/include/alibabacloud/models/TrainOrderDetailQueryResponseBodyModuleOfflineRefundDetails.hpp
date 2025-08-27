// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEOFFLINEREFUNDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEOFFLINEREFUNDDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails& obj) { 
      DARABONBA_PTR_TO_JSON(offline_refund_id, offlineRefundId_);
      DARABONBA_PTR_TO_JSON(offline_refund_infos, offlineRefundInfos_);
      DARABONBA_PTR_TO_JSON(offline_refund_type, offlineRefundType_);
      DARABONBA_PTR_TO_JSON(refund_total_price, refundTotalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(offline_refund_id, offlineRefundId_);
      DARABONBA_PTR_FROM_JSON(offline_refund_infos, offlineRefundInfos_);
      DARABONBA_PTR_FROM_JSON(offline_refund_type, offlineRefundType_);
      DARABONBA_PTR_FROM_JSON(refund_total_price, refundTotalPrice_);
    };
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails() = default ;
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails(const TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails &) = default ;
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails(TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails() = default ;
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails& operator=(const TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails &) = default ;
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails& operator=(TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offlineRefundId_ != nullptr
        && this->offlineRefundInfos_ != nullptr && this->offlineRefundType_ != nullptr && this->refundTotalPrice_ != nullptr; };
    // offlineRefundId Field Functions 
    bool hasOfflineRefundId() const { return this->offlineRefundId_ != nullptr;};
    void deleteOfflineRefundId() { this->offlineRefundId_ = nullptr;};
    inline string offlineRefundId() const { DARABONBA_PTR_GET_DEFAULT(offlineRefundId_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails& setOfflineRefundId(string offlineRefundId) { DARABONBA_PTR_SET_VALUE(offlineRefundId_, offlineRefundId) };


    // offlineRefundInfos Field Functions 
    bool hasOfflineRefundInfos() const { return this->offlineRefundInfos_ != nullptr;};
    void deleteOfflineRefundInfos() { this->offlineRefundInfos_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos> & offlineRefundInfos() const { DARABONBA_PTR_GET_CONST(offlineRefundInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos> offlineRefundInfos() { DARABONBA_PTR_GET(offlineRefundInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos>) };
    inline TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails& setOfflineRefundInfos(const vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos> & offlineRefundInfos) { DARABONBA_PTR_SET_VALUE(offlineRefundInfos_, offlineRefundInfos) };
    inline TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails& setOfflineRefundInfos(vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos> && offlineRefundInfos) { DARABONBA_PTR_SET_RVALUE(offlineRefundInfos_, offlineRefundInfos) };


    // offlineRefundType Field Functions 
    bool hasOfflineRefundType() const { return this->offlineRefundType_ != nullptr;};
    void deleteOfflineRefundType() { this->offlineRefundType_ = nullptr;};
    inline string offlineRefundType() const { DARABONBA_PTR_GET_DEFAULT(offlineRefundType_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails& setOfflineRefundType(string offlineRefundType) { DARABONBA_PTR_SET_VALUE(offlineRefundType_, offlineRefundType) };


    // refundTotalPrice Field Functions 
    bool hasRefundTotalPrice() const { return this->refundTotalPrice_ != nullptr;};
    void deleteRefundTotalPrice() { this->refundTotalPrice_ = nullptr;};
    inline int64_t refundTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(refundTotalPrice_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails& setRefundTotalPrice(int64_t refundTotalPrice) { DARABONBA_PTR_SET_VALUE(refundTotalPrice_, refundTotalPrice) };


  protected:
    std::shared_ptr<string> offlineRefundId_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos>> offlineRefundInfos_ = nullptr;
    std::shared_ptr<string> offlineRefundType_ = nullptr;
    std::shared_ptr<int64_t> refundTotalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
