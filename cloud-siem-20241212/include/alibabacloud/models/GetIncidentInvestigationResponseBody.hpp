// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINCIDENTINVESTIGATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINCIDENTINVESTIGATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetIncidentInvestigationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIncidentInvestigationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IncidentInvestigation, incidentInvestigation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIncidentInvestigationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IncidentInvestigation, incidentInvestigation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIncidentInvestigationResponseBody() = default ;
    GetIncidentInvestigationResponseBody(const GetIncidentInvestigationResponseBody &) = default ;
    GetIncidentInvestigationResponseBody(GetIncidentInvestigationResponseBody &&) = default ;
    GetIncidentInvestigationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIncidentInvestigationResponseBody() = default ;
    GetIncidentInvestigationResponseBody& operator=(const GetIncidentInvestigationResponseBody &) = default ;
    GetIncidentInvestigationResponseBody& operator=(GetIncidentInvestigationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IncidentInvestigation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IncidentInvestigation& obj) { 
        DARABONBA_PTR_TO_JSON(IncidentInvestigationAlertName, incidentInvestigationAlertName_);
        DARABONBA_PTR_TO_JSON(IncidentInvestigationConclusion, incidentInvestigationConclusion_);
        DARABONBA_PTR_TO_JSON(IncidentInvestigationDisplayId, incidentInvestigationDisplayId_);
        DARABONBA_PTR_TO_JSON(IncidentInvestigationEndTime, incidentInvestigationEndTime_);
        DARABONBA_PTR_TO_JSON(IncidentInvestigationId, incidentInvestigationId_);
        DARABONBA_PTR_TO_JSON(IncidentInvestigationOutput, incidentInvestigationOutput_);
        DARABONBA_PTR_TO_JSON(IncidentInvestigationReport, incidentInvestigationReport_);
        DARABONBA_PTR_TO_JSON(IncidentInvestigationStartTime, incidentInvestigationStartTime_);
        DARABONBA_PTR_TO_JSON(IncidentInvestigationStatus, incidentInvestigationStatus_);
        DARABONBA_PTR_TO_JSON(IncidentInvestigationSummary, incidentInvestigationSummary_);
        DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      };
      friend void from_json(const Darabonba::Json& j, IncidentInvestigation& obj) { 
        DARABONBA_PTR_FROM_JSON(IncidentInvestigationAlertName, incidentInvestigationAlertName_);
        DARABONBA_PTR_FROM_JSON(IncidentInvestigationConclusion, incidentInvestigationConclusion_);
        DARABONBA_PTR_FROM_JSON(IncidentInvestigationDisplayId, incidentInvestigationDisplayId_);
        DARABONBA_PTR_FROM_JSON(IncidentInvestigationEndTime, incidentInvestigationEndTime_);
        DARABONBA_PTR_FROM_JSON(IncidentInvestigationId, incidentInvestigationId_);
        DARABONBA_PTR_FROM_JSON(IncidentInvestigationOutput, incidentInvestigationOutput_);
        DARABONBA_PTR_FROM_JSON(IncidentInvestigationReport, incidentInvestigationReport_);
        DARABONBA_PTR_FROM_JSON(IncidentInvestigationStartTime, incidentInvestigationStartTime_);
        DARABONBA_PTR_FROM_JSON(IncidentInvestigationStatus, incidentInvestigationStatus_);
        DARABONBA_PTR_FROM_JSON(IncidentInvestigationSummary, incidentInvestigationSummary_);
        DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      };
      IncidentInvestigation() = default ;
      IncidentInvestigation(const IncidentInvestigation &) = default ;
      IncidentInvestigation(IncidentInvestigation &&) = default ;
      IncidentInvestigation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IncidentInvestigation() = default ;
      IncidentInvestigation& operator=(const IncidentInvestigation &) = default ;
      IncidentInvestigation& operator=(IncidentInvestigation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->incidentInvestigationAlertName_ == nullptr
        && this->incidentInvestigationConclusion_ == nullptr && this->incidentInvestigationDisplayId_ == nullptr && this->incidentInvestigationEndTime_ == nullptr && this->incidentInvestigationId_ == nullptr && this->incidentInvestigationOutput_ == nullptr
        && this->incidentInvestigationReport_ == nullptr && this->incidentInvestigationStartTime_ == nullptr && this->incidentInvestigationStatus_ == nullptr && this->incidentInvestigationSummary_ == nullptr && this->incidentUuid_ == nullptr; };
      // incidentInvestigationAlertName Field Functions 
      bool hasIncidentInvestigationAlertName() const { return this->incidentInvestigationAlertName_ != nullptr;};
      void deleteIncidentInvestigationAlertName() { this->incidentInvestigationAlertName_ = nullptr;};
      inline string getIncidentInvestigationAlertName() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationAlertName_, "") };
      inline IncidentInvestigation& setIncidentInvestigationAlertName(string incidentInvestigationAlertName) { DARABONBA_PTR_SET_VALUE(incidentInvestigationAlertName_, incidentInvestigationAlertName) };


      // incidentInvestigationConclusion Field Functions 
      bool hasIncidentInvestigationConclusion() const { return this->incidentInvestigationConclusion_ != nullptr;};
      void deleteIncidentInvestigationConclusion() { this->incidentInvestigationConclusion_ = nullptr;};
      inline string getIncidentInvestigationConclusion() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationConclusion_, "") };
      inline IncidentInvestigation& setIncidentInvestigationConclusion(string incidentInvestigationConclusion) { DARABONBA_PTR_SET_VALUE(incidentInvestigationConclusion_, incidentInvestigationConclusion) };


      // incidentInvestigationDisplayId Field Functions 
      bool hasIncidentInvestigationDisplayId() const { return this->incidentInvestigationDisplayId_ != nullptr;};
      void deleteIncidentInvestigationDisplayId() { this->incidentInvestigationDisplayId_ = nullptr;};
      inline string getIncidentInvestigationDisplayId() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationDisplayId_, "") };
      inline IncidentInvestigation& setIncidentInvestigationDisplayId(string incidentInvestigationDisplayId) { DARABONBA_PTR_SET_VALUE(incidentInvestigationDisplayId_, incidentInvestigationDisplayId) };


      // incidentInvestigationEndTime Field Functions 
      bool hasIncidentInvestigationEndTime() const { return this->incidentInvestigationEndTime_ != nullptr;};
      void deleteIncidentInvestigationEndTime() { this->incidentInvestigationEndTime_ = nullptr;};
      inline int64_t getIncidentInvestigationEndTime() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationEndTime_, 0L) };
      inline IncidentInvestigation& setIncidentInvestigationEndTime(int64_t incidentInvestigationEndTime) { DARABONBA_PTR_SET_VALUE(incidentInvestigationEndTime_, incidentInvestigationEndTime) };


      // incidentInvestigationId Field Functions 
      bool hasIncidentInvestigationId() const { return this->incidentInvestigationId_ != nullptr;};
      void deleteIncidentInvestigationId() { this->incidentInvestigationId_ = nullptr;};
      inline string getIncidentInvestigationId() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationId_, "") };
      inline IncidentInvestigation& setIncidentInvestigationId(string incidentInvestigationId) { DARABONBA_PTR_SET_VALUE(incidentInvestigationId_, incidentInvestigationId) };


      // incidentInvestigationOutput Field Functions 
      bool hasIncidentInvestigationOutput() const { return this->incidentInvestigationOutput_ != nullptr;};
      void deleteIncidentInvestigationOutput() { this->incidentInvestigationOutput_ = nullptr;};
      inline string getIncidentInvestigationOutput() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationOutput_, "") };
      inline IncidentInvestigation& setIncidentInvestigationOutput(string incidentInvestigationOutput) { DARABONBA_PTR_SET_VALUE(incidentInvestigationOutput_, incidentInvestigationOutput) };


      // incidentInvestigationReport Field Functions 
      bool hasIncidentInvestigationReport() const { return this->incidentInvestigationReport_ != nullptr;};
      void deleteIncidentInvestigationReport() { this->incidentInvestigationReport_ = nullptr;};
      inline string getIncidentInvestigationReport() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationReport_, "") };
      inline IncidentInvestigation& setIncidentInvestigationReport(string incidentInvestigationReport) { DARABONBA_PTR_SET_VALUE(incidentInvestigationReport_, incidentInvestigationReport) };


      // incidentInvestigationStartTime Field Functions 
      bool hasIncidentInvestigationStartTime() const { return this->incidentInvestigationStartTime_ != nullptr;};
      void deleteIncidentInvestigationStartTime() { this->incidentInvestigationStartTime_ = nullptr;};
      inline int64_t getIncidentInvestigationStartTime() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationStartTime_, 0L) };
      inline IncidentInvestigation& setIncidentInvestigationStartTime(int64_t incidentInvestigationStartTime) { DARABONBA_PTR_SET_VALUE(incidentInvestigationStartTime_, incidentInvestigationStartTime) };


      // incidentInvestigationStatus Field Functions 
      bool hasIncidentInvestigationStatus() const { return this->incidentInvestigationStatus_ != nullptr;};
      void deleteIncidentInvestigationStatus() { this->incidentInvestigationStatus_ = nullptr;};
      inline string getIncidentInvestigationStatus() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationStatus_, "") };
      inline IncidentInvestigation& setIncidentInvestigationStatus(string incidentInvestigationStatus) { DARABONBA_PTR_SET_VALUE(incidentInvestigationStatus_, incidentInvestigationStatus) };


      // incidentInvestigationSummary Field Functions 
      bool hasIncidentInvestigationSummary() const { return this->incidentInvestigationSummary_ != nullptr;};
      void deleteIncidentInvestigationSummary() { this->incidentInvestigationSummary_ = nullptr;};
      inline string getIncidentInvestigationSummary() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationSummary_, "") };
      inline IncidentInvestigation& setIncidentInvestigationSummary(string incidentInvestigationSummary) { DARABONBA_PTR_SET_VALUE(incidentInvestigationSummary_, incidentInvestigationSummary) };


      // incidentUuid Field Functions 
      bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
      void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
      inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
      inline IncidentInvestigation& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    protected:
      // The name of the alert that triggered this AI investigation.
      shared_ptr<string> incidentInvestigationAlertName_ {};
      // The judgment conclusion of the AI investigation, corresponding to ai_judgement_conclusion in the report.
      shared_ptr<string> incidentInvestigationConclusion_ {};
      // The display ID of the AI investigation report. You can use this value as the IncidentInvestigationDisplayId parameter of this operation to query the report.
      shared_ptr<string> incidentInvestigationDisplayId_ {};
      // The end time of the AI investigation, in seconds (UNIX timestamp). If the execution end time is not recorded, the last update time of the investigation record is used. This field is empty if neither time exists.
      shared_ptr<int64_t> incidentInvestigationEndTime_ {};
      // The unique ID of the AI investigation report. You can use this value as the IncidentInvestigationId parameter of this operation to query the report.
      shared_ptr<string> incidentInvestigationId_ {};
      // The output content of the AI investigation, in JSON-formatted string. This field can contain fields such as investigation_report (the investigation process and evidence body, which may use Markdown format). This field is empty if the corresponding output is not generated. Internal fields may change across report versions.
      shared_ptr<string> incidentInvestigationOutput_ {};
      // The AI investigation report content, in JSON-formatted string. This field can contain fields such as judgement_category (judgment category), ai_judgement_conclusion (judgment conclusion), ai_summary (summary), attack process, and attack graph. The specific content may change across report versions.
      shared_ptr<string> incidentInvestigationReport_ {};
      // The start time of the AI investigation, in seconds (UNIX timestamp). If the execution start time is not recorded, the creation time of the investigation record is used. This field is empty if neither time exists.
      shared_ptr<int64_t> incidentInvestigationStartTime_ {};
      // The judgment category of the AI investigation report, corresponding to judgement_category in the report. This field does not indicate the execution status of the asynchronous task. Valid values:
      // - real_attack: Real attack.
      // - blocked: Risk blocked.
      // - false_positive: Suspected false positive.
      // - insufficient_information_to_evaluate: Unable to determine.
      shared_ptr<string> incidentInvestigationStatus_ {};
      // The summary of the AI investigation report, corresponding to ai_summary in the investigation results.
      shared_ptr<string> incidentInvestigationSummary_ {};
      // The globally unique UUID of the incident.
      shared_ptr<string> incidentUuid_ {};
    };

    virtual bool empty() const override { return this->incidentInvestigation_ == nullptr
        && this->requestId_ == nullptr; };
    // incidentInvestigation Field Functions 
    bool hasIncidentInvestigation() const { return this->incidentInvestigation_ != nullptr;};
    void deleteIncidentInvestigation() { this->incidentInvestigation_ = nullptr;};
    inline const GetIncidentInvestigationResponseBody::IncidentInvestigation & getIncidentInvestigation() const { DARABONBA_PTR_GET_CONST(incidentInvestigation_, GetIncidentInvestigationResponseBody::IncidentInvestigation) };
    inline GetIncidentInvestigationResponseBody::IncidentInvestigation getIncidentInvestigation() { DARABONBA_PTR_GET(incidentInvestigation_, GetIncidentInvestigationResponseBody::IncidentInvestigation) };
    inline GetIncidentInvestigationResponseBody& setIncidentInvestigation(const GetIncidentInvestigationResponseBody::IncidentInvestigation & incidentInvestigation) { DARABONBA_PTR_SET_VALUE(incidentInvestigation_, incidentInvestigation) };
    inline GetIncidentInvestigationResponseBody& setIncidentInvestigation(GetIncidentInvestigationResponseBody::IncidentInvestigation && incidentInvestigation) { DARABONBA_PTR_SET_RVALUE(incidentInvestigation_, incidentInvestigation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIncidentInvestigationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The AI investigation details of the incident. This field is empty if no matching investigation record is found.
    shared_ptr<GetIncidentInvestigationResponseBody::IncidentInvestigation> incidentInvestigation_ {};
    // The request ID, which is used to locate and troubleshoot this call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
