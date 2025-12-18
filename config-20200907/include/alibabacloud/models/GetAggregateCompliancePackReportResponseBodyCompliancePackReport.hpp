// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKREPORTRESPONSEBODYCOMPLIANCEPACKREPORT_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKREPORTRESPONSEBODYCOMPLIANCEPACKREPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateCompliancePackReportResponseBodyCompliancePackReport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateCompliancePackReportResponseBodyCompliancePackReport& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(ReportCreateTimestamp, reportCreateTimestamp_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(ReportUrl, reportUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateCompliancePackReportResponseBodyCompliancePackReport& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(ReportCreateTimestamp, reportCreateTimestamp_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(ReportUrl, reportUrl_);
    };
    GetAggregateCompliancePackReportResponseBodyCompliancePackReport() = default ;
    GetAggregateCompliancePackReportResponseBodyCompliancePackReport(const GetAggregateCompliancePackReportResponseBodyCompliancePackReport &) = default ;
    GetAggregateCompliancePackReportResponseBodyCompliancePackReport(GetAggregateCompliancePackReportResponseBodyCompliancePackReport &&) = default ;
    GetAggregateCompliancePackReportResponseBodyCompliancePackReport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateCompliancePackReportResponseBodyCompliancePackReport() = default ;
    GetAggregateCompliancePackReportResponseBodyCompliancePackReport& operator=(const GetAggregateCompliancePackReportResponseBodyCompliancePackReport &) = default ;
    GetAggregateCompliancePackReportResponseBodyCompliancePackReport& operator=(GetAggregateCompliancePackReportResponseBodyCompliancePackReport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->compliancePackId_ == nullptr && return this->reportCreateTimestamp_ == nullptr && return this->reportStatus_ == nullptr && return this->reportUrl_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GetAggregateCompliancePackReportResponseBodyCompliancePackReport& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetAggregateCompliancePackReportResponseBodyCompliancePackReport& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // reportCreateTimestamp Field Functions 
    bool hasReportCreateTimestamp() const { return this->reportCreateTimestamp_ != nullptr;};
    void deleteReportCreateTimestamp() { this->reportCreateTimestamp_ = nullptr;};
    inline int64_t reportCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(reportCreateTimestamp_, 0L) };
    inline GetAggregateCompliancePackReportResponseBodyCompliancePackReport& setReportCreateTimestamp(int64_t reportCreateTimestamp) { DARABONBA_PTR_SET_VALUE(reportCreateTimestamp_, reportCreateTimestamp) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline string reportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
    inline GetAggregateCompliancePackReportResponseBodyCompliancePackReport& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // reportUrl Field Functions 
    bool hasReportUrl() const { return this->reportUrl_ != nullptr;};
    void deleteReportUrl() { this->reportUrl_ = nullptr;};
    inline string reportUrl() const { DARABONBA_PTR_GET_DEFAULT(reportUrl_, "") };
    inline GetAggregateCompliancePackReportResponseBodyCompliancePackReport& setReportUrl(string reportUrl) { DARABONBA_PTR_SET_VALUE(reportUrl_, reportUrl) };


  protected:
    // The ID of the management account to which the compliance package belongs.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The ID of the compliance package.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The timestamp when the compliance evaluation report was generated. Unit: milliseconds.
    std::shared_ptr<int64_t> reportCreateTimestamp_ = nullptr;
    // The status of the compliance evaluation report. Valid values:
    // 
    // *   NONE: The compliance evaluation report is not generated.
    // *   CREATING: The compliance evaluation report is being generated.
    // *   COMPLETE: The compliance evaluation report is generated.
    std::shared_ptr<string> reportStatus_ = nullptr;
    // The URL that is used to download the compliance evaluation report.
    std::shared_ptr<string> reportUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
