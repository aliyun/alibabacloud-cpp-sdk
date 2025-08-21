// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINHITRATEDATARESPONSEBODYHITRATEINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINHITRATEDATARESPONSEBODYHITRATEINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule() = default ;
    DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule(const DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule &) = default ;
    DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule(DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule &&) = default ;
    DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule() = default ;
    DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule& operator=(const DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule &) = default ;
    DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule& operator=(DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpsValue_ != nullptr
        && this->timeStamp_ != nullptr && this->value_ != nullptr; };
    // httpsValue Field Functions 
    bool hasHttpsValue() const { return this->httpsValue_ != nullptr;};
    void deleteHttpsValue() { this->httpsValue_ = nullptr;};
    inline string httpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsValue_, "") };
    inline DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule& setHttpsValue(string httpsValue) { DARABONBA_PTR_SET_VALUE(httpsValue_, httpsValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The byte hit ratio of HTTPS requests.
    std::shared_ptr<string> httpsValue_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The byte hit ratio.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
