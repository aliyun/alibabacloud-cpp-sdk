// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINUSAGEDATARESPONSEBODYUSAGEDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINUSAGEDATARESPONSEBODYUSAGEDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule() = default ;
    DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule(const DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule &) = default ;
    DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule(DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule &&) = default ;
    DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule() = default ;
    DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& operator=(const DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule &) = default ;
    DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& operator=(DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule &&) = default ;
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
    inline DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The timestamp of the returned data. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The traffic or bandwidth data. Unit: bit/s.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
