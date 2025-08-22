// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINTRAFFICDATARESPONSEBODYORIGINTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINTRAFFICDATARESPONSEBODYORIGINTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicHttpOriginTraffic, dynamicHttpOriginTraffic_);
      DARABONBA_PTR_TO_JSON(DynamicHttpsOriginTraffic, dynamicHttpsOriginTraffic_);
      DARABONBA_PTR_TO_JSON(OriginTraffic, originTraffic_);
      DARABONBA_PTR_TO_JSON(StaticHttpOriginTraffic, staticHttpOriginTraffic_);
      DARABONBA_PTR_TO_JSON(StaticHttpsOriginTraffic, staticHttpsOriginTraffic_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicHttpOriginTraffic, dynamicHttpOriginTraffic_);
      DARABONBA_PTR_FROM_JSON(DynamicHttpsOriginTraffic, dynamicHttpsOriginTraffic_);
      DARABONBA_PTR_FROM_JSON(OriginTraffic, originTraffic_);
      DARABONBA_PTR_FROM_JSON(StaticHttpOriginTraffic, staticHttpOriginTraffic_);
      DARABONBA_PTR_FROM_JSON(StaticHttpsOriginTraffic, staticHttpsOriginTraffic_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule(const DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule(DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule& operator=(const DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule& operator=(DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicHttpOriginTraffic_ != nullptr
        && this->dynamicHttpsOriginTraffic_ != nullptr && this->originTraffic_ != nullptr && this->staticHttpOriginTraffic_ != nullptr && this->staticHttpsOriginTraffic_ != nullptr && this->timeStamp_ != nullptr; };
    // dynamicHttpOriginTraffic Field Functions 
    bool hasDynamicHttpOriginTraffic() const { return this->dynamicHttpOriginTraffic_ != nullptr;};
    void deleteDynamicHttpOriginTraffic() { this->dynamicHttpOriginTraffic_ = nullptr;};
    inline float dynamicHttpOriginTraffic() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpOriginTraffic_, 0.0) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule& setDynamicHttpOriginTraffic(float dynamicHttpOriginTraffic) { DARABONBA_PTR_SET_VALUE(dynamicHttpOriginTraffic_, dynamicHttpOriginTraffic) };


    // dynamicHttpsOriginTraffic Field Functions 
    bool hasDynamicHttpsOriginTraffic() const { return this->dynamicHttpsOriginTraffic_ != nullptr;};
    void deleteDynamicHttpsOriginTraffic() { this->dynamicHttpsOriginTraffic_ = nullptr;};
    inline float dynamicHttpsOriginTraffic() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsOriginTraffic_, 0.0) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule& setDynamicHttpsOriginTraffic(float dynamicHttpsOriginTraffic) { DARABONBA_PTR_SET_VALUE(dynamicHttpsOriginTraffic_, dynamicHttpsOriginTraffic) };


    // originTraffic Field Functions 
    bool hasOriginTraffic() const { return this->originTraffic_ != nullptr;};
    void deleteOriginTraffic() { this->originTraffic_ = nullptr;};
    inline float originTraffic() const { DARABONBA_PTR_GET_DEFAULT(originTraffic_, 0.0) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule& setOriginTraffic(float originTraffic) { DARABONBA_PTR_SET_VALUE(originTraffic_, originTraffic) };


    // staticHttpOriginTraffic Field Functions 
    bool hasStaticHttpOriginTraffic() const { return this->staticHttpOriginTraffic_ != nullptr;};
    void deleteStaticHttpOriginTraffic() { this->staticHttpOriginTraffic_ = nullptr;};
    inline float staticHttpOriginTraffic() const { DARABONBA_PTR_GET_DEFAULT(staticHttpOriginTraffic_, 0.0) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule& setStaticHttpOriginTraffic(float staticHttpOriginTraffic) { DARABONBA_PTR_SET_VALUE(staticHttpOriginTraffic_, staticHttpOriginTraffic) };


    // staticHttpsOriginTraffic Field Functions 
    bool hasStaticHttpsOriginTraffic() const { return this->staticHttpsOriginTraffic_ != nullptr;};
    void deleteStaticHttpsOriginTraffic() { this->staticHttpsOriginTraffic_ = nullptr;};
    inline float staticHttpsOriginTraffic() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsOriginTraffic_, 0.0) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule& setStaticHttpsOriginTraffic(float staticHttpsOriginTraffic) { DARABONBA_PTR_SET_VALUE(staticHttpsOriginTraffic_, staticHttpsOriginTraffic) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The amount of back-to-origin traffic that was consumed to deliver dynamic content over HTTP.
    std::shared_ptr<float> dynamicHttpOriginTraffic_ = nullptr;
    // The amount of back-to-origin traffic that was consumed to deliver dynamic content over HTTPS.
    std::shared_ptr<float> dynamicHttpsOriginTraffic_ = nullptr;
    // The amount of back-to-origin traffic.
    std::shared_ptr<float> originTraffic_ = nullptr;
    // The amount of back-to-origin traffic that was consumed to deliver static content over HTTP.
    std::shared_ptr<float> staticHttpOriginTraffic_ = nullptr;
    // The amount of back-to-origin traffic that was consumed to deliver static content over HTTPS.
    std::shared_ptr<float> staticHttpsOriginTraffic_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
