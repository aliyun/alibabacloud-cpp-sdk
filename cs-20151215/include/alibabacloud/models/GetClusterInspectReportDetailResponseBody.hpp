// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERINSPECTREPORTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERINSPECTREPORTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetClusterInspectReportDetailResponseBodyCheckItemResults.hpp>
#include <alibabacloud/models/GetClusterInspectReportDetailResponseBodySummary.hpp>
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
    virtual bool empty() const override { return this->checkItemResults_ == nullptr
        && return this->endTime_ == nullptr && return this->nextToken_ == nullptr && return this->reportId_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->summary_ == nullptr; };
    // checkItemResults Field Functions 
    bool hasCheckItemResults() const { return this->checkItemResults_ != nullptr;};
    void deleteCheckItemResults() { this->checkItemResults_ = nullptr;};
    inline const vector<GetClusterInspectReportDetailResponseBodyCheckItemResults> & checkItemResults() const { DARABONBA_PTR_GET_CONST(checkItemResults_, vector<GetClusterInspectReportDetailResponseBodyCheckItemResults>) };
    inline vector<GetClusterInspectReportDetailResponseBodyCheckItemResults> checkItemResults() { DARABONBA_PTR_GET(checkItemResults_, vector<GetClusterInspectReportDetailResponseBodyCheckItemResults>) };
    inline GetClusterInspectReportDetailResponseBody& setCheckItemResults(const vector<GetClusterInspectReportDetailResponseBodyCheckItemResults> & checkItemResults) { DARABONBA_PTR_SET_VALUE(checkItemResults_, checkItemResults) };
    inline GetClusterInspectReportDetailResponseBody& setCheckItemResults(vector<GetClusterInspectReportDetailResponseBodyCheckItemResults> && checkItemResults) { DARABONBA_PTR_SET_RVALUE(checkItemResults_, checkItemResults) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetClusterInspectReportDetailResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetClusterInspectReportDetailResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetClusterInspectReportDetailResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterInspectReportDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetClusterInspectReportDetailResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetClusterInspectReportDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const GetClusterInspectReportDetailResponseBodySummary & summary() const { DARABONBA_PTR_GET_CONST(summary_, GetClusterInspectReportDetailResponseBodySummary) };
    inline GetClusterInspectReportDetailResponseBodySummary summary() { DARABONBA_PTR_GET(summary_, GetClusterInspectReportDetailResponseBodySummary) };
    inline GetClusterInspectReportDetailResponseBody& setSummary(const GetClusterInspectReportDetailResponseBodySummary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline GetClusterInspectReportDetailResponseBody& setSummary(GetClusterInspectReportDetailResponseBodySummary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    // The results.
    std::shared_ptr<vector<GetClusterInspectReportDetailResponseBodyCheckItemResults>> checkItemResults_ = nullptr;
    // The completion time of the inspection report.
    std::shared_ptr<string> endTime_ = nullptr;
    // The token that is used to display the returned tags on multiple pages.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the inspection report.
    std::shared_ptr<string> reportId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start time of the inspection report.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the inspection report. Valid values:
    // 
    // *   completed: The inspection report is generated.
    // *   running: The inspection report is generating.
    std::shared_ptr<string> status_ = nullptr;
    // Overview of inspection reports.
    std::shared_ptr<GetClusterInspectReportDetailResponseBodySummary> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
