// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAPRODUCINGJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAPRODUCINGJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaProducingJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaProducingJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MasterJobId, masterJobId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaProducingJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MasterJobId, masterJobId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListMediaProducingJobsRequest() = default ;
    ListMediaProducingJobsRequest(const ListMediaProducingJobsRequest &) = default ;
    ListMediaProducingJobsRequest(ListMediaProducingJobsRequest &&) = default ;
    ListMediaProducingJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaProducingJobsRequest() = default ;
    ListMediaProducingJobsRequest& operator=(const ListMediaProducingJobsRequest &) = default ;
    ListMediaProducingJobsRequest& operator=(ListMediaProducingJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->jobType_ != nullptr && this->keyword_ != nullptr && this->masterJobId_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->projectId_ != nullptr && this->sortBy_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListMediaProducingJobsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListMediaProducingJobsRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListMediaProducingJobsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // masterJobId Field Functions 
    bool hasMasterJobId() const { return this->masterJobId_ != nullptr;};
    void deleteMasterJobId() { this->masterJobId_ = nullptr;};
    inline string masterJobId() const { DARABONBA_PTR_GET_DEFAULT(masterJobId_, "") };
    inline ListMediaProducingJobsRequest& setMasterJobId(string masterJobId) { DARABONBA_PTR_SET_VALUE(masterJobId_, masterJobId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMediaProducingJobsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMediaProducingJobsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListMediaProducingJobsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListMediaProducingJobsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListMediaProducingJobsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMediaProducingJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end of the time range to query. The maximum time range between EndTime and StartTime cannot exceed 30 days. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The job type.
    // 
    // Valid values:
    // 
    // *   LiveEditingJob: live editing job.
    // *   EditingJob: regular template-based editing job
    // *   VETemplateJob: advanced template-based editing job.
    std::shared_ptr<string> jobType_ = nullptr;
    // The search keyword. For example, you can use a job ID as the keyword to search for jobs.
    std::shared_ptr<string> keyword_ = nullptr;
    // The ID of the quick video production job. If this parameter is specified, the subjobs of the quick video production job are queried.
    std::shared_ptr<string> masterJobId_ = nullptr;
    // The maximum number of entries to return.
    // 
    // Default value: 10. Valid values: 1 to 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the online editing project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The sorting parameter. By default, the query results are sorted by creation time in descending order.
    // 
    // Valid values:
    // 
    // *   CreationTime:Asc: sorted by creation time in ascending order.
    // *   CreationTime:Desc: sorted by creation time in descending order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The job state.
    // 
    // Valid values:
    // 
    // *   Init: The job is initialized.
    // *   Failed: The job failed.
    // *   Success: The job is successful.
    // *   Processing: The job is in progress.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
