// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_TO_JSON(HttpsDomesticValue, httpsDomesticValue_);
      DARABONBA_PTR_TO_JSON(HttpsOverseasValue, httpsOverseasValue_);
      DARABONBA_PTR_TO_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_TO_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_FROM_JSON(HttpsDomesticValue, httpsDomesticValue_);
      DARABONBA_PTR_FROM_JSON(HttpsOverseasValue, httpsOverseasValue_);
      DARABONBA_PTR_FROM_JSON(HttpsValue, httpsValue_);
      DARABONBA_PTR_FROM_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(const DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
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
    inline DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setDomesticValue(string domesticValue) { DARABONBA_PTR_SET_VALUE(domesticValue_, domesticValue) };


    // httpsDomesticValue Field Functions 
    bool hasHttpsDomesticValue() const { return this->httpsDomesticValue_ != nullptr;};
    void deleteHttpsDomesticValue() { this->httpsDomesticValue_ = nullptr;};
    inline string httpsDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(httpsDomesticValue_, "") };
    inline DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setHttpsDomesticValue(string httpsDomesticValue) { DARABONBA_PTR_SET_VALUE(httpsDomesticValue_, httpsDomesticValue) };


    // httpsOverseasValue Field Functions 
    bool hasHttpsOverseasValue() const { return this->httpsOverseasValue_ != nullptr;};
    void deleteHttpsOverseasValue() { this->httpsOverseasValue_ = nullptr;};
    inline string httpsOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(httpsOverseasValue_, "") };
    inline DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setHttpsOverseasValue(string httpsOverseasValue) { DARABONBA_PTR_SET_VALUE(httpsOverseasValue_, httpsOverseasValue) };


    // httpsValue Field Functions 
    bool hasHttpsValue() const { return this->httpsValue_ != nullptr;};
    void deleteHttpsValue() { this->httpsValue_ = nullptr;};
    inline string httpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsValue_, "") };
    inline DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setHttpsValue(string httpsValue) { DARABONBA_PTR_SET_VALUE(httpsValue_, httpsValue) };


    // overseasValue Field Functions 
    bool hasOverseasValue() const { return this->overseasValue_ != nullptr;};
    void deleteOverseasValue() { this->overseasValue_ = nullptr;};
    inline string overseasValue() const { DARABONBA_PTR_GET_DEFAULT(overseasValue_, "") };
    inline DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setOverseasValue(string overseasValue) { DARABONBA_PTR_SET_VALUE(overseasValue_, overseasValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The bandwidth in mainland China. Unit: bit/s. When the bandwidth data is queried by ISP, no value is returned.
    std::shared_ptr<string> domesticValue_ = nullptr;
    // The HTTPS bandwidth on L1 nodes in mainland China. Unit: bit/s. When the bandwidth data is queried by ISP, no value is returned.
    std::shared_ptr<string> httpsDomesticValue_ = nullptr;
    // The HTTPS bandwidth on L1 nodes outside mainland China. Unit: bit/s. When the bandwidth data is queried by ISP, no value is returned.
    std::shared_ptr<string> httpsOverseasValue_ = nullptr;
    // The total HTTPS bandwidth on L1 nodes. Unit: bit/s.
    std::shared_ptr<string> httpsValue_ = nullptr;
    // The bandwidth outside mainland China. Unit: bit/s. When the bandwidth data is queried by ISP, no value is returned.
    std::shared_ptr<string> overseasValue_ = nullptr;
    // The timestamp of the returned data. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
