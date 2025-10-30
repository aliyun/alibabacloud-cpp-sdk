// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERINSPECTREPORTSRESPONSEBODYREPORTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERINSPECTREPORTSRESPONSEBODYREPORTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClusterInspectReportsResponseBodyReportsSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterInspectReportsResponseBodyReports : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterInspectReportsResponseBodyReports& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterInspectReportsResponseBodyReports& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
    };
    ListClusterInspectReportsResponseBodyReports() = default ;
    ListClusterInspectReportsResponseBodyReports(const ListClusterInspectReportsResponseBodyReports &) = default ;
    ListClusterInspectReportsResponseBodyReports(ListClusterInspectReportsResponseBodyReports &&) = default ;
    ListClusterInspectReportsResponseBodyReports(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterInspectReportsResponseBodyReports() = default ;
    ListClusterInspectReportsResponseBodyReports& operator=(const ListClusterInspectReportsResponseBodyReports &) = default ;
    ListClusterInspectReportsResponseBodyReports& operator=(ListClusterInspectReportsResponseBodyReports &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->reportId_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->summary_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListClusterInspectReportsResponseBodyReports& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline ListClusterInspectReportsResponseBodyReports& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListClusterInspectReportsResponseBodyReports& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListClusterInspectReportsResponseBodyReports& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const Models::ListClusterInspectReportsResponseBodyReportsSummary & summary() const { DARABONBA_PTR_GET_CONST(summary_, Models::ListClusterInspectReportsResponseBodyReportsSummary) };
    inline Models::ListClusterInspectReportsResponseBodyReportsSummary summary() { DARABONBA_PTR_GET(summary_, Models::ListClusterInspectReportsResponseBodyReportsSummary) };
    inline ListClusterInspectReportsResponseBodyReports& setSummary(const Models::ListClusterInspectReportsResponseBodyReportsSummary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline ListClusterInspectReportsResponseBodyReports& setSummary(Models::ListClusterInspectReportsResponseBodyReportsSummary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    // The report completion time.
    std::shared_ptr<string> endTime_ = nullptr;
    // An inspection report ID.
    std::shared_ptr<string> reportId_ = nullptr;
    // The report start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The inspection report status.
    std::shared_ptr<string> status_ = nullptr;
    // The inspection summary.
    std::shared_ptr<Models::ListClusterInspectReportsResponseBodyReportsSummary> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
