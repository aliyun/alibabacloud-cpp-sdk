// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATARESPONSEBODYUSAGEDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATARESPONSEBODYUSAGEDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& obj) { 
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
    virtual bool empty() const override { this->timeStamp_ != nullptr
        && this->value_ != nullptr; };
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
    // The timestamp of the returned data. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The amount of resource usage.
    // 
    // *   If the value of the Field parameter is traf or req_traf, the returned data is measured in bytes.
    // *   If the value of the Field parameter is bps or req_bps, the returned data is measured in bit/s.
    // *   If the value of the Field parameter is acc, the returned data is measured by count.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
