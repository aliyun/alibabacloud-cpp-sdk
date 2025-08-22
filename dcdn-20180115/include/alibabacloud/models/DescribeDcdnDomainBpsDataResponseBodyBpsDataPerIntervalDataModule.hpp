// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(DynamicHttpBps, dynamicHttpBps_);
      DARABONBA_PTR_TO_JSON(DynamicHttpsBps, dynamicHttpsBps_);
      DARABONBA_PTR_TO_JSON(StaticHttpBps, staticHttpBps_);
      DARABONBA_PTR_TO_JSON(StaticHttpsBps, staticHttpsBps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(DynamicHttpBps, dynamicHttpBps_);
      DARABONBA_PTR_FROM_JSON(DynamicHttpsBps, dynamicHttpsBps_);
      DARABONBA_PTR_FROM_JSON(StaticHttpBps, staticHttpBps_);
      DARABONBA_PTR_FROM_JSON(StaticHttpsBps, staticHttpsBps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(const DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bps_ != nullptr
        && this->dynamicHttpBps_ != nullptr && this->dynamicHttpsBps_ != nullptr && this->staticHttpBps_ != nullptr && this->staticHttpsBps_ != nullptr && this->timeStamp_ != nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline float bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
    inline DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // dynamicHttpBps Field Functions 
    bool hasDynamicHttpBps() const { return this->dynamicHttpBps_ != nullptr;};
    void deleteDynamicHttpBps() { this->dynamicHttpBps_ = nullptr;};
    inline float dynamicHttpBps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpBps_, 0.0) };
    inline DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setDynamicHttpBps(float dynamicHttpBps) { DARABONBA_PTR_SET_VALUE(dynamicHttpBps_, dynamicHttpBps) };


    // dynamicHttpsBps Field Functions 
    bool hasDynamicHttpsBps() const { return this->dynamicHttpsBps_ != nullptr;};
    void deleteDynamicHttpsBps() { this->dynamicHttpsBps_ = nullptr;};
    inline float dynamicHttpsBps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsBps_, 0.0) };
    inline DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setDynamicHttpsBps(float dynamicHttpsBps) { DARABONBA_PTR_SET_VALUE(dynamicHttpsBps_, dynamicHttpsBps) };


    // staticHttpBps Field Functions 
    bool hasStaticHttpBps() const { return this->staticHttpBps_ != nullptr;};
    void deleteStaticHttpBps() { this->staticHttpBps_ = nullptr;};
    inline float staticHttpBps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpBps_, 0.0) };
    inline DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setStaticHttpBps(float staticHttpBps) { DARABONBA_PTR_SET_VALUE(staticHttpBps_, staticHttpBps) };


    // staticHttpsBps Field Functions 
    bool hasStaticHttpsBps() const { return this->staticHttpsBps_ != nullptr;};
    void deleteStaticHttpsBps() { this->staticHttpsBps_ = nullptr;};
    inline float staticHttpsBps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsBps_, 0.0) };
    inline DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setStaticHttpsBps(float staticHttpsBps) { DARABONBA_PTR_SET_VALUE(staticHttpsBps_, staticHttpsBps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The bandwidth value. Unit: bit/s.
    std::shared_ptr<float> bps_ = nullptr;
    // The bandwidth that was consumed to deliver dynamic content over HTTP. Unit: bit/s.
    std::shared_ptr<float> dynamicHttpBps_ = nullptr;
    // The bandwidth that was consumed to deliver dynamic content over HTTPS. Unit: bit/s.
    std::shared_ptr<float> dynamicHttpsBps_ = nullptr;
    // The bandwidth that was consumed to deliver static content over HTTP. Unit: bit/s.
    std::shared_ptr<float> staticHttpBps_ = nullptr;
    // The bandwidth that was consumed to deliver static content over HTTPS. Unit: bit/s.
    std::shared_ptr<float> staticHttpsBps_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
