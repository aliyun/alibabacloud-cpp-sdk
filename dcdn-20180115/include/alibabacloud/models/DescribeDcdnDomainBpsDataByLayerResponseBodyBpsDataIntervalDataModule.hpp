// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicTrafficValue, dynamicTrafficValue_);
      DARABONBA_PTR_TO_JSON(DynamicValue, dynamicValue_);
      DARABONBA_PTR_TO_JSON(StaticTrafficValue, staticTrafficValue_);
      DARABONBA_PTR_TO_JSON(StaticValue, staticValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicTrafficValue, dynamicTrafficValue_);
      DARABONBA_PTR_FROM_JSON(DynamicValue, dynamicValue_);
      DARABONBA_PTR_FROM_JSON(StaticTrafficValue, staticTrafficValue_);
      DARABONBA_PTR_FROM_JSON(StaticValue, staticValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule() = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(const DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &) = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &&) = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule() = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& operator=(const DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &) = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& operator=(DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicTrafficValue_ != nullptr
        && this->dynamicValue_ != nullptr && this->staticTrafficValue_ != nullptr && this->staticValue_ != nullptr && this->timeStamp_ != nullptr && this->trafficValue_ != nullptr
        && this->value_ != nullptr; };
    // dynamicTrafficValue Field Functions 
    bool hasDynamicTrafficValue() const { return this->dynamicTrafficValue_ != nullptr;};
    void deleteDynamicTrafficValue() { this->dynamicTrafficValue_ = nullptr;};
    inline string dynamicTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(dynamicTrafficValue_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setDynamicTrafficValue(string dynamicTrafficValue) { DARABONBA_PTR_SET_VALUE(dynamicTrafficValue_, dynamicTrafficValue) };


    // dynamicValue Field Functions 
    bool hasDynamicValue() const { return this->dynamicValue_ != nullptr;};
    void deleteDynamicValue() { this->dynamicValue_ = nullptr;};
    inline string dynamicValue() const { DARABONBA_PTR_GET_DEFAULT(dynamicValue_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setDynamicValue(string dynamicValue) { DARABONBA_PTR_SET_VALUE(dynamicValue_, dynamicValue) };


    // staticTrafficValue Field Functions 
    bool hasStaticTrafficValue() const { return this->staticTrafficValue_ != nullptr;};
    void deleteStaticTrafficValue() { this->staticTrafficValue_ = nullptr;};
    inline string staticTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(staticTrafficValue_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setStaticTrafficValue(string staticTrafficValue) { DARABONBA_PTR_SET_VALUE(staticTrafficValue_, staticTrafficValue) };


    // staticValue Field Functions 
    bool hasStaticValue() const { return this->staticValue_ != nullptr;};
    void deleteStaticValue() { this->staticValue_ = nullptr;};
    inline string staticValue() const { DARABONBA_PTR_GET_DEFAULT(staticValue_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setStaticValue(string staticValue) { DARABONBA_PTR_SET_VALUE(staticValue_, staticValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // trafficValue Field Functions 
    bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
    void deleteTrafficValue() { this->trafficValue_ = nullptr;};
    inline string trafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setTrafficValue(string trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The traffic that is used to deliver dynamic content. Unit: bytes.
    std::shared_ptr<string> dynamicTrafficValue_ = nullptr;
    // The bandwidth that is used to deliver dynamic content. Unit: bit/s.
    std::shared_ptr<string> dynamicValue_ = nullptr;
    // The traffic that is used to deliver static content. Unit: bytes.
    std::shared_ptr<string> staticTrafficValue_ = nullptr;
    // The bandwidth that is used to deliver static content. Unit: bit/s.
    std::shared_ptr<string> staticValue_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total traffic. Unit: bytes.
    std::shared_ptr<string> trafficValue_ = nullptr;
    // The total bandwidth. Unit: bit/s.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
