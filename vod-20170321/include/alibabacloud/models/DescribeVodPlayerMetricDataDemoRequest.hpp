// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATADEMOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATADEMOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerMetricDataDemoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerMetricDataDemoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
      DARABONBA_PTR_TO_JSON(Top, top_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerMetricDataDemoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
    };
    DescribeVodPlayerMetricDataDemoRequest() = default ;
    DescribeVodPlayerMetricDataDemoRequest(const DescribeVodPlayerMetricDataDemoRequest &) = default ;
    DescribeVodPlayerMetricDataDemoRequest(DescribeVodPlayerMetricDataDemoRequest &&) = default ;
    DescribeVodPlayerMetricDataDemoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerMetricDataDemoRequest() = default ;
    DescribeVodPlayerMetricDataDemoRequest& operator=(const DescribeVodPlayerMetricDataDemoRequest &) = default ;
    DescribeVodPlayerMetricDataDemoRequest& operator=(DescribeVodPlayerMetricDataDemoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->endTime_ != nullptr && this->filters_ != nullptr && this->interval_ != nullptr && this->metrics_ != nullptr && this->os_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->startTime_ != nullptr && this->terminalType_ != nullptr && this->top_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeVodPlayerMetricDataDemoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodPlayerMetricDataDemoRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline string filters() const { DARABONBA_PTR_GET_DEFAULT(filters_, "") };
    inline DescribeVodPlayerMetricDataDemoRequest& setFilters(string filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeVodPlayerMetricDataDemoRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string metrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline DescribeVodPlayerMetricDataDemoRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeVodPlayerMetricDataDemoRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeVodPlayerMetricDataDemoRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeVodPlayerMetricDataDemoRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodPlayerMetricDataDemoRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string terminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline DescribeVodPlayerMetricDataDemoRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline int64_t top() const { DARABONBA_PTR_GET_DEFAULT(top_, 0L) };
    inline DescribeVodPlayerMetricDataDemoRequest& setTop(int64_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> filters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> interval_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> metrics_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> terminalType_ = nullptr;
    std::shared_ptr<int64_t> top_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
