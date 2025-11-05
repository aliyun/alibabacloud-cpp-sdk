// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTSRESPONSEBODYHISTORYREPORTS_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTSRESPONSEBODYHISTORYREPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ListReportsResponseBodyHistoryReports : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReportsResponseBodyHistoryReports& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportName, reportName_);
      DARABONBA_PTR_TO_JSON(ReportTime, reportTime_);
      DARABONBA_PTR_TO_JSON(SubscribePeriod, subscribePeriod_);
    };
    friend void from_json(const Darabonba::Json& j, ListReportsResponseBodyHistoryReports& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportName, reportName_);
      DARABONBA_PTR_FROM_JSON(ReportTime, reportTime_);
      DARABONBA_PTR_FROM_JSON(SubscribePeriod, subscribePeriod_);
    };
    ListReportsResponseBodyHistoryReports() = default ;
    ListReportsResponseBodyHistoryReports(const ListReportsResponseBodyHistoryReports &) = default ;
    ListReportsResponseBodyHistoryReports(ListReportsResponseBodyHistoryReports &&) = default ;
    ListReportsResponseBodyHistoryReports(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReportsResponseBodyHistoryReports() = default ;
    ListReportsResponseBodyHistoryReports& operator=(const ListReportsResponseBodyHistoryReports &) = default ;
    ListReportsResponseBodyHistoryReports& operator=(ListReportsResponseBodyHistoryReports &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->reportId_ == nullptr && return this->reportName_ == nullptr && return this->reportTime_ == nullptr && return this->subscribePeriod_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListReportsResponseBodyHistoryReports& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline ListReportsResponseBodyHistoryReports& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportName Field Functions 
    bool hasReportName() const { return this->reportName_ != nullptr;};
    void deleteReportName() { this->reportName_ = nullptr;};
    inline string reportName() const { DARABONBA_PTR_GET_DEFAULT(reportName_, "") };
    inline ListReportsResponseBodyHistoryReports& setReportName(string reportName) { DARABONBA_PTR_SET_VALUE(reportName_, reportName) };


    // reportTime Field Functions 
    bool hasReportTime() const { return this->reportTime_ != nullptr;};
    void deleteReportTime() { this->reportTime_ = nullptr;};
    inline string reportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, "") };
    inline ListReportsResponseBodyHistoryReports& setReportTime(string reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


    // subscribePeriod Field Functions 
    bool hasSubscribePeriod() const { return this->subscribePeriod_ != nullptr;};
    void deleteSubscribePeriod() { this->subscribePeriod_ = nullptr;};
    inline string subscribePeriod() const { DARABONBA_PTR_GET_DEFAULT(subscribePeriod_, "") };
    inline ListReportsResponseBodyHistoryReports& setSubscribePeriod(string subscribePeriod) { DARABONBA_PTR_SET_VALUE(subscribePeriod_, subscribePeriod) };


  protected:
    // Application name.
    std::shared_ptr<string> appName_ = nullptr;
    // Report ID.
    std::shared_ptr<string> reportId_ = nullptr;
    // Report name.
    std::shared_ptr<string> reportName_ = nullptr;
    // Report generation time.
    std::shared_ptr<string> reportTime_ = nullptr;
    // Report subscription period.
    std::shared_ptr<string> subscribePeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
