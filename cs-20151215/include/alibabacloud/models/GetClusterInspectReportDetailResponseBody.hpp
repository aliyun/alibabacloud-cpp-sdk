// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERINSPECTREPORTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERINSPECTREPORTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterInspectReportDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterInspectReportDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(checkItemResults, checkItemResults_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterInspectReportDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(checkItemResults, checkItemResults_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
    };
    GetClusterInspectReportDetailResponseBody() = default ;
    GetClusterInspectReportDetailResponseBody(const GetClusterInspectReportDetailResponseBody &) = default ;
    GetClusterInspectReportDetailResponseBody(GetClusterInspectReportDetailResponseBody &&) = default ;
    GetClusterInspectReportDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterInspectReportDetailResponseBody() = default ;
    GetClusterInspectReportDetailResponseBody& operator=(const GetClusterInspectReportDetailResponseBody &) = default ;
    GetClusterInspectReportDetailResponseBody& operator=(GetClusterInspectReportDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Summary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summary& obj) { 
        DARABONBA_PTR_TO_JSON(adviceCount, adviceCount_);
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(errorCount, errorCount_);
        DARABONBA_PTR_TO_JSON(normalCount, normalCount_);
        DARABONBA_PTR_TO_JSON(warnCount, warnCount_);
      };
      friend void from_json(const Darabonba::Json& j, Summary& obj) { 
        DARABONBA_PTR_FROM_JSON(adviceCount, adviceCount_);
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(errorCount, errorCount_);
        DARABONBA_PTR_FROM_JSON(normalCount, normalCount_);
        DARABONBA_PTR_FROM_JSON(warnCount, warnCount_);
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
      virtual bool empty() const override { return this->adviceCount_ == nullptr
        && this->code_ == nullptr && this->errorCount_ == nullptr && this->normalCount_ == nullptr && this->warnCount_ == nullptr; };
      // adviceCount Field Functions 
      bool hasAdviceCount() const { return this->adviceCount_ != nullptr;};
      void deleteAdviceCount() { this->adviceCount_ = nullptr;};
      inline int32_t getAdviceCount() const { DARABONBA_PTR_GET_DEFAULT(adviceCount_, 0) };
      inline Summary& setAdviceCount(int32_t adviceCount) { DARABONBA_PTR_SET_VALUE(adviceCount_, adviceCount) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Summary& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // errorCount Field Functions 
      bool hasErrorCount() const { return this->errorCount_ != nullptr;};
      void deleteErrorCount() { this->errorCount_ = nullptr;};
      inline int32_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0) };
      inline Summary& setErrorCount(int32_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


      // normalCount Field Functions 
      bool hasNormalCount() const { return this->normalCount_ != nullptr;};
      void deleteNormalCount() { this->normalCount_ = nullptr;};
      inline int32_t getNormalCount() const { DARABONBA_PTR_GET_DEFAULT(normalCount_, 0) };
      inline Summary& setNormalCount(int32_t normalCount) { DARABONBA_PTR_SET_VALUE(normalCount_, normalCount) };


      // warnCount Field Functions 
      bool hasWarnCount() const { return this->warnCount_ != nullptr;};
      void deleteWarnCount() { this->warnCount_ = nullptr;};
      inline int32_t getWarnCount() const { DARABONBA_PTR_GET_DEFAULT(warnCount_, 0) };
      inline Summary& setWarnCount(int32_t warnCount) { DARABONBA_PTR_SET_VALUE(warnCount_, warnCount) };


    protected:
      // The number of check items whose inspection result is advice.
      shared_ptr<int32_t> adviceCount_ {};
      // Check the status code of the inspection task.
      shared_ptr<string> code_ {};
      // The number of check items whose inspection result is error.
      shared_ptr<int32_t> errorCount_ {};
      // The number of check items whose inspection result is normal.
      shared_ptr<int32_t> normalCount_ {};
      // The number of check items whose inspection result is warning.
      shared_ptr<int32_t> warnCount_ {};
    };

    class CheckItemResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckItemResults& obj) { 
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(checkItemUid, checkItemUid_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(fix, fix_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(targetType, targetType_);
        DARABONBA_PTR_TO_JSON(targets, targets_);
      };
      friend void from_json(const Darabonba::Json& j, CheckItemResults& obj) { 
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(checkItemUid, checkItemUid_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(fix, fix_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(targetType, targetType_);
        DARABONBA_PTR_FROM_JSON(targets, targets_);
      };
      CheckItemResults() = default ;
      CheckItemResults(const CheckItemResults &) = default ;
      CheckItemResults(CheckItemResults &&) = default ;
      CheckItemResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckItemResults() = default ;
      CheckItemResults& operator=(const CheckItemResults &) = default ;
      CheckItemResults& operator=(CheckItemResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->checkItemUid_ == nullptr && this->description_ == nullptr && this->fix_ == nullptr && this->level_ == nullptr && this->name_ == nullptr
        && this->result_ == nullptr && this->targetType_ == nullptr && this->targets_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline CheckItemResults& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // checkItemUid Field Functions 
      bool hasCheckItemUid() const { return this->checkItemUid_ != nullptr;};
      void deleteCheckItemUid() { this->checkItemUid_ = nullptr;};
      inline string getCheckItemUid() const { DARABONBA_PTR_GET_DEFAULT(checkItemUid_, "") };
      inline CheckItemResults& setCheckItemUid(string checkItemUid) { DARABONBA_PTR_SET_VALUE(checkItemUid_, checkItemUid) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CheckItemResults& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fix Field Functions 
      bool hasFix() const { return this->fix_ != nullptr;};
      void deleteFix() { this->fix_ = nullptr;};
      inline string getFix() const { DARABONBA_PTR_GET_DEFAULT(fix_, "") };
      inline CheckItemResults& setFix(string fix) { DARABONBA_PTR_SET_VALUE(fix_, fix) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline CheckItemResults& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CheckItemResults& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline CheckItemResults& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline CheckItemResults& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<string> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<string>) };
      inline vector<string> getTargets() { DARABONBA_PTR_GET(targets_, vector<string>) };
      inline CheckItemResults& setTargets(const vector<string> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline CheckItemResults& setTargets(vector<string> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    protected:
      // The category of the inspection item. Valid values:
      // 
      // *   security: Security compliance
      // *   performance: Performance efficiency
      // *   stability: Business stability
      // *   limitation: Service limits
      // *   cost: Cost optimization
      shared_ptr<string> category_ {};
      // The unique identifier of the inspection item.
      shared_ptr<string> checkItemUid_ {};
      // The description of the inspection item.
      shared_ptr<string> description_ {};
      // The fixing suggestion.
      shared_ptr<string> fix_ {};
      // The level of the inspection item. Valid values:
      // 
      // *   advice: Suggestions
      // *   warning: Low severity
      // *   error: Medium severity
      // *   critical: High severity
      shared_ptr<string> level_ {};
      // The name of the inspection item.
      shared_ptr<string> name_ {};
      // The inspection results. Valid values:
      // 
      // *   true: The inspection item is abnormal.
      // *   false: The inspection item is normal.
      // *   disable: The inspection item is not enabled.
      shared_ptr<string> result_ {};
      // The resource type of the inspection object.
      shared_ptr<string> targetType_ {};
      // The inspection objects.
      shared_ptr<vector<string>> targets_ {};
    };

    virtual bool empty() const override { return this->checkItemResults_ == nullptr
        && this->endTime_ == nullptr && this->nextToken_ == nullptr && this->reportId_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->summary_ == nullptr; };
    // checkItemResults Field Functions 
    bool hasCheckItemResults() const { return this->checkItemResults_ != nullptr;};
    void deleteCheckItemResults() { this->checkItemResults_ = nullptr;};
    inline const vector<GetClusterInspectReportDetailResponseBody::CheckItemResults> & getCheckItemResults() const { DARABONBA_PTR_GET_CONST(checkItemResults_, vector<GetClusterInspectReportDetailResponseBody::CheckItemResults>) };
    inline vector<GetClusterInspectReportDetailResponseBody::CheckItemResults> getCheckItemResults() { DARABONBA_PTR_GET(checkItemResults_, vector<GetClusterInspectReportDetailResponseBody::CheckItemResults>) };
    inline GetClusterInspectReportDetailResponseBody& setCheckItemResults(const vector<GetClusterInspectReportDetailResponseBody::CheckItemResults> & checkItemResults) { DARABONBA_PTR_SET_VALUE(checkItemResults_, checkItemResults) };
    inline GetClusterInspectReportDetailResponseBody& setCheckItemResults(vector<GetClusterInspectReportDetailResponseBody::CheckItemResults> && checkItemResults) { DARABONBA_PTR_SET_RVALUE(checkItemResults_, checkItemResults) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetClusterInspectReportDetailResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetClusterInspectReportDetailResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetClusterInspectReportDetailResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterInspectReportDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetClusterInspectReportDetailResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetClusterInspectReportDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const GetClusterInspectReportDetailResponseBody::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, GetClusterInspectReportDetailResponseBody::Summary) };
    inline GetClusterInspectReportDetailResponseBody::Summary getSummary() { DARABONBA_PTR_GET(summary_, GetClusterInspectReportDetailResponseBody::Summary) };
    inline GetClusterInspectReportDetailResponseBody& setSummary(const GetClusterInspectReportDetailResponseBody::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline GetClusterInspectReportDetailResponseBody& setSummary(GetClusterInspectReportDetailResponseBody::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    // The results.
    shared_ptr<vector<GetClusterInspectReportDetailResponseBody::CheckItemResults>> checkItemResults_ {};
    // The completion time of the inspection report.
    shared_ptr<string> endTime_ {};
    // The token that is used to display the returned tags on multiple pages.
    shared_ptr<string> nextToken_ {};
    // The ID of the inspection report.
    shared_ptr<string> reportId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time of the inspection report.
    shared_ptr<string> startTime_ {};
    // The status of the inspection report. Valid values:
    // 
    // *   completed: The inspection report is generated.
    // *   running: The inspection report is generating.
    shared_ptr<string> status_ {};
    // Overview of inspection reports.
    shared_ptr<GetClusterInspectReportDetailResponseBody::Summary> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
