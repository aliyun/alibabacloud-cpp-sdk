// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERCOLLECTDATADEMOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERCOLLECTDATADEMOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerCollectDataDemoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerCollectDataDemoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerCollectDataDemoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
    };
    DescribeVodPlayerCollectDataDemoRequest() = default ;
    DescribeVodPlayerCollectDataDemoRequest(const DescribeVodPlayerCollectDataDemoRequest &) = default ;
    DescribeVodPlayerCollectDataDemoRequest(DescribeVodPlayerCollectDataDemoRequest &&) = default ;
    DescribeVodPlayerCollectDataDemoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerCollectDataDemoRequest() = default ;
    DescribeVodPlayerCollectDataDemoRequest& operator=(const DescribeVodPlayerCollectDataDemoRequest &) = default ;
    DescribeVodPlayerCollectDataDemoRequest& operator=(DescribeVodPlayerCollectDataDemoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->endTime_ != nullptr && this->interval_ != nullptr && this->metrics_ != nullptr && this->os_ != nullptr && this->period_ != nullptr
        && this->startTime_ != nullptr && this->terminalType_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeVodPlayerCollectDataDemoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodPlayerCollectDataDemoRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeVodPlayerCollectDataDemoRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string metrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline DescribeVodPlayerCollectDataDemoRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeVodPlayerCollectDataDemoRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeVodPlayerCollectDataDemoRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodPlayerCollectDataDemoRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string terminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline DescribeVodPlayerCollectDataDemoRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> interval_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> metrics_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<string> period_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> terminalType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
