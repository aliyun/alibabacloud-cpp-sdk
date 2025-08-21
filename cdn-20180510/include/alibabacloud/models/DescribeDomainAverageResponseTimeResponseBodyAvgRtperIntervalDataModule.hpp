// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINAVERAGERESPONSETIMERESPONSEBODYAVGRTPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINAVERAGERESPONSETIMERESPONSEBODYAVGRTPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule() = default ;
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule(const DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule &) = default ;
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule(DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule &&) = default ;
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule() = default ;
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule& operator=(const DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule &) = default ;
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule& operator=(DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule &&) = default ;
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
    inline DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The average response time.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
