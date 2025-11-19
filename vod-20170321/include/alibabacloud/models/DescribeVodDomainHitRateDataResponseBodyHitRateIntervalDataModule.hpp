// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINHITRATEDATARESPONSEBODYHITRATEINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINHITRATEDATARESPONSEBODYHITRATEINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule() = default ;
    DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule(const DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule &) = default ;
    DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule(DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule &&) = default ;
    DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule() = default ;
    DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule& operator=(const DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule &) = default ;
    DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule& operator=(DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->httpsValue_ == nullptr
        && return this->timeStamp_ == nullptr && return this->value_ == nullptr; };
    // httpsValue Field Functions 
    bool hasHttpsValue() const { return this->httpsValue_ != nullptr;};
    void deleteHttpsValue() { this->httpsValue_ = nullptr;};
    inline string httpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsValue_, "") };
    inline DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule& setHttpsValue(string httpsValue) { DARABONBA_PTR_SET_VALUE(httpsValue_, httpsValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The HTTPS byte hit rate.
    std::shared_ptr<string> httpsValue_ = nullptr;
    // The timestamp of the data returned. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total byte hit rate.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
