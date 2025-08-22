// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINBPSDATARESPONSEBODYORIGINBPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINBPSDATARESPONSEBODYORIGINBPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicHttpOriginBps, dynamicHttpOriginBps_);
      DARABONBA_PTR_TO_JSON(DynamicHttpsOriginBps, dynamicHttpsOriginBps_);
      DARABONBA_PTR_TO_JSON(OriginBps, originBps_);
      DARABONBA_PTR_TO_JSON(StaticHttpOriginBps, staticHttpOriginBps_);
      DARABONBA_PTR_TO_JSON(StaticHttpsOriginBps, staticHttpsOriginBps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicHttpOriginBps, dynamicHttpOriginBps_);
      DARABONBA_PTR_FROM_JSON(DynamicHttpsOriginBps, dynamicHttpsOriginBps_);
      DARABONBA_PTR_FROM_JSON(OriginBps, originBps_);
      DARABONBA_PTR_FROM_JSON(StaticHttpOriginBps, staticHttpOriginBps_);
      DARABONBA_PTR_FROM_JSON(StaticHttpsOriginBps, staticHttpsOriginBps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule(const DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule(DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule& operator=(const DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule& operator=(DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicHttpOriginBps_ != nullptr
        && this->dynamicHttpsOriginBps_ != nullptr && this->originBps_ != nullptr && this->staticHttpOriginBps_ != nullptr && this->staticHttpsOriginBps_ != nullptr && this->timeStamp_ != nullptr; };
    // dynamicHttpOriginBps Field Functions 
    bool hasDynamicHttpOriginBps() const { return this->dynamicHttpOriginBps_ != nullptr;};
    void deleteDynamicHttpOriginBps() { this->dynamicHttpOriginBps_ = nullptr;};
    inline float dynamicHttpOriginBps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpOriginBps_, 0.0) };
    inline DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule& setDynamicHttpOriginBps(float dynamicHttpOriginBps) { DARABONBA_PTR_SET_VALUE(dynamicHttpOriginBps_, dynamicHttpOriginBps) };


    // dynamicHttpsOriginBps Field Functions 
    bool hasDynamicHttpsOriginBps() const { return this->dynamicHttpsOriginBps_ != nullptr;};
    void deleteDynamicHttpsOriginBps() { this->dynamicHttpsOriginBps_ = nullptr;};
    inline float dynamicHttpsOriginBps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsOriginBps_, 0.0) };
    inline DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule& setDynamicHttpsOriginBps(float dynamicHttpsOriginBps) { DARABONBA_PTR_SET_VALUE(dynamicHttpsOriginBps_, dynamicHttpsOriginBps) };


    // originBps Field Functions 
    bool hasOriginBps() const { return this->originBps_ != nullptr;};
    void deleteOriginBps() { this->originBps_ = nullptr;};
    inline float originBps() const { DARABONBA_PTR_GET_DEFAULT(originBps_, 0.0) };
    inline DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule& setOriginBps(float originBps) { DARABONBA_PTR_SET_VALUE(originBps_, originBps) };


    // staticHttpOriginBps Field Functions 
    bool hasStaticHttpOriginBps() const { return this->staticHttpOriginBps_ != nullptr;};
    void deleteStaticHttpOriginBps() { this->staticHttpOriginBps_ = nullptr;};
    inline float staticHttpOriginBps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpOriginBps_, 0.0) };
    inline DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule& setStaticHttpOriginBps(float staticHttpOriginBps) { DARABONBA_PTR_SET_VALUE(staticHttpOriginBps_, staticHttpOriginBps) };


    // staticHttpsOriginBps Field Functions 
    bool hasStaticHttpsOriginBps() const { return this->staticHttpsOriginBps_ != nullptr;};
    void deleteStaticHttpsOriginBps() { this->staticHttpsOriginBps_ = nullptr;};
    inline float staticHttpsOriginBps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsOriginBps_, 0.0) };
    inline DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule& setStaticHttpsOriginBps(float staticHttpsOriginBps) { DARABONBA_PTR_SET_VALUE(staticHttpsOriginBps_, staticHttpsOriginBps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The bandwidth that was consumed for fetching dynamic content from the origin over HTTP.
    std::shared_ptr<float> dynamicHttpOriginBps_ = nullptr;
    // The bandwidth that was consumed for fetching dynamic content from the origin over HTTPS.
    std::shared_ptr<float> dynamicHttpsOriginBps_ = nullptr;
    // The bandwidth that was consumed for fetching content from the origin.
    std::shared_ptr<float> originBps_ = nullptr;
    // The bandwidth that was consumed for fetching static content from the origin over HTTP.
    std::shared_ptr<float> staticHttpOriginBps_ = nullptr;
    // The bandwidth that was consumed for fetching static content from the origin over HTTPS.
    std::shared_ptr<float> staticHttpsOriginBps_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
