// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTCUSTOMIZEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTCUSTOMIZEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ExportCustomizeReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportCustomizeReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportCustomizeReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    ExportCustomizeReportRequest() = default ;
    ExportCustomizeReportRequest(const ExportCustomizeReportRequest &) = default ;
    ExportCustomizeReportRequest(ExportCustomizeReportRequest &&) = default ;
    ExportCustomizeReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportCustomizeReportRequest() = default ;
    ExportCustomizeReportRequest& operator=(const ExportCustomizeReportRequest &) = default ;
    ExportCustomizeReportRequest& operator=(ExportCustomizeReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exportType_ != nullptr
        && this->reportId_ != nullptr; };
    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportCustomizeReportRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline ExportCustomizeReportRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The type of the security report that you want to export. Valid values:
    // 
    // *   **HTML**
    // *   **PDF**
    // 
    // >  The default value is HTML. PDF is supported only for security reports in version 2.0.0.
    std::shared_ptr<string> exportType_ = nullptr;
    // The ID of the security report.
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
