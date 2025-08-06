// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINUVDATARESPONSEBODYUVDATAINTERVALUVDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINUVDATARESPONSEBODYUVDATAINTERVALUVDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval() = default ;
    DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval(const DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval &) = default ;
    DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval(DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval &&) = default ;
    DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval() = default ;
    DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval& operator=(const DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval &) = default ;
    DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval& operator=(DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval &&) = default ;
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
    inline DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVodDomainUvDataResponseBodyUvDataIntervalUvDataInterval& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
