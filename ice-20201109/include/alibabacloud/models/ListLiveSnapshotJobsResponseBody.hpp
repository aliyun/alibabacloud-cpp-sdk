// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveSnapshotJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveSnapshotJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobList, jobList_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveSnapshotJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobList, jobList_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLiveSnapshotJobsResponseBody() = default ;
    ListLiveSnapshotJobsResponseBody(const ListLiveSnapshotJobsResponseBody &) = default ;
    ListLiveSnapshotJobsResponseBody(ListLiveSnapshotJobsResponseBody &&) = default ;
    ListLiveSnapshotJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveSnapshotJobsResponseBody() = default ;
    ListLiveSnapshotJobsResponseBody& operator=(const ListLiveSnapshotJobsResponseBody &) = default ;
    ListLiveSnapshotJobsResponseBody& operator=(ListLiveSnapshotJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(SnapshotOutput, snapshotOutput_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
      };
      friend void from_json(const Darabonba::Json& j, JobList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(SnapshotOutput, snapshotOutput_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
      };
      JobList() = default ;
      JobList(const JobList &) = default ;
      JobList(JobList &&) = default ;
      JobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobList() = default ;
      JobList& operator=(const JobList &) = default ;
      JobList& operator=(JobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SnapshotOutput : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SnapshotOutput& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        };
        friend void from_json(const Darabonba::Json& j, SnapshotOutput& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        };
        SnapshotOutput() = default ;
        SnapshotOutput(const SnapshotOutput &) = default ;
        SnapshotOutput(SnapshotOutput &&) = default ;
        SnapshotOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SnapshotOutput() = default ;
        SnapshotOutput& operator=(const SnapshotOutput &) = default ;
        SnapshotOutput& operator=(SnapshotOutput &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->endpoint_ == nullptr && this->storageType_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline SnapshotOutput& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline SnapshotOutput& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline SnapshotOutput& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      protected:
        // The bucket of the output endpoint. If the storage type is set to oss, the OSS bucket is returned.
        shared_ptr<string> bucket_ {};
        // The output endpoint. If the storage type is set to oss, the Object Storage Service (OSS) domain name is returned.
        shared_ptr<string> endpoint_ {};
        // The storage type. The value can only be oss.
        shared_ptr<string> storageType_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->jobId_ == nullptr && this->jobName_ == nullptr && this->snapshotOutput_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->timeInterval_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline JobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline JobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline JobList& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // snapshotOutput Field Functions 
      bool hasSnapshotOutput() const { return this->snapshotOutput_ != nullptr;};
      void deleteSnapshotOutput() { this->snapshotOutput_ = nullptr;};
      inline const JobList::SnapshotOutput & getSnapshotOutput() const { DARABONBA_PTR_GET_CONST(snapshotOutput_, JobList::SnapshotOutput) };
      inline JobList::SnapshotOutput getSnapshotOutput() { DARABONBA_PTR_GET(snapshotOutput_, JobList::SnapshotOutput) };
      inline JobList& setSnapshotOutput(const JobList::SnapshotOutput & snapshotOutput) { DARABONBA_PTR_SET_VALUE(snapshotOutput_, snapshotOutput) };
      inline JobList& setSnapshotOutput(JobList::SnapshotOutput && snapshotOutput) { DARABONBA_PTR_SET_RVALUE(snapshotOutput_, snapshotOutput) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline JobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline JobList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline JobList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // timeInterval Field Functions 
      bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
      void deleteTimeInterval() { this->timeInterval_ = nullptr;};
      inline int32_t getTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
      inline JobList& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


    protected:
      // The time when the template was created.
      shared_ptr<string> createTime_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The name of the job.
      shared_ptr<string> jobName_ {};
      // The output information.
      shared_ptr<JobList::SnapshotOutput> snapshotOutput_ {};
      // The state of the job.
      // 
      // Valid values:
      // 
      // *   init: The job is not started.
      // *   paused: The job is paused.
      // *   started: The job is in progress.
      shared_ptr<string> status_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
      // The interval between two adjacent snapshots. Unit: seconds.
      shared_ptr<int32_t> timeInterval_ {};
    };

    virtual bool empty() const override { return this->jobList_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sortBy_ == nullptr && this->totalCount_ == nullptr; };
    // jobList Field Functions 
    bool hasJobList() const { return this->jobList_ != nullptr;};
    void deleteJobList() { this->jobList_ = nullptr;};
    inline const vector<ListLiveSnapshotJobsResponseBody::JobList> & getJobList() const { DARABONBA_PTR_GET_CONST(jobList_, vector<ListLiveSnapshotJobsResponseBody::JobList>) };
    inline vector<ListLiveSnapshotJobsResponseBody::JobList> getJobList() { DARABONBA_PTR_GET(jobList_, vector<ListLiveSnapshotJobsResponseBody::JobList>) };
    inline ListLiveSnapshotJobsResponseBody& setJobList(const vector<ListLiveSnapshotJobsResponseBody::JobList> & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
    inline ListLiveSnapshotJobsResponseBody& setJobList(vector<ListLiveSnapshotJobsResponseBody::JobList> && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListLiveSnapshotJobsResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLiveSnapshotJobsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveSnapshotJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveSnapshotJobsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLiveSnapshotJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of jobs.
    shared_ptr<vector<ListLiveSnapshotJobsResponseBody::JobList>> jobList_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sorting order of the jobs by creation time.
    shared_ptr<string> sortBy_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
