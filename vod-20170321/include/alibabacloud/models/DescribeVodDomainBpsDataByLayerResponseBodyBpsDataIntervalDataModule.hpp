// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule() = default ;
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(const DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &) = default ;
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &&) = default ;
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule() = default ;
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& operator=(const DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &) = default ;
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& operator=(DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeStamp_ == nullptr
        && return this->trafficValue_ == nullptr && return this->value_ == nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // trafficValue Field Functions 
    bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
    void deleteTrafficValue() { this->trafficValue_ = nullptr;};
    inline int64_t trafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, 0L) };
    inline DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setTrafficValue(int64_t trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The timestamp of the data returned. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total traffic. Unit: bytes.
    std::shared_ptr<int64_t> trafficValue_ = nullptr;
    // The peak bandwidth. Unit: bit/s.
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
