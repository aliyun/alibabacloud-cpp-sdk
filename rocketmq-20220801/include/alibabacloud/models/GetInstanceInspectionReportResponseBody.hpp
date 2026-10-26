// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceInspectionReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceInspectionReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(completion, completion_);
      DARABONBA_PTR_TO_JSON(coverage, coverage_);
      DARABONBA_PTR_TO_JSON(findings, findings_);
      DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_TO_JSON(html, html_);
      DARABONBA_PTR_TO_JSON(inspectionRunId, inspectionRunId_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(markdown, markdown_);
      DARABONBA_PTR_TO_JSON(overview, overview_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
      DARABONBA_PTR_TO_JSON(reportSummary, reportSummary_);
      DARABONBA_PTR_TO_JSON(templateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceInspectionReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(completion, completion_);
      DARABONBA_PTR_FROM_JSON(coverage, coverage_);
      DARABONBA_PTR_FROM_JSON(findings, findings_);
      DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_FROM_JSON(html, html_);
      DARABONBA_PTR_FROM_JSON(inspectionRunId, inspectionRunId_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(markdown, markdown_);
      DARABONBA_PTR_FROM_JSON(overview, overview_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
      DARABONBA_PTR_FROM_JSON(reportSummary, reportSummary_);
      DARABONBA_PTR_FROM_JSON(templateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
    };
    GetInstanceInspectionReportResponseBody() = default ;
    GetInstanceInspectionReportResponseBody(const GetInstanceInspectionReportResponseBody &) = default ;
    GetInstanceInspectionReportResponseBody(GetInstanceInspectionReportResponseBody &&) = default ;
    GetInstanceInspectionReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceInspectionReportResponseBody() = default ;
    GetInstanceInspectionReportResponseBody& operator=(const GetInstanceInspectionReportResponseBody &) = default ;
    GetInstanceInspectionReportResponseBody& operator=(GetInstanceInspectionReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeRange& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, TimeRange& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      };
      TimeRange() = default ;
      TimeRange(const TimeRange &) = default ;
      TimeRange(TimeRange &&) = default ;
      TimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeRange() = default ;
      TimeRange& operator=(const TimeRange &) = default ;
      TimeRange& operator=(TimeRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline TimeRange& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline TimeRange& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> endTime_ {};
      shared_ptr<string> startTime_ {};
    };

    class ReportSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportSummary& obj) { 
        DARABONBA_PTR_TO_JSON(infoCount, infoCount_);
        DARABONBA_PTR_TO_JSON(riskCount, riskCount_);
      };
      friend void from_json(const Darabonba::Json& j, ReportSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(infoCount, infoCount_);
        DARABONBA_PTR_FROM_JSON(riskCount, riskCount_);
      };
      ReportSummary() = default ;
      ReportSummary(const ReportSummary &) = default ;
      ReportSummary(ReportSummary &&) = default ;
      ReportSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportSummary() = default ;
      ReportSummary& operator=(const ReportSummary &) = default ;
      ReportSummary& operator=(ReportSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->infoCount_ == nullptr
        && this->riskCount_ == nullptr; };
      // infoCount Field Functions 
      bool hasInfoCount() const { return this->infoCount_ != nullptr;};
      void deleteInfoCount() { this->infoCount_ = nullptr;};
      inline int32_t getInfoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0) };
      inline ReportSummary& setInfoCount(int32_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int32_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
      inline ReportSummary& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    protected:
      shared_ptr<int32_t> infoCount_ {};
      shared_ptr<int32_t> riskCount_ {};
    };

    class Findings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Findings& obj) { 
        DARABONBA_PTR_TO_JSON(alternatives, alternatives_);
        DARABONBA_PTR_TO_JSON(boundary, boundary_);
        DARABONBA_PTR_TO_JSON(cause, cause_);
        DARABONBA_PTR_TO_JSON(confidence, confidence_);
        DARABONBA_PTR_TO_JSON(evidence, evidence_);
        DARABONBA_PTR_TO_JSON(impact, impact_);
        DARABONBA_PTR_TO_JSON(location, location_);
        DARABONBA_PTR_TO_JSON(missingEvidence, missingEvidence_);
        DARABONBA_PTR_TO_JSON(observations, observations_);
        DARABONBA_PTR_TO_JSON(observedAt, observedAt_);
        DARABONBA_PTR_TO_JSON(recommendations, recommendations_);
        DARABONBA_PTR_TO_JSON(resource, resource_);
        DARABONBA_PTR_TO_JSON(riskType, riskType_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
        DARABONBA_PTR_TO_JSON(verification, verification_);
      };
      friend void from_json(const Darabonba::Json& j, Findings& obj) { 
        DARABONBA_PTR_FROM_JSON(alternatives, alternatives_);
        DARABONBA_PTR_FROM_JSON(boundary, boundary_);
        DARABONBA_PTR_FROM_JSON(cause, cause_);
        DARABONBA_PTR_FROM_JSON(confidence, confidence_);
        DARABONBA_PTR_FROM_JSON(evidence, evidence_);
        DARABONBA_PTR_FROM_JSON(impact, impact_);
        DARABONBA_PTR_FROM_JSON(location, location_);
        DARABONBA_PTR_FROM_JSON(missingEvidence, missingEvidence_);
        DARABONBA_PTR_FROM_JSON(observations, observations_);
        DARABONBA_PTR_FROM_JSON(observedAt, observedAt_);
        DARABONBA_PTR_FROM_JSON(recommendations, recommendations_);
        DARABONBA_PTR_FROM_JSON(resource, resource_);
        DARABONBA_PTR_FROM_JSON(riskType, riskType_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
        DARABONBA_PTR_FROM_JSON(verification, verification_);
      };
      Findings() = default ;
      Findings(const Findings &) = default ;
      Findings(Findings &&) = default ;
      Findings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Findings() = default ;
      Findings& operator=(const Findings &) = default ;
      Findings& operator=(Findings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TimeRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimeRange& obj) { 
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, TimeRange& obj) { 
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        TimeRange() = default ;
        TimeRange(const TimeRange &) = default ;
        TimeRange(TimeRange &&) = default ;
        TimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimeRange() = default ;
        TimeRange& operator=(const TimeRange &) = default ;
        TimeRange& operator=(TimeRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline TimeRange& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline TimeRange& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
      };

      class Resource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resource& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Resource& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Resource() = default ;
        Resource(const Resource &) = default ;
        Resource(Resource &&) = default ;
        Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resource() = default ;
        Resource& operator=(const Resource &) = default ;
        Resource& operator=(Resource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Resource& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Resource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Resource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->alternatives_ == nullptr
        && this->boundary_ == nullptr && this->cause_ == nullptr && this->confidence_ == nullptr && this->evidence_ == nullptr && this->impact_ == nullptr
        && this->location_ == nullptr && this->missingEvidence_ == nullptr && this->observations_ == nullptr && this->observedAt_ == nullptr && this->recommendations_ == nullptr
        && this->resource_ == nullptr && this->riskType_ == nullptr && this->source_ == nullptr && this->templateCode_ == nullptr && this->timeRange_ == nullptr
        && this->verification_ == nullptr; };
      // alternatives Field Functions 
      bool hasAlternatives() const { return this->alternatives_ != nullptr;};
      void deleteAlternatives() { this->alternatives_ = nullptr;};
      inline const vector<string> & getAlternatives() const { DARABONBA_PTR_GET_CONST(alternatives_, vector<string>) };
      inline vector<string> getAlternatives() { DARABONBA_PTR_GET(alternatives_, vector<string>) };
      inline Findings& setAlternatives(const vector<string> & alternatives) { DARABONBA_PTR_SET_VALUE(alternatives_, alternatives) };
      inline Findings& setAlternatives(vector<string> && alternatives) { DARABONBA_PTR_SET_RVALUE(alternatives_, alternatives) };


      // boundary Field Functions 
      bool hasBoundary() const { return this->boundary_ != nullptr;};
      void deleteBoundary() { this->boundary_ = nullptr;};
      inline string getBoundary() const { DARABONBA_PTR_GET_DEFAULT(boundary_, "") };
      inline Findings& setBoundary(string boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };


      // cause Field Functions 
      bool hasCause() const { return this->cause_ != nullptr;};
      void deleteCause() { this->cause_ = nullptr;};
      inline string getCause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
      inline Findings& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


      // confidence Field Functions 
      bool hasConfidence() const { return this->confidence_ != nullptr;};
      void deleteConfidence() { this->confidence_ = nullptr;};
      inline string getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, "") };
      inline Findings& setConfidence(string confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


      // evidence Field Functions 
      bool hasEvidence() const { return this->evidence_ != nullptr;};
      void deleteEvidence() { this->evidence_ = nullptr;};
      inline const vector<string> & getEvidence() const { DARABONBA_PTR_GET_CONST(evidence_, vector<string>) };
      inline vector<string> getEvidence() { DARABONBA_PTR_GET(evidence_, vector<string>) };
      inline Findings& setEvidence(const vector<string> & evidence) { DARABONBA_PTR_SET_VALUE(evidence_, evidence) };
      inline Findings& setEvidence(vector<string> && evidence) { DARABONBA_PTR_SET_RVALUE(evidence_, evidence) };


      // impact Field Functions 
      bool hasImpact() const { return this->impact_ != nullptr;};
      void deleteImpact() { this->impact_ = nullptr;};
      inline string getImpact() const { DARABONBA_PTR_GET_DEFAULT(impact_, "") };
      inline Findings& setImpact(string impact) { DARABONBA_PTR_SET_VALUE(impact_, impact) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Findings& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // missingEvidence Field Functions 
      bool hasMissingEvidence() const { return this->missingEvidence_ != nullptr;};
      void deleteMissingEvidence() { this->missingEvidence_ = nullptr;};
      inline const vector<string> & getMissingEvidence() const { DARABONBA_PTR_GET_CONST(missingEvidence_, vector<string>) };
      inline vector<string> getMissingEvidence() { DARABONBA_PTR_GET(missingEvidence_, vector<string>) };
      inline Findings& setMissingEvidence(const vector<string> & missingEvidence) { DARABONBA_PTR_SET_VALUE(missingEvidence_, missingEvidence) };
      inline Findings& setMissingEvidence(vector<string> && missingEvidence) { DARABONBA_PTR_SET_RVALUE(missingEvidence_, missingEvidence) };


      // observations Field Functions 
      bool hasObservations() const { return this->observations_ != nullptr;};
      void deleteObservations() { this->observations_ = nullptr;};
      inline const vector<string> & getObservations() const { DARABONBA_PTR_GET_CONST(observations_, vector<string>) };
      inline vector<string> getObservations() { DARABONBA_PTR_GET(observations_, vector<string>) };
      inline Findings& setObservations(const vector<string> & observations) { DARABONBA_PTR_SET_VALUE(observations_, observations) };
      inline Findings& setObservations(vector<string> && observations) { DARABONBA_PTR_SET_RVALUE(observations_, observations) };


      // observedAt Field Functions 
      bool hasObservedAt() const { return this->observedAt_ != nullptr;};
      void deleteObservedAt() { this->observedAt_ = nullptr;};
      inline string getObservedAt() const { DARABONBA_PTR_GET_DEFAULT(observedAt_, "") };
      inline Findings& setObservedAt(string observedAt) { DARABONBA_PTR_SET_VALUE(observedAt_, observedAt) };


      // recommendations Field Functions 
      bool hasRecommendations() const { return this->recommendations_ != nullptr;};
      void deleteRecommendations() { this->recommendations_ = nullptr;};
      inline const vector<string> & getRecommendations() const { DARABONBA_PTR_GET_CONST(recommendations_, vector<string>) };
      inline vector<string> getRecommendations() { DARABONBA_PTR_GET(recommendations_, vector<string>) };
      inline Findings& setRecommendations(const vector<string> & recommendations) { DARABONBA_PTR_SET_VALUE(recommendations_, recommendations) };
      inline Findings& setRecommendations(vector<string> && recommendations) { DARABONBA_PTR_SET_RVALUE(recommendations_, recommendations) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const Findings::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, Findings::Resource) };
      inline Findings::Resource getResource() { DARABONBA_PTR_GET(resource_, Findings::Resource) };
      inline Findings& setResource(const Findings::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Findings& setResource(Findings::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


      // riskType Field Functions 
      bool hasRiskType() const { return this->riskType_ != nullptr;};
      void deleteRiskType() { this->riskType_ = nullptr;};
      inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
      inline Findings& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Findings& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline Findings& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // timeRange Field Functions 
      bool hasTimeRange() const { return this->timeRange_ != nullptr;};
      void deleteTimeRange() { this->timeRange_ = nullptr;};
      inline const Findings::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, Findings::TimeRange) };
      inline Findings::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, Findings::TimeRange) };
      inline Findings& setTimeRange(const Findings::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
      inline Findings& setTimeRange(Findings::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


      // verification Field Functions 
      bool hasVerification() const { return this->verification_ != nullptr;};
      void deleteVerification() { this->verification_ = nullptr;};
      inline const vector<string> & getVerification() const { DARABONBA_PTR_GET_CONST(verification_, vector<string>) };
      inline vector<string> getVerification() { DARABONBA_PTR_GET(verification_, vector<string>) };
      inline Findings& setVerification(const vector<string> & verification) { DARABONBA_PTR_SET_VALUE(verification_, verification) };
      inline Findings& setVerification(vector<string> && verification) { DARABONBA_PTR_SET_RVALUE(verification_, verification) };


    protected:
      shared_ptr<vector<string>> alternatives_ {};
      shared_ptr<string> boundary_ {};
      shared_ptr<string> cause_ {};
      shared_ptr<string> confidence_ {};
      shared_ptr<vector<string>> evidence_ {};
      shared_ptr<string> impact_ {};
      shared_ptr<string> location_ {};
      shared_ptr<vector<string>> missingEvidence_ {};
      shared_ptr<vector<string>> observations_ {};
      shared_ptr<string> observedAt_ {};
      shared_ptr<vector<string>> recommendations_ {};
      shared_ptr<Findings::Resource> resource_ {};
      shared_ptr<string> riskType_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> templateCode_ {};
      shared_ptr<Findings::TimeRange> timeRange_ {};
      shared_ptr<vector<string>> verification_ {};
    };

    class Coverage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Coverage& obj) { 
        DARABONBA_PTR_TO_JSON(diagnosisStatus, diagnosisStatus_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(observedAt, observedAt_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
      };
      friend void from_json(const Darabonba::Json& j, Coverage& obj) { 
        DARABONBA_PTR_FROM_JSON(diagnosisStatus, diagnosisStatus_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(observedAt, observedAt_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
      };
      Coverage() = default ;
      Coverage(const Coverage &) = default ;
      Coverage(Coverage &&) = default ;
      Coverage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Coverage() = default ;
      Coverage& operator=(const Coverage &) = default ;
      Coverage& operator=(Coverage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TimeRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimeRange& obj) { 
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, TimeRange& obj) { 
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        TimeRange() = default ;
        TimeRange(const TimeRange &) = default ;
        TimeRange(TimeRange &&) = default ;
        TimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimeRange() = default ;
        TimeRange& operator=(const TimeRange &) = default ;
        TimeRange& operator=(TimeRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline TimeRange& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline TimeRange& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->diagnosisStatus_ == nullptr
        && this->name_ == nullptr && this->observedAt_ == nullptr && this->result_ == nullptr && this->status_ == nullptr && this->templateCode_ == nullptr
        && this->timeRange_ == nullptr; };
      // diagnosisStatus Field Functions 
      bool hasDiagnosisStatus() const { return this->diagnosisStatus_ != nullptr;};
      void deleteDiagnosisStatus() { this->diagnosisStatus_ = nullptr;};
      inline string getDiagnosisStatus() const { DARABONBA_PTR_GET_DEFAULT(diagnosisStatus_, "") };
      inline Coverage& setDiagnosisStatus(string diagnosisStatus) { DARABONBA_PTR_SET_VALUE(diagnosisStatus_, diagnosisStatus) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Coverage& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // observedAt Field Functions 
      bool hasObservedAt() const { return this->observedAt_ != nullptr;};
      void deleteObservedAt() { this->observedAt_ = nullptr;};
      inline string getObservedAt() const { DARABONBA_PTR_GET_DEFAULT(observedAt_, "") };
      inline Coverage& setObservedAt(string observedAt) { DARABONBA_PTR_SET_VALUE(observedAt_, observedAt) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Coverage& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Coverage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline Coverage& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // timeRange Field Functions 
      bool hasTimeRange() const { return this->timeRange_ != nullptr;};
      void deleteTimeRange() { this->timeRange_ = nullptr;};
      inline const Coverage::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, Coverage::TimeRange) };
      inline Coverage::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, Coverage::TimeRange) };
      inline Coverage& setTimeRange(const Coverage::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
      inline Coverage& setTimeRange(Coverage::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


    protected:
      shared_ptr<string> diagnosisStatus_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> observedAt_ {};
      shared_ptr<string> result_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> templateCode_ {};
      shared_ptr<Coverage::TimeRange> timeRange_ {};
    };

    virtual bool empty() const override { return this->completion_ == nullptr
        && this->coverage_ == nullptr && this->findings_ == nullptr && this->finishedAt_ == nullptr && this->html_ == nullptr && this->inspectionRunId_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->markdown_ == nullptr && this->overview_ == nullptr && this->regionId_ == nullptr
        && this->reportId_ == nullptr && this->reportSummary_ == nullptr && this->templateVersion_ == nullptr && this->timeRange_ == nullptr; };
    // completion Field Functions 
    bool hasCompletion() const { return this->completion_ != nullptr;};
    void deleteCompletion() { this->completion_ = nullptr;};
    inline string getCompletion() const { DARABONBA_PTR_GET_DEFAULT(completion_, "") };
    inline GetInstanceInspectionReportResponseBody& setCompletion(string completion) { DARABONBA_PTR_SET_VALUE(completion_, completion) };


    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline const vector<GetInstanceInspectionReportResponseBody::Coverage> & getCoverage() const { DARABONBA_PTR_GET_CONST(coverage_, vector<GetInstanceInspectionReportResponseBody::Coverage>) };
    inline vector<GetInstanceInspectionReportResponseBody::Coverage> getCoverage() { DARABONBA_PTR_GET(coverage_, vector<GetInstanceInspectionReportResponseBody::Coverage>) };
    inline GetInstanceInspectionReportResponseBody& setCoverage(const vector<GetInstanceInspectionReportResponseBody::Coverage> & coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };
    inline GetInstanceInspectionReportResponseBody& setCoverage(vector<GetInstanceInspectionReportResponseBody::Coverage> && coverage) { DARABONBA_PTR_SET_RVALUE(coverage_, coverage) };


    // findings Field Functions 
    bool hasFindings() const { return this->findings_ != nullptr;};
    void deleteFindings() { this->findings_ = nullptr;};
    inline const vector<GetInstanceInspectionReportResponseBody::Findings> & getFindings() const { DARABONBA_PTR_GET_CONST(findings_, vector<GetInstanceInspectionReportResponseBody::Findings>) };
    inline vector<GetInstanceInspectionReportResponseBody::Findings> getFindings() { DARABONBA_PTR_GET(findings_, vector<GetInstanceInspectionReportResponseBody::Findings>) };
    inline GetInstanceInspectionReportResponseBody& setFindings(const vector<GetInstanceInspectionReportResponseBody::Findings> & findings) { DARABONBA_PTR_SET_VALUE(findings_, findings) };
    inline GetInstanceInspectionReportResponseBody& setFindings(vector<GetInstanceInspectionReportResponseBody::Findings> && findings) { DARABONBA_PTR_SET_RVALUE(findings_, findings) };


    // finishedAt Field Functions 
    bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
    void deleteFinishedAt() { this->finishedAt_ = nullptr;};
    inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
    inline GetInstanceInspectionReportResponseBody& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


    // html Field Functions 
    bool hasHtml() const { return this->html_ != nullptr;};
    void deleteHtml() { this->html_ = nullptr;};
    inline string getHtml() const { DARABONBA_PTR_GET_DEFAULT(html_, "") };
    inline GetInstanceInspectionReportResponseBody& setHtml(string html) { DARABONBA_PTR_SET_VALUE(html_, html) };


    // inspectionRunId Field Functions 
    bool hasInspectionRunId() const { return this->inspectionRunId_ != nullptr;};
    void deleteInspectionRunId() { this->inspectionRunId_ = nullptr;};
    inline string getInspectionRunId() const { DARABONBA_PTR_GET_DEFAULT(inspectionRunId_, "") };
    inline GetInstanceInspectionReportResponseBody& setInspectionRunId(string inspectionRunId) { DARABONBA_PTR_SET_VALUE(inspectionRunId_, inspectionRunId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceInspectionReportResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetInstanceInspectionReportResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // markdown Field Functions 
    bool hasMarkdown() const { return this->markdown_ != nullptr;};
    void deleteMarkdown() { this->markdown_ = nullptr;};
    inline string getMarkdown() const { DARABONBA_PTR_GET_DEFAULT(markdown_, "") };
    inline GetInstanceInspectionReportResponseBody& setMarkdown(string markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };


    // overview Field Functions 
    bool hasOverview() const { return this->overview_ != nullptr;};
    void deleteOverview() { this->overview_ = nullptr;};
    inline string getOverview() const { DARABONBA_PTR_GET_DEFAULT(overview_, "") };
    inline GetInstanceInspectionReportResponseBody& setOverview(string overview) { DARABONBA_PTR_SET_VALUE(overview_, overview) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceInspectionReportResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetInstanceInspectionReportResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportSummary Field Functions 
    bool hasReportSummary() const { return this->reportSummary_ != nullptr;};
    void deleteReportSummary() { this->reportSummary_ = nullptr;};
    inline const GetInstanceInspectionReportResponseBody::ReportSummary & getReportSummary() const { DARABONBA_PTR_GET_CONST(reportSummary_, GetInstanceInspectionReportResponseBody::ReportSummary) };
    inline GetInstanceInspectionReportResponseBody::ReportSummary getReportSummary() { DARABONBA_PTR_GET(reportSummary_, GetInstanceInspectionReportResponseBody::ReportSummary) };
    inline GetInstanceInspectionReportResponseBody& setReportSummary(const GetInstanceInspectionReportResponseBody::ReportSummary & reportSummary) { DARABONBA_PTR_SET_VALUE(reportSummary_, reportSummary) };
    inline GetInstanceInspectionReportResponseBody& setReportSummary(GetInstanceInspectionReportResponseBody::ReportSummary && reportSummary) { DARABONBA_PTR_SET_RVALUE(reportSummary_, reportSummary) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetInstanceInspectionReportResponseBody& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const GetInstanceInspectionReportResponseBody::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, GetInstanceInspectionReportResponseBody::TimeRange) };
    inline GetInstanceInspectionReportResponseBody::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, GetInstanceInspectionReportResponseBody::TimeRange) };
    inline GetInstanceInspectionReportResponseBody& setTimeRange(const GetInstanceInspectionReportResponseBody::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline GetInstanceInspectionReportResponseBody& setTimeRange(GetInstanceInspectionReportResponseBody::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


  protected:
    shared_ptr<string> completion_ {};
    shared_ptr<vector<GetInstanceInspectionReportResponseBody::Coverage>> coverage_ {};
    shared_ptr<vector<GetInstanceInspectionReportResponseBody::Findings>> findings_ {};
    shared_ptr<string> finishedAt_ {};
    shared_ptr<string> html_ {};
    shared_ptr<string> inspectionRunId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> markdown_ {};
    shared_ptr<string> overview_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> reportId_ {};
    shared_ptr<GetInstanceInspectionReportResponseBody::ReportSummary> reportSummary_ {};
    shared_ptr<string> templateVersion_ {};
    shared_ptr<GetInstanceInspectionReportResponseBody::TimeRange> timeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
