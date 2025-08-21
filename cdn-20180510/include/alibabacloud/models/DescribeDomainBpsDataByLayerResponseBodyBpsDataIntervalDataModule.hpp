// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule() = default ;
    DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(const DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &) = default ;
    DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &&) = default ;
    DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule() = default ;
    DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& operator=(const DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &) = default ;
    DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& operator=(DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timeStamp_ != nullptr
        && this->trafficValue_ != nullptr && this->value_ != nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // trafficValue Field Functions 
    bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
    void deleteTrafficValue() { this->trafficValue_ = nullptr;};
    inline string trafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, "") };
    inline DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setTrafficValue(string trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total amount of network traffic. Unit: bytes.
    std::shared_ptr<string> trafficValue_ = nullptr;
    // The peak bandwidth value. Unit: bit/s.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
