// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTPRICEHISTORYRESPONSEBODYSPOTPRICESSPOTPRICETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTPRICEHISTORYRESPONSEBODYSPOTPRICESSPOTPRICETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OriginPrice, originPrice_);
      DARABONBA_PTR_TO_JSON(SpotPrice, spotPrice_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OriginPrice, originPrice_);
      DARABONBA_PTR_FROM_JSON(SpotPrice, spotPrice_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType() = default ;
    DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType(const DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType &) = default ;
    DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType(DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType &&) = default ;
    DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType() = default ;
    DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& operator=(const DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType &) = default ;
    DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& operator=(DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->ioOptimized_ != nullptr && this->networkType_ != nullptr && this->originPrice_ != nullptr && this->spotPrice_ != nullptr && this->timestamp_ != nullptr
        && this->zoneId_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // originPrice Field Functions 
    bool hasOriginPrice() const { return this->originPrice_ != nullptr;};
    void deleteOriginPrice() { this->originPrice_ = nullptr;};
    inline float originPrice() const { DARABONBA_PTR_GET_DEFAULT(originPrice_, 0.0) };
    inline DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& setOriginPrice(float originPrice) { DARABONBA_PTR_SET_VALUE(originPrice_, originPrice) };


    // spotPrice Field Functions 
    bool hasSpotPrice() const { return this->spotPrice_ != nullptr;};
    void deleteSpotPrice() { this->spotPrice_ = nullptr;};
    inline float spotPrice() const { DARABONBA_PTR_GET_DEFAULT(spotPrice_, 0.0) };
    inline DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& setSpotPrice(float spotPrice) { DARABONBA_PTR_SET_VALUE(spotPrice_, spotPrice) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The instance type of the spot instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Details about the price history of the spot instance.
    std::shared_ptr<string> ioOptimized_ = nullptr;
    // Queries the price history of a spot instance within the last 30 days.
    std::shared_ptr<string> networkType_ = nullptr;
    // The price for a pay-as-you-go instance that has the same configuration as the specified spot instance.
    std::shared_ptr<float> originPrice_ = nullptr;
    // The price for a pay-as-you-go instance that has the same configurations as the spot instance.
    std::shared_ptr<float> spotPrice_ = nullptr;
    // The currency unit of the price.
    // 
    // Alibaba Cloud China site (aliyun.com): CNY.
    // 
    // Alibaba Cloud International site (alibabacloud.com): USD.
    std::shared_ptr<string> timestamp_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
