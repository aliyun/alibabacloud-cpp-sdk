// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLTYPERESPONSEBODYBILLTYPEDATABILLTYPEDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLTYPERESPONSEBODYBILLTYPEDATABILLTYPEDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem() = default ;
    DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem(const DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem &) = default ;
    DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem(DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem &&) = default ;
    DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem() = default ;
    DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& operator=(const DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem &) = default ;
    DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& operator=(DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem &&) = default ;
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
    inline DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnUserBillTypeResponseBodyBillTypeDataBillTypeDataItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The metering method. Valid values:
    // 
    // *   **hour_flow**: pay by hourly traffic
    // *   **day_bandwidth**: pay by daily bandwidth
    // *   **month_95**: pay by monthly 95th percentile
    // *   **month_avg_day_bandwidth**: pay by average daily peak bandwidth per month
    // *   **month_4th_day_bandwidth**: pay by 4th peak bandwidth per month
    // *   **month_avg_day_95**: pay by average daily 95th percentile per month
    // *   **month_95_night_half**: pay by 95th percentile (50% off during nighttime)
    // *   **hour_vas**: pay by value-added service per month
    // *   **quic_hour_count**: pay by QUIC request per hour
    // *   **hour_count**: pay by request per hour
    // *   **rtlog_count_day**: pay by the number of real-time logs per day
    std::shared_ptr<string> billType_ = nullptr;
    // The metering cycle.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The dimension. Valid values:
    // 
    // *   **flow**: network traffic and bandwidth
    // *   **vas**: value-added services (HTTPS and requests for dynamic content)
    // *   **websocket**: WebSocket
    // *   **quic**: QUIC requests
    // *   **rtlog2sls**: log entries delivered to Log Service in real time
    std::shared_ptr<string> dimension_ = nullptr;
    // The time when the metering method ends.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> product_ = nullptr;
    // The time when the metering method takes effect.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
