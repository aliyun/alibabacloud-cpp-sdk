// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODYTRAFFICPERINTERVALTRAFFICDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODYTRAFFICPERINTERVALTRAFFICDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule(const DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule(DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule &&) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& operator=(const DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& operator=(DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->bps_ != nullptr && this->domain_ != nullptr && this->timeStamp_ != nullptr && this->type_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline float bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the region.
    std::shared_ptr<string> area_ = nullptr;
    // The number of bits per second.
    std::shared_ptr<float> bps_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The type of the network traffic. Valid values: Simple, IPA, and WebSocket.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
