// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSDATABYLAYERRESPONSEBODYQPSDATAINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSDATABYLAYERRESPONSEBODYQPSDATAINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(AccDomesticValue, accDomesticValue_);
      DARABONBA_PTR_TO_JSON(AccOverseasValue, accOverseasValue_);
      DARABONBA_PTR_TO_JSON(AccValue, accValue_);
      DARABONBA_PTR_TO_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_TO_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(AccDomesticValue, accDomesticValue_);
      DARABONBA_PTR_FROM_JSON(AccOverseasValue, accOverseasValue_);
      DARABONBA_PTR_FROM_JSON(AccValue, accValue_);
      DARABONBA_PTR_FROM_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_FROM_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule() = default ;
    DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule(const DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule &) = default ;
    DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule(DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule &&) = default ;
    DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule() = default ;
    DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& operator=(const DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule &) = default ;
    DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& operator=(DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accDomesticValue_ == nullptr
        && return this->accOverseasValue_ == nullptr && return this->accValue_ == nullptr && return this->domesticValue_ == nullptr && return this->overseasValue_ == nullptr && return this->timeStamp_ == nullptr
        && return this->value_ == nullptr; };
    // accDomesticValue Field Functions 
    bool hasAccDomesticValue() const { return this->accDomesticValue_ != nullptr;};
    void deleteAccDomesticValue() { this->accDomesticValue_ = nullptr;};
    inline string accDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(accDomesticValue_, "") };
    inline DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& setAccDomesticValue(string accDomesticValue) { DARABONBA_PTR_SET_VALUE(accDomesticValue_, accDomesticValue) };


    // accOverseasValue Field Functions 
    bool hasAccOverseasValue() const { return this->accOverseasValue_ != nullptr;};
    void deleteAccOverseasValue() { this->accOverseasValue_ = nullptr;};
    inline string accOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(accOverseasValue_, "") };
    inline DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& setAccOverseasValue(string accOverseasValue) { DARABONBA_PTR_SET_VALUE(accOverseasValue_, accOverseasValue) };


    // accValue Field Functions 
    bool hasAccValue() const { return this->accValue_ != nullptr;};
    void deleteAccValue() { this->accValue_ = nullptr;};
    inline string accValue() const { DARABONBA_PTR_GET_DEFAULT(accValue_, "") };
    inline DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& setAccValue(string accValue) { DARABONBA_PTR_SET_VALUE(accValue_, accValue) };


    // domesticValue Field Functions 
    bool hasDomesticValue() const { return this->domesticValue_ != nullptr;};
    void deleteDomesticValue() { this->domesticValue_ = nullptr;};
    inline string domesticValue() const { DARABONBA_PTR_GET_DEFAULT(domesticValue_, "") };
    inline DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& setDomesticValue(string domesticValue) { DARABONBA_PTR_SET_VALUE(domesticValue_, domesticValue) };


    // overseasValue Field Functions 
    bool hasOverseasValue() const { return this->overseasValue_ != nullptr;};
    void deleteOverseasValue() { this->overseasValue_ = nullptr;};
    inline string overseasValue() const { DARABONBA_PTR_GET_DEFAULT(overseasValue_, "") };
    inline DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& setOverseasValue(string overseasValue) { DARABONBA_PTR_SET_VALUE(overseasValue_, overseasValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The number of requests in the Chinese mainland.
    std::shared_ptr<string> accDomesticValue_ = nullptr;
    // The number of requests outside the Chinese mainland.
    std::shared_ptr<string> accOverseasValue_ = nullptr;
    // The total number of requests.
    std::shared_ptr<string> accValue_ = nullptr;
    // The number of queries per second in the Chinese mainland.
    std::shared_ptr<string> domesticValue_ = nullptr;
    // The number of queries per second outside the Chinese mainland.
    std::shared_ptr<string> overseasValue_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total number of queries per second.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
