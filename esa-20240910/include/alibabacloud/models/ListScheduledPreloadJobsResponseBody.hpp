// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEDPRELOADJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEDPRELOADJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListScheduledPreloadJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduledPreloadJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduledPreloadJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScheduledPreloadJobsResponseBody() = default ;
    ListScheduledPreloadJobsResponseBody(const ListScheduledPreloadJobsResponseBody &) = default ;
    ListScheduledPreloadJobsResponseBody(ListScheduledPreloadJobsResponseBody &&) = default ;
    ListScheduledPreloadJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduledPreloadJobsResponseBody() = default ;
    ListScheduledPreloadJobsResponseBody& operator=(const ListScheduledPreloadJobsResponseBody &) = default ;
    ListScheduledPreloadJobsResponseBody& operator=(ListScheduledPreloadJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Jobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Domains, domains_);
        DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
        DARABONBA_PTR_TO_JSON(ExecutionCount, executionCount_);
        DARABONBA_PTR_TO_JSON(FailedFileOss, failedFileOss_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InsertWay, insertWay_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(TaskSubmitted, taskSubmitted_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(UrlCount, urlCount_);
        DARABONBA_PTR_TO_JSON(UrlSubmitted, urlSubmitted_);
      };
      friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Domains, domains_);
        DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
        DARABONBA_PTR_FROM_JSON(ExecutionCount, executionCount_);
        DARABONBA_PTR_FROM_JSON(FailedFileOss, failedFileOss_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InsertWay, insertWay_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(TaskSubmitted, taskSubmitted_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(UrlCount, urlCount_);
        DARABONBA_PTR_FROM_JSON(UrlSubmitted, urlSubmitted_);
      };
      Jobs() = default ;
      Jobs(const Jobs &) = default ;
      Jobs(Jobs &&) = default ;
      Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Jobs() = default ;
      Jobs& operator=(const Jobs &) = default ;
      Jobs& operator=(Jobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->createdAt_ == nullptr && this->domains_ == nullptr && this->errorInfo_ == nullptr && this->executionCount_ == nullptr && this->failedFileOss_ == nullptr
        && this->fileId_ == nullptr && this->id_ == nullptr && this->insertWay_ == nullptr && this->name_ == nullptr && this->siteId_ == nullptr
        && this->taskSubmitted_ == nullptr && this->taskType_ == nullptr && this->urlCount_ == nullptr && this->urlSubmitted_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline Jobs& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Jobs& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // domains Field Functions 
      bool hasDomains() const { return this->domains_ != nullptr;};
      void deleteDomains() { this->domains_ = nullptr;};
      inline string getDomains() const { DARABONBA_PTR_GET_DEFAULT(domains_, "") };
      inline Jobs& setDomains(string domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };


      // errorInfo Field Functions 
      bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
      void deleteErrorInfo() { this->errorInfo_ = nullptr;};
      inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
      inline Jobs& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


      // executionCount Field Functions 
      bool hasExecutionCount() const { return this->executionCount_ != nullptr;};
      void deleteExecutionCount() { this->executionCount_ = nullptr;};
      inline int32_t getExecutionCount() const { DARABONBA_PTR_GET_DEFAULT(executionCount_, 0) };
      inline Jobs& setExecutionCount(int32_t executionCount) { DARABONBA_PTR_SET_VALUE(executionCount_, executionCount) };


      // failedFileOss Field Functions 
      bool hasFailedFileOss() const { return this->failedFileOss_ != nullptr;};
      void deleteFailedFileOss() { this->failedFileOss_ = nullptr;};
      inline string getFailedFileOss() const { DARABONBA_PTR_GET_DEFAULT(failedFileOss_, "") };
      inline Jobs& setFailedFileOss(string failedFileOss) { DARABONBA_PTR_SET_VALUE(failedFileOss_, failedFileOss) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Jobs& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Jobs& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // insertWay Field Functions 
      bool hasInsertWay() const { return this->insertWay_ != nullptr;};
      void deleteInsertWay() { this->insertWay_ = nullptr;};
      inline string getInsertWay() const { DARABONBA_PTR_GET_DEFAULT(insertWay_, "") };
      inline Jobs& setInsertWay(string insertWay) { DARABONBA_PTR_SET_VALUE(insertWay_, insertWay) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Jobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline Jobs& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // taskSubmitted Field Functions 
      bool hasTaskSubmitted() const { return this->taskSubmitted_ != nullptr;};
      void deleteTaskSubmitted() { this->taskSubmitted_ = nullptr;};
      inline int32_t getTaskSubmitted() const { DARABONBA_PTR_GET_DEFAULT(taskSubmitted_, 0) };
      inline Jobs& setTaskSubmitted(int32_t taskSubmitted) { DARABONBA_PTR_SET_VALUE(taskSubmitted_, taskSubmitted) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Jobs& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // urlCount Field Functions 
      bool hasUrlCount() const { return this->urlCount_ != nullptr;};
      void deleteUrlCount() { this->urlCount_ = nullptr;};
      inline int32_t getUrlCount() const { DARABONBA_PTR_GET_DEFAULT(urlCount_, 0) };
      inline Jobs& setUrlCount(int32_t urlCount) { DARABONBA_PTR_SET_VALUE(urlCount_, urlCount) };


      // urlSubmitted Field Functions 
      bool hasUrlSubmitted() const { return this->urlSubmitted_ != nullptr;};
      void deleteUrlSubmitted() { this->urlSubmitted_ = nullptr;};
      inline int32_t getUrlSubmitted() const { DARABONBA_PTR_GET_DEFAULT(urlSubmitted_, 0) };
      inline Jobs& setUrlSubmitted(int32_t urlSubmitted) { DARABONBA_PTR_SET_VALUE(urlSubmitted_, urlSubmitted) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> aliUid_ {};
      // The time when the task was created.
      shared_ptr<string> createdAt_ {};
      // The domain names to be prefetched.
      shared_ptr<string> domains_ {};
      // The error message that is returned.
      shared_ptr<string> errorInfo_ {};
      shared_ptr<int32_t> executionCount_ {};
      // The URL of the OSS object that stores a list of URLs that failed the conditional check for prefetching.
      shared_ptr<string> failedFileOss_ {};
      // The ID of the URL list file, which can be used during downloads.
      shared_ptr<string> fileId_ {};
      // The ID of the prefetch task.
      shared_ptr<string> id_ {};
      // The method to submit the URLs to be prefetched.
      shared_ptr<string> insertWay_ {};
      // The task name.
      shared_ptr<string> name_ {};
      // The website ID.
      shared_ptr<int64_t> siteId_ {};
      // The number of submitted prefetch tasks.
      shared_ptr<int32_t> taskSubmitted_ {};
      // The task type. Valid values: refresh and preload.
      shared_ptr<string> taskType_ {};
      // The total number of URLs.
      shared_ptr<int32_t> urlCount_ {};
      // The number of submitted URLs.
      shared_ptr<int32_t> urlSubmitted_ {};
    };

    virtual bool empty() const override { return this->jobs_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<ListScheduledPreloadJobsResponseBody::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<ListScheduledPreloadJobsResponseBody::Jobs>) };
    inline vector<ListScheduledPreloadJobsResponseBody::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<ListScheduledPreloadJobsResponseBody::Jobs>) };
    inline ListScheduledPreloadJobsResponseBody& setJobs(const vector<ListScheduledPreloadJobsResponseBody::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListScheduledPreloadJobsResponseBody& setJobs(vector<ListScheduledPreloadJobsResponseBody::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScheduledPreloadJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListScheduledPreloadJobsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of the prefetch tasks.
    shared_ptr<vector<ListScheduledPreloadJobsResponseBody::Jobs>> jobs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of tasks returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
