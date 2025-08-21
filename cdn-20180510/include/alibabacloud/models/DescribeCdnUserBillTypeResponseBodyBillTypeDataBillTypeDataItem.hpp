// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLTYPERESPONSEBODYBILLTYPEDATABILLTYPEDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLTYPERESPONSEBODYBILLTYPEDATABILLTYPEDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem() = default ;
    DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem(const DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem &) = default ;
    DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem(DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem &&) = default ;
    DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem() = default ;
    DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& operator=(const DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem &) = default ;
    DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& operator=(DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billType_ != nullptr
        && this->billingCycle_ != nullptr && this->dimension_ != nullptr && this->endTime_ != nullptr && this->product_ != nullptr && this->startTime_ != nullptr; };
    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string billType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The metering method.
    // 
    // > If the metering method is suffixed with \\*\\*_overseas\\*\\*, the billable region is outside the Chinese mainland. For example, "BillType": "month_avg_day_bandwidth_overseas" indicates that the metering method is pay by average daily peak bandwidth per month in a billable region outside the Chinese mainland.
    // 
    // Valid values:
    // 
    // *   hour_flow: pay by hourly data transfer
    // *   day_bandwidth: pay by daily bandwidth
    // *   month_95: pay by monthly 95th percentile bandwidth
    // *   month_avg_day_bandwidth: pay by average daily peak bandwidth per month
    // *   month_4th_day_bandwidth: pay by monthly 4th peak bandwidth
    // *   month_avg_day_95: pay by average daily 95th percentile bandwidth per month
    // *   month_95_night_half: pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00
    // *   hour_vas: pay by value-added services per hour
    // *   quic_hour_count: pay by hourly QUIC requests
    // *   day_count: pay by daily requests
    // *   hour_count: pay by hourly requests
    // *   day_95: pay by daily 95th percentile bandwidth
    std::shared_ptr<string> billType_ = nullptr;
    // The billing cycle.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The dimension. Valid values:
    // 
    // *   flow: traffic and bandwidth
    // *   vas: value-added services (HTTPS and requests for dynamic content)
    // *   quic: the number of QUIC requests
    // *   websocket: the WebSocket communications protocol
    // *   rtlog2sls: log entries delivered to Log Service in real time
    // *   stationflow: traffic over the internal network
    std::shared_ptr<string> dimension_ = nullptr;
    // The time when the metering method ended.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the product.
    std::shared_ptr<string> product_ = nullptr;
    // The time when the metering method started.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
