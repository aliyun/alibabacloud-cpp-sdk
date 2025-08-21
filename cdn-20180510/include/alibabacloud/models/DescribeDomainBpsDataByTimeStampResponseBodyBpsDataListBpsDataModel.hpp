// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYTIMESTAMPRESPONSEBODYBPSDATALISTBPSDATAMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYTIMESTAMPRESPONSEBODYBPSDATALISTBPSDATAMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(LocationName, locationName_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel() = default ;
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel(const DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel &) = default ;
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel(DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel &&) = default ;
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel() = default ;
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel& operator=(const DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel &) = default ;
    DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel& operator=(DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bps_ != nullptr
        && this->ispName_ != nullptr && this->locationName_ != nullptr && this->timeStamp_ != nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int64_t bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0L) };
    inline DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel& setBps(int64_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // locationName Field Functions 
    bool hasLocationName() const { return this->locationName_ != nullptr;};
    void deleteLocationName() { this->locationName_ = nullptr;};
    inline string locationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
    inline DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainBpsDataByTimeStampResponseBodyBpsDataListBpsDataModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The bandwidth value.
    std::shared_ptr<int64_t> bps_ = nullptr;
    // The name of the ISP.
    std::shared_ptr<string> ispName_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> locationName_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
