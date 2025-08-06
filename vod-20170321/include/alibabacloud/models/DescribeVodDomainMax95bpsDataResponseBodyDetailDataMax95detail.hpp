// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINMAX95BPSDATARESPONSEBODYDETAILDATAMAX95DETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINMAX95BPSDATARESPONSEBODYDETAILDATAMAX95DETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(Max95Bps, max95Bps_);
      DARABONBA_PTR_TO_JSON(Max95BpsPeakTime, max95BpsPeakTime_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(Max95Bps, max95Bps_);
      DARABONBA_PTR_FROM_JSON(Max95BpsPeakTime, max95BpsPeakTime_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail() = default ;
    DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail(const DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail &) = default ;
    DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail(DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail &&) = default ;
    DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail() = default ;
    DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail& operator=(const DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail &) = default ;
    DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail& operator=(DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->max95Bps_ != nullptr && this->max95BpsPeakTime_ != nullptr && this->timeStamp_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // max95Bps Field Functions 
    bool hasMax95Bps() const { return this->max95Bps_ != nullptr;};
    void deleteMax95Bps() { this->max95Bps_ = nullptr;};
    inline float max95Bps() const { DARABONBA_PTR_GET_DEFAULT(max95Bps_, 0.0) };
    inline DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail& setMax95Bps(float max95Bps) { DARABONBA_PTR_SET_VALUE(max95Bps_, max95Bps) };


    // max95BpsPeakTime Field Functions 
    bool hasMax95BpsPeakTime() const { return this->max95BpsPeakTime_ != nullptr;};
    void deleteMax95BpsPeakTime() { this->max95BpsPeakTime_ = nullptr;};
    inline string max95BpsPeakTime() const { DARABONBA_PTR_GET_DEFAULT(max95BpsPeakTime_, "") };
    inline DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail& setMax95BpsPeakTime(string max95BpsPeakTime) { DARABONBA_PTR_SET_VALUE(max95BpsPeakTime_, max95BpsPeakTime) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodDomainMax95BpsDataResponseBodyDetailDataMax95Detail& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The billable region where the peak 95 data was collected.
    std::shared_ptr<string> area_ = nullptr;
    // The 95th percentile bandwidth.
    std::shared_ptr<float> max95Bps_ = nullptr;
    // The time corresponding to the 95th percentile bandwidth peak.
    std::shared_ptr<string> max95BpsPeakTime_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
