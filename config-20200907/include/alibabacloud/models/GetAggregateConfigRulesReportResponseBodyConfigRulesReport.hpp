// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULESREPORTRESPONSEBODYCONFIGRULESREPORT_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULESREPORTRESPONSEBODYCONFIGRULESREPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRulesReportResponseBodyConfigRulesReport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRulesReportResponseBodyConfigRulesReport& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ReportCreateTimestamp, reportCreateTimestamp_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(ReportUrl, reportUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRulesReportResponseBodyConfigRulesReport& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ReportCreateTimestamp, reportCreateTimestamp_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(ReportUrl, reportUrl_);
    };
    GetAggregateConfigRulesReportResponseBodyConfigRulesReport() = default ;
    GetAggregateConfigRulesReportResponseBodyConfigRulesReport(const GetAggregateConfigRulesReportResponseBodyConfigRulesReport &) = default ;
    GetAggregateConfigRulesReportResponseBodyConfigRulesReport(GetAggregateConfigRulesReportResponseBodyConfigRulesReport &&) = default ;
    GetAggregateConfigRulesReportResponseBodyConfigRulesReport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRulesReportResponseBodyConfigRulesReport() = default ;
    GetAggregateConfigRulesReportResponseBodyConfigRulesReport& operator=(const GetAggregateConfigRulesReportResponseBodyConfigRulesReport &) = default ;
    GetAggregateConfigRulesReportResponseBodyConfigRulesReport& operator=(GetAggregateConfigRulesReportResponseBodyConfigRulesReport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->aggregatorId_ == nullptr && return this->reportCreateTimestamp_ == nullptr && return this->reportId_ == nullptr && return this->reportStatus_ == nullptr && return this->reportUrl_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GetAggregateConfigRulesReportResponseBodyConfigRulesReport& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateConfigRulesReportResponseBodyConfigRulesReport& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // reportCreateTimestamp Field Functions 
    bool hasReportCreateTimestamp() const { return this->reportCreateTimestamp_ != nullptr;};
    void deleteReportCreateTimestamp() { this->reportCreateTimestamp_ = nullptr;};
    inline int64_t reportCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(reportCreateTimestamp_, 0L) };
    inline GetAggregateConfigRulesReportResponseBodyConfigRulesReport& setReportCreateTimestamp(int64_t reportCreateTimestamp) { DARABONBA_PTR_SET_VALUE(reportCreateTimestamp_, reportCreateTimestamp) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetAggregateConfigRulesReportResponseBodyConfigRulesReport& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline string reportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
    inline GetAggregateConfigRulesReportResponseBodyConfigRulesReport& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // reportUrl Field Functions 
    bool hasReportUrl() const { return this->reportUrl_ != nullptr;};
    void deleteReportUrl() { this->reportUrl_ = nullptr;};
    inline string reportUrl() const { DARABONBA_PTR_GET_DEFAULT(reportUrl_, "") };
    inline GetAggregateConfigRulesReportResponseBodyConfigRulesReport& setReportUrl(string reportUrl) { DARABONBA_PTR_SET_VALUE(reportUrl_, reportUrl) };


  protected:
    // The ID of the management account to which the rules belong.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The ID of the account group.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The timestamp when the compliance evaluation report was generated. Unit: milliseconds.
    std::shared_ptr<int64_t> reportCreateTimestamp_ = nullptr;
    // The ID of the compliance evaluation report.
    std::shared_ptr<string> reportId_ = nullptr;
    // The status of the compliance evaluation report. Valid values:
    // 
    // *   NONE: The compliance evaluation report is not generated.
    // *   CREATING: The compliance evaluation report is being generated.
    // *   COMPLETE: The compliance evaluation report was generated.
    std::shared_ptr<string> reportStatus_ = nullptr;
    // The URL used to download the compliance evaluation report.
    std::shared_ptr<string> reportUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
