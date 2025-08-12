// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule() = default ;
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(const DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &&) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule() = default ;
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& operator=(const DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& operator=(DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &&) = default ;
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
    inline DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // trafficValue Field Functions 
    bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
    void deleteTrafficValue() { this->trafficValue_ = nullptr;};
    inline string trafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, "") };
    inline DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setTrafficValue(string trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total traffic. Unit: bytes.
    std::shared_ptr<string> trafficValue_ = nullptr;
    // The peak bandwidth. Unit: bit/s.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
