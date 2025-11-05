// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINMULTIUSAGEDATARESPONSEBODYTRAFFICPERINTERVALTRAFFICDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINMULTIUSAGEDATARESPONSEBODYTRAFFICPERINTERVALTRAFFICDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule() = default ;
    DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule(const DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule &) = default ;
    DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule(DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule &&) = default ;
    DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule() = default ;
    DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& operator=(const DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule &) = default ;
    DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& operator=(DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && return this->bps_ == nullptr && return this->domain_ == nullptr && return this->timeStamp_ == nullptr && return this->type_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline float bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
    inline DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the region.
    std::shared_ptr<string> area_ = nullptr;
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<float> bps_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The startstamp of the returned usage data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The type of requests. Valid values:
    // 
    // *   **StaticHttps**: static HTTPS requests
    // *   **DynamicHttps**: dynamic HTTPS requests
    // *   **DynamicHttp**: dynamic HTTP requests
    // *   **StaticQuic**: static QUIC requests
    // *   **DynamicQuic**: dynamic QUIC requests
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
