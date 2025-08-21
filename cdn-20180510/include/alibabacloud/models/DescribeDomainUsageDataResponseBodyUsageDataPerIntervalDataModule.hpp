// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATARESPONSEBODYUSAGEDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATARESPONSEBODYUSAGEDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(PeakTime, peakTime_);
      DARABONBA_PTR_TO_JSON(SpecialValue, specialValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(PeakTime, peakTime_);
      DARABONBA_PTR_FROM_JSON(SpecialValue, specialValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule() = default ;
    DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule(const DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule &) = default ;
    DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule(DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule &&) = default ;
    DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule() = default ;
    DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& operator=(const DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule &) = default ;
    DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& operator=(DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->peakTime_ != nullptr
        && this->specialValue_ != nullptr && this->timeStamp_ != nullptr && this->value_ != nullptr; };
    // peakTime Field Functions 
    bool hasPeakTime() const { return this->peakTime_ != nullptr;};
    void deletePeakTime() { this->peakTime_ = nullptr;};
    inline string peakTime() const { DARABONBA_PTR_GET_DEFAULT(peakTime_, "") };
    inline DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& setPeakTime(string peakTime) { DARABONBA_PTR_SET_VALUE(peakTime_, peakTime) };


    // specialValue Field Functions 
    bool hasSpecialValue() const { return this->specialValue_ != nullptr;};
    void deleteSpecialValue() { this->specialValue_ = nullptr;};
    inline string specialValue() const { DARABONBA_PTR_GET_DEFAULT(specialValue_, "") };
    inline DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& setSpecialValue(string specialValue) { DARABONBA_PTR_SET_VALUE(specialValue_, specialValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The time of the peak bandwidth value if the **Field** parameter in the request is set to **bps**. Otherwise, this parameter returns the same value as the **TimeStamp** parameter.
    std::shared_ptr<string> peakTime_ = nullptr;
    // The resource usage in a specific scenario.
    // 
    // > SpecialValue indicates the data usage in a specific scenario. If no special billable item is specified, ignore this parameter.
    std::shared_ptr<string> specialValue_ = nullptr;
    // The timestamp of the data returned.
    // 
    // > **TimeStamp** indicates the timestamp of the data returned at each interval.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The amount of resource usage.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
