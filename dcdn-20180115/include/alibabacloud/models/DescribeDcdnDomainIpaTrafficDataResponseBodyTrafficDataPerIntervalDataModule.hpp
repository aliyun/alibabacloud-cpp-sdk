// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPATRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPATRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(IpaTraffic, ipaTraffic_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(IpaTraffic, ipaTraffic_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule(DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(const DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipaTraffic_ != nullptr
        && this->timeStamp_ != nullptr; };
    // ipaTraffic Field Functions 
    bool hasIpaTraffic() const { return this->ipaTraffic_ != nullptr;};
    void deleteIpaTraffic() { this->ipaTraffic_ = nullptr;};
    inline float ipaTraffic() const { DARABONBA_PTR_GET_DEFAULT(ipaTraffic_, 0.0) };
    inline DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setIpaTraffic(float ipaTraffic) { DARABONBA_PTR_SET_VALUE(ipaTraffic_, ipaTraffic) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The total amount of network traffic.
    std::shared_ptr<float> ipaTraffic_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
