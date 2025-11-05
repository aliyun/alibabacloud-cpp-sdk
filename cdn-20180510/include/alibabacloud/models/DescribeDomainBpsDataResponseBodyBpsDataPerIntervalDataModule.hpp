// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_TO_JSON(HttpsDomesticValue, httpsDomesticValue_);
      DARABONBA_PTR_TO_JSON(HttpsOverseasValue, httpsOverseasValue_);
      DARABONBA_PTR_TO_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_TO_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_FROM_JSON(HttpsDomesticValue, httpsDomesticValue_);
      DARABONBA_PTR_FROM_JSON(HttpsOverseasValue, httpsOverseasValue_);
      DARABONBA_PTR_FROM_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_FROM_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(const DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domesticValue_ == nullptr
        && return this->httpsDomesticValue_ == nullptr && return this->httpsOverseasValue_ == nullptr && return this->httpsValue_ == nullptr && return this->overseasValue_ == nullptr && return this->timeStamp_ == nullptr
        && return this->value_ == nullptr; };
    // domesticValue Field Functions 
    bool hasDomesticValue() const { return this->domesticValue_ != nullptr;};
    void deleteDomesticValue() { this->domesticValue_ = nullptr;};
    inline string domesticValue() const { DARABONBA_PTR_GET_DEFAULT(domesticValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setDomesticValue(string domesticValue) { DARABONBA_PTR_SET_VALUE(domesticValue_, domesticValue) };


    // httpsDomesticValue Field Functions 
    bool hasHttpsDomesticValue() const { return this->httpsDomesticValue_ != nullptr;};
    void deleteHttpsDomesticValue() { this->httpsDomesticValue_ = nullptr;};
    inline string httpsDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(httpsDomesticValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setHttpsDomesticValue(string httpsDomesticValue) { DARABONBA_PTR_SET_VALUE(httpsDomesticValue_, httpsDomesticValue) };


    // httpsOverseasValue Field Functions 
    bool hasHttpsOverseasValue() const { return this->httpsOverseasValue_ != nullptr;};
    void deleteHttpsOverseasValue() { this->httpsOverseasValue_ = nullptr;};
    inline string httpsOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(httpsOverseasValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setHttpsOverseasValue(string httpsOverseasValue) { DARABONBA_PTR_SET_VALUE(httpsOverseasValue_, httpsOverseasValue) };


    // httpsValue Field Functions 
    bool hasHttpsValue() const { return this->httpsValue_ != nullptr;};
    void deleteHttpsValue() { this->httpsValue_ = nullptr;};
    inline string httpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setHttpsValue(string httpsValue) { DARABONBA_PTR_SET_VALUE(httpsValue_, httpsValue) };


    // overseasValue Field Functions 
    bool hasOverseasValue() const { return this->overseasValue_ != nullptr;};
    void deleteOverseasValue() { this->overseasValue_ = nullptr;};
    inline string overseasValue() const { DARABONBA_PTR_GET_DEFAULT(overseasValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setOverseasValue(string overseasValue) { DARABONBA_PTR_SET_VALUE(overseasValue_, overseasValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The bandwidth value in the Chinese mainland. When the bandwidth data is queried by ISP, this parameter is empty.
    std::shared_ptr<string> domesticValue_ = nullptr;
    // The bandwidth data for HTTPS requests in the Chinese mainland. When the bandwidth data is queried by ISP, this parameter is empty.
    std::shared_ptr<string> httpsDomesticValue_ = nullptr;
    // The bandwidth data for HTTPS requests in regions outside the Chinese mainland. When the bandwidth data is queried by ISP, this parameter is empty.
    std::shared_ptr<string> httpsOverseasValue_ = nullptr;
    // The bandwidth value for HTTPS requests. Unit: bit/s.
    std::shared_ptr<string> httpsValue_ = nullptr;
    // The bandwidth data in regions outside the Chinese mainland. When the bandwidth data is queried by ISP, this parameter is empty.
    std::shared_ptr<string> overseasValue_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
