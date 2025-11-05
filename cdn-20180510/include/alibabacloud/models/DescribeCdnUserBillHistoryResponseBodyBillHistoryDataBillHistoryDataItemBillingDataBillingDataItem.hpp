// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATABILLHISTORYDATAITEMBILLINGDATABILLINGDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLHISTORYRESPONSEBODYBILLHISTORYDATABILLHISTORYDATAITEMBILLINGDATABILLINGDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CdnRegion, cdnRegion_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Flow, flow_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CdnRegion, cdnRegion_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Flow, flow_);
    };
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem() = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem(const DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem &) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem(DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem &&) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem() = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem& operator=(const DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem &) = default ;
    DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem& operator=(DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->cdnRegion_ == nullptr && return this->chargeType_ == nullptr && return this->count_ == nullptr && return this->flow_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline float bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0.0) };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem& setBandwidth(float bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cdnRegion Field Functions 
    bool hasCdnRegion() const { return this->cdnRegion_ != nullptr;};
    void deleteCdnRegion() { this->cdnRegion_ = nullptr;};
    inline string cdnRegion() const { DARABONBA_PTR_GET_DEFAULT(cdnRegion_, "") };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem& setCdnRegion(string cdnRegion) { DARABONBA_PTR_SET_VALUE(cdnRegion_, cdnRegion) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline float count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0.0) };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem& setCount(float count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // flow Field Functions 
    bool hasFlow() const { return this->flow_ != nullptr;};
    void deleteFlow() { this->flow_ = nullptr;};
    inline float flow() const { DARABONBA_PTR_GET_DEFAULT(flow_, 0.0) };
    inline DescribeCdnUserBillHistoryResponseBodyBillHistoryDataBillHistoryDataItemBillingDataBillingDataItem& setFlow(float flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


  protected:
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<float> bandwidth_ = nullptr;
    // The billable region. Valid values:
    // 
    // *   **CN**: Chinese mainland
    // *   **OverSeas**: outside the Chinese mainland
    // *   **AP1**: Asia Pacific 1
    // *   **AP2**: Asia Pacific 2
    // *   **AP3**: Asia Pacific 3
    // *   **NA**: North America
    // *   **SA**: South America
    // *   **EU**: Europe
    // *   **MEAA**: Middle East and Africa
    std::shared_ptr<string> cdnRegion_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   **StaticHttp**: static HTTP requests
    // *   **DynamicHttp**: dynamic HTTP requests
    // *   **DynamicHttps**: dynamic HTTPS requests
    std::shared_ptr<string> chargeType_ = nullptr;
    // The number of requests.
    std::shared_ptr<float> count_ = nullptr;
    // The amount of network traffic. Unit: bytes.
    std::shared_ptr<float> flow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
