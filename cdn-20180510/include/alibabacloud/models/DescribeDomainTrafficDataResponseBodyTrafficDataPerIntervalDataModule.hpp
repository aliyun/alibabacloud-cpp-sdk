// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_TO_JSON(HttpsDomesticValue, httpsDomesticValue_);
      DARABONBA_PTR_TO_JSON(HttpsOverseasValue, httpsOverseasValue_);
      DARABONBA_PTR_TO_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_TO_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_FROM_JSON(HttpsDomesticValue, httpsDomesticValue_);
      DARABONBA_PTR_FROM_JSON(HttpsOverseasValue, httpsOverseasValue_);
      DARABONBA_PTR_FROM_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_FROM_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(const DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domesticValue_ != nullptr
        && this->httpsDomesticValue_ != nullptr && this->httpsOverseasValue_ != nullptr && this->httpsValue_ != nullptr && this->overseasValue_ != nullptr && this->timeStamp_ != nullptr
        && this->value_ != nullptr; };
    // domesticValue Field Functions 
    bool hasDomesticValue() const { return this->domesticValue_ != nullptr;};
    void deleteDomesticValue() { this->domesticValue_ = nullptr;};
    inline string domesticValue() const { DARABONBA_PTR_GET_DEFAULT(domesticValue_, "") };
    inline DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setDomesticValue(string domesticValue) { DARABONBA_PTR_SET_VALUE(domesticValue_, domesticValue) };


    // httpsDomesticValue Field Functions 
    bool hasHttpsDomesticValue() const { return this->httpsDomesticValue_ != nullptr;};
    void deleteHttpsDomesticValue() { this->httpsDomesticValue_ = nullptr;};
    inline string httpsDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(httpsDomesticValue_, "") };
    inline DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setHttpsDomesticValue(string httpsDomesticValue) { DARABONBA_PTR_SET_VALUE(httpsDomesticValue_, httpsDomesticValue) };


    // httpsOverseasValue Field Functions 
    bool hasHttpsOverseasValue() const { return this->httpsOverseasValue_ != nullptr;};
    void deleteHttpsOverseasValue() { this->httpsOverseasValue_ = nullptr;};
    inline string httpsOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(httpsOverseasValue_, "") };
    inline DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setHttpsOverseasValue(string httpsOverseasValue) { DARABONBA_PTR_SET_VALUE(httpsOverseasValue_, httpsOverseasValue) };


    // httpsValue Field Functions 
    bool hasHttpsValue() const { return this->httpsValue_ != nullptr;};
    void deleteHttpsValue() { this->httpsValue_ = nullptr;};
    inline string httpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsValue_, "") };
    inline DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setHttpsValue(string httpsValue) { DARABONBA_PTR_SET_VALUE(httpsValue_, httpsValue) };


    // overseasValue Field Functions 
    bool hasOverseasValue() const { return this->overseasValue_ != nullptr;};
    void deleteOverseasValue() { this->overseasValue_ = nullptr;};
    inline string overseasValue() const { DARABONBA_PTR_GET_DEFAULT(overseasValue_, "") };
    inline DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setOverseasValue(string overseasValue) { DARABONBA_PTR_SET_VALUE(overseasValue_, overseasValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The amount of network traffic in the Chinese mainland.
    std::shared_ptr<string> domesticValue_ = nullptr;
    // The amount of HTTPS traffic on points of presence (POPs) in the Chinese mainland.
    std::shared_ptr<string> httpsDomesticValue_ = nullptr;
    // The amount of HTTPS traffic on POPs outside the Chinese mainland.
    std::shared_ptr<string> httpsOverseasValue_ = nullptr;
    // The total amount of HTTPS traffic on POPs.
    std::shared_ptr<string> httpsValue_ = nullptr;
    // The amount of network traffic outside the Chinese mainland.
    std::shared_ptr<string> overseasValue_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total volume of traffic.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
