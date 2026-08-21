// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERCOLLECTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERCOLLECTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerCollectDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerCollectDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerCollectDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
    };
    DescribeVodPlayerCollectDataRequest() = default ;
    DescribeVodPlayerCollectDataRequest(const DescribeVodPlayerCollectDataRequest &) = default ;
    DescribeVodPlayerCollectDataRequest(DescribeVodPlayerCollectDataRequest &&) = default ;
    DescribeVodPlayerCollectDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerCollectDataRequest() = default ;
    DescribeVodPlayerCollectDataRequest& operator=(const DescribeVodPlayerCollectDataRequest &) = default ;
    DescribeVodPlayerCollectDataRequest& operator=(DescribeVodPlayerCollectDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->endTime_ == nullptr && this->interval_ == nullptr && this->metrics_ == nullptr && this->os_ == nullptr && this->period_ == nullptr
        && this->startTime_ == nullptr && this->terminalType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeVodPlayerCollectDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodPlayerCollectDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeVodPlayerCollectDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline DescribeVodPlayerCollectDataRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeVodPlayerCollectDataRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeVodPlayerCollectDataRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodPlayerCollectDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string getTerminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline DescribeVodPlayerCollectDataRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The end time of the query. Format: yyyy-mm-ddthh:mm:ssz (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The time granularity for the query data. Valid values: **5m**, **1h**, and **1d**. The supported time granularity varies based on the time span specified by `StartTime` and `EndTime`:
    // 
    // - Within 3 days: **5m**, **1h**, and **1d**.
    // - 4 to 7 days: **1h** and **1d**.
    // - More than 7 days: **1d**.
    // 
    // This parameter is required.
    shared_ptr<string> interval_ {};
    // The metric type. You can specify up to 3 metrics.
    // 
    // > 
    // > - Percentage data is returned in decimal format.
    // 
    // Playback quality (QoS) metrics:
    // - Vv: play count.
    // - RealVv: actual play count.
    // - FirstFrame: first frame time.
    // - SecondPlayRate: instant play rate.
    // - SlowPlayRate: slow play rate.
    // - StuckCountRate: stuttering rate by count.
    // - SeekDuration: seek duration.
    // - StuckDuration100s: stuttering duration per 100 seconds.
    // - StuckCount100s: stuttering count per 100 seconds.
    // - PlayFailRate: playback failure rate.
    // - SeedFailRate: non-play rate.
    // - AvgPlayBitrate: average playback bitrate.
    // - AvgStartBitrate: average initial bitrate.
    // - ErrorCount100s: error count per 100 seconds.
    // 
    // Playback experience (QoE) metrics:
    // - Uv: unique viewers.
    // - AvgPerVv: average plays per user.
    // - AvgVideoDuration: average video duration.
    // - AvgPerPlayDuration: average playback duration per user.
    // - AvgPerCompletionVv: average completion count per user.
    // - CompletionVv: completion count.
    // - CompletionRate: completion rate.
    // - AvgPlayDuration: average playback duration.
    // - JumpRate5s: 5-second bounce rate.
    // 
    // This parameter is required.
    shared_ptr<string> metrics_ {};
    // The operating system of the playback device. Specify this parameter to perform a filtered query for playback data of a specific operating system. Valid values: **Android**, **iOS**, **Harmony**, **Windows**, **MacOS**, and **Linux**.
    // The available values vary by terminal type:
    // 
    // - **native**: Android, iOS, Harmony.
    // - **web**: Android, iOS, Harmony, Windows, MacOs, Linux.
    // 
    // Separate multiple values with #_#.
    shared_ptr<string> os_ {};
    // The time range for period-over-period analysis, in days (d).
    // 
    // For example, if you set this parameter to 1d (1 day), the period-over-period data is retrieved from the time range of StartTime-1d to EndTime-1d.
    shared_ptr<string> period_ {};
    // The start time of the query. Format: <i>yyyy-mm-dd</i>t<i>hh:mm:ss</i>z (UTC).
    // > 
    // > - Playback data from the last year can be queried.
    // > - The time range for a single query cannot exceed 31 days.
    // > - The time interval is left-closed and right-open [StartTime, EndTime).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The terminal type. Valid values:
    // - **web**: web.
    // - **mobile**: native.
    // 
    // This parameter is required.
    shared_ptr<string> terminalType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
