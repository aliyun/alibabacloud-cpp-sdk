// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData() = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData(const DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData &) = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData(DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData &&) = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData() = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& operator=(const DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData &) = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& operator=(DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData &&) = default ;
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
    inline DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue) };
    inline Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue value() { DARABONBA_PTR_GET(value_, Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue) };
    inline DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& setValue(const Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData& setValue(Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
