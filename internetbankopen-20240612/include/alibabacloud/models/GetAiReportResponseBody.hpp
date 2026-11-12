// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace InternetBankOpen20240612
{
namespace Models
{
  class GetAiReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAiReportResponseBody() = default ;
    GetAiReportResponseBody(const GetAiReportResponseBody &) = default ;
    GetAiReportResponseBody(GetAiReportResponseBody &&) = default ;
    GetAiReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiReportResponseBody() = default ;
    GetAiReportResponseBody& operator=(const GetAiReportResponseBody &) = default ;
    GetAiReportResponseBody& operator=(GetAiReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Report, report_);
        DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Report, report_);
        DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Report : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Report& obj) { 
          DARABONBA_PTR_TO_JSON(ContentExpiresAt, contentExpiresAt_);
          DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_TO_JSON(ReportId, reportId_);
          DARABONBA_PTR_TO_JSON(UrlExpiresAt, urlExpiresAt_);
        };
        friend void from_json(const Darabonba::Json& j, Report& obj) { 
          DARABONBA_PTR_FROM_JSON(ContentExpiresAt, contentExpiresAt_);
          DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
          DARABONBA_PTR_FROM_JSON(UrlExpiresAt, urlExpiresAt_);
        };
        Report() = default ;
        Report(const Report &) = default ;
        Report(Report &&) = default ;
        Report(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Report() = default ;
        Report& operator=(const Report &) = default ;
        Report& operator=(Report &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contentExpiresAt_ == nullptr
        && this->downloadUrl_ == nullptr && this->reportId_ == nullptr && this->urlExpiresAt_ == nullptr; };
        // contentExpiresAt Field Functions 
        bool hasContentExpiresAt() const { return this->contentExpiresAt_ != nullptr;};
        void deleteContentExpiresAt() { this->contentExpiresAt_ = nullptr;};
        inline string getContentExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(contentExpiresAt_, "") };
        inline Report& setContentExpiresAt(string contentExpiresAt) { DARABONBA_PTR_SET_VALUE(contentExpiresAt_, contentExpiresAt) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline Report& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // reportId Field Functions 
        bool hasReportId() const { return this->reportId_ != nullptr;};
        void deleteReportId() { this->reportId_ = nullptr;};
        inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
        inline Report& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


        // urlExpiresAt Field Functions 
        bool hasUrlExpiresAt() const { return this->urlExpiresAt_ != nullptr;};
        void deleteUrlExpiresAt() { this->urlExpiresAt_ = nullptr;};
        inline string getUrlExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(urlExpiresAt_, "") };
        inline Report& setUrlExpiresAt(string urlExpiresAt) { DARABONBA_PTR_SET_VALUE(urlExpiresAt_, urlExpiresAt) };


      protected:
        // The expiration time of the report content retention period. The time is in UTC RFC 3339 format, ends with Z, and may contain fractional seconds. No download URL is issued after this time. If the delivery is not suspended, EXPIRED is returned. If the delivery is also suspended, UNAVAILABLE is returned preferentially. This is the content expiration time, not the single-link expiration time.
        shared_ptr<string> contentExpiresAt_ {};
        // The temporary signed download URL. Use the URL before UrlExpiresAt. The validity period of the signed URL does not exceed 300 seconds and is no later than ContentExpiresAt. If the URL expires but the content has not expired, you can query again to obtain a new URL. The example only shows the URL format and is not a real downloadable link. Use the complete URL in the actual response. Do not concatenate the URL yourself or share it publicly.
        shared_ptr<string> downloadUrl_ {};
        // The unique ID of the report. You can use this ID as the reportId parameter to query the report again. This is the report asset ID, not an internal task ID.
        shared_ptr<string> reportId_ {};
        // The expiration time of the current DownloadUrl. The time is in UTC RFC 3339 format, ends with Z, and may contain fractional seconds. You cannot continue to use the URL after it expires, and this time is no later than ContentExpiresAt.
        shared_ptr<string> urlExpiresAt_ {};
      };

      virtual bool empty() const override { return this->report_ == nullptr
        && this->reportStatus_ == nullptr; };
      // report Field Functions 
      bool hasReport() const { return this->report_ != nullptr;};
      void deleteReport() { this->report_ = nullptr;};
      inline const Data::Report & getReport() const { DARABONBA_PTR_GET_CONST(report_, Data::Report) };
      inline Data::Report getReport() { DARABONBA_PTR_GET(report_, Data::Report) };
      inline Data& setReport(const Data::Report & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
      inline Data& setReport(Data::Report && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


      // reportStatus Field Functions 
      bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
      void deleteReportStatus() { this->reportStatus_ = nullptr;};
      inline string getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
      inline Data& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    protected:
      // The download information of the available report, which is returned only when ReportStatus is AVAILABLE. The report ownership and the corresponding object version are verified before the download.
      shared_ptr<Data::Report> report_ {};
      // The report status. Valid values:
      // - NOT_APPLICABLE: The product does not include a report.
      // - WAITING_DATA: The data call result is not yet determined.
      // - NO_DATA: No data is found, and no per-use report is generated.
      // - WAITING_PERIOD: The query result for the callId of a periodic product. You must obtain the ReportId by calling ListProductReports and then query the status.
      // - QUEUED: The report task is queued.
      // - RUNNING: The report task is being processed.
      // - AVAILABLE: The report is available, and the Report object is returned in this response.
      // - FAILED: The data call or report generation failed.
      // - EXPIRED: The report content has expired.
      // - UNAVAILABLE: The delivery of the report is suspended.
      // 
      // You can query again later by using the same ID when the status is WAITING_DATA, QUEUED, or RUNNING. Repeated queries do not regenerate the report when the status is FAILED. The Report object is not returned unless the status is AVAILABLE.
      shared_ptr<string> reportStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAiReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAiReportResponseBody::Data) };
    inline GetAiReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAiReportResponseBody::Data) };
    inline GetAiReportResponseBody& setData(const GetAiReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAiReportResponseBody& setData(GetAiReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The report query result, which includes ReportStatus. The Report object is included only when the report is available.
    shared_ptr<GetAiReportResponseBody::Data> data_ {};
    // The unique identity of the request, which is used for Tracing Analysis and troubleshooting. Provide this identity when you troubleshoot exceptions.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace InternetBankOpen20240612
#endif
