// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateCompliancePackReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateCompliancePackReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackReport, compliancePackReport_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateCompliancePackReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackReport, compliancePackReport_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateCompliancePackReportResponseBody() = default ;
    GetAggregateCompliancePackReportResponseBody(const GetAggregateCompliancePackReportResponseBody &) = default ;
    GetAggregateCompliancePackReportResponseBody(GetAggregateCompliancePackReportResponseBody &&) = default ;
    GetAggregateCompliancePackReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateCompliancePackReportResponseBody() = default ;
    GetAggregateCompliancePackReportResponseBody& operator=(const GetAggregateCompliancePackReportResponseBody &) = default ;
    GetAggregateCompliancePackReportResponseBody& operator=(GetAggregateCompliancePackReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CompliancePackReport : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompliancePackReport& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_TO_JSON(ReportCreateTimestamp, reportCreateTimestamp_);
        DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
        DARABONBA_PTR_TO_JSON(ReportUrl, reportUrl_);
      };
      friend void from_json(const Darabonba::Json& j, CompliancePackReport& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_FROM_JSON(ReportCreateTimestamp, reportCreateTimestamp_);
        DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
        DARABONBA_PTR_FROM_JSON(ReportUrl, reportUrl_);
      };
      CompliancePackReport() = default ;
      CompliancePackReport(const CompliancePackReport &) = default ;
      CompliancePackReport(CompliancePackReport &&) = default ;
      CompliancePackReport(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompliancePackReport() = default ;
      CompliancePackReport& operator=(const CompliancePackReport &) = default ;
      CompliancePackReport& operator=(CompliancePackReport &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->compliancePackId_ == nullptr && this->reportCreateTimestamp_ == nullptr && this->reportStatus_ == nullptr && this->reportUrl_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline CompliancePackReport& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // compliancePackId Field Functions 
      bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
      void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
      inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
      inline CompliancePackReport& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


      // reportCreateTimestamp Field Functions 
      bool hasReportCreateTimestamp() const { return this->reportCreateTimestamp_ != nullptr;};
      void deleteReportCreateTimestamp() { this->reportCreateTimestamp_ = nullptr;};
      inline int64_t getReportCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(reportCreateTimestamp_, 0L) };
      inline CompliancePackReport& setReportCreateTimestamp(int64_t reportCreateTimestamp) { DARABONBA_PTR_SET_VALUE(reportCreateTimestamp_, reportCreateTimestamp) };


      // reportStatus Field Functions 
      bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
      void deleteReportStatus() { this->reportStatus_ = nullptr;};
      inline string getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
      inline CompliancePackReport& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


      // reportUrl Field Functions 
      bool hasReportUrl() const { return this->reportUrl_ != nullptr;};
      void deleteReportUrl() { this->reportUrl_ = nullptr;};
      inline string getReportUrl() const { DARABONBA_PTR_GET_DEFAULT(reportUrl_, "") };
      inline CompliancePackReport& setReportUrl(string reportUrl) { DARABONBA_PTR_SET_VALUE(reportUrl_, reportUrl) };


    protected:
      // The ID of the management account to which the compliance package belongs.
      shared_ptr<int64_t> accountId_ {};
      // The ID of the compliance package.
      shared_ptr<string> compliancePackId_ {};
      // The timestamp when the compliance evaluation report was generated. Unit: milliseconds.
      shared_ptr<int64_t> reportCreateTimestamp_ {};
      // The status of the compliance evaluation report. Valid values:
      // 
      // *   NONE: The compliance evaluation report is not generated.
      // *   CREATING: The compliance evaluation report is being generated.
      // *   COMPLETE: The compliance evaluation report is generated.
      shared_ptr<string> reportStatus_ {};
      // The URL that is used to download the compliance evaluation report.
      shared_ptr<string> reportUrl_ {};
    };

    virtual bool empty() const override { return this->compliancePackReport_ == nullptr
        && this->requestId_ == nullptr; };
    // compliancePackReport Field Functions 
    bool hasCompliancePackReport() const { return this->compliancePackReport_ != nullptr;};
    void deleteCompliancePackReport() { this->compliancePackReport_ = nullptr;};
    inline const GetAggregateCompliancePackReportResponseBody::CompliancePackReport & getCompliancePackReport() const { DARABONBA_PTR_GET_CONST(compliancePackReport_, GetAggregateCompliancePackReportResponseBody::CompliancePackReport) };
    inline GetAggregateCompliancePackReportResponseBody::CompliancePackReport getCompliancePackReport() { DARABONBA_PTR_GET(compliancePackReport_, GetAggregateCompliancePackReportResponseBody::CompliancePackReport) };
    inline GetAggregateCompliancePackReportResponseBody& setCompliancePackReport(const GetAggregateCompliancePackReportResponseBody::CompliancePackReport & compliancePackReport) { DARABONBA_PTR_SET_VALUE(compliancePackReport_, compliancePackReport) };
    inline GetAggregateCompliancePackReportResponseBody& setCompliancePackReport(GetAggregateCompliancePackReportResponseBody::CompliancePackReport && compliancePackReport) { DARABONBA_PTR_SET_RVALUE(compliancePackReport_, compliancePackReport) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateCompliancePackReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance evaluation report that is generated based on a compliance package.
    shared_ptr<GetAggregateCompliancePackReportResponseBody::CompliancePackReport> compliancePackReport_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
