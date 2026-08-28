// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPATROLREPORTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPATROLREPORTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetPatrolReportDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPatrolReportDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPatrolReportDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetPatrolReportDetailResponseBody() = default ;
    GetPatrolReportDetailResponseBody(const GetPatrolReportDetailResponseBody &) = default ;
    GetPatrolReportDetailResponseBody(GetPatrolReportDetailResponseBody &&) = default ;
    GetPatrolReportDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPatrolReportDetailResponseBody() = default ;
    GetPatrolReportDetailResponseBody& operator=(const GetPatrolReportDetailResponseBody &) = default ;
    GetPatrolReportDetailResponseBody& operator=(GetPatrolReportDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(overview, overview_);
        DARABONBA_PTR_TO_JSON(reportId, reportId_);
        DARABONBA_PTR_TO_JSON(scopeConfig, scopeConfig_);
        DARABONBA_PTR_TO_JSON(scopeType, scopeType_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(unhealthyJobs, unhealthyJobs_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(overview, overview_);
        DARABONBA_PTR_FROM_JSON(reportId, reportId_);
        DARABONBA_PTR_FROM_JSON(scopeConfig, scopeConfig_);
        DARABONBA_PTR_FROM_JSON(scopeType, scopeType_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(unhealthyJobs, unhealthyJobs_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
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
      class UnhealthyJobs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UnhealthyJobs& obj) { 
          DARABONBA_PTR_TO_JSON(analysis, analysis_);
          DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
          DARABONBA_PTR_TO_JSON(deploymentName, deploymentName_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(jobId, jobId_);
          DARABONBA_PTR_TO_JSON(recommendation, recommendation_);
          DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, UnhealthyJobs& obj) { 
          DARABONBA_PTR_FROM_JSON(analysis, analysis_);
          DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
          DARABONBA_PTR_FROM_JSON(deploymentName, deploymentName_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(jobId, jobId_);
          DARABONBA_PTR_FROM_JSON(recommendation, recommendation_);
          DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(tags, tags_);
        };
        UnhealthyJobs() = default ;
        UnhealthyJobs(const UnhealthyJobs &) = default ;
        UnhealthyJobs(UnhealthyJobs &&) = default ;
        UnhealthyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UnhealthyJobs() = default ;
        UnhealthyJobs& operator=(const UnhealthyJobs &) = default ;
        UnhealthyJobs& operator=(UnhealthyJobs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->analysis_ == nullptr
        && this->deploymentId_ == nullptr && this->deploymentName_ == nullptr && this->description_ == nullptr && this->jobId_ == nullptr && this->recommendation_ == nullptr
        && this->riskLevel_ == nullptr && this->tags_ == nullptr; };
        // analysis Field Functions 
        bool hasAnalysis() const { return this->analysis_ != nullptr;};
        void deleteAnalysis() { this->analysis_ = nullptr;};
        inline string getAnalysis() const { DARABONBA_PTR_GET_DEFAULT(analysis_, "") };
        inline UnhealthyJobs& setAnalysis(string analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };


        // deploymentId Field Functions 
        bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
        void deleteDeploymentId() { this->deploymentId_ = nullptr;};
        inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
        inline UnhealthyJobs& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


        // deploymentName Field Functions 
        bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
        void deleteDeploymentName() { this->deploymentName_ = nullptr;};
        inline string getDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
        inline UnhealthyJobs& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline UnhealthyJobs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline UnhealthyJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // recommendation Field Functions 
        bool hasRecommendation() const { return this->recommendation_ != nullptr;};
        void deleteRecommendation() { this->recommendation_ = nullptr;};
        inline string getRecommendation() const { DARABONBA_PTR_GET_DEFAULT(recommendation_, "") };
        inline UnhealthyJobs& setRecommendation(string recommendation) { DARABONBA_PTR_SET_VALUE(recommendation_, recommendation) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline UnhealthyJobs& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline UnhealthyJobs& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline UnhealthyJobs& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The analysis.
        shared_ptr<string> analysis_ {};
        // The deployment ID.
        shared_ptr<string> deploymentId_ {};
        // The deployment name.
        shared_ptr<string> deploymentName_ {};
        // The problem description.
        shared_ptr<string> description_ {};
        // The job ID.
        shared_ptr<string> jobId_ {};
        // The recommendation.
        shared_ptr<string> recommendation_ {};
        // The risk level.
        shared_ptr<string> riskLevel_ {};
        // The list of tags diagnosed by AI for the job.
        shared_ptr<vector<string>> tags_ {};
      };

      class ScopeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScopeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(deploymentIds, deploymentIds_);
          DARABONBA_PTR_TO_JSON(tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ScopeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(deploymentIds, deploymentIds_);
          DARABONBA_PTR_FROM_JSON(tags, tags_);
        };
        ScopeConfig() = default ;
        ScopeConfig(const ScopeConfig &) = default ;
        ScopeConfig(ScopeConfig &&) = default ;
        ScopeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScopeConfig() = default ;
        ScopeConfig& operator=(const ScopeConfig &) = default ;
        ScopeConfig& operator=(ScopeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deploymentIds_ == nullptr
        && this->tags_ == nullptr; };
        // deploymentIds Field Functions 
        bool hasDeploymentIds() const { return this->deploymentIds_ != nullptr;};
        void deleteDeploymentIds() { this->deploymentIds_ = nullptr;};
        inline const vector<string> & getDeploymentIds() const { DARABONBA_PTR_GET_CONST(deploymentIds_, vector<string>) };
        inline vector<string> getDeploymentIds() { DARABONBA_PTR_GET(deploymentIds_, vector<string>) };
        inline ScopeConfig& setDeploymentIds(const vector<string> & deploymentIds) { DARABONBA_PTR_SET_VALUE(deploymentIds_, deploymentIds) };
        inline ScopeConfig& setDeploymentIds(vector<string> && deploymentIds) { DARABONBA_PTR_SET_RVALUE(deploymentIds_, deploymentIds) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const map<string, vector<string>> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, vector<string>>) };
        inline map<string, vector<string>> getTags() { DARABONBA_PTR_GET(tags_, map<string, vector<string>>) };
        inline ScopeConfig& setTags(const map<string, vector<string>> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ScopeConfig& setTags(map<string, vector<string>> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The list of deployment IDs. This parameter is valid only when scopeType is set to DEPLOYMENTS.
        shared_ptr<vector<string>> deploymentIds_ {};
        // The tag mapping. This parameter is valid only when scopeType is set to TAGS. The key is the tag name, and the value is the list of tag values.
        shared_ptr<map<string, vector<string>>> tags_ {};
      };

      class Overview : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Overview& obj) { 
          DARABONBA_PTR_TO_JSON(problemSummary, problemSummary_);
          DARABONBA_PTR_TO_JSON(riskSummary, riskSummary_);
          DARABONBA_PTR_TO_JSON(total, total_);
        };
        friend void from_json(const Darabonba::Json& j, Overview& obj) { 
          DARABONBA_PTR_FROM_JSON(problemSummary, problemSummary_);
          DARABONBA_PTR_FROM_JSON(riskSummary, riskSummary_);
          DARABONBA_PTR_FROM_JSON(total, total_);
        };
        Overview() = default ;
        Overview(const Overview &) = default ;
        Overview(Overview &&) = default ;
        Overview(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Overview() = default ;
        Overview& operator=(const Overview &) = default ;
        Overview& operator=(Overview &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RiskSummary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RiskSummary& obj) { 
            DARABONBA_PTR_TO_JSON(critical, critical_);
            DARABONBA_PTR_TO_JSON(info, info_);
            DARABONBA_PTR_TO_JSON(warning, warning_);
          };
          friend void from_json(const Darabonba::Json& j, RiskSummary& obj) { 
            DARABONBA_PTR_FROM_JSON(critical, critical_);
            DARABONBA_PTR_FROM_JSON(info, info_);
            DARABONBA_PTR_FROM_JSON(warning, warning_);
          };
          RiskSummary() = default ;
          RiskSummary(const RiskSummary &) = default ;
          RiskSummary(RiskSummary &&) = default ;
          RiskSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RiskSummary() = default ;
          RiskSummary& operator=(const RiskSummary &) = default ;
          RiskSummary& operator=(RiskSummary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->critical_ == nullptr
        && this->info_ == nullptr && this->warning_ == nullptr; };
          // critical Field Functions 
          bool hasCritical() const { return this->critical_ != nullptr;};
          void deleteCritical() { this->critical_ = nullptr;};
          inline int32_t getCritical() const { DARABONBA_PTR_GET_DEFAULT(critical_, 0) };
          inline RiskSummary& setCritical(int32_t critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };


          // info Field Functions 
          bool hasInfo() const { return this->info_ != nullptr;};
          void deleteInfo() { this->info_ = nullptr;};
          inline int32_t getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, 0) };
          inline RiskSummary& setInfo(int32_t info) { DARABONBA_PTR_SET_VALUE(info_, info) };


          // warning Field Functions 
          bool hasWarning() const { return this->warning_ != nullptr;};
          void deleteWarning() { this->warning_ = nullptr;};
          inline int32_t getWarning() const { DARABONBA_PTR_GET_DEFAULT(warning_, 0) };
          inline RiskSummary& setWarning(int32_t warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };


        protected:
          // The number of critical-level jobs.
          shared_ptr<int32_t> critical_ {};
          // The number of info-level jobs.
          shared_ptr<int32_t> info_ {};
          // The number of warning-level jobs.
          shared_ptr<int32_t> warning_ {};
        };

        class ProblemSummary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProblemSummary& obj) { 
            DARABONBA_PTR_TO_JSON(delayAndBackpressure, delayAndBackpressure_);
            DARABONBA_PTR_TO_JSON(unhealthy, unhealthy_);
            DARABONBA_PTR_TO_JSON(unhealthyCheckpoints, unhealthyCheckpoints_);
          };
          friend void from_json(const Darabonba::Json& j, ProblemSummary& obj) { 
            DARABONBA_PTR_FROM_JSON(delayAndBackpressure, delayAndBackpressure_);
            DARABONBA_PTR_FROM_JSON(unhealthy, unhealthy_);
            DARABONBA_PTR_FROM_JSON(unhealthyCheckpoints, unhealthyCheckpoints_);
          };
          ProblemSummary() = default ;
          ProblemSummary(const ProblemSummary &) = default ;
          ProblemSummary(ProblemSummary &&) = default ;
          ProblemSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProblemSummary() = default ;
          ProblemSummary& operator=(const ProblemSummary &) = default ;
          ProblemSummary& operator=(ProblemSummary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->delayAndBackpressure_ == nullptr
        && this->unhealthy_ == nullptr && this->unhealthyCheckpoints_ == nullptr; };
          // delayAndBackpressure Field Functions 
          bool hasDelayAndBackpressure() const { return this->delayAndBackpressure_ != nullptr;};
          void deleteDelayAndBackpressure() { this->delayAndBackpressure_ = nullptr;};
          inline int32_t getDelayAndBackpressure() const { DARABONBA_PTR_GET_DEFAULT(delayAndBackpressure_, 0) };
          inline ProblemSummary& setDelayAndBackpressure(int32_t delayAndBackpressure) { DARABONBA_PTR_SET_VALUE(delayAndBackpressure_, delayAndBackpressure) };


          // unhealthy Field Functions 
          bool hasUnhealthy() const { return this->unhealthy_ != nullptr;};
          void deleteUnhealthy() { this->unhealthy_ = nullptr;};
          inline int32_t getUnhealthy() const { DARABONBA_PTR_GET_DEFAULT(unhealthy_, 0) };
          inline ProblemSummary& setUnhealthy(int32_t unhealthy) { DARABONBA_PTR_SET_VALUE(unhealthy_, unhealthy) };


          // unhealthyCheckpoints Field Functions 
          bool hasUnhealthyCheckpoints() const { return this->unhealthyCheckpoints_ != nullptr;};
          void deleteUnhealthyCheckpoints() { this->unhealthyCheckpoints_ = nullptr;};
          inline int32_t getUnhealthyCheckpoints() const { DARABONBA_PTR_GET_DEFAULT(unhealthyCheckpoints_, 0) };
          inline ProblemSummary& setUnhealthyCheckpoints(int32_t unhealthyCheckpoints) { DARABONBA_PTR_SET_VALUE(unhealthyCheckpoints_, unhealthyCheckpoints) };


        protected:
          // The number of jobs with delay and backpressure.
          shared_ptr<int32_t> delayAndBackpressure_ {};
          // The number of unhealthy jobs.
          shared_ptr<int32_t> unhealthy_ {};
          // The number of jobs with unhealthy checkpoints.
          shared_ptr<int32_t> unhealthyCheckpoints_ {};
        };

        virtual bool empty() const override { return this->problemSummary_ == nullptr
        && this->riskSummary_ == nullptr && this->total_ == nullptr; };
        // problemSummary Field Functions 
        bool hasProblemSummary() const { return this->problemSummary_ != nullptr;};
        void deleteProblemSummary() { this->problemSummary_ = nullptr;};
        inline const Overview::ProblemSummary & getProblemSummary() const { DARABONBA_PTR_GET_CONST(problemSummary_, Overview::ProblemSummary) };
        inline Overview::ProblemSummary getProblemSummary() { DARABONBA_PTR_GET(problemSummary_, Overview::ProblemSummary) };
        inline Overview& setProblemSummary(const Overview::ProblemSummary & problemSummary) { DARABONBA_PTR_SET_VALUE(problemSummary_, problemSummary) };
        inline Overview& setProblemSummary(Overview::ProblemSummary && problemSummary) { DARABONBA_PTR_SET_RVALUE(problemSummary_, problemSummary) };


        // riskSummary Field Functions 
        bool hasRiskSummary() const { return this->riskSummary_ != nullptr;};
        void deleteRiskSummary() { this->riskSummary_ = nullptr;};
        inline const Overview::RiskSummary & getRiskSummary() const { DARABONBA_PTR_GET_CONST(riskSummary_, Overview::RiskSummary) };
        inline Overview::RiskSummary getRiskSummary() { DARABONBA_PTR_GET(riskSummary_, Overview::RiskSummary) };
        inline Overview& setRiskSummary(const Overview::RiskSummary & riskSummary) { DARABONBA_PTR_SET_VALUE(riskSummary_, riskSummary) };
        inline Overview& setRiskSummary(Overview::RiskSummary && riskSummary) { DARABONBA_PTR_SET_RVALUE(riskSummary_, riskSummary) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline Overview& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        // The problem summary.
        shared_ptr<Overview::ProblemSummary> problemSummary_ {};
        // The risk summary.
        shared_ptr<Overview::RiskSummary> riskSummary_ {};
        // The total number of jobs.
        shared_ptr<int32_t> total_ {};
      };

      virtual bool empty() const override { return this->completedAt_ == nullptr
        && this->createdAt_ == nullptr && this->namespace_ == nullptr && this->overview_ == nullptr && this->reportId_ == nullptr && this->scopeConfig_ == nullptr
        && this->scopeType_ == nullptr && this->triggerType_ == nullptr && this->unhealthyJobs_ == nullptr && this->updatedAt_ == nullptr && this->workspace_ == nullptr; };
      // completedAt Field Functions 
      bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
      void deleteCompletedAt() { this->completedAt_ = nullptr;};
      inline string getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
      inline Data& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // overview Field Functions 
      bool hasOverview() const { return this->overview_ != nullptr;};
      void deleteOverview() { this->overview_ = nullptr;};
      inline const Data::Overview & getOverview() const { DARABONBA_PTR_GET_CONST(overview_, Data::Overview) };
      inline Data::Overview getOverview() { DARABONBA_PTR_GET(overview_, Data::Overview) };
      inline Data& setOverview(const Data::Overview & overview) { DARABONBA_PTR_SET_VALUE(overview_, overview) };
      inline Data& setOverview(Data::Overview && overview) { DARABONBA_PTR_SET_RVALUE(overview_, overview) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Data& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // scopeConfig Field Functions 
      bool hasScopeConfig() const { return this->scopeConfig_ != nullptr;};
      void deleteScopeConfig() { this->scopeConfig_ = nullptr;};
      inline const Data::ScopeConfig & getScopeConfig() const { DARABONBA_PTR_GET_CONST(scopeConfig_, Data::ScopeConfig) };
      inline Data::ScopeConfig getScopeConfig() { DARABONBA_PTR_GET(scopeConfig_, Data::ScopeConfig) };
      inline Data& setScopeConfig(const Data::ScopeConfig & scopeConfig) { DARABONBA_PTR_SET_VALUE(scopeConfig_, scopeConfig) };
      inline Data& setScopeConfig(Data::ScopeConfig && scopeConfig) { DARABONBA_PTR_SET_RVALUE(scopeConfig_, scopeConfig) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
      inline Data& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline Data& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // unhealthyJobs Field Functions 
      bool hasUnhealthyJobs() const { return this->unhealthyJobs_ != nullptr;};
      void deleteUnhealthyJobs() { this->unhealthyJobs_ = nullptr;};
      inline const vector<Data::UnhealthyJobs> & getUnhealthyJobs() const { DARABONBA_PTR_GET_CONST(unhealthyJobs_, vector<Data::UnhealthyJobs>) };
      inline vector<Data::UnhealthyJobs> getUnhealthyJobs() { DARABONBA_PTR_GET(unhealthyJobs_, vector<Data::UnhealthyJobs>) };
      inline Data& setUnhealthyJobs(const vector<Data::UnhealthyJobs> & unhealthyJobs) { DARABONBA_PTR_SET_VALUE(unhealthyJobs_, unhealthyJobs) };
      inline Data& setUnhealthyJobs(vector<Data::UnhealthyJobs> && unhealthyJobs) { DARABONBA_PTR_SET_RVALUE(unhealthyJobs_, unhealthyJobs) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Data& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // The completion time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> completedAt_ {};
      // The creation time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> createdAt_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The inspection overview.
      shared_ptr<Data::Overview> overview_ {};
      // The report ID.
      shared_ptr<string> reportId_ {};
      // The inspection scope configuration.
      shared_ptr<Data::ScopeConfig> scopeConfig_ {};
      // The inspection scope type.
      shared_ptr<string> scopeType_ {};
      // The trigger type.
      shared_ptr<string> triggerType_ {};
      // The list of unhealthy jobs.
      shared_ptr<vector<Data::UnhealthyJobs>> unhealthyJobs_ {};
      // The update time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPatrolReportDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPatrolReportDetailResponseBody::Data) };
    inline GetPatrolReportDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPatrolReportDetailResponseBody::Data) };
    inline GetPatrolReportDetailResponseBody& setData(const GetPatrolReportDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPatrolReportDetailResponseBody& setData(GetPatrolReportDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPatrolReportDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetPatrolReportDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetPatrolReportDetailResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPatrolReportDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPatrolReportDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The inspection report details.
    shared_ptr<GetPatrolReportDetailResponseBody::Data> data_ {};
    // The business error code. This value is not empty when success is false. This value is empty when success is true.
    shared_ptr<string> errorCode_ {};
    // The business error message. This value is not empty when success is false. This value is empty when success is true.
    shared_ptr<string> errorMessage_ {};
    // The business status code, which is always 200. Use success to determine whether the business request was successful.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the business request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
