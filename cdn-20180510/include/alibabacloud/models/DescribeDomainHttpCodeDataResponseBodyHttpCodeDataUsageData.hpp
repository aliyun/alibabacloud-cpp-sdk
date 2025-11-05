// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData() = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData(const DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData &) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData(DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData &&) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData() = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& operator=(const DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData &) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& operator=(DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData &&) = default ;
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
    inline DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue) };
    inline Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue value() { DARABONBA_PTR_GET(value_, Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue) };
    inline DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& setValue(const Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& setValue(Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The information about the HTTP status codes.
    std::shared_ptr<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
