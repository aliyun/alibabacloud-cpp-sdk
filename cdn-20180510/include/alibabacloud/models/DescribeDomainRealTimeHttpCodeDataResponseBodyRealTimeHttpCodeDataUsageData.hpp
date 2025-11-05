// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATAUSAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATAUSAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData() = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData(const DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData &) = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData(DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData &&) = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData() = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData& operator=(const DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData &) = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData& operator=(DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeStamp_ == nullptr
        && return this->value_ == nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue) };
    inline Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue value() { DARABONBA_PTR_GET(value_, Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue) };
    inline DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData& setValue(const Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData& setValue(Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The proportions of the HTTP status codes.
    std::shared_ptr<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
