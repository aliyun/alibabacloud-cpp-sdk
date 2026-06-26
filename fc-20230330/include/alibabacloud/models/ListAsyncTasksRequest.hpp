// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListAsyncTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(includePayload, includePayload_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(sortOrderByTime, sortOrderByTime_);
      DARABONBA_PTR_TO_JSON(startedTimeBegin, startedTimeBegin_);
      DARABONBA_PTR_TO_JSON(startedTimeEnd, startedTimeEnd_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(includePayload, includePayload_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(sortOrderByTime, sortOrderByTime_);
      DARABONBA_PTR_FROM_JSON(startedTimeBegin, startedTimeBegin_);
      DARABONBA_PTR_FROM_JSON(startedTimeEnd, startedTimeEnd_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListAsyncTasksRequest() = default ;
    ListAsyncTasksRequest(const ListAsyncTasksRequest &) = default ;
    ListAsyncTasksRequest(ListAsyncTasksRequest &&) = default ;
    ListAsyncTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTasksRequest() = default ;
    ListAsyncTasksRequest& operator=(const ListAsyncTasksRequest &) = default ;
    ListAsyncTasksRequest& operator=(ListAsyncTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includePayload_ == nullptr
        && this->limit_ == nullptr && this->nextToken_ == nullptr && this->prefix_ == nullptr && this->qualifier_ == nullptr && this->sortOrderByTime_ == nullptr
        && this->startedTimeBegin_ == nullptr && this->startedTimeEnd_ == nullptr && this->status_ == nullptr; };
    // includePayload Field Functions 
    bool hasIncludePayload() const { return this->includePayload_ != nullptr;};
    void deleteIncludePayload() { this->includePayload_ = nullptr;};
    inline bool getIncludePayload() const { DARABONBA_PTR_GET_DEFAULT(includePayload_, false) };
    inline ListAsyncTasksRequest& setIncludePayload(bool includePayload) { DARABONBA_PTR_SET_VALUE(includePayload_, includePayload) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListAsyncTasksRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAsyncTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListAsyncTasksRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline ListAsyncTasksRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // sortOrderByTime Field Functions 
    bool hasSortOrderByTime() const { return this->sortOrderByTime_ != nullptr;};
    void deleteSortOrderByTime() { this->sortOrderByTime_ = nullptr;};
    inline string getSortOrderByTime() const { DARABONBA_PTR_GET_DEFAULT(sortOrderByTime_, "") };
    inline ListAsyncTasksRequest& setSortOrderByTime(string sortOrderByTime) { DARABONBA_PTR_SET_VALUE(sortOrderByTime_, sortOrderByTime) };


    // startedTimeBegin Field Functions 
    bool hasStartedTimeBegin() const { return this->startedTimeBegin_ != nullptr;};
    void deleteStartedTimeBegin() { this->startedTimeBegin_ = nullptr;};
    inline int64_t getStartedTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(startedTimeBegin_, 0L) };
    inline ListAsyncTasksRequest& setStartedTimeBegin(int64_t startedTimeBegin) { DARABONBA_PTR_SET_VALUE(startedTimeBegin_, startedTimeBegin) };


    // startedTimeEnd Field Functions 
    bool hasStartedTimeEnd() const { return this->startedTimeEnd_ != nullptr;};
    void deleteStartedTimeEnd() { this->startedTimeEnd_ = nullptr;};
    inline int64_t getStartedTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(startedTimeEnd_, 0L) };
    inline ListAsyncTasksRequest& setStartedTimeEnd(int64_t startedTimeEnd) { DARABONBA_PTR_SET_VALUE(startedTimeEnd_, startedTimeEnd) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAsyncTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Specifies whether to return the input parameters of the asynchronous task.
    // 
    // - true: If this parameter is set to true, the `invocationPayload` field is returned.
    // 
    // - false: If this parameter is set to false, the `invocationPayload` field is not returned.
    // 
    // > The `invocationPayload` field specifies the input parameters of the function for the asynchronous task.
    shared_ptr<bool> includePayload_ {};
    // The number of asynchronous tasks to return. The default value is 20. The value must be in the range of [1, 100].
    shared_ptr<int32_t> limit_ {};
    // The pagination token to return more results. You do not need to provide this parameter for the first query. Obtain the token for a subsequent query from the response to the previous query.
    shared_ptr<string> nextToken_ {};
    // The prefix of the asynchronous task ID. The system returns a list of asynchronous tasks that match the prefix.
    shared_ptr<string> prefix_ {};
    // The version or alias of the function.
    shared_ptr<string> qualifier_ {};
    // The sorting order of the returned asynchronous tasks.
    // 
    // - asc: ascending order
    // 
    // - desc: descending order
    shared_ptr<string> sortOrderByTime_ {};
    // The start of the time range when the asynchronous task was started.
    shared_ptr<int64_t> startedTimeBegin_ {};
    // The end of the time range when the asynchronous task was started.
    shared_ptr<int64_t> startedTimeEnd_ {};
    // The execution status of the asynchronous task.
    // 
    // - Enqueued: The asynchronous message is enqueued and waits for processing.
    // 
    // - Dequeued: The asynchronous message is dequeued and waits to be triggered.
    // 
    // - Running: The invocation is in progress.
    // 
    // - Succeeded: The invocation succeeded.
    // 
    // - Failed: The invocation failed.
    // 
    // - Stopped: The invocation was stopped.
    // 
    // - Stopping: The invocation is being stopped.
    // 
    // - Expired: The task was discarded because its configured maximum queuing duration was exceeded. The task was not executed.
    // 
    // - Invalid: The execution is invalid because the function was deleted or for other reasons. The task was not executed.
    // 
    // - Retrying: The asynchronous invocation is being retried because of an execution error.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
