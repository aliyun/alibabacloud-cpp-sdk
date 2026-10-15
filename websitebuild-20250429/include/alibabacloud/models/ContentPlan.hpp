// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTENTPLAN_HPP_
#define ALIBABACLOUD_MODELS_CONTENTPLAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ContentPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContentPlan& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalRequirements, additionalRequirements_);
      DARABONBA_PTR_TO_JSON(AnalysisTaskId, analysisTaskId_);
      DARABONBA_PTR_TO_JSON(ConfigRevision, configRevision_);
      DARABONBA_PTR_TO_JSON(DiagnosisCompletedAt, diagnosisCompletedAt_);
      DARABONBA_PTR_TO_JSON(DiagnosisTaskId, diagnosisTaskId_);
      DARABONBA_PTR_TO_JSON(DiagnosisType, diagnosisType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(GenerationTaskId, generationTaskId_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(PublishFrequency, publishFrequency_);
      DARABONBA_PTR_TO_JSON(ReportConfigRevision, reportConfigRevision_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(SupersededBy, supersededBy_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Weekdays, weekdays_);
    };
    friend void from_json(const Darabonba::Json& j, ContentPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalRequirements, additionalRequirements_);
      DARABONBA_PTR_FROM_JSON(AnalysisTaskId, analysisTaskId_);
      DARABONBA_PTR_FROM_JSON(ConfigRevision, configRevision_);
      DARABONBA_PTR_FROM_JSON(DiagnosisCompletedAt, diagnosisCompletedAt_);
      DARABONBA_PTR_FROM_JSON(DiagnosisTaskId, diagnosisTaskId_);
      DARABONBA_PTR_FROM_JSON(DiagnosisType, diagnosisType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(GenerationTaskId, generationTaskId_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(PublishFrequency, publishFrequency_);
      DARABONBA_PTR_FROM_JSON(ReportConfigRevision, reportConfigRevision_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(SupersededBy, supersededBy_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Weekdays, weekdays_);
    };
    ContentPlan() = default ;
    ContentPlan(const ContentPlan &) = default ;
    ContentPlan(ContentPlan &&) = default ;
    ContentPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContentPlan() = default ;
    ContentPlan& operator=(const ContentPlan &) = default ;
    ContentPlan& operator=(ContentPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalRequirements_ == nullptr
        && this->analysisTaskId_ == nullptr && this->configRevision_ == nullptr && this->diagnosisCompletedAt_ == nullptr && this->diagnosisTaskId_ == nullptr && this->diagnosisType_ == nullptr
        && this->endDate_ == nullptr && this->generationTaskId_ == nullptr && this->planId_ == nullptr && this->projectId_ == nullptr && this->publishFrequency_ == nullptr
        && this->reportConfigRevision_ == nullptr && this->startDate_ == nullptr && this->status_ == nullptr && this->summary_ == nullptr && this->supersededBy_ == nullptr
        && this->timezone_ == nullptr && this->weekdays_ == nullptr; };
    // additionalRequirements Field Functions 
    bool hasAdditionalRequirements() const { return this->additionalRequirements_ != nullptr;};
    void deleteAdditionalRequirements() { this->additionalRequirements_ = nullptr;};
    inline string getAdditionalRequirements() const { DARABONBA_PTR_GET_DEFAULT(additionalRequirements_, "") };
    inline ContentPlan& setAdditionalRequirements(string additionalRequirements) { DARABONBA_PTR_SET_VALUE(additionalRequirements_, additionalRequirements) };


    // analysisTaskId Field Functions 
    bool hasAnalysisTaskId() const { return this->analysisTaskId_ != nullptr;};
    void deleteAnalysisTaskId() { this->analysisTaskId_ = nullptr;};
    inline string getAnalysisTaskId() const { DARABONBA_PTR_GET_DEFAULT(analysisTaskId_, "") };
    inline ContentPlan& setAnalysisTaskId(string analysisTaskId) { DARABONBA_PTR_SET_VALUE(analysisTaskId_, analysisTaskId) };


    // configRevision Field Functions 
    bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
    void deleteConfigRevision() { this->configRevision_ = nullptr;};
    inline int64_t getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, 0L) };
    inline ContentPlan& setConfigRevision(int64_t configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


    // diagnosisCompletedAt Field Functions 
    bool hasDiagnosisCompletedAt() const { return this->diagnosisCompletedAt_ != nullptr;};
    void deleteDiagnosisCompletedAt() { this->diagnosisCompletedAt_ = nullptr;};
    inline int64_t getDiagnosisCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(diagnosisCompletedAt_, 0L) };
    inline ContentPlan& setDiagnosisCompletedAt(int64_t diagnosisCompletedAt) { DARABONBA_PTR_SET_VALUE(diagnosisCompletedAt_, diagnosisCompletedAt) };


    // diagnosisTaskId Field Functions 
    bool hasDiagnosisTaskId() const { return this->diagnosisTaskId_ != nullptr;};
    void deleteDiagnosisTaskId() { this->diagnosisTaskId_ = nullptr;};
    inline string getDiagnosisTaskId() const { DARABONBA_PTR_GET_DEFAULT(diagnosisTaskId_, "") };
    inline ContentPlan& setDiagnosisTaskId(string diagnosisTaskId) { DARABONBA_PTR_SET_VALUE(diagnosisTaskId_, diagnosisTaskId) };


    // diagnosisType Field Functions 
    bool hasDiagnosisType() const { return this->diagnosisType_ != nullptr;};
    void deleteDiagnosisType() { this->diagnosisType_ = nullptr;};
    inline string getDiagnosisType() const { DARABONBA_PTR_GET_DEFAULT(diagnosisType_, "") };
    inline ContentPlan& setDiagnosisType(string diagnosisType) { DARABONBA_PTR_SET_VALUE(diagnosisType_, diagnosisType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ContentPlan& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // generationTaskId Field Functions 
    bool hasGenerationTaskId() const { return this->generationTaskId_ != nullptr;};
    void deleteGenerationTaskId() { this->generationTaskId_ = nullptr;};
    inline string getGenerationTaskId() const { DARABONBA_PTR_GET_DEFAULT(generationTaskId_, "") };
    inline ContentPlan& setGenerationTaskId(string generationTaskId) { DARABONBA_PTR_SET_VALUE(generationTaskId_, generationTaskId) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline ContentPlan& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ContentPlan& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // publishFrequency Field Functions 
    bool hasPublishFrequency() const { return this->publishFrequency_ != nullptr;};
    void deletePublishFrequency() { this->publishFrequency_ = nullptr;};
    inline int32_t getPublishFrequency() const { DARABONBA_PTR_GET_DEFAULT(publishFrequency_, 0) };
    inline ContentPlan& setPublishFrequency(int32_t publishFrequency) { DARABONBA_PTR_SET_VALUE(publishFrequency_, publishFrequency) };


    // reportConfigRevision Field Functions 
    bool hasReportConfigRevision() const { return this->reportConfigRevision_ != nullptr;};
    void deleteReportConfigRevision() { this->reportConfigRevision_ = nullptr;};
    inline int64_t getReportConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(reportConfigRevision_, 0L) };
    inline ContentPlan& setReportConfigRevision(int64_t reportConfigRevision) { DARABONBA_PTR_SET_VALUE(reportConfigRevision_, reportConfigRevision) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ContentPlan& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ContentPlan& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ContentPlan& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // supersededBy Field Functions 
    bool hasSupersededBy() const { return this->supersededBy_ != nullptr;};
    void deleteSupersededBy() { this->supersededBy_ = nullptr;};
    inline string getSupersededBy() const { DARABONBA_PTR_GET_DEFAULT(supersededBy_, "") };
    inline ContentPlan& setSupersededBy(string supersededBy) { DARABONBA_PTR_SET_VALUE(supersededBy_, supersededBy) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ContentPlan& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // weekdays Field Functions 
    bool hasWeekdays() const { return this->weekdays_ != nullptr;};
    void deleteWeekdays() { this->weekdays_ = nullptr;};
    inline const vector<int32_t> & getWeekdays() const { DARABONBA_PTR_GET_CONST(weekdays_, vector<int32_t>) };
    inline vector<int32_t> getWeekdays() { DARABONBA_PTR_GET(weekdays_, vector<int32_t>) };
    inline ContentPlan& setWeekdays(const vector<int32_t> & weekdays) { DARABONBA_PTR_SET_VALUE(weekdays_, weekdays) };
    inline ContentPlan& setWeekdays(vector<int32_t> && weekdays) { DARABONBA_PTR_SET_RVALUE(weekdays_, weekdays) };


  protected:
    // The additional user comments.
    shared_ptr<string> additionalRequirements_ {};
    // The ID of the analysis task used for scheduling.
    shared_ptr<string> analysisTaskId_ {};
    // The current configuration version of the workspace when the analysis is initiated.
    shared_ptr<int64_t> configRevision_ {};
    // The completion time of the GEO diagnosis, in milliseconds.
    shared_ptr<int64_t> diagnosisCompletedAt_ {};
    // The ID of the GEO diagnostic node.
    shared_ptr<string> diagnosisTaskId_ {};
    // The type of the GEO diagnosis.
    shared_ptr<string> diagnosisType_ {};
    // The end date of the plan in the yyyy-MM-dd format.
    shared_ptr<string> endDate_ {};
    // The ID of the generation task.
    shared_ptr<string> generationTaskId_ {};
    // The ID of the content plan.
    shared_ptr<string> planId_ {};
    // The ID of the workspace, which is the GEO workspace for brand marketing and corresponds to the appWorkspaceId.
    shared_ptr<string> projectId_ {};
    // The number of scheduled articles, which equals the number of matched generation days.
    shared_ptr<int32_t> publishFrequency_ {};
    // The workspace configuration version used for the diagnostic report, which is strictly read during article generation.
    shared_ptr<int64_t> reportConfigRevision_ {};
    // The start date of the plan in the yyyy-MM-dd format.
    shared_ptr<string> startDate_ {};
    // The status of the plan. Valid values: ACTIVE, SUPERSEDED, COMPLETED, and FAILED.
    shared_ptr<string> status_ {};
    // The summary of the overall strategy for the plan.
    shared_ptr<string> summary_ {};
    // The ID of the new plan that supersedes the current plan.
    shared_ptr<string> supersededBy_ {};
    // The IANA time zone used for scheduling.
    shared_ptr<string> timezone_ {};
    // The weekly generation days, where ISO weekday 1 represents Monday and 7 represents Sunday.
    shared_ptr<vector<int32_t>> weekdays_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
