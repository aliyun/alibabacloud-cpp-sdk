// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTENTPLANGENERATIONTASK_HPP_
#define ALIBABACLOUD_MODELS_CONTENTPLANGENERATIONTASK_HPP_
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
  class ContentPlanGenerationTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContentPlanGenerationTask& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(AnalysisTaskId, analysisTaskId_);
      DARABONBA_PTR_TO_JSON(ConfigRevision, configRevision_);
      DARABONBA_PTR_TO_JSON(DiagnosisTaskId, diagnosisTaskId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ReportConfigRevision, reportConfigRevision_);
      DARABONBA_PTR_TO_JSON(StaleConfig, staleConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmittedAt, submittedAt_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, ContentPlanGenerationTask& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(AnalysisTaskId, analysisTaskId_);
      DARABONBA_PTR_FROM_JSON(ConfigRevision, configRevision_);
      DARABONBA_PTR_FROM_JSON(DiagnosisTaskId, diagnosisTaskId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ReportConfigRevision, reportConfigRevision_);
      DARABONBA_PTR_FROM_JSON(StaleConfig, staleConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmittedAt, submittedAt_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
    };
    ContentPlanGenerationTask() = default ;
    ContentPlanGenerationTask(const ContentPlanGenerationTask &) = default ;
    ContentPlanGenerationTask(ContentPlanGenerationTask &&) = default ;
    ContentPlanGenerationTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContentPlanGenerationTask() = default ;
    ContentPlanGenerationTask& operator=(const ContentPlanGenerationTask &) = default ;
    ContentPlanGenerationTask& operator=(ContentPlanGenerationTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Analysis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Analysis& obj) { 
        DARABONBA_PTR_TO_JSON(Modules, modules_);
        DARABONBA_PTR_TO_JSON(ReferenceWritingNotes, referenceWritingNotes_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
      };
      friend void from_json(const Darabonba::Json& j, Analysis& obj) { 
        DARABONBA_PTR_FROM_JSON(Modules, modules_);
        DARABONBA_PTR_FROM_JSON(ReferenceWritingNotes, referenceWritingNotes_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
      };
      Analysis() = default ;
      Analysis(const Analysis &) = default ;
      Analysis(Analysis &&) = default ;
      Analysis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Analysis() = default ;
      Analysis& operator=(const Analysis &) = default ;
      Analysis& operator=(Analysis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Modules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Modules& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(KeyQuestions, keyQuestions_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Modules& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(KeyQuestions, keyQuestions_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        Modules() = default ;
        Modules(const Modules &) = default ;
        Modules(Modules &&) = default ;
        Modules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Modules() = default ;
        Modules& operator=(const Modules &) = default ;
        Modules& operator=(Modules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->keyQuestions_ == nullptr && this->title_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Modules& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // keyQuestions Field Functions 
        bool hasKeyQuestions() const { return this->keyQuestions_ != nullptr;};
        void deleteKeyQuestions() { this->keyQuestions_ = nullptr;};
        inline const vector<string> & getKeyQuestions() const { DARABONBA_PTR_GET_CONST(keyQuestions_, vector<string>) };
        inline vector<string> getKeyQuestions() { DARABONBA_PTR_GET(keyQuestions_, vector<string>) };
        inline Modules& setKeyQuestions(const vector<string> & keyQuestions) { DARABONBA_PTR_SET_VALUE(keyQuestions_, keyQuestions) };
        inline Modules& setKeyQuestions(vector<string> && keyQuestions) { DARABONBA_PTR_SET_RVALUE(keyQuestions_, keyQuestions) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Modules& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The module content.
        shared_ptr<string> content_ {};
        // The key questions.
        shared_ptr<vector<string>> keyQuestions_ {};
        // The module title.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->modules_ == nullptr
        && this->referenceWritingNotes_ == nullptr && this->summary_ == nullptr; };
      // modules Field Functions 
      bool hasModules() const { return this->modules_ != nullptr;};
      void deleteModules() { this->modules_ = nullptr;};
      inline const vector<Analysis::Modules> & getModules() const { DARABONBA_PTR_GET_CONST(modules_, vector<Analysis::Modules>) };
      inline vector<Analysis::Modules> getModules() { DARABONBA_PTR_GET(modules_, vector<Analysis::Modules>) };
      inline Analysis& setModules(const vector<Analysis::Modules> & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
      inline Analysis& setModules(vector<Analysis::Modules> && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


      // referenceWritingNotes Field Functions 
      bool hasReferenceWritingNotes() const { return this->referenceWritingNotes_ != nullptr;};
      void deleteReferenceWritingNotes() { this->referenceWritingNotes_ = nullptr;};
      inline const vector<string> & getReferenceWritingNotes() const { DARABONBA_PTR_GET_CONST(referenceWritingNotes_, vector<string>) };
      inline vector<string> getReferenceWritingNotes() { DARABONBA_PTR_GET(referenceWritingNotes_, vector<string>) };
      inline Analysis& setReferenceWritingNotes(const vector<string> & referenceWritingNotes) { DARABONBA_PTR_SET_VALUE(referenceWritingNotes_, referenceWritingNotes) };
      inline Analysis& setReferenceWritingNotes(vector<string> && referenceWritingNotes) { DARABONBA_PTR_SET_RVALUE(referenceWritingNotes_, referenceWritingNotes) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Analysis& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    protected:
      // The analysis modules.
      shared_ptr<vector<Analysis::Modules>> modules_ {};
      // The reference article writing guidelines, which include only structure and perspective, excluding third-party facts.
      shared_ptr<vector<string>> referenceWritingNotes_ {};
      // The analysis summary.
      shared_ptr<string> summary_ {};
    };

    virtual bool empty() const override { return this->analysis_ == nullptr
        && this->analysisTaskId_ == nullptr && this->configRevision_ == nullptr && this->diagnosisTaskId_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr
        && this->planId_ == nullptr && this->progress_ == nullptr && this->projectId_ == nullptr && this->reportConfigRevision_ == nullptr && this->staleConfig_ == nullptr
        && this->status_ == nullptr && this->submittedAt_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr && this->updatedAt_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const ContentPlanGenerationTask::Analysis & getAnalysis() const { DARABONBA_PTR_GET_CONST(analysis_, ContentPlanGenerationTask::Analysis) };
    inline ContentPlanGenerationTask::Analysis getAnalysis() { DARABONBA_PTR_GET(analysis_, ContentPlanGenerationTask::Analysis) };
    inline ContentPlanGenerationTask& setAnalysis(const ContentPlanGenerationTask::Analysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline ContentPlanGenerationTask& setAnalysis(ContentPlanGenerationTask::Analysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // analysisTaskId Field Functions 
    bool hasAnalysisTaskId() const { return this->analysisTaskId_ != nullptr;};
    void deleteAnalysisTaskId() { this->analysisTaskId_ = nullptr;};
    inline string getAnalysisTaskId() const { DARABONBA_PTR_GET_DEFAULT(analysisTaskId_, "") };
    inline ContentPlanGenerationTask& setAnalysisTaskId(string analysisTaskId) { DARABONBA_PTR_SET_VALUE(analysisTaskId_, analysisTaskId) };


    // configRevision Field Functions 
    bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
    void deleteConfigRevision() { this->configRevision_ = nullptr;};
    inline int64_t getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, 0L) };
    inline ContentPlanGenerationTask& setConfigRevision(int64_t configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


    // diagnosisTaskId Field Functions 
    bool hasDiagnosisTaskId() const { return this->diagnosisTaskId_ != nullptr;};
    void deleteDiagnosisTaskId() { this->diagnosisTaskId_ = nullptr;};
    inline string getDiagnosisTaskId() const { DARABONBA_PTR_GET_DEFAULT(diagnosisTaskId_, "") };
    inline ContentPlanGenerationTask& setDiagnosisTaskId(string diagnosisTaskId) { DARABONBA_PTR_SET_VALUE(diagnosisTaskId_, diagnosisTaskId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ContentPlanGenerationTask& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ContentPlanGenerationTask& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline ContentPlanGenerationTask& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline ContentPlanGenerationTask& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ContentPlanGenerationTask& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // reportConfigRevision Field Functions 
    bool hasReportConfigRevision() const { return this->reportConfigRevision_ != nullptr;};
    void deleteReportConfigRevision() { this->reportConfigRevision_ = nullptr;};
    inline int64_t getReportConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(reportConfigRevision_, 0L) };
    inline ContentPlanGenerationTask& setReportConfigRevision(int64_t reportConfigRevision) { DARABONBA_PTR_SET_VALUE(reportConfigRevision_, reportConfigRevision) };


    // staleConfig Field Functions 
    bool hasStaleConfig() const { return this->staleConfig_ != nullptr;};
    void deleteStaleConfig() { this->staleConfig_ = nullptr;};
    inline bool getStaleConfig() const { DARABONBA_PTR_GET_DEFAULT(staleConfig_, false) };
    inline ContentPlanGenerationTask& setStaleConfig(bool staleConfig) { DARABONBA_PTR_SET_VALUE(staleConfig_, staleConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ContentPlanGenerationTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submittedAt Field Functions 
    bool hasSubmittedAt() const { return this->submittedAt_ != nullptr;};
    void deleteSubmittedAt() { this->submittedAt_ = nullptr;};
    inline int64_t getSubmittedAt() const { DARABONBA_PTR_GET_DEFAULT(submittedAt_, 0L) };
    inline ContentPlanGenerationTask& setSubmittedAt(int64_t submittedAt) { DARABONBA_PTR_SET_VALUE(submittedAt_, submittedAt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ContentPlanGenerationTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ContentPlanGenerationTask& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline ContentPlanGenerationTask& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // The analysis conclusions, returned only after the analysis task succeeds.
    shared_ptr<ContentPlanGenerationTask::Analysis> analysis_ {};
    // The ID of the analysis task on which the scheduling task is based.
    shared_ptr<string> analysisTaskId_ {};
    // The current configuration version of the workspace when the analysis is initiated.
    shared_ptr<int64_t> configRevision_ {};
    // The ID of the GEO diagnostic task used by the analysis node.
    shared_ptr<string> diagnosisTaskId_ {};
    // The error code for the failure.
    shared_ptr<string> errorCode_ {};
    // The error message for the failure.
    shared_ptr<string> errorMessage_ {};
    // The ID of the content plan generated after the scheduling task succeeds.
    shared_ptr<string> planId_ {};
    // The task progress, ranging from 0 to 10000.
    shared_ptr<int32_t> progress_ {};
    // The ID of the workspace, which refers to the GEO workspace for brand marketing, namely the appWorkspaceId.
    shared_ptr<string> projectId_ {};
    // The workspace configuration version on which the diagnostic report is based. The analysis, scheduling, and article generation processes always read this version.
    shared_ptr<int64_t> reportConfigRevision_ {};
    // Indicates whether the diagnostic report is generated based on an outdated configuration. If the value is true, the frontend should prompt the user.
    shared_ptr<bool> staleConfig_ {};
    // The task status.
    shared_ptr<string> status_ {};
    // The submission time, in milliseconds.
    shared_ptr<int64_t> submittedAt_ {};
    // The ID of the generation task.
    shared_ptr<string> taskId_ {};
    // The task type. Valid values: ANALYSIS and SCHEDULE.
    shared_ptr<string> taskType_ {};
    // The last update time, in milliseconds.
    shared_ptr<int64_t> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
