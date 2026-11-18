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
    // The end time of the query. Format: yyyy-mm-ddThh:mm:ssZ (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The time granularity of the queried data. Valid values: **5m**, **1h**, and **1d**. The supported time granularity varies based on the time span specified by `StartTime` and `EndTime`:
    // 
    // - Within 3 days: **5m**, **1h**, and **1d**.
    // - 4 to 7 days: **1h** and **1d**.
    // - More than 7 days: **1d**.
    // 
    // This parameter is required.
    shared_ptr<string> interval_ {};
    // The metric type. You can specify multiple metrics, up to three.
    // 
    // > 
    // > - Percentage data is returned in decimal format.
    // 
    // Quality of Service (QoS) metrics for playback quality:
    // - Vv: Number of plays.
    // - RealVv: Actual play volume.
    // - FirstFrame: First frame time.
    // - SecondPlayRate: 1-second startup rate.
    // - SlowPlayRate: Slow startup rate.
    // - StuckCountRate: Stuttering count rate.
    // - SeekDuration: Seek duration.
    // - StuckDuration100s: Stuttering duration per 100 seconds.
    // - StuckCount100s: Stuttering count per 100 seconds.
    // - PlayFailRate: Playback failure rate.
    // - SeedFailRate: Unstarted playback rate.
    // - AvgPlayBitrate: Average playback bitrate.
    // - AvgStartBitrate: Average startup bitrate.
    // - ErrorCount100s: Error count per 100 seconds.
    // 
    // Quality of Experience (QoE) metrics for playback experience:
    // - Uv: Number of playback users.
    // - AvgPerVv: Average number of plays per user.
    // - AvgVideoDuration: Average video duration.
    // - AvgPerPlayDuration: Average playback duration per user.
    // - AvgPerCompletionVv: Average number of completed plays per user.
    // - CompletionVv: Completed play volume.
    // - CompletionRate: Completion rate.
    // - AvgPlayDuration: Average playback duration.
    // - JumpRate5s: 5-second bounce rate.
    // 
    // This parameter is required.
    shared_ptr<string> metrics_ {};
    // The operating system of the playback terminal. You can specify this parameter to perform a filtered query for the playback data of a specific operating system. Valid values: **Android**, **iOS**, **Harmony**, **Windows**, **macOS**, and **Linux**.
    // The valid values vary based on the terminal type:
    // 
    // - **native**: Android, iOS, and Harmony.
    // - **web**: Android, iOS, Harmony, Windows, macOS, and Linux.
    // 
    // Separate multiple operating systems with #_#.
    shared_ptr<string> os_ {};
    // The time range used to confirm the period-over-period analysis, in days (d).
    // 
    // For example, if you set the value to 1d (1 day), the period-over-period time range is from StartTime-1d to EndTime-1d.
    shared_ptr<string> period_ {};
    // The start time of the query. Format: <i>yyyy-mm-dd</i>T<i>hh:mm:ss</i>Z (UTC).
    // > 
    // > - You can query historical playback data for the last year.
    // > - The time range for a single query cannot exceed 31 days.
    // > - The time range is a left-closed and right-open interval [StartTime, EndTime).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The terminal type. Valid values:
    // - **web**: Web client.
    // - **mobile**: Native client.
    // 
    // This parameter is required.
    shared_ptr<string> terminalType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
