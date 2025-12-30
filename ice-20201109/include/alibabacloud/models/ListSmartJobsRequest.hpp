// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobState, jobState_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobState, jobState_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListSmartJobsRequest() = default ;
    ListSmartJobsRequest(const ListSmartJobsRequest &) = default ;
    ListSmartJobsRequest(ListSmartJobsRequest &&) = default ;
    ListSmartJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartJobsRequest() = default ;
    ListSmartJobsRequest& operator=(const ListSmartJobsRequest &) = default ;
    ListSmartJobsRequest& operator=(ListSmartJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobState_ == nullptr
        && this->jobType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->sortBy_ == nullptr; };
    // jobState Field Functions 
    bool hasJobState() const { return this->jobState_ != nullptr;};
    void deleteJobState() { this->jobState_ = nullptr;};
    inline string getJobState() const { DARABONBA_PTR_GET_DEFAULT(jobState_, "") };
    inline ListSmartJobsRequest& setJobState(string jobState) { DARABONBA_PTR_SET_VALUE(jobState_, jobState) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListSmartJobsRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListSmartJobsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSmartJobsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListSmartJobsRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSmartJobsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListSmartJobsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The job state.
    // 
    // Valid values:
    // 
    // *   Finished: The job is complete.
    // *   Failed: The job failed.
    // *   Executing: The job is in progress.
    // *   Created: The job is created.
    shared_ptr<string> jobState_ {};
    // The job type.
    // 
    // Valid values:
    // 
    // *   ASR: automatic speech recognition(job) job.
    // *   DynamicChart: dynamic chart job.
    // *   VideoTranslation: video translation job.
    // *   TextToSpeech: intelligent audio production job.
    shared_ptr<string> jobType_ {};
    // The maximum number of entries to return.
    // 
    // Default value: 10. Valid values: 1 to 100.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The page number. Default value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Default value: 10. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // The sorting parameter. By default, the query results are sorted by creation time in descending order.
    // 
    // Valid values:
    // 
    // *   CreationTime:Asc: sorted by creation time in ascending order.
    // *   CreationTime:Desc: sorted by creation time in descending order.
    shared_ptr<string> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
