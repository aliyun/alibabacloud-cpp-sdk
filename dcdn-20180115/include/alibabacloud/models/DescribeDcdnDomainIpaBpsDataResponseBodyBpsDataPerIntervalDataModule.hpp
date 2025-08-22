// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPABPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPABPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(IpaBps, ipaBps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(IpaBps, ipaBps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule(const DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule(DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(const DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipaBps_ != nullptr
        && this->timeStamp_ != nullptr; };
    // ipaBps Field Functions 
    bool hasIpaBps() const { return this->ipaBps_ != nullptr;};
    void deleteIpaBps() { this->ipaBps_ = nullptr;};
    inline float ipaBps() const { DARABONBA_PTR_GET_DEFAULT(ipaBps_, 0.0) };
    inline DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule& setIpaBps(float ipaBps) { DARABONBA_PTR_SET_VALUE(ipaBps_, ipaBps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The bandwidth value. Unit: bit/s.
    std::shared_ptr<float> ipaBps_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
