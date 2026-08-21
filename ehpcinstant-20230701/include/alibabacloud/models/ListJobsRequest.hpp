// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
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
      // The field to sort by. Valid values:
      // 
      // - time_start
      // 
      // - job_name
      shared_ptr<string> label_ {};
      // The sort order. Valid values:
      // 
      // - ASC (default): Ascending
      // 
      // - DESC: Descending
      shared_ptr<string> order_ {};
    };

    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(JobTemplateId, jobTemplateId_);
        DARABONBA_PTR_TO_JSON(PoolName, poolName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TimeCreatedAfter, timeCreatedAfter_);
        DARABONBA_PTR_TO_JSON(TimeCreatedBefore, timeCreatedBefore_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(JobTemplateId, jobTemplateId_);
        DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tag() = default ;
        Tag(const Tag &) = default ;
        Tag(Tag &&) = default ;
        Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tag() = default ;
        Tag& operator=(const Tag &) = default ;
        Tag& operator=(Tag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->jobId_ == nullptr
        && this->jobIds_ == nullptr && this->jobName_ == nullptr && this->jobTemplateId_ == nullptr && this->poolName_ == nullptr && this->status_ == nullptr
        && this->tag_ == nullptr && this->timeCreatedAfter_ == nullptr && this->timeCreatedBefore_ == nullptr; };
      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Filter& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobIds Field Functions 
      bool hasJobIds() const { return this->jobIds_ != nullptr;};
      void deleteJobIds() { this->jobIds_ = nullptr;};
      inline const vector<string> & getJobIds() const { DARABONBA_PTR_GET_CONST(jobIds_, vector<string>) };
      inline vector<string> getJobIds() { DARABONBA_PTR_GET(jobIds_, vector<string>) };
      inline Filter& setJobIds(const vector<string> & jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };
      inline Filter& setJobIds(vector<string> && jobIds) { DARABONBA_PTR_SET_RVALUE(jobIds_, jobIds) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline Filter& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobTemplateId Field Functions 
      bool hasJobTemplateId() const { return this->jobTemplateId_ != nullptr;};
      void deleteJobTemplateId() { this->jobTemplateId_ = nullptr;};
      inline string getJobTemplateId() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateId_, "") };
      inline Filter& setJobTemplateId(string jobTemplateId) { DARABONBA_PTR_SET_VALUE(jobTemplateId_, jobTemplateId) };


      // poolName Field Functions 
      bool hasPoolName() const { return this->poolName_ != nullptr;};
      void deletePoolName() { this->poolName_ = nullptr;};
      inline string getPoolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
      inline Filter& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Filter& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Filter::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Filter::Tag>) };
      inline vector<Filter::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Filter::Tag>) };
      inline Filter& setTag(const vector<Filter::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Filter& setTag(vector<Filter::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


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
      shared_ptr<vector<string>> jobIds_ {};
      // The name of the job. Fuzzy search is supported.
      shared_ptr<string> jobName_ {};
      shared_ptr<string> jobTemplateId_ {};
      shared_ptr<string> poolName_ {};
      // The status of the job. Valid values:
      // 
      // - Pending: The job is in the queue.
      // 
      // - Initing: The job is initializing.
      // 
      // - Succeeded: The job was successful.
      // 
      // - Failed: The job failed.
      // 
      // - Running: The job is running.
      // 
      // - Exception: A scheduling exception occurred.
      // 
      // - Retrying: The job is being retried.
      // 
      // - Expired: The job timed out.
      // 
      // - Suspended: The job is in hibernation.
      // 
      // - Restarting: The job is restarting.
      // 
      // - Deleted: The job is deleted.
      shared_ptr<string> status_ {};
      shared_ptr<vector<Filter::Tag>> tag_ {};
      // The time after which the jobs were submitted. This is a UNIX timestamp based on the local time of the region. For sites in the Chinese mainland, the time zone is UTC+8.
      shared_ptr<int32_t> timeCreatedAfter_ {};
      // The time before which the jobs were submitted. This is a UNIX timestamp based on the local time of the region. For sites in the Chinese mainland, the time zone is UTC+8.
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
    // The filter conditions for querying jobs.
    shared_ptr<ListJobsRequest::Filter> filter_ {};
    // The current page number.
    // 
    // Start value: 1
    // 
    // Default value: 1
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. The default value is 50. The maximum value is 100.
    shared_ptr<int32_t> pageSize_ {};
    // The sorting method.
    shared_ptr<ListJobsRequest::SortBy> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
