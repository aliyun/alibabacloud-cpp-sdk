// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDPRELOADJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDPRELOADJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateScheduledPreloadJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledPreloadJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(FailedFileOss, failedFileOss_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InsertWay, insertWay_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(TaskSubmitted, taskSubmitted_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UrlCount, urlCount_);
      DARABONBA_PTR_TO_JSON(UrlSubmitted, urlSubmitted_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledPreloadJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(FailedFileOss, failedFileOss_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InsertWay, insertWay_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(TaskSubmitted, taskSubmitted_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UrlCount, urlCount_);
      DARABONBA_PTR_FROM_JSON(UrlSubmitted, urlSubmitted_);
    };
    CreateScheduledPreloadJobResponseBody() = default ;
    CreateScheduledPreloadJobResponseBody(const CreateScheduledPreloadJobResponseBody &) = default ;
    CreateScheduledPreloadJobResponseBody(CreateScheduledPreloadJobResponseBody &&) = default ;
    CreateScheduledPreloadJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledPreloadJobResponseBody() = default ;
    CreateScheduledPreloadJobResponseBody& operator=(const CreateScheduledPreloadJobResponseBody &) = default ;
    CreateScheduledPreloadJobResponseBody& operator=(CreateScheduledPreloadJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->createdAt_ != nullptr && this->domains_ != nullptr && this->errorInfo_ != nullptr && this->failedFileOss_ != nullptr && this->fileId_ != nullptr
        && this->id_ != nullptr && this->insertWay_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr && this->siteId_ != nullptr
        && this->taskSubmitted_ != nullptr && this->taskType_ != nullptr && this->urlCount_ != nullptr && this->urlSubmitted_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline CreateScheduledPreloadJobResponseBody& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateScheduledPreloadJobResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline string domains() const { DARABONBA_PTR_GET_DEFAULT(domains_, "") };
    inline CreateScheduledPreloadJobResponseBody& setDomains(string domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline CreateScheduledPreloadJobResponseBody& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // failedFileOss Field Functions 
    bool hasFailedFileOss() const { return this->failedFileOss_ != nullptr;};
    void deleteFailedFileOss() { this->failedFileOss_ = nullptr;};
    inline string failedFileOss() const { DARABONBA_PTR_GET_DEFAULT(failedFileOss_, "") };
    inline CreateScheduledPreloadJobResponseBody& setFailedFileOss(string failedFileOss) { DARABONBA_PTR_SET_VALUE(failedFileOss_, failedFileOss) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CreateScheduledPreloadJobResponseBody& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateScheduledPreloadJobResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // insertWay Field Functions 
    bool hasInsertWay() const { return this->insertWay_ != nullptr;};
    void deleteInsertWay() { this->insertWay_ = nullptr;};
    inline string insertWay() const { DARABONBA_PTR_GET_DEFAULT(insertWay_, "") };
    inline CreateScheduledPreloadJobResponseBody& setInsertWay(string insertWay) { DARABONBA_PTR_SET_VALUE(insertWay_, insertWay) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateScheduledPreloadJobResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateScheduledPreloadJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateScheduledPreloadJobResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // taskSubmitted Field Functions 
    bool hasTaskSubmitted() const { return this->taskSubmitted_ != nullptr;};
    void deleteTaskSubmitted() { this->taskSubmitted_ = nullptr;};
    inline int32_t taskSubmitted() const { DARABONBA_PTR_GET_DEFAULT(taskSubmitted_, 0) };
    inline CreateScheduledPreloadJobResponseBody& setTaskSubmitted(int32_t taskSubmitted) { DARABONBA_PTR_SET_VALUE(taskSubmitted_, taskSubmitted) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateScheduledPreloadJobResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // urlCount Field Functions 
    bool hasUrlCount() const { return this->urlCount_ != nullptr;};
    void deleteUrlCount() { this->urlCount_ = nullptr;};
    inline int32_t urlCount() const { DARABONBA_PTR_GET_DEFAULT(urlCount_, 0) };
    inline CreateScheduledPreloadJobResponseBody& setUrlCount(int32_t urlCount) { DARABONBA_PTR_SET_VALUE(urlCount_, urlCount) };


    // urlSubmitted Field Functions 
    bool hasUrlSubmitted() const { return this->urlSubmitted_ != nullptr;};
    void deleteUrlSubmitted() { this->urlSubmitted_ = nullptr;};
    inline int32_t urlSubmitted() const { DARABONBA_PTR_GET_DEFAULT(urlSubmitted_, 0) };
    inline CreateScheduledPreloadJobResponseBody& setUrlSubmitted(int32_t urlSubmitted) { DARABONBA_PTR_SET_VALUE(urlSubmitted_, urlSubmitted) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> aliUid_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<string> createdAt_ = nullptr;
    // The domain names to be prefetched.
    std::shared_ptr<string> domains_ = nullptr;
    // The error message. Multiple error messages are separated by commas (,). Valid values:
    // 
    // *   **InvalidUrl**: The URL format is invalid.
    // *   **InvalidDomain**: The domain name fails the domain ownership verification.
    // *   **QuotaExcess**: the quota limit has been reached.
    // *   **OtherErrors**: other errors.
    std::shared_ptr<string> errorInfo_ = nullptr;
    // The URL of the OSS object that stores a list of URLs that failed the conditional check for prefetching.
    std::shared_ptr<string> failedFileOss_ = nullptr;
    // The ID of the URL list file, which can be used during downloads.
    std::shared_ptr<string> fileId_ = nullptr;
    // The ID of the scheduled prefetch task.
    std::shared_ptr<string> id_ = nullptr;
    // The method to submit the URLs to be prefetched.
    std::shared_ptr<string> insertWay_ = nullptr;
    // The task name.
    std::shared_ptr<string> name_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The number of submitted prefetch tasks.
    std::shared_ptr<int32_t> taskSubmitted_ = nullptr;
    // The task type (refresh or preload).
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
