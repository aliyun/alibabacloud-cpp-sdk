// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListJobsRequest() = default ;
    ListJobsRequest(const ListJobsRequest &) = default ;
    ListJobsRequest(ListJobsRequest &&) = default ;
    ListJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequest() = default ;
    ListJobsRequest& operator=(const ListJobsRequest &) = default ;
    ListJobsRequest& operator=(ListJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SortBy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SortBy& obj) { 
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Order, order_);
      };
      friend void from_json(const Darabonba::Json& j, SortBy& obj) { 
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Order, order_);
      };
      SortBy() = default ;
      SortBy(const SortBy &) = default ;
      SortBy(SortBy &&) = default ;
      SortBy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SortBy() = default ;
      SortBy& operator=(const SortBy &) = default ;
      SortBy& operator=(SortBy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->label_ == nullptr
        && this->order_ == nullptr; };
      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline SortBy& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
      inline SortBy& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    protected:
      // The sorting label. Valid values:
      // 
      // *   time_start
      // *   job_name
      shared_ptr<string> label_ {};
      // The sorting order. Valid values:
      // 
      // *   ASC (default): ascending order
      // *   DESC: descending order
      shared_ptr<string> order_ {};
    };

    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TimeCreatedAfter, timeCreatedAfter_);
        DARABONBA_PTR_TO_JSON(TimeCreatedBefore, timeCreatedBefore_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TimeCreatedAfter, timeCreatedAfter_);
        DARABONBA_PTR_FROM_JSON(TimeCreatedBefore, timeCreatedBefore_);
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
      virtual bool empty() const override { return this->jobId_ == nullptr
        && this->jobName_ == nullptr && this->status_ == nullptr && this->timeCreatedAfter_ == nullptr && this->timeCreatedBefore_ == nullptr; };
      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Filter& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline Filter& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Filter& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeCreatedAfter Field Functions 
      bool hasTimeCreatedAfter() const { return this->timeCreatedAfter_ != nullptr;};
      void deleteTimeCreatedAfter() { this->timeCreatedAfter_ = nullptr;};
      inline int32_t getTimeCreatedAfter() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedAfter_, 0) };
      inline Filter& setTimeCreatedAfter(int32_t timeCreatedAfter) { DARABONBA_PTR_SET_VALUE(timeCreatedAfter_, timeCreatedAfter) };


      // timeCreatedBefore Field Functions 
      bool hasTimeCreatedBefore() const { return this->timeCreatedBefore_ != nullptr;};
      void deleteTimeCreatedBefore() { this->timeCreatedBefore_ = nullptr;};
      inline int32_t getTimeCreatedBefore() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedBefore_, 0) };
      inline Filter& setTimeCreatedBefore(int32_t timeCreatedBefore) { DARABONBA_PTR_SET_VALUE(timeCreatedBefore_, timeCreatedBefore) };


    protected:
      // The ID of the job.
      shared_ptr<string> jobId_ {};
      // The job name. Fuzzy search is supported.
      shared_ptr<string> jobName_ {};
      // The job status. Valid values:
      // 
      // *   Pending
      // *   initing
      // *   Succeed
      // *   Failed
      // *   Running
      // *   Exception
      // *   Retrying
      // *   Expired
      // *   Suspended
      // *   Restarting
      // *   Deleted
      shared_ptr<string> status_ {};
      // For jobs submitted after this time, the time in the region is converted into a UNIX timestamp (UI8).
      shared_ptr<int32_t> timeCreatedAfter_ {};
      // For jobs submitted before this time, the time in the region is converted into a Unix timestamp (for domestic sites, the UI8 region).
      shared_ptr<int32_t> timeCreatedBefore_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListJobsRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, ListJobsRequest::Filter) };
    inline ListJobsRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, ListJobsRequest::Filter) };
    inline ListJobsRequest& setFilter(const ListJobsRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListJobsRequest& setFilter(ListJobsRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline const ListJobsRequest::SortBy & getSortBy() const { DARABONBA_PTR_GET_CONST(sortBy_, ListJobsRequest::SortBy) };
    inline ListJobsRequest::SortBy getSortBy() { DARABONBA_PTR_GET(sortBy_, ListJobsRequest::SortBy) };
    inline ListJobsRequest& setSortBy(const ListJobsRequest::SortBy & sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };
    inline ListJobsRequest& setSortBy(ListJobsRequest::SortBy && sortBy) { DARABONBA_PTR_SET_RVALUE(sortBy_, sortBy) };


  protected:
    // Queries job filter conditions.
    shared_ptr<ListJobsRequest::Filter> filter_ {};
    // The page number.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the current page. Default value: 50. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The sorting method.
    shared_ptr<ListJobsRequest::SortBy> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
