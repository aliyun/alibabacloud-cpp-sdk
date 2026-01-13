// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
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
  class ListJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobList, jobList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobList, jobList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListJobsResponseBody() = default ;
    ListJobsResponseBody(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody(ListJobsResponseBody &&) = default ;
    ListJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBody() = default ;
    ListJobsResponseBody& operator=(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody& operator=(ListJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobList& obj) { 
        DARABONBA_PTR_TO_JSON(AppExtraInfo, appExtraInfo_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExecutorCount, executorCount_);
        DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TaskCount, taskCount_);
        DARABONBA_PTR_TO_JSON(TaskSustainable, taskSustainable_);
      };
      friend void from_json(const Darabonba::Json& j, JobList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppExtraInfo, appExtraInfo_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExecutorCount, executorCount_);
        DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TaskCount, taskCount_);
        DARABONBA_PTR_FROM_JSON(TaskSustainable, taskSustainable_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the job tag.
        shared_ptr<string> tagKey_ {};
        // The value of the job tag.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->appExtraInfo_ == nullptr
        && this->appName_ == nullptr && this->createTime_ == nullptr && this->endTime_ == nullptr && this->executorCount_ == nullptr && this->jobDescription_ == nullptr
        && this->jobId_ == nullptr && this->jobName_ == nullptr && this->ownerUid_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->taskCount_ == nullptr && this->taskSustainable_ == nullptr; };
      // appExtraInfo Field Functions 
      bool hasAppExtraInfo() const { return this->appExtraInfo_ != nullptr;};
      void deleteAppExtraInfo() { this->appExtraInfo_ = nullptr;};
      inline string getAppExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(appExtraInfo_, "") };
      inline JobList& setAppExtraInfo(string appExtraInfo) { DARABONBA_PTR_SET_VALUE(appExtraInfo_, appExtraInfo) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline JobList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline JobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline JobList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // executorCount Field Functions 
      bool hasExecutorCount() const { return this->executorCount_ != nullptr;};
      void deleteExecutorCount() { this->executorCount_ = nullptr;};
      inline int32_t getExecutorCount() const { DARABONBA_PTR_GET_DEFAULT(executorCount_, 0) };
      inline JobList& setExecutorCount(int32_t executorCount) { DARABONBA_PTR_SET_VALUE(executorCount_, executorCount) };


      // jobDescription Field Functions 
      bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
      void deleteJobDescription() { this->jobDescription_ = nullptr;};
      inline string getJobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
      inline JobList& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


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


      // ownerUid Field Functions 
      bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
      void deleteOwnerUid() { this->ownerUid_ = nullptr;};
      inline string getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
      inline JobList& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline JobList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline JobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<JobList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<JobList::Tags>) };
      inline vector<JobList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<JobList::Tags>) };
      inline JobList& setTags(const vector<JobList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline JobList& setTags(vector<JobList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // taskCount Field Functions 
      bool hasTaskCount() const { return this->taskCount_ != nullptr;};
      void deleteTaskCount() { this->taskCount_ = nullptr;};
      inline int32_t getTaskCount() const { DARABONBA_PTR_GET_DEFAULT(taskCount_, 0) };
      inline JobList& setTaskCount(int32_t taskCount) { DARABONBA_PTR_SET_VALUE(taskCount_, taskCount) };


      // taskSustainable Field Functions 
      bool hasTaskSustainable() const { return this->taskSustainable_ != nullptr;};
      void deleteTaskSustainable() { this->taskSustainable_ = nullptr;};
      inline bool getTaskSustainable() const { DARABONBA_PTR_GET_DEFAULT(taskSustainable_, false) };
      inline JobList& setTaskSustainable(bool taskSustainable) { DARABONBA_PTR_SET_VALUE(taskSustainable_, taskSustainable) };


    protected:
      // The additional information about the application.
      shared_ptr<string> appExtraInfo_ {};
      shared_ptr<string> appName_ {};
      // The time when the job was submitted.
      shared_ptr<string> createTime_ {};
      // The end time of the job.
      shared_ptr<string> endTime_ {};
      // The number of running nodes.
      shared_ptr<int32_t> executorCount_ {};
      // The description of the job.
      shared_ptr<string> jobDescription_ {};
      // The ID of the job.
      shared_ptr<string> jobId_ {};
      // The job name.
      shared_ptr<string> jobName_ {};
      // The UID of the creator.
      shared_ptr<string> ownerUid_ {};
      // The start time of the job.
      shared_ptr<string> startTime_ {};
      // The status of the job. Valid values:
      // 
      // *   Pending
      // *   Initing
      // *   Succeed
      // *   Failed
      // *   Running
      // *   Exception
      // *   Retrying
      // *   Expired
      // *   Deleting
      // *   Deleted
      shared_ptr<string> status_ {};
      // The list of job tags.
      shared_ptr<vector<JobList::Tags>> tags_ {};
      // The number of tasks.
      shared_ptr<int32_t> taskCount_ {};
      // Indicate whether the job is a long-running job.
      shared_ptr<bool> taskSustainable_ {};
    };

    virtual bool empty() const override { return this->jobList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // jobList Field Functions 
    bool hasJobList() const { return this->jobList_ != nullptr;};
    void deleteJobList() { this->jobList_ = nullptr;};
    inline const vector<ListJobsResponseBody::JobList> & getJobList() const { DARABONBA_PTR_GET_CONST(jobList_, vector<ListJobsResponseBody::JobList>) };
    inline vector<ListJobsResponseBody::JobList> getJobList() { DARABONBA_PTR_GET(jobList_, vector<ListJobsResponseBody::JobList>) };
    inline ListJobsResponseBody& setJobList(const vector<ListJobsResponseBody::JobList> & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
    inline ListJobsResponseBody& setJobList(vector<ListJobsResponseBody::JobList> && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of jobs.
    shared_ptr<vector<ListJobsResponseBody::JobList>> jobList_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned. This parameter is optional and is not returned by default.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
