// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPORTEXPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPORTEXPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeReportExportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReportExportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExportDate, exportDate_);
      DARABONBA_PTR_TO_JSON(ExportId, exportId_);
      DARABONBA_PTR_TO_JSON(ExportStatus, exportStatus_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UrlExpiredTime, urlExpiredTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReportExportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExportDate, exportDate_);
      DARABONBA_PTR_FROM_JSON(ExportId, exportId_);
      DARABONBA_PTR_FROM_JSON(ExportStatus, exportStatus_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UrlExpiredTime, urlExpiredTime_);
    };
    DescribeReportExportResponseBody() = default ;
    DescribeReportExportResponseBody(const DescribeReportExportResponseBody &) = default ;
    DescribeReportExportResponseBody(DescribeReportExportResponseBody &&) = default ;
    DescribeReportExportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReportExportResponseBody() = default ;
    DescribeReportExportResponseBody& operator=(const DescribeReportExportResponseBody &) = default ;
    DescribeReportExportResponseBody& operator=(DescribeReportExportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->exportDate_ == nullptr && this->exportId_ == nullptr && this->exportStatus_ == nullptr && this->reportId_ == nullptr && this->requestId_ == nullptr
        && this->urlExpiredTime_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DescribeReportExportResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // exportDate Field Functions 
    bool hasExportDate() const { return this->exportDate_ != nullptr;};
    void deleteExportDate() { this->exportDate_ = nullptr;};
    inline string getExportDate() const { DARABONBA_PTR_GET_DEFAULT(exportDate_, "") };
    inline DescribeReportExportResponseBody& setExportDate(string exportDate) { DARABONBA_PTR_SET_VALUE(exportDate_, exportDate) };


    // exportId Field Functions 
    bool hasExportId() const { return this->exportId_ != nullptr;};
    void deleteExportId() { this->exportId_ = nullptr;};
    inline int64_t getExportId() const { DARABONBA_PTR_GET_DEFAULT(exportId_, 0L) };
    inline DescribeReportExportResponseBody& setExportId(int64_t exportId) { DARABONBA_PTR_SET_VALUE(exportId_, exportId) };


    // exportStatus Field Functions 
    bool hasExportStatus() const { return this->exportStatus_ != nullptr;};
    void deleteExportStatus() { this->exportStatus_ = nullptr;};
    inline string getExportStatus() const { DARABONBA_PTR_GET_DEFAULT(exportStatus_, "") };
    inline DescribeReportExportResponseBody& setExportStatus(string exportStatus) { DARABONBA_PTR_SET_VALUE(exportStatus_, exportStatus) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeReportExportResponseBody& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReportExportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // urlExpiredTime Field Functions 
    bool hasUrlExpiredTime() const { return this->urlExpiredTime_ != nullptr;};
    void deleteUrlExpiredTime() { this->urlExpiredTime_ = nullptr;};
    inline int64_t getUrlExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(urlExpiredTime_, 0L) };
    inline DescribeReportExportResponseBody& setUrlExpiredTime(int64_t urlExpiredTime) { DARABONBA_PTR_SET_VALUE(urlExpiredTime_, urlExpiredTime) };


  protected:
    // The download URL of the report.
    shared_ptr<string> downloadUrl_ {};
    // The time when the report was exported.
    shared_ptr<string> exportDate_ {};
    // The ID of the export task.
    shared_ptr<int64_t> exportId_ {};
    // The status of the export task. Valid values:
    // 
    // *   **-1**: The export task fails.
    // *   **0**: The export task is being initialized.
    // *   **1**: The export task is being executed.
    // *   **2**: The export task is successful.
    shared_ptr<string> exportStatus_ {};
    // The ID of the report.
    shared_ptr<int64_t> reportId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The timestamp when the download URL expires. Unit: milliseconds.
    shared_ptr<int64_t> urlExpiredTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
