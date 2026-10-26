// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONRESPONSEBODY_HPP_
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
  class GetInstanceInspectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceInspectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(configured, configured_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(lastRun, lastRun_);
      DARABONBA_PTR_TO_JSON(nextRunAt, nextRunAt_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(revision, revision_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceInspectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(configured, configured_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(lastRun, lastRun_);
      DARABONBA_PTR_FROM_JSON(nextRunAt, nextRunAt_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(revision, revision_);
    };
    GetInstanceInspectionResponseBody() = default ;
    GetInstanceInspectionResponseBody(const GetInstanceInspectionResponseBody &) = default ;
    GetInstanceInspectionResponseBody(GetInstanceInspectionResponseBody &&) = default ;
    GetInstanceInspectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceInspectionResponseBody() = default ;
    GetInstanceInspectionResponseBody& operator=(const GetInstanceInspectionResponseBody &) = default ;
    GetInstanceInspectionResponseBody& operator=(GetInstanceInspectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LastRun : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LastRun& obj) { 
        DARABONBA_PTR_TO_JSON(aiSummary, aiSummary_);
        DARABONBA_PTR_TO_JSON(configSnapshot, configSnapshot_);
        DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(notification, notification_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(report, report_);
        DARABONBA_PTR_TO_JSON(requestedAt, requestedAt_);
        DARABONBA_PTR_TO_JSON(runId, runId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(summary, summary_);
        DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
        DARABONBA_PTR_TO_JSON(triggerSource, triggerSource_);
      };
      friend void from_json(const Darabonba::Json& j, LastRun& obj) { 
        DARABONBA_PTR_FROM_JSON(aiSummary, aiSummary_);
        DARABONBA_PTR_FROM_JSON(configSnapshot, configSnapshot_);
        DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(notification, notification_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(report, report_);
        DARABONBA_PTR_FROM_JSON(requestedAt, requestedAt_);
        DARABONBA_PTR_FROM_JSON(runId, runId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(summary, summary_);
        DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
        DARABONBA_PTR_FROM_JSON(triggerSource, triggerSource_);
      };
      LastRun() = default ;
      LastRun(const LastRun &) = default ;
      LastRun(LastRun &&) = default ;
      LastRun(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LastRun() = default ;
      LastRun& operator=(const LastRun &) = default ;
      LastRun& operator=(LastRun &&) = default ;
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

      class Summary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summary& obj) { 
          DARABONBA_PTR_TO_JSON(infoCount, infoCount_);
          DARABONBA_PTR_TO_JSON(result, result_);
          DARABONBA_PTR_TO_JSON(riskCount, riskCount_);
        };
        friend void from_json(const Darabonba::Json& j, Summary& obj) { 
          DARABONBA_PTR_FROM_JSON(infoCount, infoCount_);
          DARABONBA_PTR_FROM_JSON(result, result_);
          DARABONBA_PTR_FROM_JSON(riskCount, riskCount_);
        };
        Summary() = default ;
        Summary(const Summary &) = default ;
        Summary(Summary &&) = default ;
        Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Summary() = default ;
        Summary& operator=(const Summary &) = default ;
        Summary& operator=(Summary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->infoCount_ == nullptr
        && this->result_ == nullptr && this->riskCount_ == nullptr; };
        // infoCount Field Functions 
        bool hasInfoCount() const { return this->infoCount_ != nullptr;};
        void deleteInfoCount() { this->infoCount_ = nullptr;};
        inline int32_t getInfoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0) };
        inline Summary& setInfoCount(int32_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline Summary& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // riskCount Field Functions 
        bool hasRiskCount() const { return this->riskCount_ != nullptr;};
        void deleteRiskCount() { this->riskCount_ = nullptr;};
        inline int32_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
        inline Summary& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      protected:
        shared_ptr<int32_t> infoCount_ {};
        shared_ptr<string> result_ {};
        shared_ptr<int32_t> riskCount_ {};
      };

      class Report : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Report& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Report& obj) { 
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
        Report() = default ;
        Report(const Report &) = default ;
        Report(Report &&) = default ;
        Report(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Report() = default ;
        Report& operator=(const Report &) = default ;
        Report& operator=(Report &&) = default ;
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
        inline Report& setCompletion(string completion) { DARABONBA_PTR_SET_VALUE(completion_, completion) };


        // coverage Field Functions 
        bool hasCoverage() const { return this->coverage_ != nullptr;};
        void deleteCoverage() { this->coverage_ = nullptr;};
        inline const vector<Report::Coverage> & getCoverage() const { DARABONBA_PTR_GET_CONST(coverage_, vector<Report::Coverage>) };
        inline vector<Report::Coverage> getCoverage() { DARABONBA_PTR_GET(coverage_, vector<Report::Coverage>) };
        inline Report& setCoverage(const vector<Report::Coverage> & coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };
        inline Report& setCoverage(vector<Report::Coverage> && coverage) { DARABONBA_PTR_SET_RVALUE(coverage_, coverage) };


        // findings Field Functions 
        bool hasFindings() const { return this->findings_ != nullptr;};
        void deleteFindings() { this->findings_ = nullptr;};
        inline const vector<Report::Findings> & getFindings() const { DARABONBA_PTR_GET_CONST(findings_, vector<Report::Findings>) };
        inline vector<Report::Findings> getFindings() { DARABONBA_PTR_GET(findings_, vector<Report::Findings>) };
        inline Report& setFindings(const vector<Report::Findings> & findings) { DARABONBA_PTR_SET_VALUE(findings_, findings) };
        inline Report& setFindings(vector<Report::Findings> && findings) { DARABONBA_PTR_SET_RVALUE(findings_, findings) };


        // finishedAt Field Functions 
        bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
        void deleteFinishedAt() { this->finishedAt_ = nullptr;};
        inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
        inline Report& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


        // html Field Functions 
        bool hasHtml() const { return this->html_ != nullptr;};
        void deleteHtml() { this->html_ = nullptr;};
        inline string getHtml() const { DARABONBA_PTR_GET_DEFAULT(html_, "") };
        inline Report& setHtml(string html) { DARABONBA_PTR_SET_VALUE(html_, html) };


        // inspectionRunId Field Functions 
        bool hasInspectionRunId() const { return this->inspectionRunId_ != nullptr;};
        void deleteInspectionRunId() { this->inspectionRunId_ = nullptr;};
        inline string getInspectionRunId() const { DARABONBA_PTR_GET_DEFAULT(inspectionRunId_, "") };
        inline Report& setInspectionRunId(string inspectionRunId) { DARABONBA_PTR_SET_VALUE(inspectionRunId_, inspectionRunId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Report& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Report& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // markdown Field Functions 
        bool hasMarkdown() const { return this->markdown_ != nullptr;};
        void deleteMarkdown() { this->markdown_ = nullptr;};
        inline string getMarkdown() const { DARABONBA_PTR_GET_DEFAULT(markdown_, "") };
        inline Report& setMarkdown(string markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };


        // overview Field Functions 
        bool hasOverview() const { return this->overview_ != nullptr;};
        void deleteOverview() { this->overview_ = nullptr;};
        inline string getOverview() const { DARABONBA_PTR_GET_DEFAULT(overview_, "") };
        inline Report& setOverview(string overview) { DARABONBA_PTR_SET_VALUE(overview_, overview) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Report& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // reportId Field Functions 
        bool hasReportId() const { return this->reportId_ != nullptr;};
        void deleteReportId() { this->reportId_ = nullptr;};
        inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
        inline Report& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


        // reportSummary Field Functions 
        bool hasReportSummary() const { return this->reportSummary_ != nullptr;};
        void deleteReportSummary() { this->reportSummary_ = nullptr;};
        inline const Report::ReportSummary & getReportSummary() const { DARABONBA_PTR_GET_CONST(reportSummary_, Report::ReportSummary) };
        inline Report::ReportSummary getReportSummary() { DARABONBA_PTR_GET(reportSummary_, Report::ReportSummary) };
        inline Report& setReportSummary(const Report::ReportSummary & reportSummary) { DARABONBA_PTR_SET_VALUE(reportSummary_, reportSummary) };
        inline Report& setReportSummary(Report::ReportSummary && reportSummary) { DARABONBA_PTR_SET_RVALUE(reportSummary_, reportSummary) };


        // templateVersion Field Functions 
        bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
        void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
        inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
        inline Report& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


        // timeRange Field Functions 
        bool hasTimeRange() const { return this->timeRange_ != nullptr;};
        void deleteTimeRange() { this->timeRange_ = nullptr;};
        inline const Report::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, Report::TimeRange) };
        inline Report::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, Report::TimeRange) };
        inline Report& setTimeRange(const Report::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
        inline Report& setTimeRange(Report::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


      protected:
        shared_ptr<string> completion_ {};
        shared_ptr<vector<Report::Coverage>> coverage_ {};
        shared_ptr<vector<Report::Findings>> findings_ {};
        shared_ptr<string> finishedAt_ {};
        shared_ptr<string> html_ {};
        shared_ptr<string> inspectionRunId_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<string> markdown_ {};
        shared_ptr<string> overview_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> reportId_ {};
        shared_ptr<Report::ReportSummary> reportSummary_ {};
        shared_ptr<string> templateVersion_ {};
        shared_ptr<Report::TimeRange> timeRange_ {};
      };

      class Notification : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Notification& obj) { 
          DARABONBA_PTR_TO_JSON(eventId, eventId_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Notification& obj) { 
          DARABONBA_PTR_FROM_JSON(eventId, eventId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Notification() = default ;
        Notification(const Notification &) = default ;
        Notification(Notification &&) = default ;
        Notification(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Notification() = default ;
        Notification& operator=(const Notification &) = default ;
        Notification& operator=(Notification &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventId_ == nullptr
        && this->status_ == nullptr; };
        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
        inline Notification& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Notification& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> eventId_ {};
        shared_ptr<string> status_ {};
      };

      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(effectiveConfig, effectiveConfig_);
          DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(headline, headline_);
          DARABONBA_PTR_TO_JSON(metrics, metrics_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(observedAt, observedAt_);
          DARABONBA_PTR_TO_JSON(resourceCount, resourceCount_);
          DARABONBA_PTR_TO_JSON(resourceSummary, resourceSummary_);
          DARABONBA_PTR_TO_JSON(resourceTypes, resourceTypes_);
          DARABONBA_PTR_TO_JSON(result, result_);
          DARABONBA_PTR_TO_JSON(severity, severity_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
          DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(effectiveConfig, effectiveConfig_);
          DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(headline, headline_);
          DARABONBA_PTR_FROM_JSON(metrics, metrics_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(observedAt, observedAt_);
          DARABONBA_PTR_FROM_JSON(resourceCount, resourceCount_);
          DARABONBA_PTR_FROM_JSON(resourceSummary, resourceSummary_);
          DARABONBA_PTR_FROM_JSON(resourceTypes, resourceTypes_);
          DARABONBA_PTR_FROM_JSON(result, result_);
          DARABONBA_PTR_FROM_JSON(severity, severity_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
          DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
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

        class ResourceSummary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceSummary& obj) { 
            DARABONBA_PTR_TO_JSON(infoCount, infoCount_);
            DARABONBA_PTR_TO_JSON(riskCount, riskCount_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceSummary& obj) { 
            DARABONBA_PTR_FROM_JSON(infoCount, infoCount_);
            DARABONBA_PTR_FROM_JSON(riskCount, riskCount_);
          };
          ResourceSummary() = default ;
          ResourceSummary(const ResourceSummary &) = default ;
          ResourceSummary(ResourceSummary &&) = default ;
          ResourceSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceSummary() = default ;
          ResourceSummary& operator=(const ResourceSummary &) = default ;
          ResourceSummary& operator=(ResourceSummary &&) = default ;
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
          inline ResourceSummary& setInfoCount(int32_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


          // riskCount Field Functions 
          bool hasRiskCount() const { return this->riskCount_ != nullptr;};
          void deleteRiskCount() { this->riskCount_ = nullptr;};
          inline int32_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
          inline ResourceSummary& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


        protected:
          shared_ptr<int32_t> infoCount_ {};
          shared_ptr<int32_t> riskCount_ {};
        };

        class Metrics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
            DARABONBA_PTR_TO_JSON(bad, bad_);
            DARABONBA_PTR_TO_JSON(good, good_);
            DARABONBA_PTR_TO_JSON(k, k_);
            DARABONBA_PTR_TO_JSON(v, v_);
          };
          friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
            DARABONBA_PTR_FROM_JSON(bad, bad_);
            DARABONBA_PTR_FROM_JSON(good, good_);
            DARABONBA_PTR_FROM_JSON(k, k_);
            DARABONBA_PTR_FROM_JSON(v, v_);
          };
          Metrics() = default ;
          Metrics(const Metrics &) = default ;
          Metrics(Metrics &&) = default ;
          Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Metrics() = default ;
          Metrics& operator=(const Metrics &) = default ;
          Metrics& operator=(Metrics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bad_ == nullptr
        && this->good_ == nullptr && this->k_ == nullptr && this->v_ == nullptr; };
          // bad Field Functions 
          bool hasBad() const { return this->bad_ != nullptr;};
          void deleteBad() { this->bad_ = nullptr;};
          inline bool getBad() const { DARABONBA_PTR_GET_DEFAULT(bad_, false) };
          inline Metrics& setBad(bool bad) { DARABONBA_PTR_SET_VALUE(bad_, bad) };


          // good Field Functions 
          bool hasGood() const { return this->good_ != nullptr;};
          void deleteGood() { this->good_ = nullptr;};
          inline bool getGood() const { DARABONBA_PTR_GET_DEFAULT(good_, false) };
          inline Metrics& setGood(bool good) { DARABONBA_PTR_SET_VALUE(good_, good) };


          // k Field Functions 
          bool hasK() const { return this->k_ != nullptr;};
          void deleteK() { this->k_ = nullptr;};
          inline string getK() const { DARABONBA_PTR_GET_DEFAULT(k_, "") };
          inline Metrics& setK(string k) { DARABONBA_PTR_SET_VALUE(k_, k) };


          // v Field Functions 
          bool hasV() const { return this->v_ != nullptr;};
          void deleteV() { this->v_ = nullptr;};
          inline string getV() const { DARABONBA_PTR_GET_DEFAULT(v_, "") };
          inline Metrics& setV(string v) { DARABONBA_PTR_SET_VALUE(v_, v) };


        protected:
          shared_ptr<bool> bad_ {};
          shared_ptr<bool> good_ {};
          shared_ptr<string> k_ {};
          shared_ptr<string> v_ {};
        };

        class EffectiveConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EffectiveConfig& obj) { 
            DARABONBA_ANY_TO_JSON(parameters, parameters_);
            DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
          };
          friend void from_json(const Darabonba::Json& j, EffectiveConfig& obj) { 
            DARABONBA_ANY_FROM_JSON(parameters, parameters_);
            DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
          };
          EffectiveConfig() = default ;
          EffectiveConfig(const EffectiveConfig &) = default ;
          EffectiveConfig(EffectiveConfig &&) = default ;
          EffectiveConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EffectiveConfig() = default ;
          EffectiveConfig& operator=(const EffectiveConfig &) = default ;
          EffectiveConfig& operator=(EffectiveConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->parameters_ == nullptr
        && this->templateCode_ == nullptr; };
          // parameters Field Functions 
          bool hasParameters() const { return this->parameters_ != nullptr;};
          void deleteParameters() { this->parameters_ = nullptr;};
          inline           const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
          Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
          inline EffectiveConfig& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
          inline EffectiveConfig& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


          // templateCode Field Functions 
          bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
          void deleteTemplateCode() { this->templateCode_ = nullptr;};
          inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
          inline EffectiveConfig& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


        protected:
          Darabonba::Json parameters_ {};
          shared_ptr<string> templateCode_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->effectiveConfig_ == nullptr && this->errorCode_ == nullptr && this->headline_ == nullptr && this->metrics_ == nullptr && this->name_ == nullptr
        && this->observedAt_ == nullptr && this->resourceCount_ == nullptr && this->resourceSummary_ == nullptr && this->resourceTypes_ == nullptr && this->result_ == nullptr
        && this->severity_ == nullptr && this->status_ == nullptr && this->templateCode_ == nullptr && this->timeRange_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // effectiveConfig Field Functions 
        bool hasEffectiveConfig() const { return this->effectiveConfig_ != nullptr;};
        void deleteEffectiveConfig() { this->effectiveConfig_ = nullptr;};
        inline const Items::EffectiveConfig & getEffectiveConfig() const { DARABONBA_PTR_GET_CONST(effectiveConfig_, Items::EffectiveConfig) };
        inline Items::EffectiveConfig getEffectiveConfig() { DARABONBA_PTR_GET(effectiveConfig_, Items::EffectiveConfig) };
        inline Items& setEffectiveConfig(const Items::EffectiveConfig & effectiveConfig) { DARABONBA_PTR_SET_VALUE(effectiveConfig_, effectiveConfig) };
        inline Items& setEffectiveConfig(Items::EffectiveConfig && effectiveConfig) { DARABONBA_PTR_SET_RVALUE(effectiveConfig_, effectiveConfig) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Items& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // headline Field Functions 
        bool hasHeadline() const { return this->headline_ != nullptr;};
        void deleteHeadline() { this->headline_ = nullptr;};
        inline string getHeadline() const { DARABONBA_PTR_GET_DEFAULT(headline_, "") };
        inline Items& setHeadline(string headline) { DARABONBA_PTR_SET_VALUE(headline_, headline) };


        // metrics Field Functions 
        bool hasMetrics() const { return this->metrics_ != nullptr;};
        void deleteMetrics() { this->metrics_ = nullptr;};
        inline const vector<Items::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Items::Metrics>) };
        inline vector<Items::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<Items::Metrics>) };
        inline Items& setMetrics(const vector<Items::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
        inline Items& setMetrics(vector<Items::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // observedAt Field Functions 
        bool hasObservedAt() const { return this->observedAt_ != nullptr;};
        void deleteObservedAt() { this->observedAt_ = nullptr;};
        inline string getObservedAt() const { DARABONBA_PTR_GET_DEFAULT(observedAt_, "") };
        inline Items& setObservedAt(string observedAt) { DARABONBA_PTR_SET_VALUE(observedAt_, observedAt) };


        // resourceCount Field Functions 
        bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
        void deleteResourceCount() { this->resourceCount_ = nullptr;};
        inline int64_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
        inline Items& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


        // resourceSummary Field Functions 
        bool hasResourceSummary() const { return this->resourceSummary_ != nullptr;};
        void deleteResourceSummary() { this->resourceSummary_ = nullptr;};
        inline const Items::ResourceSummary & getResourceSummary() const { DARABONBA_PTR_GET_CONST(resourceSummary_, Items::ResourceSummary) };
        inline Items::ResourceSummary getResourceSummary() { DARABONBA_PTR_GET(resourceSummary_, Items::ResourceSummary) };
        inline Items& setResourceSummary(const Items::ResourceSummary & resourceSummary) { DARABONBA_PTR_SET_VALUE(resourceSummary_, resourceSummary) };
        inline Items& setResourceSummary(Items::ResourceSummary && resourceSummary) { DARABONBA_PTR_SET_RVALUE(resourceSummary_, resourceSummary) };


        // resourceTypes Field Functions 
        bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
        void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
        inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
        inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
        inline Items& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
        inline Items& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline Items& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
        inline Items& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // templateCode Field Functions 
        bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
        void deleteTemplateCode() { this->templateCode_ = nullptr;};
        inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
        inline Items& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


        // timeRange Field Functions 
        bool hasTimeRange() const { return this->timeRange_ != nullptr;};
        void deleteTimeRange() { this->timeRange_ = nullptr;};
        inline const Items::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, Items::TimeRange) };
        inline Items::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, Items::TimeRange) };
        inline Items& setTimeRange(const Items::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
        inline Items& setTimeRange(Items::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<Items::EffectiveConfig> effectiveConfig_ {};
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> headline_ {};
        shared_ptr<vector<Items::Metrics>> metrics_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> observedAt_ {};
        shared_ptr<int64_t> resourceCount_ {};
        shared_ptr<Items::ResourceSummary> resourceSummary_ {};
        shared_ptr<vector<string>> resourceTypes_ {};
        shared_ptr<string> result_ {};
        shared_ptr<string> severity_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> templateCode_ {};
        shared_ptr<Items::TimeRange> timeRange_ {};
      };

      class ConfigSnapshot : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigSnapshot& obj) { 
          DARABONBA_PTR_TO_JSON(items, items_);
          DARABONBA_PTR_TO_JSON(resourceScope, resourceScope_);
          DARABONBA_PTR_TO_JSON(schedule, schedule_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigSnapshot& obj) { 
          DARABONBA_PTR_FROM_JSON(items, items_);
          DARABONBA_PTR_FROM_JSON(resourceScope, resourceScope_);
          DARABONBA_PTR_FROM_JSON(schedule, schedule_);
        };
        ConfigSnapshot() = default ;
        ConfigSnapshot(const ConfigSnapshot &) = default ;
        ConfigSnapshot(ConfigSnapshot &&) = default ;
        ConfigSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigSnapshot() = default ;
        ConfigSnapshot& operator=(const ConfigSnapshot &) = default ;
        ConfigSnapshot& operator=(ConfigSnapshot &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Schedule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Schedule& obj) { 
            DARABONBA_PTR_TO_JSON(cron, cron_);
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
          };
          friend void from_json(const Darabonba::Json& j, Schedule& obj) { 
            DARABONBA_PTR_FROM_JSON(cron, cron_);
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          };
          Schedule() = default ;
          Schedule(const Schedule &) = default ;
          Schedule(Schedule &&) = default ;
          Schedule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Schedule() = default ;
          Schedule& operator=(const Schedule &) = default ;
          Schedule& operator=(Schedule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cron_ == nullptr
        && this->enabled_ == nullptr; };
          // cron Field Functions 
          bool hasCron() const { return this->cron_ != nullptr;};
          void deleteCron() { this->cron_ = nullptr;};
          inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
          inline Schedule& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline Schedule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        protected:
          shared_ptr<string> cron_ {};
          // This parameter is required.
          shared_ptr<bool> enabled_ {};
        };

        class ResourceScope : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceScope& obj) { 
            DARABONBA_PTR_TO_JSON(consumerGroups, consumerGroups_);
            DARABONBA_PTR_TO_JSON(mode, mode_);
            DARABONBA_PTR_TO_JSON(topics, topics_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceScope& obj) { 
            DARABONBA_PTR_FROM_JSON(consumerGroups, consumerGroups_);
            DARABONBA_PTR_FROM_JSON(mode, mode_);
            DARABONBA_PTR_FROM_JSON(topics, topics_);
          };
          ResourceScope() = default ;
          ResourceScope(const ResourceScope &) = default ;
          ResourceScope(ResourceScope &&) = default ;
          ResourceScope(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceScope() = default ;
          ResourceScope& operator=(const ResourceScope &) = default ;
          ResourceScope& operator=(ResourceScope &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->consumerGroups_ == nullptr
        && this->mode_ == nullptr && this->topics_ == nullptr; };
          // consumerGroups Field Functions 
          bool hasConsumerGroups() const { return this->consumerGroups_ != nullptr;};
          void deleteConsumerGroups() { this->consumerGroups_ = nullptr;};
          inline const vector<string> & getConsumerGroups() const { DARABONBA_PTR_GET_CONST(consumerGroups_, vector<string>) };
          inline vector<string> getConsumerGroups() { DARABONBA_PTR_GET(consumerGroups_, vector<string>) };
          inline ResourceScope& setConsumerGroups(const vector<string> & consumerGroups) { DARABONBA_PTR_SET_VALUE(consumerGroups_, consumerGroups) };
          inline ResourceScope& setConsumerGroups(vector<string> && consumerGroups) { DARABONBA_PTR_SET_RVALUE(consumerGroups_, consumerGroups) };


          // mode Field Functions 
          bool hasMode() const { return this->mode_ != nullptr;};
          void deleteMode() { this->mode_ = nullptr;};
          inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
          inline ResourceScope& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


          // topics Field Functions 
          bool hasTopics() const { return this->topics_ != nullptr;};
          void deleteTopics() { this->topics_ = nullptr;};
          inline const vector<string> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
          inline vector<string> getTopics() { DARABONBA_PTR_GET(topics_, vector<string>) };
          inline ResourceScope& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
          inline ResourceScope& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


        protected:
          shared_ptr<vector<string>> consumerGroups_ {};
          // This parameter is required.
          shared_ptr<string> mode_ {};
          shared_ptr<vector<string>> topics_ {};
        };

        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_ANY_TO_JSON(parameters, parameters_);
            DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_ANY_FROM_JSON(parameters, parameters_);
            DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
          };
          Items() = default ;
          Items(const Items &) = default ;
          Items(Items &&) = default ;
          Items(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Items() = default ;
          Items& operator=(const Items &) = default ;
          Items& operator=(Items &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->parameters_ == nullptr
        && this->templateCode_ == nullptr; };
          // parameters Field Functions 
          bool hasParameters() const { return this->parameters_ != nullptr;};
          void deleteParameters() { this->parameters_ = nullptr;};
          inline           const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
          Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
          inline Items& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
          inline Items& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


          // templateCode Field Functions 
          bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
          void deleteTemplateCode() { this->templateCode_ = nullptr;};
          inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
          inline Items& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


        protected:
          // This parameter is required.
          Darabonba::Json parameters_ {};
          // This parameter is required.
          shared_ptr<string> templateCode_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->resourceScope_ == nullptr && this->schedule_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<ConfigSnapshot::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ConfigSnapshot::Items>) };
        inline vector<ConfigSnapshot::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ConfigSnapshot::Items>) };
        inline ConfigSnapshot& setItems(const vector<ConfigSnapshot::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline ConfigSnapshot& setItems(vector<ConfigSnapshot::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // resourceScope Field Functions 
        bool hasResourceScope() const { return this->resourceScope_ != nullptr;};
        void deleteResourceScope() { this->resourceScope_ = nullptr;};
        inline const ConfigSnapshot::ResourceScope & getResourceScope() const { DARABONBA_PTR_GET_CONST(resourceScope_, ConfigSnapshot::ResourceScope) };
        inline ConfigSnapshot::ResourceScope getResourceScope() { DARABONBA_PTR_GET(resourceScope_, ConfigSnapshot::ResourceScope) };
        inline ConfigSnapshot& setResourceScope(const ConfigSnapshot::ResourceScope & resourceScope) { DARABONBA_PTR_SET_VALUE(resourceScope_, resourceScope) };
        inline ConfigSnapshot& setResourceScope(ConfigSnapshot::ResourceScope && resourceScope) { DARABONBA_PTR_SET_RVALUE(resourceScope_, resourceScope) };


        // schedule Field Functions 
        bool hasSchedule() const { return this->schedule_ != nullptr;};
        void deleteSchedule() { this->schedule_ = nullptr;};
        inline const ConfigSnapshot::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, ConfigSnapshot::Schedule) };
        inline ConfigSnapshot::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, ConfigSnapshot::Schedule) };
        inline ConfigSnapshot& setSchedule(const ConfigSnapshot::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
        inline ConfigSnapshot& setSchedule(ConfigSnapshot::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


      protected:
        // This parameter is required.
        shared_ptr<vector<ConfigSnapshot::Items>> items_ {};
        // This parameter is required.
        shared_ptr<ConfigSnapshot::ResourceScope> resourceScope_ {};
        // This parameter is required.
        shared_ptr<ConfigSnapshot::Schedule> schedule_ {};
      };

      class AiSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiSummary& obj) { 
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(text, text_);
        };
        friend void from_json(const Darabonba::Json& j, AiSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(text, text_);
        };
        AiSummary() = default ;
        AiSummary(const AiSummary &) = default ;
        AiSummary(AiSummary &&) = default ;
        AiSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiSummary() = default ;
        AiSummary& operator=(const AiSummary &) = default ;
        AiSummary& operator=(AiSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->text_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AiSummary& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline AiSummary& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        // Pending 等待、Running 生成中、Succeeded 已生成、Failed 生成失败；不改变巡检结果。
        shared_ptr<string> status_ {};
        // 仅生成成功时返回，最多 200 字，不由前端拼接或截取。
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->aiSummary_ == nullptr
        && this->configSnapshot_ == nullptr && this->finishedAt_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->items_ == nullptr
        && this->notification_ == nullptr && this->regionId_ == nullptr && this->report_ == nullptr && this->requestedAt_ == nullptr && this->runId_ == nullptr
        && this->status_ == nullptr && this->summary_ == nullptr && this->timeRange_ == nullptr && this->triggerSource_ == nullptr; };
      // aiSummary Field Functions 
      bool hasAiSummary() const { return this->aiSummary_ != nullptr;};
      void deleteAiSummary() { this->aiSummary_ = nullptr;};
      inline const LastRun::AiSummary & getAiSummary() const { DARABONBA_PTR_GET_CONST(aiSummary_, LastRun::AiSummary) };
      inline LastRun::AiSummary getAiSummary() { DARABONBA_PTR_GET(aiSummary_, LastRun::AiSummary) };
      inline LastRun& setAiSummary(const LastRun::AiSummary & aiSummary) { DARABONBA_PTR_SET_VALUE(aiSummary_, aiSummary) };
      inline LastRun& setAiSummary(LastRun::AiSummary && aiSummary) { DARABONBA_PTR_SET_RVALUE(aiSummary_, aiSummary) };


      // configSnapshot Field Functions 
      bool hasConfigSnapshot() const { return this->configSnapshot_ != nullptr;};
      void deleteConfigSnapshot() { this->configSnapshot_ = nullptr;};
      inline const LastRun::ConfigSnapshot & getConfigSnapshot() const { DARABONBA_PTR_GET_CONST(configSnapshot_, LastRun::ConfigSnapshot) };
      inline LastRun::ConfigSnapshot getConfigSnapshot() { DARABONBA_PTR_GET(configSnapshot_, LastRun::ConfigSnapshot) };
      inline LastRun& setConfigSnapshot(const LastRun::ConfigSnapshot & configSnapshot) { DARABONBA_PTR_SET_VALUE(configSnapshot_, configSnapshot) };
      inline LastRun& setConfigSnapshot(LastRun::ConfigSnapshot && configSnapshot) { DARABONBA_PTR_SET_RVALUE(configSnapshot_, configSnapshot) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline LastRun& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline LastRun& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline LastRun& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<LastRun::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<LastRun::Items>) };
      inline vector<LastRun::Items> getItems() { DARABONBA_PTR_GET(items_, vector<LastRun::Items>) };
      inline LastRun& setItems(const vector<LastRun::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline LastRun& setItems(vector<LastRun::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // notification Field Functions 
      bool hasNotification() const { return this->notification_ != nullptr;};
      void deleteNotification() { this->notification_ = nullptr;};
      inline const LastRun::Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, LastRun::Notification) };
      inline LastRun::Notification getNotification() { DARABONBA_PTR_GET(notification_, LastRun::Notification) };
      inline LastRun& setNotification(const LastRun::Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
      inline LastRun& setNotification(LastRun::Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline LastRun& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // report Field Functions 
      bool hasReport() const { return this->report_ != nullptr;};
      void deleteReport() { this->report_ = nullptr;};
      inline const LastRun::Report & getReport() const { DARABONBA_PTR_GET_CONST(report_, LastRun::Report) };
      inline LastRun::Report getReport() { DARABONBA_PTR_GET(report_, LastRun::Report) };
      inline LastRun& setReport(const LastRun::Report & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
      inline LastRun& setReport(LastRun::Report && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


      // requestedAt Field Functions 
      bool hasRequestedAt() const { return this->requestedAt_ != nullptr;};
      void deleteRequestedAt() { this->requestedAt_ = nullptr;};
      inline string getRequestedAt() const { DARABONBA_PTR_GET_DEFAULT(requestedAt_, "") };
      inline LastRun& setRequestedAt(string requestedAt) { DARABONBA_PTR_SET_VALUE(requestedAt_, requestedAt) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline LastRun& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LastRun& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline const LastRun::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, LastRun::Summary) };
      inline LastRun::Summary getSummary() { DARABONBA_PTR_GET(summary_, LastRun::Summary) };
      inline LastRun& setSummary(const LastRun::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
      inline LastRun& setSummary(LastRun::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


      // timeRange Field Functions 
      bool hasTimeRange() const { return this->timeRange_ != nullptr;};
      void deleteTimeRange() { this->timeRange_ = nullptr;};
      inline const LastRun::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, LastRun::TimeRange) };
      inline LastRun::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, LastRun::TimeRange) };
      inline LastRun& setTimeRange(const LastRun::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
      inline LastRun& setTimeRange(LastRun::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


      // triggerSource Field Functions 
      bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
      void deleteTriggerSource() { this->triggerSource_ = nullptr;};
      inline string getTriggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
      inline LastRun& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    protected:
      // 每次巡检结果由 LLM 总结；包含生成状态及成功后的原文，未生成时为空。
      shared_ptr<LastRun::AiSummary> aiSummary_ {};
      shared_ptr<LastRun::ConfigSnapshot> configSnapshot_ {};
      shared_ptr<string> finishedAt_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<vector<LastRun::Items>> items_ {};
      shared_ptr<LastRun::Notification> notification_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<LastRun::Report> report_ {};
      shared_ptr<string> requestedAt_ {};
      shared_ptr<string> runId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<LastRun::Summary> summary_ {};
      shared_ptr<LastRun::TimeRange> timeRange_ {};
      shared_ptr<string> triggerSource_ {};
    };

    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(resourceCount, resourceCount_);
        DARABONBA_PTR_TO_JSON(resourceTypes, resourceTypes_);
        DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(resourceCount, resourceCount_);
        DARABONBA_PTR_FROM_JSON(resourceTypes, resourceTypes_);
        DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->resourceCount_ == nullptr && this->resourceTypes_ == nullptr && this->templateCode_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceCount Field Functions 
      bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
      void deleteResourceCount() { this->resourceCount_ = nullptr;};
      inline int64_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
      inline Items& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


      // resourceTypes Field Functions 
      bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
      void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
      inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
      inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
      inline Items& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
      inline Items& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline Items& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> resourceCount_ {};
      shared_ptr<vector<string>> resourceTypes_ {};
      shared_ptr<string> templateCode_ {};
    };

    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(resourceScope, resourceScope_);
        DARABONBA_PTR_TO_JSON(schedule, schedule_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(resourceScope, resourceScope_);
        DARABONBA_PTR_FROM_JSON(schedule, schedule_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Schedule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Schedule& obj) { 
          DARABONBA_PTR_TO_JSON(cron, cron_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, Schedule& obj) { 
          DARABONBA_PTR_FROM_JSON(cron, cron_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        };
        Schedule() = default ;
        Schedule(const Schedule &) = default ;
        Schedule(Schedule &&) = default ;
        Schedule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Schedule() = default ;
        Schedule& operator=(const Schedule &) = default ;
        Schedule& operator=(Schedule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cron_ == nullptr
        && this->enabled_ == nullptr; };
        // cron Field Functions 
        bool hasCron() const { return this->cron_ != nullptr;};
        void deleteCron() { this->cron_ = nullptr;};
        inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
        inline Schedule& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Schedule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        shared_ptr<string> cron_ {};
        // This parameter is required.
        shared_ptr<bool> enabled_ {};
      };

      class ResourceScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceScope& obj) { 
          DARABONBA_PTR_TO_JSON(consumerGroups, consumerGroups_);
          DARABONBA_PTR_TO_JSON(mode, mode_);
          DARABONBA_PTR_TO_JSON(topics, topics_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceScope& obj) { 
          DARABONBA_PTR_FROM_JSON(consumerGroups, consumerGroups_);
          DARABONBA_PTR_FROM_JSON(mode, mode_);
          DARABONBA_PTR_FROM_JSON(topics, topics_);
        };
        ResourceScope() = default ;
        ResourceScope(const ResourceScope &) = default ;
        ResourceScope(ResourceScope &&) = default ;
        ResourceScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceScope() = default ;
        ResourceScope& operator=(const ResourceScope &) = default ;
        ResourceScope& operator=(ResourceScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumerGroups_ == nullptr
        && this->mode_ == nullptr && this->topics_ == nullptr; };
        // consumerGroups Field Functions 
        bool hasConsumerGroups() const { return this->consumerGroups_ != nullptr;};
        void deleteConsumerGroups() { this->consumerGroups_ = nullptr;};
        inline const vector<string> & getConsumerGroups() const { DARABONBA_PTR_GET_CONST(consumerGroups_, vector<string>) };
        inline vector<string> getConsumerGroups() { DARABONBA_PTR_GET(consumerGroups_, vector<string>) };
        inline ResourceScope& setConsumerGroups(const vector<string> & consumerGroups) { DARABONBA_PTR_SET_VALUE(consumerGroups_, consumerGroups) };
        inline ResourceScope& setConsumerGroups(vector<string> && consumerGroups) { DARABONBA_PTR_SET_RVALUE(consumerGroups_, consumerGroups) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline ResourceScope& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // topics Field Functions 
        bool hasTopics() const { return this->topics_ != nullptr;};
        void deleteTopics() { this->topics_ = nullptr;};
        inline const vector<string> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
        inline vector<string> getTopics() { DARABONBA_PTR_GET(topics_, vector<string>) };
        inline ResourceScope& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
        inline ResourceScope& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


      protected:
        shared_ptr<vector<string>> consumerGroups_ {};
        // This parameter is required.
        shared_ptr<string> mode_ {};
        shared_ptr<vector<string>> topics_ {};
      };

      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_ANY_TO_JSON(parameters, parameters_);
          DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_ANY_FROM_JSON(parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameters_ == nullptr
        && this->templateCode_ == nullptr; };
        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline         const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
        Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
        inline Items& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
        inline Items& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


        // templateCode Field Functions 
        bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
        void deleteTemplateCode() { this->templateCode_ = nullptr;};
        inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
        inline Items& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      protected:
        // This parameter is required.
        Darabonba::Json parameters_ {};
        // This parameter is required.
        shared_ptr<string> templateCode_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->resourceScope_ == nullptr && this->schedule_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Config::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Config::Items>) };
      inline vector<Config::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Config::Items>) };
      inline Config& setItems(const vector<Config::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Config& setItems(vector<Config::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // resourceScope Field Functions 
      bool hasResourceScope() const { return this->resourceScope_ != nullptr;};
      void deleteResourceScope() { this->resourceScope_ = nullptr;};
      inline const Config::ResourceScope & getResourceScope() const { DARABONBA_PTR_GET_CONST(resourceScope_, Config::ResourceScope) };
      inline Config::ResourceScope getResourceScope() { DARABONBA_PTR_GET(resourceScope_, Config::ResourceScope) };
      inline Config& setResourceScope(const Config::ResourceScope & resourceScope) { DARABONBA_PTR_SET_VALUE(resourceScope_, resourceScope) };
      inline Config& setResourceScope(Config::ResourceScope && resourceScope) { DARABONBA_PTR_SET_RVALUE(resourceScope_, resourceScope) };


      // schedule Field Functions 
      bool hasSchedule() const { return this->schedule_ != nullptr;};
      void deleteSchedule() { this->schedule_ = nullptr;};
      inline const Config::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, Config::Schedule) };
      inline Config::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, Config::Schedule) };
      inline Config& setSchedule(const Config::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
      inline Config& setSchedule(Config::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    protected:
      // This parameter is required.
      shared_ptr<vector<Config::Items>> items_ {};
      // This parameter is required.
      shared_ptr<Config::ResourceScope> resourceScope_ {};
      // This parameter is required.
      shared_ptr<Config::Schedule> schedule_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->configured_ == nullptr && this->instanceId_ == nullptr && this->items_ == nullptr && this->lastRun_ == nullptr && this->nextRunAt_ == nullptr
        && this->regionId_ == nullptr && this->revision_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const GetInstanceInspectionResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, GetInstanceInspectionResponseBody::Config) };
    inline GetInstanceInspectionResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, GetInstanceInspectionResponseBody::Config) };
    inline GetInstanceInspectionResponseBody& setConfig(const GetInstanceInspectionResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetInstanceInspectionResponseBody& setConfig(GetInstanceInspectionResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // configured Field Functions 
    bool hasConfigured() const { return this->configured_ != nullptr;};
    void deleteConfigured() { this->configured_ = nullptr;};
    inline bool getConfigured() const { DARABONBA_PTR_GET_DEFAULT(configured_, false) };
    inline GetInstanceInspectionResponseBody& setConfigured(bool configured) { DARABONBA_PTR_SET_VALUE(configured_, configured) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceInspectionResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GetInstanceInspectionResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<GetInstanceInspectionResponseBody::Items>) };
    inline vector<GetInstanceInspectionResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<GetInstanceInspectionResponseBody::Items>) };
    inline GetInstanceInspectionResponseBody& setItems(const vector<GetInstanceInspectionResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetInstanceInspectionResponseBody& setItems(vector<GetInstanceInspectionResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // lastRun Field Functions 
    bool hasLastRun() const { return this->lastRun_ != nullptr;};
    void deleteLastRun() { this->lastRun_ = nullptr;};
    inline const GetInstanceInspectionResponseBody::LastRun & getLastRun() const { DARABONBA_PTR_GET_CONST(lastRun_, GetInstanceInspectionResponseBody::LastRun) };
    inline GetInstanceInspectionResponseBody::LastRun getLastRun() { DARABONBA_PTR_GET(lastRun_, GetInstanceInspectionResponseBody::LastRun) };
    inline GetInstanceInspectionResponseBody& setLastRun(const GetInstanceInspectionResponseBody::LastRun & lastRun) { DARABONBA_PTR_SET_VALUE(lastRun_, lastRun) };
    inline GetInstanceInspectionResponseBody& setLastRun(GetInstanceInspectionResponseBody::LastRun && lastRun) { DARABONBA_PTR_SET_RVALUE(lastRun_, lastRun) };


    // nextRunAt Field Functions 
    bool hasNextRunAt() const { return this->nextRunAt_ != nullptr;};
    void deleteNextRunAt() { this->nextRunAt_ = nullptr;};
    inline string getNextRunAt() const { DARABONBA_PTR_GET_DEFAULT(nextRunAt_, "") };
    inline GetInstanceInspectionResponseBody& setNextRunAt(string nextRunAt) { DARABONBA_PTR_SET_VALUE(nextRunAt_, nextRunAt) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceInspectionResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // revision Field Functions 
    bool hasRevision() const { return this->revision_ != nullptr;};
    void deleteRevision() { this->revision_ = nullptr;};
    inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
    inline GetInstanceInspectionResponseBody& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


  protected:
    shared_ptr<GetInstanceInspectionResponseBody::Config> config_ {};
    shared_ptr<bool> configured_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<GetInstanceInspectionResponseBody::Items>> items_ {};
    shared_ptr<GetInstanceInspectionResponseBody::LastRun> lastRun_ {};
    shared_ptr<string> nextRunAt_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> revision_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
