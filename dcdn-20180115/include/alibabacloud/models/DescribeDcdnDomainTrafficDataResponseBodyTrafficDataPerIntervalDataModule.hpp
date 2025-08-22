// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicHttpTraffic, dynamicHttpTraffic_);
      DARABONBA_PTR_TO_JSON(DynamicHttpsTraffic, dynamicHttpsTraffic_);
      DARABONBA_PTR_TO_JSON(StaticHttpTraffic, staticHttpTraffic_);
      DARABONBA_PTR_TO_JSON(StaticHttpsTraffic, staticHttpsTraffic_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Traffic, traffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicHttpTraffic, dynamicHttpTraffic_);
      DARABONBA_PTR_FROM_JSON(DynamicHttpsTraffic, dynamicHttpsTraffic_);
      DARABONBA_PTR_FROM_JSON(StaticHttpTraffic, staticHttpTraffic_);
      DARABONBA_PTR_FROM_JSON(StaticHttpsTraffic, staticHttpsTraffic_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
    };
    DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(const DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicHttpTraffic_ != nullptr
        && this->dynamicHttpsTraffic_ != nullptr && this->staticHttpTraffic_ != nullptr && this->staticHttpsTraffic_ != nullptr && this->timeStamp_ != nullptr && this->traffic_ != nullptr; };
    // dynamicHttpTraffic Field Functions 
    bool hasDynamicHttpTraffic() const { return this->dynamicHttpTraffic_ != nullptr;};
    void deleteDynamicHttpTraffic() { this->dynamicHttpTraffic_ = nullptr;};
    inline float dynamicHttpTraffic() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpTraffic_, 0.0) };
    inline DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setDynamicHttpTraffic(float dynamicHttpTraffic) { DARABONBA_PTR_SET_VALUE(dynamicHttpTraffic_, dynamicHttpTraffic) };


    // dynamicHttpsTraffic Field Functions 
    bool hasDynamicHttpsTraffic() const { return this->dynamicHttpsTraffic_ != nullptr;};
    void deleteDynamicHttpsTraffic() { this->dynamicHttpsTraffic_ = nullptr;};
    inline float dynamicHttpsTraffic() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsTraffic_, 0.0) };
    inline DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setDynamicHttpsTraffic(float dynamicHttpsTraffic) { DARABONBA_PTR_SET_VALUE(dynamicHttpsTraffic_, dynamicHttpsTraffic) };


    // staticHttpTraffic Field Functions 
    bool hasStaticHttpTraffic() const { return this->staticHttpTraffic_ != nullptr;};
    void deleteStaticHttpTraffic() { this->staticHttpTraffic_ = nullptr;};
    inline float staticHttpTraffic() const { DARABONBA_PTR_GET_DEFAULT(staticHttpTraffic_, 0.0) };
    inline DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setStaticHttpTraffic(float staticHttpTraffic) { DARABONBA_PTR_SET_VALUE(staticHttpTraffic_, staticHttpTraffic) };


    // staticHttpsTraffic Field Functions 
    bool hasStaticHttpsTraffic() const { return this->staticHttpsTraffic_ != nullptr;};
    void deleteStaticHttpsTraffic() { this->staticHttpsTraffic_ = nullptr;};
    inline float staticHttpsTraffic() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsTraffic_, 0.0) };
    inline DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setStaticHttpsTraffic(float staticHttpsTraffic) { DARABONBA_PTR_SET_VALUE(staticHttpsTraffic_, staticHttpsTraffic) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline float traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0.0) };
    inline DescribeDcdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTraffic(float traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


  protected:
    // The network traffic that was consumed to deliver dynamic content over HTTP.
    std::shared_ptr<float> dynamicHttpTraffic_ = nullptr;
    // The network traffic that was consumed to deliver dynamic content over HTTPS.
    std::shared_ptr<float> dynamicHttpsTraffic_ = nullptr;
    // The network traffic that was consumed to deliver static content over HTTP.
    std::shared_ptr<float> staticHttpTraffic_ = nullptr;
    // The network traffic that was consumed to deliver static content over HTTPS.
    std::shared_ptr<float> staticHttpsTraffic_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total amount of network traffic.
    std::shared_ptr<float> traffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
