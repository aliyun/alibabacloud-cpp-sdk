// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEDPRELOADJOBSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEDPRELOADJOBSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListScheduledPreloadJobsResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduledPreloadJobsResponseBodyJobs& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListScheduledPreloadJobsResponseBodyJobs& obj) { 
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
    ListScheduledPreloadJobsResponseBodyJobs() = default ;
    ListScheduledPreloadJobsResponseBodyJobs(const ListScheduledPreloadJobsResponseBodyJobs &) = default ;
    ListScheduledPreloadJobsResponseBodyJobs(ListScheduledPreloadJobsResponseBodyJobs &&) = default ;
    ListScheduledPreloadJobsResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduledPreloadJobsResponseBodyJobs() = default ;
    ListScheduledPreloadJobsResponseBodyJobs& operator=(const ListScheduledPreloadJobsResponseBodyJobs &) = default ;
    ListScheduledPreloadJobsResponseBodyJobs& operator=(ListScheduledPreloadJobsResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->createdAt_ == nullptr && return this->domains_ == nullptr && return this->errorInfo_ == nullptr && return this->executionCount_ == nullptr && return this->failedFileOss_ == nullptr
        && return this->fileId_ == nullptr && return this->id_ == nullptr && return this->insertWay_ == nullptr && return this->name_ == nullptr && return this->siteId_ == nullptr
        && return this->taskSubmitted_ == nullptr && return this->taskType_ == nullptr && return this->urlCount_ == nullptr && return this->urlSubmitted_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline ListScheduledPreloadJobsResponseBodyJobs& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListScheduledPreloadJobsResponseBodyJobs& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline string domains() const { DARABONBA_PTR_GET_DEFAULT(domains_, "") };
    inline ListScheduledPreloadJobsResponseBodyJobs& setDomains(string domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline ListScheduledPreloadJobsResponseBodyJobs& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // executionCount Field Functions 
    bool hasExecutionCount() const { return this->executionCount_ != nullptr;};
    void deleteExecutionCount() { this->executionCount_ = nullptr;};
    inline int32_t executionCount() const { DARABONBA_PTR_GET_DEFAULT(executionCount_, 0) };
    inline ListScheduledPreloadJobsResponseBodyJobs& setExecutionCount(int32_t executionCount) { DARABONBA_PTR_SET_VALUE(executionCount_, executionCount) };


    // failedFileOss Field Functions 
    bool hasFailedFileOss() const { return this->failedFileOss_ != nullptr;};
    void deleteFailedFileOss() { this->failedFileOss_ = nullptr;};
    inline string failedFileOss() const { DARABONBA_PTR_GET_DEFAULT(failedFileOss_, "") };
    inline ListScheduledPreloadJobsResponseBodyJobs& setFailedFileOss(string failedFileOss) { DARABONBA_PTR_SET_VALUE(failedFileOss_, failedFileOss) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListScheduledPreloadJobsResponseBodyJobs& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListScheduledPreloadJobsResponseBodyJobs& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // insertWay Field Functions 
    bool hasInsertWay() const { return this->insertWay_ != nullptr;};
    void deleteInsertWay() { this->insertWay_ = nullptr;};
    inline string insertWay() const { DARABONBA_PTR_GET_DEFAULT(insertWay_, "") };
    inline ListScheduledPreloadJobsResponseBodyJobs& setInsertWay(string insertWay) { DARABONBA_PTR_SET_VALUE(insertWay_, insertWay) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListScheduledPreloadJobsResponseBodyJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListScheduledPreloadJobsResponseBodyJobs& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // taskSubmitted Field Functions 
    bool hasTaskSubmitted() const { return this->taskSubmitted_ != nullptr;};
    void deleteTaskSubmitted() { this->taskSubmitted_ = nullptr;};
    inline int32_t taskSubmitted() const { DARABONBA_PTR_GET_DEFAULT(taskSubmitted_, 0) };
    inline ListScheduledPreloadJobsResponseBodyJobs& setTaskSubmitted(int32_t taskSubmitted) { DARABONBA_PTR_SET_VALUE(taskSubmitted_, taskSubmitted) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListScheduledPreloadJobsResponseBodyJobs& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // urlCount Field Functions 
    bool hasUrlCount() const { return this->urlCount_ != nullptr;};
    void deleteUrlCount() { this->urlCount_ = nullptr;};
    inline int32_t urlCount() const { DARABONBA_PTR_GET_DEFAULT(urlCount_, 0) };
    inline ListScheduledPreloadJobsResponseBodyJobs& setUrlCount(int32_t urlCount) { DARABONBA_PTR_SET_VALUE(urlCount_, urlCount) };


    // urlSubmitted Field Functions 
    bool hasUrlSubmitted() const { return this->urlSubmitted_ != nullptr;};
    void deleteUrlSubmitted() { this->urlSubmitted_ = nullptr;};
    inline int32_t urlSubmitted() const { DARABONBA_PTR_GET_DEFAULT(urlSubmitted_, 0) };
    inline ListScheduledPreloadJobsResponseBodyJobs& setUrlSubmitted(int32_t urlSubmitted) { DARABONBA_PTR_SET_VALUE(urlSubmitted_, urlSubmitted) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> aliUid_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<string> createdAt_ = nullptr;
    // The domain names to be prefetched.
    std::shared_ptr<string> domains_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> errorInfo_ = nullptr;
    std::shared_ptr<int32_t> executionCount_ = nullptr;
    // The URL of the OSS object that stores a list of URLs that failed the conditional check for prefetching.
    std::shared_ptr<string> failedFileOss_ = nullptr;
    // The ID of the URL list file, which can be used during downloads.
    std::shared_ptr<string> fileId_ = nullptr;
    // The ID of the prefetch task.
    std::shared_ptr<string> id_ = nullptr;
    // The method to submit the URLs to be prefetched.
    std::shared_ptr<string> insertWay_ = nullptr;
    // The task name.
    std::shared_ptr<string> name_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The number of submitted prefetch tasks.
    std::shared_ptr<int32_t> taskSubmitted_ = nullptr;
    // The task type. Valid values: refresh and preload.
    std::shared_ptr<string> taskType_ = nullptr;
    // The total number of URLs.
    std::shared_ptr<int32_t> urlCount_ = nullptr;
    // The number of submitted URLs.
    std::shared_ptr<int32_t> urlSubmitted_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
