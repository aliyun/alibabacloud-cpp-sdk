// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(HttpTrafficValue, httpTrafficValue_);
      DARABONBA_PTR_TO_JSON(HttpsTrafficValue, httpsTrafficValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpTrafficValue, httpTrafficValue_);
      DARABONBA_PTR_FROM_JSON(HttpsTrafficValue, httpsTrafficValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
    };
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(const DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpTrafficValue_ != nullptr
        && this->httpsTrafficValue_ != nullptr && this->timeStamp_ != nullptr && this->trafficValue_ != nullptr; };
    // httpTrafficValue Field Functions 
    bool hasHttpTrafficValue() const { return this->httpTrafficValue_ != nullptr;};
    void deleteHttpTrafficValue() { this->httpTrafficValue_ = nullptr;};
    inline string httpTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(httpTrafficValue_, "") };
    inline DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setHttpTrafficValue(string httpTrafficValue) { DARABONBA_PTR_SET_VALUE(httpTrafficValue_, httpTrafficValue) };


    // httpsTrafficValue Field Functions 
    bool hasHttpsTrafficValue() const { return this->httpsTrafficValue_ != nullptr;};
    void deleteHttpsTrafficValue() { this->httpsTrafficValue_ = nullptr;};
    inline string httpsTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(httpsTrafficValue_, "") };
    inline DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setHttpsTrafficValue(string httpsTrafficValue) { DARABONBA_PTR_SET_VALUE(httpsTrafficValue_, httpsTrafficValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // trafficValue Field Functions 
    bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
    void deleteTrafficValue() { this->trafficValue_ = nullptr;};
    inline string trafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, "") };
    inline DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTrafficValue(string trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


  protected:
    // The traffic over HTTP. Unit: bytes.
    std::shared_ptr<string> httpTrafficValue_ = nullptr;
    // The traffic over HTTPS. Unit: bytes.
    std::shared_ptr<string> httpsTrafficValue_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total traffic. Unit: bytes.
    std::shared_ptr<string> trafficValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
