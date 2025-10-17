// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCPEAKCHANNELCNTDATARESPONSEBODYPEAKCHANNELCNTDATAPERINTERVALPEAKCHANNELCNTMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCPEAKCHANNELCNTDATARESPONSEBODYPEAKCHANNELCNTDATAPERINTERVALPEAKCHANNELCNTMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveChannelPeak, activeChannelPeak_);
      DARABONBA_PTR_TO_JSON(ActiveChannelPeakTime, activeChannelPeakTime_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveChannelPeak, activeChannelPeak_);
      DARABONBA_PTR_FROM_JSON(ActiveChannelPeakTime, activeChannelPeakTime_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule() = default ;
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule(const DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule &) = default ;
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule(DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule &&) = default ;
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule() = default ;
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule& operator=(const DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule &) = default ;
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule& operator=(DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeChannelPeak_ == nullptr
        && return this->activeChannelPeakTime_ == nullptr && return this->timeStamp_ == nullptr; };
    // activeChannelPeak Field Functions 
    bool hasActiveChannelPeak() const { return this->activeChannelPeak_ != nullptr;};
    void deleteActiveChannelPeak() { this->activeChannelPeak_ = nullptr;};
    inline int64_t activeChannelPeak() const { DARABONBA_PTR_GET_DEFAULT(activeChannelPeak_, 0L) };
    inline DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule& setActiveChannelPeak(int64_t activeChannelPeak) { DARABONBA_PTR_SET_VALUE(activeChannelPeak_, activeChannelPeak) };


    // activeChannelPeakTime Field Functions 
    bool hasActiveChannelPeakTime() const { return this->activeChannelPeakTime_ != nullptr;};
    void deleteActiveChannelPeakTime() { this->activeChannelPeakTime_ = nullptr;};
    inline string activeChannelPeakTime() const { DARABONBA_PTR_GET_DEFAULT(activeChannelPeakTime_, "") };
    inline DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule& setActiveChannelPeakTime(string activeChannelPeakTime) { DARABONBA_PTR_SET_VALUE(activeChannelPeakTime_, activeChannelPeakTime) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<int64_t> activeChannelPeak_ = nullptr;
    std::shared_ptr<string> activeChannelPeakTime_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
