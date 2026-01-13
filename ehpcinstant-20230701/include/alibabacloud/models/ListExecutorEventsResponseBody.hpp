// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorEventList, executorEventList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorEventList, executorEventList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListExecutorEventsResponseBody() = default ;
    ListExecutorEventsResponseBody(const ListExecutorEventsResponseBody &) = default ;
    ListExecutorEventsResponseBody(ListExecutorEventsResponseBody &&) = default ;
    ListExecutorEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorEventsResponseBody() = default ;
    ListExecutorEventsResponseBody& operator=(const ListExecutorEventsResponseBody &) = default ;
    ListExecutorEventsResponseBody& operator=(ListExecutorEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExecutorEventList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecutorEventList& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ExecutorId, executorId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, ExecutorEventList& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ExecutorId, executorId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      ExecutorEventList() = default ;
      ExecutorEventList(const ExecutorEventList &) = default ;
      ExecutorEventList(ExecutorEventList &&) = default ;
      ExecutorEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecutorEventList() = default ;
      ExecutorEventList& operator=(const ExecutorEventList &) = default ;
      ExecutorEventList& operator=(ExecutorEventList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->executorId_ == nullptr && this->jobId_ == nullptr && this->level_ == nullptr && this->time_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ExecutorEventList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // executorId Field Functions 
      bool hasExecutorId() const { return this->executorId_ != nullptr;};
      void deleteExecutorId() { this->executorId_ = nullptr;};
      inline string getExecutorId() const { DARABONBA_PTR_GET_DEFAULT(executorId_, "") };
      inline ExecutorEventList& setExecutorId(string executorId) { DARABONBA_PTR_SET_VALUE(executorId_, executorId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline ExecutorEventList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline ExecutorEventList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline ExecutorEventList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The content of the running event.
      shared_ptr<string> content_ {};
      // The ID of the executor. The format is JobId-TaskName-ArrayIndex.
      shared_ptr<string> executorId_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The level of the running event. Valid values:
      // 
      // *   Normal
      // *   Warning
      // *   Error
      shared_ptr<string> level_ {};
      // The event of the running event.
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->executorEventList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // executorEventList Field Functions 
    bool hasExecutorEventList() const { return this->executorEventList_ != nullptr;};
    void deleteExecutorEventList() { this->executorEventList_ = nullptr;};
    inline const vector<ListExecutorEventsResponseBody::ExecutorEventList> & getExecutorEventList() const { DARABONBA_PTR_GET_CONST(executorEventList_, vector<ListExecutorEventsResponseBody::ExecutorEventList>) };
    inline vector<ListExecutorEventsResponseBody::ExecutorEventList> getExecutorEventList() { DARABONBA_PTR_GET(executorEventList_, vector<ListExecutorEventsResponseBody::ExecutorEventList>) };
    inline ListExecutorEventsResponseBody& setExecutorEventList(const vector<ListExecutorEventsResponseBody::ExecutorEventList> & executorEventList) { DARABONBA_PTR_SET_VALUE(executorEventList_, executorEventList) };
    inline ListExecutorEventsResponseBody& setExecutorEventList(vector<ListExecutorEventsResponseBody::ExecutorEventList> && executorEventList) { DARABONBA_PTR_SET_RVALUE(executorEventList_, executorEventList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExecutorEventsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExecutorEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutorEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListExecutorEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of the running event.
    shared_ptr<vector<ListExecutorEventsResponseBody::ExecutorEventList>> executorEventList_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
