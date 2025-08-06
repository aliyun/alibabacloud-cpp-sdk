// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEBPSDATARESPONSEBODYDATABPSMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEBPSDATARESPONSEBODYDATABPSMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel() = default ;
    DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel(const DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel &) = default ;
    DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel(DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel &&) = default ;
    DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel() = default ;
    DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel& operator=(const DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel &) = default ;
    DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel& operator=(DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel &&) = default ;
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
    inline DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<float> bps_ = nullptr;
    // The timestamp of the data returned. The time follows the ISO 8601 standard. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
