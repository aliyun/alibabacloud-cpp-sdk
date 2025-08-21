// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEQPSDATARESPONSEBODYDATAQPSMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEQPSDATARESPONSEBODYDATAQPSMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel& obj) { 
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel() = default ;
    DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel(const DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel &) = default ;
    DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel(DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel &&) = default ;
    DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel() = default ;
    DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel& operator=(const DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel &) = default ;
    DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel& operator=(DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel &&) = default ;
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
    inline DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel& setQps(float qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of queries per second.
    std::shared_ptr<float> qps_ = nullptr;
    // The timestamp of the data returned. The time follows the yyyy-MM-ddTHH:mm:ssZ format in the ISO 8601 standard and is in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
