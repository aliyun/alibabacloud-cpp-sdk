// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTCUSTOMIZEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTCUSTOMIZEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ExportCustomizeReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportCustomizeReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExportDate, exportDate_);
      DARABONBA_PTR_TO_JSON(ExportId, exportId_);
      DARABONBA_PTR_TO_JSON(ExportStatus, exportStatus_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UrlExpiredTime, urlExpiredTime_);
    };
    friend void from_json(const Darabonba::Json& j, ExportCustomizeReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExportDate, exportDate_);
      DARABONBA_PTR_FROM_JSON(ExportId, exportId_);
      DARABONBA_PTR_FROM_JSON(ExportStatus, exportStatus_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UrlExpiredTime, urlExpiredTime_);
    };
    ExportCustomizeReportResponseBody() = default ;
    ExportCustomizeReportResponseBody(const ExportCustomizeReportResponseBody &) = default ;
    ExportCustomizeReportResponseBody(ExportCustomizeReportResponseBody &&) = default ;
    ExportCustomizeReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportCustomizeReportResponseBody() = default ;
    ExportCustomizeReportResponseBody& operator=(const ExportCustomizeReportResponseBody &) = default ;
    ExportCustomizeReportResponseBody& operator=(ExportCustomizeReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && return this->exportDate_ == nullptr && return this->exportId_ == nullptr && return this->exportStatus_ == nullptr && return this->fileName_ == nullptr && return this->reportId_ == nullptr
        && return this->requestId_ == nullptr && return this->urlExpiredTime_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline ExportCustomizeReportResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // exportDate Field Functions 
    bool hasExportDate() const { return this->exportDate_ != nullptr;};
    void deleteExportDate() { this->exportDate_ = nullptr;};
    inline string exportDate() const { DARABONBA_PTR_GET_DEFAULT(exportDate_, "") };
    inline ExportCustomizeReportResponseBody& setExportDate(string exportDate) { DARABONBA_PTR_SET_VALUE(exportDate_, exportDate) };


    // exportId Field Functions 
    bool hasExportId() const { return this->exportId_ != nullptr;};
    void deleteExportId() { this->exportId_ = nullptr;};
    inline int64_t exportId() const { DARABONBA_PTR_GET_DEFAULT(exportId_, 0L) };
    inline ExportCustomizeReportResponseBody& setExportId(int64_t exportId) { DARABONBA_PTR_SET_VALUE(exportId_, exportId) };


    // exportStatus Field Functions 
    bool hasExportStatus() const { return this->exportStatus_ != nullptr;};
    void deleteExportStatus() { this->exportStatus_ = nullptr;};
    inline string exportStatus() const { DARABONBA_PTR_GET_DEFAULT(exportStatus_, "") };
    inline ExportCustomizeReportResponseBody& setExportStatus(string exportStatus) { DARABONBA_PTR_SET_VALUE(exportStatus_, exportStatus) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ExportCustomizeReportResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline ExportCustomizeReportResponseBody& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportCustomizeReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // urlExpiredTime Field Functions 
    bool hasUrlExpiredTime() const { return this->urlExpiredTime_ != nullptr;};
    void deleteUrlExpiredTime() { this->urlExpiredTime_ = nullptr;};
    inline int64_t urlExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(urlExpiredTime_, 0L) };
    inline ExportCustomizeReportResponseBody& setUrlExpiredTime(int64_t urlExpiredTime) { DARABONBA_PTR_SET_VALUE(urlExpiredTime_, urlExpiredTime) };


  protected:
    // The download URL of the security report.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The time when the security report was exported.
    std::shared_ptr<string> exportDate_ = nullptr;
    // The ID of the export task.
    std::shared_ptr<int64_t> exportId_ = nullptr;
    // The status of the export task. Valid values:
    // 
    // *   **fail**: The export task fails.
    // *   **exporting**: The export task is being executed.
    // *   **success**: The export task is successful.
    std::shared_ptr<string> exportStatus_ = nullptr;
    // The name of the report file that is exported.
    std::shared_ptr<string> fileName_ = nullptr;
    // The ID of the security report.
    std::shared_ptr<int64_t> reportId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The timestamp when the download URL expires. Unit: seconds.
    std::shared_ptr<int64_t> urlExpiredTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
