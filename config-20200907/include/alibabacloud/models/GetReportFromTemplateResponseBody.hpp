// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTFROMTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTFROMTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetReportFromTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportFromTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateReport, templateReport_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportFromTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateReport, templateReport_);
    };
    GetReportFromTemplateResponseBody() = default ;
    GetReportFromTemplateResponseBody(const GetReportFromTemplateResponseBody &) = default ;
    GetReportFromTemplateResponseBody(GetReportFromTemplateResponseBody &&) = default ;
    GetReportFromTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportFromTemplateResponseBody() = default ;
    GetReportFromTemplateResponseBody& operator=(const GetReportFromTemplateResponseBody &) = default ;
    GetReportFromTemplateResponseBody& operator=(GetReportFromTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateReport : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateReport& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(ReportCreateEndTimestamp, reportCreateEndTimestamp_);
        DARABONBA_PTR_TO_JSON(ReportCreateStartTimestamp, reportCreateStartTimestamp_);
        DARABONBA_PTR_TO_JSON(ReportTemplateId, reportTemplateId_);
        DARABONBA_PTR_TO_JSON(ReportUrl, reportUrl_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateReportId, templateReportId_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateReport& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(ReportCreateEndTimestamp, reportCreateEndTimestamp_);
        DARABONBA_PTR_FROM_JSON(ReportCreateStartTimestamp, reportCreateStartTimestamp_);
        DARABONBA_PTR_FROM_JSON(ReportTemplateId, reportTemplateId_);
        DARABONBA_PTR_FROM_JSON(ReportUrl, reportUrl_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateReportId, templateReportId_);
      };
      TemplateReport() = default ;
      TemplateReport(const TemplateReport &) = default ;
      TemplateReport(TemplateReport &&) = default ;
      TemplateReport(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateReport() = default ;
      TemplateReport& operator=(const TemplateReport &) = default ;
      TemplateReport& operator=(TemplateReport &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->reportCreateEndTimestamp_ == nullptr && this->reportCreateStartTimestamp_ == nullptr && this->reportTemplateId_ == nullptr && this->reportUrl_ == nullptr && this->status_ == nullptr
        && this->templateReportId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline TemplateReport& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // reportCreateEndTimestamp Field Functions 
      bool hasReportCreateEndTimestamp() const { return this->reportCreateEndTimestamp_ != nullptr;};
      void deleteReportCreateEndTimestamp() { this->reportCreateEndTimestamp_ = nullptr;};
      inline int64_t getReportCreateEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(reportCreateEndTimestamp_, 0L) };
      inline TemplateReport& setReportCreateEndTimestamp(int64_t reportCreateEndTimestamp) { DARABONBA_PTR_SET_VALUE(reportCreateEndTimestamp_, reportCreateEndTimestamp) };


      // reportCreateStartTimestamp Field Functions 
      bool hasReportCreateStartTimestamp() const { return this->reportCreateStartTimestamp_ != nullptr;};
      void deleteReportCreateStartTimestamp() { this->reportCreateStartTimestamp_ = nullptr;};
      inline int64_t getReportCreateStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(reportCreateStartTimestamp_, 0L) };
      inline TemplateReport& setReportCreateStartTimestamp(int64_t reportCreateStartTimestamp) { DARABONBA_PTR_SET_VALUE(reportCreateStartTimestamp_, reportCreateStartTimestamp) };


      // reportTemplateId Field Functions 
      bool hasReportTemplateId() const { return this->reportTemplateId_ != nullptr;};
      void deleteReportTemplateId() { this->reportTemplateId_ = nullptr;};
      inline string getReportTemplateId() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateId_, "") };
      inline TemplateReport& setReportTemplateId(string reportTemplateId) { DARABONBA_PTR_SET_VALUE(reportTemplateId_, reportTemplateId) };


      // reportUrl Field Functions 
      bool hasReportUrl() const { return this->reportUrl_ != nullptr;};
      void deleteReportUrl() { this->reportUrl_ = nullptr;};
      inline string getReportUrl() const { DARABONBA_PTR_GET_DEFAULT(reportUrl_, "") };
      inline TemplateReport& setReportUrl(string reportUrl) { DARABONBA_PTR_SET_VALUE(reportUrl_, reportUrl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TemplateReport& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateReportId Field Functions 
      bool hasTemplateReportId() const { return this->templateReportId_ != nullptr;};
      void deleteTemplateReportId() { this->templateReportId_ = nullptr;};
      inline string getTemplateReportId() const { DARABONBA_PTR_GET_DEFAULT(templateReportId_, "") };
      inline TemplateReport& setTemplateReportId(string templateReportId) { DARABONBA_PTR_SET_VALUE(templateReportId_, templateReportId) };


    protected:
      shared_ptr<int64_t> accountId_ {};
      shared_ptr<int64_t> reportCreateEndTimestamp_ {};
      shared_ptr<int64_t> reportCreateStartTimestamp_ {};
      shared_ptr<string> reportTemplateId_ {};
      shared_ptr<string> reportUrl_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> templateReportId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templateReport_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetReportFromTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateReport Field Functions 
    bool hasTemplateReport() const { return this->templateReport_ != nullptr;};
    void deleteTemplateReport() { this->templateReport_ = nullptr;};
    inline const GetReportFromTemplateResponseBody::TemplateReport & getTemplateReport() const { DARABONBA_PTR_GET_CONST(templateReport_, GetReportFromTemplateResponseBody::TemplateReport) };
    inline GetReportFromTemplateResponseBody::TemplateReport getTemplateReport() { DARABONBA_PTR_GET(templateReport_, GetReportFromTemplateResponseBody::TemplateReport) };
    inline GetReportFromTemplateResponseBody& setTemplateReport(const GetReportFromTemplateResponseBody::TemplateReport & templateReport) { DARABONBA_PTR_SET_VALUE(templateReport_, templateReport) };
    inline GetReportFromTemplateResponseBody& setTemplateReport(GetReportFromTemplateResponseBody::TemplateReport && templateReport) { DARABONBA_PTR_SET_RVALUE(templateReport_, templateReport) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetReportFromTemplateResponseBody::TemplateReport> templateReport_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
