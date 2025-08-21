// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEBPSDATARESPONSEBODYDATABPSMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEBPSDATARESPONSEBODYDATABPSMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel() = default ;
    DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel(const DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel &) = default ;
    DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel(DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel &&) = default ;
    DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel() = default ;
    DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel& operator=(const DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel &) = default ;
    DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel& operator=(DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bps_ != nullptr
        && this->timeStamp_ != nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline float bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
    inline DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<float> bps_ = nullptr;
    // The timestamp of the data returned. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
