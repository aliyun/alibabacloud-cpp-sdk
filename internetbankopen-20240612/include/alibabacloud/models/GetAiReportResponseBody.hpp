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
        shared_ptr<string> contentExpiresAt_ {};
        shared_ptr<string> downloadUrl_ {};
        shared_ptr<string> reportId_ {};
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
      shared_ptr<Data::Report> report_ {};
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
    shared_ptr<GetAiReportResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace InternetBankOpen20240612
#endif
