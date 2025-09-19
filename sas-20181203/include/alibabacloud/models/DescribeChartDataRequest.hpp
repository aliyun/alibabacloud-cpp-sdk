// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeChartDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChartDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CharId, charId_);
      DARABONBA_PTR_TO_JSON(ChartId, chartId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_TO_JSON(TimeStart, timeStart_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChartDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CharId, charId_);
      DARABONBA_PTR_FROM_JSON(ChartId, chartId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_FROM_JSON(TimeStart, timeStart_);
    };
    DescribeChartDataRequest() = default ;
    DescribeChartDataRequest(const DescribeChartDataRequest &) = default ;
    DescribeChartDataRequest(DescribeChartDataRequest &&) = default ;
    DescribeChartDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChartDataRequest() = default ;
    DescribeChartDataRequest& operator=(const DescribeChartDataRequest &) = default ;
    DescribeChartDataRequest& operator=(DescribeChartDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->charId_ != nullptr
        && this->chartId_ != nullptr && this->lang_ != nullptr && this->reportId_ != nullptr && this->timeEnd_ != nullptr && this->timeStart_ != nullptr; };
    // charId Field Functions 
    bool hasCharId() const { return this->charId_ != nullptr;};
    void deleteCharId() { this->charId_ = nullptr;};
    inline string charId() const { DARABONBA_PTR_GET_DEFAULT(charId_, "") };
    inline DescribeChartDataRequest& setCharId(string charId) { DARABONBA_PTR_SET_VALUE(charId_, charId) };


    // chartId Field Functions 
    bool hasChartId() const { return this->chartId_ != nullptr;};
    void deleteChartId() { this->chartId_ = nullptr;};
    inline string chartId() const { DARABONBA_PTR_GET_DEFAULT(chartId_, "") };
    inline DescribeChartDataRequest& setChartId(string chartId) { DARABONBA_PTR_SET_VALUE(chartId_, chartId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeChartDataRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeChartDataRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // timeEnd Field Functions 
    bool hasTimeEnd() const { return this->timeEnd_ != nullptr;};
    void deleteTimeEnd() { this->timeEnd_ = nullptr;};
    inline int64_t timeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeEnd_, 0L) };
    inline DescribeChartDataRequest& setTimeEnd(int64_t timeEnd) { DARABONBA_PTR_SET_VALUE(timeEnd_, timeEnd) };


    // timeStart Field Functions 
    bool hasTimeStart() const { return this->timeStart_ != nullptr;};
    void deleteTimeStart() { this->timeStart_ = nullptr;};
    inline int64_t timeStart() const { DARABONBA_PTR_GET_DEFAULT(timeStart_, 0L) };
    inline DescribeChartDataRequest& setTimeStart(int64_t timeStart) { DARABONBA_PTR_SET_VALUE(timeStart_, timeStart) };


  protected:
    // The ID of the chart.
    // 
    // >  You can call the [DescribeChartList](~~DescribeChartList~~) operation to query the ID. This parameter is required if the report version is 1.0.0.
    std::shared_ptr<string> charId_ = nullptr;
    // The ID of the chart.
    // 
    // >  You can call the [DescribeChartList](~~DescribeChartList~~) operation to query the ID. This parameter is required if the report version is 2.0.0.
    std::shared_ptr<string> chartId_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the security report.
    // 
    // >  You can call the [DescribeCustomizeReportList](~~DescribeCustomizeReportList~~) operation to query the ID.
    std::shared_ptr<int64_t> reportId_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> timeEnd_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> timeStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
