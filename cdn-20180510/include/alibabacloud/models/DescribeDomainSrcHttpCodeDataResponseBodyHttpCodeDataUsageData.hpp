// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData() = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData(const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData &) = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData(DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData &&) = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData() = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData& operator=(const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData &) = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData& operator=(DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData &&) = default ;
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
    inline DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue) };
    inline Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue value() { DARABONBA_PTR_GET(value_, Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue) };
    inline DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData& setValue(const Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData& setValue(Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The proportions of the HTTP status codes.
    std::shared_ptr<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
