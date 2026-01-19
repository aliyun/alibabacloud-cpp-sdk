// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULESREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULESREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRulesReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRulesReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRulesReport, configRulesReport_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRulesReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRulesReport, configRulesReport_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConfigRulesReportResponseBody() = default ;
    GetConfigRulesReportResponseBody(const GetConfigRulesReportResponseBody &) = default ;
    GetConfigRulesReportResponseBody(GetConfigRulesReportResponseBody &&) = default ;
    GetConfigRulesReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRulesReportResponseBody() = default ;
    GetConfigRulesReportResponseBody& operator=(const GetConfigRulesReportResponseBody &) = default ;
    GetConfigRulesReportResponseBody& operator=(GetConfigRulesReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigRulesReport : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigRulesReport& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(ReportCreateTimestamp, reportCreateTimestamp_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
        DARABONBA_PTR_TO_JSON(ReportUrl, reportUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigRulesReport& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(ReportCreateTimestamp, reportCreateTimestamp_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
        DARABONBA_PTR_FROM_JSON(ReportUrl, reportUrl_);
      };
      ConfigRulesReport() = default ;
      ConfigRulesReport(const ConfigRulesReport &) = default ;
      ConfigRulesReport(ConfigRulesReport &&) = default ;
      ConfigRulesReport(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigRulesReport() = default ;
      ConfigRulesReport& operator=(const ConfigRulesReport &) = default ;
      ConfigRulesReport& operator=(ConfigRulesReport &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->reportCreateTimestamp_ == nullptr && this->reportId_ == nullptr && this->reportStatus_ == nullptr && this->reportUrl_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline ConfigRulesReport& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // reportCreateTimestamp Field Functions 
      bool hasReportCreateTimestamp() const { return this->reportCreateTimestamp_ != nullptr;};
      void deleteReportCreateTimestamp() { this->reportCreateTimestamp_ = nullptr;};
      inline int64_t getReportCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(reportCreateTimestamp_, 0L) };
      inline ConfigRulesReport& setReportCreateTimestamp(int64_t reportCreateTimestamp) { DARABONBA_PTR_SET_VALUE(reportCreateTimestamp_, reportCreateTimestamp) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline ConfigRulesReport& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // reportStatus Field Functions 
      bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
      void deleteReportStatus() { this->reportStatus_ = nullptr;};
      inline string getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
      inline ConfigRulesReport& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


      // reportUrl Field Functions 
      bool hasReportUrl() const { return this->reportUrl_ != nullptr;};
      void deleteReportUrl() { this->reportUrl_ = nullptr;};
      inline string getReportUrl() const { DARABONBA_PTR_GET_DEFAULT(reportUrl_, "") };
      inline ConfigRulesReport& setReportUrl(string reportUrl) { DARABONBA_PTR_SET_VALUE(reportUrl_, reportUrl) };


    protected:
      // The ID of the Alibaba Cloud account to which the rules belong.
      shared_ptr<int64_t> accountId_ {};
      // The timestamp when the compliance evaluation report was generated. Unit: milliseconds.
      shared_ptr<int64_t> reportCreateTimestamp_ {};
      // The ID of the compliance evaluation report.
      shared_ptr<string> reportId_ {};
      // The status of the compliance evaluation report. Valid values:
      // 
      // *   NONE: The compliance evaluation report is not generated.
      // *   CREATING: The compliance evaluation report is being generated.
      // *   COMPLETE: The compliance evaluation report is generated.
      shared_ptr<string> reportStatus_ {};
      // The URL that is used to download the compliance evaluation report.
      shared_ptr<string> reportUrl_ {};
    };

    virtual bool empty() const override { return this->configRulesReport_ == nullptr
        && this->requestId_ == nullptr; };
    // configRulesReport Field Functions 
    bool hasConfigRulesReport() const { return this->configRulesReport_ != nullptr;};
    void deleteConfigRulesReport() { this->configRulesReport_ = nullptr;};
    inline const GetConfigRulesReportResponseBody::ConfigRulesReport & getConfigRulesReport() const { DARABONBA_PTR_GET_CONST(configRulesReport_, GetConfigRulesReportResponseBody::ConfigRulesReport) };
    inline GetConfigRulesReportResponseBody::ConfigRulesReport getConfigRulesReport() { DARABONBA_PTR_GET(configRulesReport_, GetConfigRulesReportResponseBody::ConfigRulesReport) };
    inline GetConfigRulesReportResponseBody& setConfigRulesReport(const GetConfigRulesReportResponseBody::ConfigRulesReport & configRulesReport) { DARABONBA_PTR_SET_VALUE(configRulesReport_, configRulesReport) };
    inline GetConfigRulesReportResponseBody& setConfigRulesReport(GetConfigRulesReportResponseBody::ConfigRulesReport && configRulesReport) { DARABONBA_PTR_SET_RVALUE(configRulesReport_, configRulesReport) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigRulesReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the compliance evaluation report.
    shared_ptr<GetConfigRulesReportResponseBody::ConfigRulesReport> configRulesReport_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
