// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerMetricDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerMetricDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
      DARABONBA_PTR_TO_JSON(Top, top_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerMetricDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
    };
    DescribeVodPlayerMetricDataRequest() = default ;
    DescribeVodPlayerMetricDataRequest(const DescribeVodPlayerMetricDataRequest &) = default ;
    DescribeVodPlayerMetricDataRequest(DescribeVodPlayerMetricDataRequest &&) = default ;
    DescribeVodPlayerMetricDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerMetricDataRequest() = default ;
    DescribeVodPlayerMetricDataRequest& operator=(const DescribeVodPlayerMetricDataRequest &) = default ;
    DescribeVodPlayerMetricDataRequest& operator=(DescribeVodPlayerMetricDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->endTime_ == nullptr && this->filters_ == nullptr && this->interval_ == nullptr && this->language_ == nullptr && this->metrics_ == nullptr
        && this->os_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr && this->terminalType_ == nullptr
        && this->top_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeVodPlayerMetricDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodPlayerMetricDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline string getFilters() const { DARABONBA_PTR_GET_DEFAULT(filters_, "") };
    inline DescribeVodPlayerMetricDataRequest& setFilters(string filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeVodPlayerMetricDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeVodPlayerMetricDataRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline DescribeVodPlayerMetricDataRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeVodPlayerMetricDataRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeVodPlayerMetricDataRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeVodPlayerMetricDataRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodPlayerMetricDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string getTerminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline DescribeVodPlayerMetricDataRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline int64_t getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0L) };
    inline DescribeVodPlayerMetricDataRequest& setTop(int64_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The end time of the query. Format: yyyy-mm-ddThh:mm:ssZ (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The metric dimension filter. A dimension consists of a dimension type (Field), an operator (Op), and a dimension value.
    // 
    // > - You can specify up to three dimensions.
    // > - If the Metrics parameter includes any of the following four metrics, the Filters parameter does not take effect: Uv (number of playback users), AvgPerVv (average number of playbacks per user), AvgPerPlayDuration (average playback duration per user), and AvgPerCompletionVv (average number of completions per user).
    // > - Use regionCode to specify provinces and countries.
    // > - Separate multiple values with #_#.
    // 
    // Valid values for the dimension type (Field):
    // - SdkVersion: the SDK version.
    // - AppVersion: the app version.
    // - Codec: the codec.
    // - VideoType: the video format.
    // - Network: the network type.
    // - Country: the country.
    // - Isp: the ISP.
    // - VideoDefinition: the resolution.
    // - Domain: the domain name.
    // - Province: the province.
    // - IsHw: whether hardware decoding is used.
    // - ErrorCode: the error code.
    // 
    // Valid values for the operator (Op): = (equal to), > (greater than), < (less than), and != (not equal to).
    // > 
    // > - Operator availability: The SdkVersion and VideoDefinition metrics support all four operators. Other metrics support only = (equal to) and != (not equal to).
    // 
    // To obtain dimension values, call the DescribeVodPlayerDimensionData operation.
    shared_ptr<string> filters_ {};
    // The time granularity of the queried data. Valid values: **5m**, **1h**, and **1d**. The supported time granularity varies based on the time span specified by `StartTime` and `EndTime`:
    // 
    // - Within 3 days: **5m**, **1h**, and **1d**.
    // - 4 to 7 days: **1h** and **1d**.
    // - More than 7 days: **1d**.
    // 
    // This parameter is required.
    shared_ptr<string> interval_ {};
    // The language of the response. Valid values:
    // 
    // - **zh** (**default**): Simplified Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> language_ {};
    // The metric types. You can select multiple metrics, up to a maximum of three.
    // 
    // > 
    // > - Percentage data is returned in decimal format.
    // 
    // Quality of Service (QoS) metrics for playback:
    // - Vv: the number of playbacks.
    // - RealVv: the actual playback volume.
    // - FirstFrame: the first frame loading time.
    // - SecondPlayRate: the 1-second startup rate.
    // - SlowPlayRate: the slow startup rate.
    // - StuckCountRate: the stuttering rate by count.
    // - SeekDuration: the seek duration.
    // - StuckDuration100s: the stuttering duration per 100 seconds.
    // - StuckCount100s: the number of stuttering events per 100 seconds.
    // - PlayFailRate: the playback failure rate.
    // - SeedFailRate: the non-startup rate.
    // - AvgPlayBitrate: the average playback bitrate.
    // - AvgStartBitrate: the average startup bitrate.
    // - ErrorCount100s: the number of errors per 100 seconds.
    // 
    // Quality of Experience (QoE) metrics for playback:
    // - Uv: the number of playback users.
    // - AvgPerVv: the average number of playbacks per user.
    // - AvgVideoDuration: the average video duration.
    // - AvgPerPlayDuration: the average playback duration per user.
    // - AvgPerCompletionVv: the average number of completions per user.
    // - CompletionVv: the completion volume.
    // - CompletionRate: the completion rate.
    // - AvgPlayDuration: the average playback duration.
    // - JumpRate5s: the 5-second bounce rate.
    // 
    // This parameter is required.
    shared_ptr<string> metrics_ {};
    // The operating system of the playback client. You can specify this parameter to perform a filtered query for playback data of a specific operating system. Valid values: **Android**, **iOS**, **Harmony**, **Windows**, **macOS**, and **Linux**.
    // The available values vary based on the terminal type:
    // 
    // - **native**: Android, iOS, and Harmony.
    // - **web**: Android, iOS, Harmony, Windows, macOS, and Linux.
    // 
    // Separate multiple operating systems with #_#.
    shared_ptr<string> os_ {};
    // The page number. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: **5000**. Maximum value: **5000**.
    shared_ptr<int64_t> pageSize_ {};
    // The start time of the query. Format: <i>yyyy-mm-dd</i>T<i>hh:mm:ss</i>Z (UTC).
    // > 
    // > - You can query playback data history for up to one year.
    // > - The time range for a single query cannot exceed 31 days.
    // > - The time interval is left-closed and right-open [StartTime, EndTime).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The terminal type. Valid values:
    // - **web**: the web client.
    // - **mobile**: the native client.
    // 
    // This parameter is required.
    shared_ptr<string> terminalType_ {};
    // The number of top data entries by playback volume to return. If you do not specify this parameter, all dimension data is returned.
    shared_ptr<int64_t> top_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
