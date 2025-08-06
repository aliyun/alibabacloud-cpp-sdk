// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEQPSDATARESPONSEBODYDATAQPSMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEQPSDATARESPONSEBODYDATAQPSMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel& obj) { 
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel() = default ;
    DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel(const DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel &) = default ;
    DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel(DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel &&) = default ;
    DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel() = default ;
    DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel& operator=(const DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel &) = default ;
    DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel& operator=(DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qps_ != nullptr
        && this->timeStamp_ != nullptr; };
    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline float qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0.0) };
    inline DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel& setQps(float qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of queries per second.
    std::shared_ptr<float> qps_ = nullptr;
    // The timestamp of the returned data. The time follows the ISO 8601 standard. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
