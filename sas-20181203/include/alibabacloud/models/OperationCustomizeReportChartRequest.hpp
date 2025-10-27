// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATIONCUSTOMIZEREPORTCHARTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATIONCUSTOMIZEREPORTCHARTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperationCustomizeReportChartRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperationCustomizeReportChartRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChartIds, chartIds_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, OperationCustomizeReportChartRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChartIds, chartIds_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    OperationCustomizeReportChartRequest() = default ;
    OperationCustomizeReportChartRequest(const OperationCustomizeReportChartRequest &) = default ;
    OperationCustomizeReportChartRequest(OperationCustomizeReportChartRequest &&) = default ;
    OperationCustomizeReportChartRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperationCustomizeReportChartRequest() = default ;
    OperationCustomizeReportChartRequest& operator=(const OperationCustomizeReportChartRequest &) = default ;
    OperationCustomizeReportChartRequest& operator=(OperationCustomizeReportChartRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chartIds_ == nullptr
        && return this->reportId_ == nullptr; };
    // chartIds Field Functions 
    bool hasChartIds() const { return this->chartIds_ != nullptr;};
    void deleteChartIds() { this->chartIds_ = nullptr;};
    inline string chartIds() const { DARABONBA_PTR_GET_DEFAULT(chartIds_, "") };
    inline OperationCustomizeReportChartRequest& setChartIds(string chartIds) { DARABONBA_PTR_SET_VALUE(chartIds_, chartIds) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline OperationCustomizeReportChartRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The ID of the chart that is included in the report. Separate multiple IDs with commas (,).
    // 
    // >  You can call the [DescribeChartList](~~DescribeChartList~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> chartIds_ = nullptr;
    // The ID of the report.
    // 
    // >  You can call the [DescribeCustomizeReportList](~~DescribeCustomizeReportList~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> reportId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
