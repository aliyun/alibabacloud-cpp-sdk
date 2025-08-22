// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODYDATABYTEHITRATEDATAMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODYDATABYTEHITRATEDATAMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel& obj) { 
      DARABONBA_PTR_TO_JSON(ByteHitRate, byteHitRate_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel& obj) { 
      DARABONBA_PTR_FROM_JSON(ByteHitRate, byteHitRate_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel() = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel(const DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel &) = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel(DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel &&) = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel() = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel& operator=(const DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel &) = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel& operator=(DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->byteHitRate_ != nullptr
        && this->timeStamp_ != nullptr; };
    // byteHitRate Field Functions 
    bool hasByteHitRate() const { return this->byteHitRate_ != nullptr;};
    void deleteByteHitRate() { this->byteHitRate_ = nullptr;};
    inline float byteHitRate() const { DARABONBA_PTR_GET_DEFAULT(byteHitRate_, 0.0) };
    inline DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel& setByteHitRate(float byteHitRate) { DARABONBA_PTR_SET_VALUE(byteHitRate_, byteHitRate) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The byte hit ratio.
    std::shared_ptr<float> byteHitRate_ = nullptr;
    // The timestamp of the data returned. The time follows the ISO 8601 standard. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
