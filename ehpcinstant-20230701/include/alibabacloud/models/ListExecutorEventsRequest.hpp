// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSREQUEST_HPP_
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
  class ListExecutorEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListExecutorEventsRequest() = default ;
    ListExecutorEventsRequest(const ListExecutorEventsRequest &) = default ;
    ListExecutorEventsRequest(ListExecutorEventsRequest &&) = default ;
    ListExecutorEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorEventsRequest() = default ;
    ListExecutorEventsRequest& operator=(const ListExecutorEventsRequest &) = default ;
    ListExecutorEventsRequest& operator=(ListExecutorEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(ExecutorIds, executorIds_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(TimeAfter, timeAfter_);
        DARABONBA_PTR_TO_JSON(TimeBefore, timeBefore_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIds_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(TimeAfter, timeAfter_);
        DARABONBA_PTR_FROM_JSON(TimeBefore, timeBefore_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->executorIds_ == nullptr
        && this->jobId_ == nullptr && this->level_ == nullptr && this->timeAfter_ == nullptr && this->timeBefore_ == nullptr; };
      // executorIds Field Functions 
      bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
      void deleteExecutorIds() { this->executorIds_ = nullptr;};
      inline const vector<string> & getExecutorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
      inline vector<string> getExecutorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
      inline Filter& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
      inline Filter& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Filter& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Filter& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // timeAfter Field Functions 
      bool hasTimeAfter() const { return this->timeAfter_ != nullptr;};
      void deleteTimeAfter() { this->timeAfter_ = nullptr;};
      inline int64_t getTimeAfter() const { DARABONBA_PTR_GET_DEFAULT(timeAfter_, 0L) };
      inline Filter& setTimeAfter(int64_t timeAfter) { DARABONBA_PTR_SET_VALUE(timeAfter_, timeAfter) };


      // timeBefore Field Functions 
      bool hasTimeBefore() const { return this->timeBefore_ != nullptr;};
      void deleteTimeBefore() { this->timeBefore_ = nullptr;};
      inline int64_t getTimeBefore() const { DARABONBA_PTR_GET_DEFAULT(timeBefore_, 0L) };
      inline Filter& setTimeBefore(int64_t timeBefore) { DARABONBA_PTR_SET_VALUE(timeBefore_, timeBefore) };


    protected:
      // The list of executor IDs. A maximum of 100 IDs are supported.
      shared_ptr<vector<string>> executorIds_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The level of the running event. Valid value:
      // 
      // *   Normal
      // *   Warning
      // *   Error
      shared_ptr<string> level_ {};
      // For jobs submitted after this time, the time in the region is converted into a Unix timestamp (UI8 regionfor Aliyun sites).
      shared_ptr<int64_t> timeAfter_ {};
      // For jobs submitted before this time, the time in the region is converted into a Unix timestamp (UI8 regionfor Aliyun sites).
      shared_ptr<int64_t> timeBefore_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListExecutorEventsRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, ListExecutorEventsRequest::Filter) };
    inline ListExecutorEventsRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, ListExecutorEventsRequest::Filter) };
    inline ListExecutorEventsRequest& setFilter(const ListExecutorEventsRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListExecutorEventsRequest& setFilter(ListExecutorEventsRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExecutorEventsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExecutorEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Queries the Executor filter conditions.
    shared_ptr<ListExecutorEventsRequest::Filter> filter_ {};
    // The current page number.\\
    // Starting value: 1\\
    // Default value: 1
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the current page. Default value: 50. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
