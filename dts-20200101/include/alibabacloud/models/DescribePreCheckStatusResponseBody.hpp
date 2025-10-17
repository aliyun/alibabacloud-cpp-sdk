// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreCheckStatusResponseBodyAnalysisJobProgress.hpp>
#include <alibabacloud/models/DescribePreCheckStatusResponseBodyFullNetCheckJobStatus.hpp>
#include <alibabacloud/models/DescribePreCheckStatusResponseBodyJobProgress.hpp>
#include <alibabacloud/models/DescribePreCheckStatusResponseBodyNetworkDiagnosisResult.hpp>
#include <alibabacloud/models/DescribePreCheckStatusResponseBodySubDistributedJobStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisJobProgress, analysisJobProgress_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ErrorAnalysisItem, errorAnalysisItem_);
      DARABONBA_PTR_TO_JSON(ErrorItem, errorItem_);
      DARABONBA_PTR_TO_JSON(FullNetCheckJobStatus, fullNetCheckJobStatus_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobProgress, jobProgress_);
      DARABONBA_PTR_TO_JSON(NetworkDiagnosisResult, networkDiagnosisResult_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(SubDistributedJobStatus, subDistributedJobStatus_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisJobProgress, analysisJobProgress_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ErrorAnalysisItem, errorAnalysisItem_);
      DARABONBA_PTR_FROM_JSON(ErrorItem, errorItem_);
      DARABONBA_PTR_FROM_JSON(FullNetCheckJobStatus, fullNetCheckJobStatus_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobProgress, jobProgress_);
      DARABONBA_PTR_FROM_JSON(NetworkDiagnosisResult, networkDiagnosisResult_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(SubDistributedJobStatus, subDistributedJobStatus_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribePreCheckStatusResponseBody() = default ;
    DescribePreCheckStatusResponseBody(const DescribePreCheckStatusResponseBody &) = default ;
    DescribePreCheckStatusResponseBody(DescribePreCheckStatusResponseBody &&) = default ;
    DescribePreCheckStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBody() = default ;
    DescribePreCheckStatusResponseBody& operator=(const DescribePreCheckStatusResponseBody &) = default ;
    DescribePreCheckStatusResponseBody& operator=(DescribePreCheckStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisJobProgress_ == nullptr
        && return this->code_ == nullptr && return this->errorAnalysisItem_ == nullptr && return this->errorItem_ == nullptr && return this->fullNetCheckJobStatus_ == nullptr && return this->httpStatusCode_ == nullptr
        && return this->jobId_ == nullptr && return this->jobName_ == nullptr && return this->jobProgress_ == nullptr && return this->networkDiagnosisResult_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageRecordCount_ == nullptr && return this->requestId_ == nullptr && return this->state_ == nullptr && return this->subDistributedJobStatus_ == nullptr && return this->success_ == nullptr
        && return this->total_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // analysisJobProgress Field Functions 
    bool hasAnalysisJobProgress() const { return this->analysisJobProgress_ != nullptr;};
    void deleteAnalysisJobProgress() { this->analysisJobProgress_ = nullptr;};
    inline const vector<DescribePreCheckStatusResponseBodyAnalysisJobProgress> & analysisJobProgress() const { DARABONBA_PTR_GET_CONST(analysisJobProgress_, vector<DescribePreCheckStatusResponseBodyAnalysisJobProgress>) };
    inline vector<DescribePreCheckStatusResponseBodyAnalysisJobProgress> analysisJobProgress() { DARABONBA_PTR_GET(analysisJobProgress_, vector<DescribePreCheckStatusResponseBodyAnalysisJobProgress>) };
    inline DescribePreCheckStatusResponseBody& setAnalysisJobProgress(const vector<DescribePreCheckStatusResponseBodyAnalysisJobProgress> & analysisJobProgress) { DARABONBA_PTR_SET_VALUE(analysisJobProgress_, analysisJobProgress) };
    inline DescribePreCheckStatusResponseBody& setAnalysisJobProgress(vector<DescribePreCheckStatusResponseBodyAnalysisJobProgress> && analysisJobProgress) { DARABONBA_PTR_SET_RVALUE(analysisJobProgress_, analysisJobProgress) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePreCheckStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorAnalysisItem Field Functions 
    bool hasErrorAnalysisItem() const { return this->errorAnalysisItem_ != nullptr;};
    void deleteErrorAnalysisItem() { this->errorAnalysisItem_ = nullptr;};
    inline int32_t errorAnalysisItem() const { DARABONBA_PTR_GET_DEFAULT(errorAnalysisItem_, 0) };
    inline DescribePreCheckStatusResponseBody& setErrorAnalysisItem(int32_t errorAnalysisItem) { DARABONBA_PTR_SET_VALUE(errorAnalysisItem_, errorAnalysisItem) };


    // errorItem Field Functions 
    bool hasErrorItem() const { return this->errorItem_ != nullptr;};
    void deleteErrorItem() { this->errorItem_ = nullptr;};
    inline int32_t errorItem() const { DARABONBA_PTR_GET_DEFAULT(errorItem_, 0) };
    inline DescribePreCheckStatusResponseBody& setErrorItem(int32_t errorItem) { DARABONBA_PTR_SET_VALUE(errorItem_, errorItem) };


    // fullNetCheckJobStatus Field Functions 
    bool hasFullNetCheckJobStatus() const { return this->fullNetCheckJobStatus_ != nullptr;};
    void deleteFullNetCheckJobStatus() { this->fullNetCheckJobStatus_ = nullptr;};
    inline const vector<DescribePreCheckStatusResponseBodyFullNetCheckJobStatus> & fullNetCheckJobStatus() const { DARABONBA_PTR_GET_CONST(fullNetCheckJobStatus_, vector<DescribePreCheckStatusResponseBodyFullNetCheckJobStatus>) };
    inline vector<DescribePreCheckStatusResponseBodyFullNetCheckJobStatus> fullNetCheckJobStatus() { DARABONBA_PTR_GET(fullNetCheckJobStatus_, vector<DescribePreCheckStatusResponseBodyFullNetCheckJobStatus>) };
    inline DescribePreCheckStatusResponseBody& setFullNetCheckJobStatus(const vector<DescribePreCheckStatusResponseBodyFullNetCheckJobStatus> & fullNetCheckJobStatus) { DARABONBA_PTR_SET_VALUE(fullNetCheckJobStatus_, fullNetCheckJobStatus) };
    inline DescribePreCheckStatusResponseBody& setFullNetCheckJobStatus(vector<DescribePreCheckStatusResponseBodyFullNetCheckJobStatus> && fullNetCheckJobStatus) { DARABONBA_PTR_SET_RVALUE(fullNetCheckJobStatus_, fullNetCheckJobStatus) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribePreCheckStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribePreCheckStatusResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline DescribePreCheckStatusResponseBody& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobProgress Field Functions 
    bool hasJobProgress() const { return this->jobProgress_ != nullptr;};
    void deleteJobProgress() { this->jobProgress_ = nullptr;};
    inline const vector<DescribePreCheckStatusResponseBodyJobProgress> & jobProgress() const { DARABONBA_PTR_GET_CONST(jobProgress_, vector<DescribePreCheckStatusResponseBodyJobProgress>) };
    inline vector<DescribePreCheckStatusResponseBodyJobProgress> jobProgress() { DARABONBA_PTR_GET(jobProgress_, vector<DescribePreCheckStatusResponseBodyJobProgress>) };
    inline DescribePreCheckStatusResponseBody& setJobProgress(const vector<DescribePreCheckStatusResponseBodyJobProgress> & jobProgress) { DARABONBA_PTR_SET_VALUE(jobProgress_, jobProgress) };
    inline DescribePreCheckStatusResponseBody& setJobProgress(vector<DescribePreCheckStatusResponseBodyJobProgress> && jobProgress) { DARABONBA_PTR_SET_RVALUE(jobProgress_, jobProgress) };


    // networkDiagnosisResult Field Functions 
    bool hasNetworkDiagnosisResult() const { return this->networkDiagnosisResult_ != nullptr;};
    void deleteNetworkDiagnosisResult() { this->networkDiagnosisResult_ = nullptr;};
    inline const DescribePreCheckStatusResponseBodyNetworkDiagnosisResult & networkDiagnosisResult() const { DARABONBA_PTR_GET_CONST(networkDiagnosisResult_, DescribePreCheckStatusResponseBodyNetworkDiagnosisResult) };
    inline DescribePreCheckStatusResponseBodyNetworkDiagnosisResult networkDiagnosisResult() { DARABONBA_PTR_GET(networkDiagnosisResult_, DescribePreCheckStatusResponseBodyNetworkDiagnosisResult) };
    inline DescribePreCheckStatusResponseBody& setNetworkDiagnosisResult(const DescribePreCheckStatusResponseBodyNetworkDiagnosisResult & networkDiagnosisResult) { DARABONBA_PTR_SET_VALUE(networkDiagnosisResult_, networkDiagnosisResult) };
    inline DescribePreCheckStatusResponseBody& setNetworkDiagnosisResult(DescribePreCheckStatusResponseBodyNetworkDiagnosisResult && networkDiagnosisResult) { DARABONBA_PTR_SET_RVALUE(networkDiagnosisResult_, networkDiagnosisResult) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribePreCheckStatusResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int64_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0L) };
    inline DescribePreCheckStatusResponseBody& setPageRecordCount(int64_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePreCheckStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePreCheckStatusResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subDistributedJobStatus Field Functions 
    bool hasSubDistributedJobStatus() const { return this->subDistributedJobStatus_ != nullptr;};
    void deleteSubDistributedJobStatus() { this->subDistributedJobStatus_ = nullptr;};
    inline const vector<DescribePreCheckStatusResponseBodySubDistributedJobStatus> & subDistributedJobStatus() const { DARABONBA_PTR_GET_CONST(subDistributedJobStatus_, vector<DescribePreCheckStatusResponseBodySubDistributedJobStatus>) };
    inline vector<DescribePreCheckStatusResponseBodySubDistributedJobStatus> subDistributedJobStatus() { DARABONBA_PTR_GET(subDistributedJobStatus_, vector<DescribePreCheckStatusResponseBodySubDistributedJobStatus>) };
    inline DescribePreCheckStatusResponseBody& setSubDistributedJobStatus(const vector<DescribePreCheckStatusResponseBodySubDistributedJobStatus> & subDistributedJobStatus) { DARABONBA_PTR_SET_VALUE(subDistributedJobStatus_, subDistributedJobStatus) };
    inline DescribePreCheckStatusResponseBody& setSubDistributedJobStatus(vector<DescribePreCheckStatusResponseBodySubDistributedJobStatus> && subDistributedJobStatus) { DARABONBA_PTR_SET_RVALUE(subDistributedJobStatus_, subDistributedJobStatus) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePreCheckStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribePreCheckStatusResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribePreCheckStatusResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Display list of evaluation tasks
    std::shared_ptr<vector<DescribePreCheckStatusResponseBodyAnalysisJobProgress>> analysisJobProgress_ = nullptr;
    // The task code that indicates the type of the subtask. Valid values:
    // 
    // *   **01**: precheck.
    // *   **02**: schema migration or initial schema synchronization.
    // *   **03**: full data migration or initial full data synchronization.
    // *   **04**: incremental data migration or synchronization.
    std::shared_ptr<string> code_ = nullptr;
    // Number of failed evaluation items
    std::shared_ptr<int32_t> errorAnalysisItem_ = nullptr;
    // The total number of subtask failures.
    std::shared_ptr<int32_t> errorItem_ = nullptr;
    // Network-wide inspection results.
    std::shared_ptr<vector<DescribePreCheckStatusResponseBodyFullNetCheckJobStatus>> fullNetCheckJobStatus_ = nullptr;
    // The status code that is returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the data migration or synchronization task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the subtask.
    std::shared_ptr<string> jobName_ = nullptr;
    // The subtasks and the progress of each subtask.
    std::shared_ptr<vector<DescribePreCheckStatusResponseBodyJobProgress>> jobProgress_ = nullptr;
    // Network diagnosis result
    std::shared_ptr<DescribePreCheckStatusResponseBodyNetworkDiagnosisResult> networkDiagnosisResult_ = nullptr;
    // The page number. Pages start from page 1. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageRecordCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the subtask. Valid values:
    // 
    // *   **NotStarted**: The subtask is not started.
    // *   **Suspending**: The subtask is paused.
    // *   **Checking**: The subtask is being checked.
    // *   **Migrating**: The subtask is in progress. Data is being migrated.
    // *   **Failed**: The subtask failed.
    // *   **Catched**: The subtask is in progress. Incremental data is being migrated or synchronized.
    // *   **Finished**: The subtask is complete.
    std::shared_ptr<string> state_ = nullptr;
    // The information about the distributed subtasks.
    std::shared_ptr<vector<DescribePreCheckStatusResponseBodySubDistributedJobStatus>> subDistributedJobStatus_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of subtasks.
    std::shared_ptr<int32_t> total_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int64_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
