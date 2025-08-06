// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEREQHITRATEDATARESPONSEBODYDATAREQHITRATEDATAMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEREQHITRATEDATARESPONSEBODYDATAREQHITRATEDATAMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& obj) { 
      DARABONBA_PTR_TO_JSON(ReqHitRate, reqHitRate_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& obj) { 
      DARABONBA_PTR_FROM_JSON(ReqHitRate, reqHitRate_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel() = default ;
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel(const DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel &) = default ;
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel(DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel &&) = default ;
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel() = default ;
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& operator=(const DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel &) = default ;
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& operator=(DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel &&) = default ;
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
    inline DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& setReqHitRate(float reqHitRate) { DARABONBA_PTR_SET_VALUE(reqHitRate_, reqHitRate) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The cache hit ratio that is calculated based on requests. The cache hit ratio is measured in percentage.
    std::shared_ptr<float> reqHitRate_ = nullptr;
    // The timestamp of the data returned. The time follows the ISO 8601 standard. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
