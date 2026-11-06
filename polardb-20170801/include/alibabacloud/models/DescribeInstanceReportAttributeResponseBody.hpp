// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREPORTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREPORTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeInstanceReportAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceReportAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Latest, latest_);
      DARABONBA_PTR_TO_JSON(ReportDescription, reportDescription_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportScore, reportScore_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(ReportSubItems, reportSubItems_);
      DARABONBA_PTR_TO_JSON(ReportSummary, reportSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceReportAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Latest, latest_);
      DARABONBA_PTR_FROM_JSON(ReportDescription, reportDescription_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportScore, reportScore_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(ReportSubItems, reportSubItems_);
      DARABONBA_PTR_FROM_JSON(ReportSummary, reportSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeInstanceReportAttributeResponseBody() = default ;
    DescribeInstanceReportAttributeResponseBody(const DescribeInstanceReportAttributeResponseBody &) = default ;
    DescribeInstanceReportAttributeResponseBody(DescribeInstanceReportAttributeResponseBody &&) = default ;
    DescribeInstanceReportAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceReportAttributeResponseBody() = default ;
    DescribeInstanceReportAttributeResponseBody& operator=(const DescribeInstanceReportAttributeResponseBody &) = default ;
    DescribeInstanceReportAttributeResponseBody& operator=(DescribeInstanceReportAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReportSubItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportSubItems& obj) { 
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(SkillName, skillName_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
      };
      friend void from_json(const Darabonba::Json& j, ReportSubItems& obj) { 
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
      };
      ReportSubItems() = default ;
      ReportSubItems(const ReportSubItems &) = default ;
      ReportSubItems(ReportSubItems &&) = default ;
      ReportSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportSubItems() = default ;
      ReportSubItems& operator=(const ReportSubItems &) = default ;
      ReportSubItems& operator=(ReportSubItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->riskLevel_ == nullptr
        && this->score_ == nullptr && this->skillName_ == nullptr && this->summary_ == nullptr; };
      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline ReportSubItems& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int64_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0L) };
      inline ReportSubItems& setScore(int64_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline ReportSubItems& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline ReportSubItems& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    protected:
      // The risk level of the inspection item.
      shared_ptr<string> riskLevel_ {};
      // The score of the inspection item.
      shared_ptr<int64_t> score_ {};
      // The name of the inspection skill that generated the result.
      shared_ptr<string> skillName_ {};
      // The result summary of the inspection item.
      shared_ptr<string> summary_ {};
    };

    virtual bool empty() const override { return this->latest_ == nullptr
        && this->reportDescription_ == nullptr && this->reportId_ == nullptr && this->reportScore_ == nullptr && this->reportStatus_ == nullptr && this->reportSubItems_ == nullptr
        && this->reportSummary_ == nullptr && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // latest Field Functions 
    bool hasLatest() const { return this->latest_ != nullptr;};
    void deleteLatest() { this->latest_ = nullptr;};
    inline bool getLatest() const { DARABONBA_PTR_GET_DEFAULT(latest_, false) };
    inline DescribeInstanceReportAttributeResponseBody& setLatest(bool latest) { DARABONBA_PTR_SET_VALUE(latest_, latest) };


    // reportDescription Field Functions 
    bool hasReportDescription() const { return this->reportDescription_ != nullptr;};
    void deleteReportDescription() { this->reportDescription_ = nullptr;};
    inline string getReportDescription() const { DARABONBA_PTR_GET_DEFAULT(reportDescription_, "") };
    inline DescribeInstanceReportAttributeResponseBody& setReportDescription(string reportDescription) { DARABONBA_PTR_SET_VALUE(reportDescription_, reportDescription) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DescribeInstanceReportAttributeResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportScore Field Functions 
    bool hasReportScore() const { return this->reportScore_ != nullptr;};
    void deleteReportScore() { this->reportScore_ = nullptr;};
    inline int64_t getReportScore() const { DARABONBA_PTR_GET_DEFAULT(reportScore_, 0L) };
    inline DescribeInstanceReportAttributeResponseBody& setReportScore(int64_t reportScore) { DARABONBA_PTR_SET_VALUE(reportScore_, reportScore) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline string getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
    inline DescribeInstanceReportAttributeResponseBody& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // reportSubItems Field Functions 
    bool hasReportSubItems() const { return this->reportSubItems_ != nullptr;};
    void deleteReportSubItems() { this->reportSubItems_ = nullptr;};
    inline const vector<DescribeInstanceReportAttributeResponseBody::ReportSubItems> & getReportSubItems() const { DARABONBA_PTR_GET_CONST(reportSubItems_, vector<DescribeInstanceReportAttributeResponseBody::ReportSubItems>) };
    inline vector<DescribeInstanceReportAttributeResponseBody::ReportSubItems> getReportSubItems() { DARABONBA_PTR_GET(reportSubItems_, vector<DescribeInstanceReportAttributeResponseBody::ReportSubItems>) };
    inline DescribeInstanceReportAttributeResponseBody& setReportSubItems(const vector<DescribeInstanceReportAttributeResponseBody::ReportSubItems> & reportSubItems) { DARABONBA_PTR_SET_VALUE(reportSubItems_, reportSubItems) };
    inline DescribeInstanceReportAttributeResponseBody& setReportSubItems(vector<DescribeInstanceReportAttributeResponseBody::ReportSubItems> && reportSubItems) { DARABONBA_PTR_SET_RVALUE(reportSubItems_, reportSubItems) };


    // reportSummary Field Functions 
    bool hasReportSummary() const { return this->reportSummary_ != nullptr;};
    void deleteReportSummary() { this->reportSummary_ = nullptr;};
    inline string getReportSummary() const { DARABONBA_PTR_GET_DEFAULT(reportSummary_, "") };
    inline DescribeInstanceReportAttributeResponseBody& setReportSummary(string reportSummary) { DARABONBA_PTR_SET_VALUE(reportSummary_, reportSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceReportAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeInstanceReportAttributeResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Indicates whether the report is the latest one.
    shared_ptr<bool> latest_ {};
    // The detailed description of the inspection report.
    shared_ptr<string> reportDescription_ {};
    // The ID of the instance inspection report.
    shared_ptr<string> reportId_ {};
    // The overall score of the inspection report.
    shared_ptr<int64_t> reportScore_ {};
    // The generation status of the inspection report.
    shared_ptr<string> reportStatus_ {};
    // The inspection results for each item in the report.
    shared_ptr<vector<DescribeInstanceReportAttributeResponseBody::ReportSubItems>> reportSubItems_ {};
    // The overall summary of the inspection report.
    shared_ptr<string> reportSummary_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the inspection task that generated the report.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
