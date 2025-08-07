// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobExecutorsResponseBodyExecutorStatus.hpp>
#include <vector>
#include <alibabacloud/models/ListJobExecutorsResponseBodyExecutors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobExecutorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobExecutorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorStatus, executorStatus_);
      DARABONBA_PTR_TO_JSON(Executors, executors_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobExecutorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorStatus, executorStatus_);
      DARABONBA_PTR_FROM_JSON(Executors, executors_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListJobExecutorsResponseBody() = default ;
    ListJobExecutorsResponseBody(const ListJobExecutorsResponseBody &) = default ;
    ListJobExecutorsResponseBody(ListJobExecutorsResponseBody &&) = default ;
    ListJobExecutorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobExecutorsResponseBody() = default ;
    ListJobExecutorsResponseBody& operator=(const ListJobExecutorsResponseBody &) = default ;
    ListJobExecutorsResponseBody& operator=(ListJobExecutorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executorStatus_ != nullptr
        && this->executors_ != nullptr && this->jobId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->taskName_ != nullptr && this->totalCount_ != nullptr; };
    // executorStatus Field Functions 
    bool hasExecutorStatus() const { return this->executorStatus_ != nullptr;};
    void deleteExecutorStatus() { this->executorStatus_ = nullptr;};
    inline const ListJobExecutorsResponseBodyExecutorStatus & executorStatus() const { DARABONBA_PTR_GET_CONST(executorStatus_, ListJobExecutorsResponseBodyExecutorStatus) };
    inline ListJobExecutorsResponseBodyExecutorStatus executorStatus() { DARABONBA_PTR_GET(executorStatus_, ListJobExecutorsResponseBodyExecutorStatus) };
    inline ListJobExecutorsResponseBody& setExecutorStatus(const ListJobExecutorsResponseBodyExecutorStatus & executorStatus) { DARABONBA_PTR_SET_VALUE(executorStatus_, executorStatus) };
    inline ListJobExecutorsResponseBody& setExecutorStatus(ListJobExecutorsResponseBodyExecutorStatus && executorStatus) { DARABONBA_PTR_SET_RVALUE(executorStatus_, executorStatus) };


    // executors Field Functions 
    bool hasExecutors() const { return this->executors_ != nullptr;};
    void deleteExecutors() { this->executors_ = nullptr;};
    inline const vector<ListJobExecutorsResponseBodyExecutors> & executors() const { DARABONBA_PTR_GET_CONST(executors_, vector<ListJobExecutorsResponseBodyExecutors>) };
    inline vector<ListJobExecutorsResponseBodyExecutors> executors() { DARABONBA_PTR_GET(executors_, vector<ListJobExecutorsResponseBodyExecutors>) };
    inline ListJobExecutorsResponseBody& setExecutors(const vector<ListJobExecutorsResponseBodyExecutors> & executors) { DARABONBA_PTR_SET_VALUE(executors_, executors) };
    inline ListJobExecutorsResponseBody& setExecutors(vector<ListJobExecutorsResponseBodyExecutors> && executors) { DARABONBA_PTR_SET_RVALUE(executors_, executors) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobExecutorsResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobExecutorsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobExecutorsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobExecutorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListJobExecutorsResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListJobExecutorsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<ListJobExecutorsResponseBodyExecutorStatus> executorStatus_ = nullptr;
    std::shared_ptr<vector<ListJobExecutorsResponseBodyExecutors>> executors_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
