// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINQPSDATARESPONSEBODYQPSDATAINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINQPSDATARESPONSEBODYQPSDATAINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(AccDomesticValue, accDomesticValue_);
      DARABONBA_PTR_TO_JSON(AccOverseasValue, accOverseasValue_);
      DARABONBA_PTR_TO_JSON(AccValue, accValue_);
      DARABONBA_PTR_TO_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_TO_JSON(HttpsAccDomesticValue, httpsAccDomesticValue_);
      DARABONBA_PTR_TO_JSON(HttpsAccOverseasValue, httpsAccOverseasValue_);
      DARABONBA_PTR_TO_JSON(HttpsAccValue, httpsAccValue_);
      DARABONBA_PTR_TO_JSON(HttpsDomesticValue, httpsDomesticValue_);
      DARABONBA_PTR_TO_JSON(HttpsOverseasValue, httpsOverseasValue_);
      DARABONBA_PTR_TO_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_TO_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(AccDomesticValue, accDomesticValue_);
      DARABONBA_PTR_FROM_JSON(AccOverseasValue, accOverseasValue_);
      DARABONBA_PTR_FROM_JSON(AccValue, accValue_);
      DARABONBA_PTR_FROM_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_FROM_JSON(HttpsAccDomesticValue, httpsAccDomesticValue_);
      DARABONBA_PTR_FROM_JSON(HttpsAccOverseasValue, httpsAccOverseasValue_);
      DARABONBA_PTR_FROM_JSON(HttpsAccValue, httpsAccValue_);
      DARABONBA_PTR_FROM_JSON(HttpsDomesticValue, httpsDomesticValue_);
      DARABONBA_PTR_FROM_JSON(HttpsOverseasValue, httpsOverseasValue_);
      DARABONBA_PTR_FROM_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_FROM_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule() = default ;
    DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule(const DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule &) = default ;
    DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule(DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule &&) = default ;
    DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule() = default ;
    DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& operator=(const DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule &) = default ;
    DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& operator=(DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accDomesticValue_ != nullptr
        && this->accOverseasValue_ != nullptr && this->accValue_ != nullptr && this->domesticValue_ != nullptr && this->httpsAccDomesticValue_ != nullptr && this->httpsAccOverseasValue_ != nullptr
        && this->httpsAccValue_ != nullptr && this->httpsDomesticValue_ != nullptr && this->httpsOverseasValue_ != nullptr && this->httpsValue_ != nullptr && this->overseasValue_ != nullptr
        && this->timeStamp_ != nullptr && this->value_ != nullptr; };
    // accDomesticValue Field Functions 
    bool hasAccDomesticValue() const { return this->accDomesticValue_ != nullptr;};
    void deleteAccDomesticValue() { this->accDomesticValue_ = nullptr;};
    inline string accDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(accDomesticValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setAccDomesticValue(string accDomesticValue) { DARABONBA_PTR_SET_VALUE(accDomesticValue_, accDomesticValue) };


    // accOverseasValue Field Functions 
    bool hasAccOverseasValue() const { return this->accOverseasValue_ != nullptr;};
    void deleteAccOverseasValue() { this->accOverseasValue_ = nullptr;};
    inline string accOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(accOverseasValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setAccOverseasValue(string accOverseasValue) { DARABONBA_PTR_SET_VALUE(accOverseasValue_, accOverseasValue) };


    // accValue Field Functions 
    bool hasAccValue() const { return this->accValue_ != nullptr;};
    void deleteAccValue() { this->accValue_ = nullptr;};
    inline string accValue() const { DARABONBA_PTR_GET_DEFAULT(accValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setAccValue(string accValue) { DARABONBA_PTR_SET_VALUE(accValue_, accValue) };


    // domesticValue Field Functions 
    bool hasDomesticValue() const { return this->domesticValue_ != nullptr;};
    void deleteDomesticValue() { this->domesticValue_ = nullptr;};
    inline string domesticValue() const { DARABONBA_PTR_GET_DEFAULT(domesticValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setDomesticValue(string domesticValue) { DARABONBA_PTR_SET_VALUE(domesticValue_, domesticValue) };


    // httpsAccDomesticValue Field Functions 
    bool hasHttpsAccDomesticValue() const { return this->httpsAccDomesticValue_ != nullptr;};
    void deleteHttpsAccDomesticValue() { this->httpsAccDomesticValue_ = nullptr;};
    inline string httpsAccDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(httpsAccDomesticValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setHttpsAccDomesticValue(string httpsAccDomesticValue) { DARABONBA_PTR_SET_VALUE(httpsAccDomesticValue_, httpsAccDomesticValue) };


    // httpsAccOverseasValue Field Functions 
    bool hasHttpsAccOverseasValue() const { return this->httpsAccOverseasValue_ != nullptr;};
    void deleteHttpsAccOverseasValue() { this->httpsAccOverseasValue_ = nullptr;};
    inline string httpsAccOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(httpsAccOverseasValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setHttpsAccOverseasValue(string httpsAccOverseasValue) { DARABONBA_PTR_SET_VALUE(httpsAccOverseasValue_, httpsAccOverseasValue) };


    // httpsAccValue Field Functions 
    bool hasHttpsAccValue() const { return this->httpsAccValue_ != nullptr;};
    void deleteHttpsAccValue() { this->httpsAccValue_ = nullptr;};
    inline string httpsAccValue() const { DARABONBA_PTR_GET_DEFAULT(httpsAccValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setHttpsAccValue(string httpsAccValue) { DARABONBA_PTR_SET_VALUE(httpsAccValue_, httpsAccValue) };


    // httpsDomesticValue Field Functions 
    bool hasHttpsDomesticValue() const { return this->httpsDomesticValue_ != nullptr;};
    void deleteHttpsDomesticValue() { this->httpsDomesticValue_ = nullptr;};
    inline string httpsDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(httpsDomesticValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setHttpsDomesticValue(string httpsDomesticValue) { DARABONBA_PTR_SET_VALUE(httpsDomesticValue_, httpsDomesticValue) };


    // httpsOverseasValue Field Functions 
    bool hasHttpsOverseasValue() const { return this->httpsOverseasValue_ != nullptr;};
    void deleteHttpsOverseasValue() { this->httpsOverseasValue_ = nullptr;};
    inline string httpsOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(httpsOverseasValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setHttpsOverseasValue(string httpsOverseasValue) { DARABONBA_PTR_SET_VALUE(httpsOverseasValue_, httpsOverseasValue) };


    // httpsValue Field Functions 
    bool hasHttpsValue() const { return this->httpsValue_ != nullptr;};
    void deleteHttpsValue() { this->httpsValue_ = nullptr;};
    inline string httpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setHttpsValue(string httpsValue) { DARABONBA_PTR_SET_VALUE(httpsValue_, httpsValue) };


    // overseasValue Field Functions 
    bool hasOverseasValue() const { return this->overseasValue_ != nullptr;};
    void deleteOverseasValue() { this->overseasValue_ = nullptr;};
    inline string overseasValue() const { DARABONBA_PTR_GET_DEFAULT(overseasValue_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setOverseasValue(string overseasValue) { DARABONBA_PTR_SET_VALUE(overseasValue_, overseasValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVodDomainQpsDataResponseBodyQpsDataIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The number of requests in the Chinese mainland.
    std::shared_ptr<string> accDomesticValue_ = nullptr;
    // The number of requests outside the Chinese mainland.
    std::shared_ptr<string> accOverseasValue_ = nullptr;
    // The total number of requests.
    std::shared_ptr<string> accValue_ = nullptr;
    // The QPS data in the Chinese mainland.
    std::shared_ptr<string> domesticValue_ = nullptr;
    // The QPS that is calculated based on the HTTPS requests sent to POPs in the Chinese mainland.
    std::shared_ptr<string> httpsAccDomesticValue_ = nullptr;
    // The number of HTTPS requests sent to POPs outside the Chinese mainland.
    std::shared_ptr<string> httpsAccOverseasValue_ = nullptr;
    // The number of HTTPS requests sent to POPs.
    std::shared_ptr<string> httpsAccValue_ = nullptr;
    // The QPS that is calculated based on the HTTPS requests sent to POPs in the Chinese mainland.
    std::shared_ptr<string> httpsDomesticValue_ = nullptr;
    // The QPS that is calculated based on the HTTPS requests sent to POPs outside the Chinese mainland.
    std::shared_ptr<string> httpsOverseasValue_ = nullptr;
    // The QPS that is calculated based on the HTTPS requests sent to points of presence (POPs).
    std::shared_ptr<string> httpsValue_ = nullptr;
    // The QPS data outside the Chinese mainland.
    std::shared_ptr<string> overseasValue_ = nullptr;
    // The timestamp of the data returned. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total QPS.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
