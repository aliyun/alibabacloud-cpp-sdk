// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBENCHMARKTASKREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBENCHMARKTASKREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeBenchmarkTaskReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBenchmarkTaskReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBenchmarkTaskReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
    };
    DescribeBenchmarkTaskReportRequest() = default ;
    DescribeBenchmarkTaskReportRequest(const DescribeBenchmarkTaskReportRequest &) = default ;
    DescribeBenchmarkTaskReportRequest(DescribeBenchmarkTaskReportRequest &&) = default ;
    DescribeBenchmarkTaskReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBenchmarkTaskReportRequest() = default ;
    DescribeBenchmarkTaskReportRequest& operator=(const DescribeBenchmarkTaskReportRequest &) = default ;
    DescribeBenchmarkTaskReportRequest& operator=(DescribeBenchmarkTaskReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportType_ == nullptr; };
    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline DescribeBenchmarkTaskReportRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


  protected:
    // The report type of the stress testing task. Valid values: RAW and Report.
    std::shared_ptr<string> reportType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
