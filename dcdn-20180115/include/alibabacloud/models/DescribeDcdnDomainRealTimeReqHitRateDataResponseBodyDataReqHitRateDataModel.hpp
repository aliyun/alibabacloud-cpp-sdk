// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEREQHITRATEDATARESPONSEBODYDATAREQHITRATEDATAMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEREQHITRATEDATARESPONSEBODYDATAREQHITRATEDATAMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& obj) { 
      DARABONBA_PTR_TO_JSON(ReqHitRate, reqHitRate_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& obj) { 
      DARABONBA_PTR_FROM_JSON(ReqHitRate, reqHitRate_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel() = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel(const DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel &) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel(DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel &&) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel() = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& operator=(const DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel &) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& operator=(DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reqHitRate_ != nullptr
        && this->timeStamp_ != nullptr; };
    // reqHitRate Field Functions 
    bool hasReqHitRate() const { return this->reqHitRate_ != nullptr;};
    void deleteReqHitRate() { this->reqHitRate_ = nullptr;};
    inline float reqHitRate() const { DARABONBA_PTR_GET_DEFAULT(reqHitRate_, 0.0) };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& setReqHitRate(float reqHitRate) { DARABONBA_PTR_SET_VALUE(reqHitRate_, reqHitRate) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The request hit ratio.
    std::shared_ptr<float> reqHitRate_ = nullptr;
    // The timestamp of the data returned. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
