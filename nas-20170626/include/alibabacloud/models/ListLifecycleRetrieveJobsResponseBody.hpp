// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIFECYCLERETRIEVEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIFECYCLERETRIEVEJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListLifecycleRetrieveJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLifecycleRetrieveJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LifecycleRetrieveJobs, lifecycleRetrieveJobs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLifecycleRetrieveJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecycleRetrieveJobs, lifecycleRetrieveJobs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLifecycleRetrieveJobsResponseBody() = default ;
    ListLifecycleRetrieveJobsResponseBody(const ListLifecycleRetrieveJobsResponseBody &) = default ;
    ListLifecycleRetrieveJobsResponseBody(ListLifecycleRetrieveJobsResponseBody &&) = default ;
    ListLifecycleRetrieveJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLifecycleRetrieveJobsResponseBody() = default ;
    ListLifecycleRetrieveJobsResponseBody& operator=(const ListLifecycleRetrieveJobsResponseBody &) = default ;
    ListLifecycleRetrieveJobsResponseBody& operator=(ListLifecycleRetrieveJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LifecycleRetrieveJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LifecycleRetrieveJobs& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DiscoveredFileCount, discoveredFileCount_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Paths, paths_);
        DARABONBA_PTR_TO_JSON(RetrievedFileCount, retrievedFileCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, LifecycleRetrieveJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DiscoveredFileCount, discoveredFileCount_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Paths, paths_);
        DARABONBA_PTR_FROM_JSON(RetrievedFileCount, retrievedFileCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      LifecycleRetrieveJobs() = default ;
      LifecycleRetrieveJobs(const LifecycleRetrieveJobs &) = default ;
      LifecycleRetrieveJobs(LifecycleRetrieveJobs &&) = default ;
      LifecycleRetrieveJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LifecycleRetrieveJobs() = default ;
      LifecycleRetrieveJobs& operator=(const LifecycleRetrieveJobs &) = default ;
      LifecycleRetrieveJobs& operator=(LifecycleRetrieveJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->discoveredFileCount_ == nullptr && this->fileSystemId_ == nullptr && this->jobId_ == nullptr && this->paths_ == nullptr && this->retrievedFileCount_ == nullptr
        && this->status_ == nullptr && this->storageType_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LifecycleRetrieveJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // discoveredFileCount Field Functions 
      bool hasDiscoveredFileCount() const { return this->discoveredFileCount_ != nullptr;};
      void deleteDiscoveredFileCount() { this->discoveredFileCount_ = nullptr;};
      inline int64_t getDiscoveredFileCount() const { DARABONBA_PTR_GET_DEFAULT(discoveredFileCount_, 0L) };
      inline LifecycleRetrieveJobs& setDiscoveredFileCount(int64_t discoveredFileCount) { DARABONBA_PTR_SET_VALUE(discoveredFileCount_, discoveredFileCount) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline LifecycleRetrieveJobs& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline LifecycleRetrieveJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // paths Field Functions 
      bool hasPaths() const { return this->paths_ != nullptr;};
      void deletePaths() { this->paths_ = nullptr;};
      inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
      inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
      inline LifecycleRetrieveJobs& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
      inline LifecycleRetrieveJobs& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


      // retrievedFileCount Field Functions 
      bool hasRetrievedFileCount() const { return this->retrievedFileCount_ != nullptr;};
      void deleteRetrievedFileCount() { this->retrievedFileCount_ = nullptr;};
      inline int64_t getRetrievedFileCount() const { DARABONBA_PTR_GET_DEFAULT(retrievedFileCount_, 0L) };
      inline LifecycleRetrieveJobs& setRetrievedFileCount(int64_t retrievedFileCount) { DARABONBA_PTR_SET_VALUE(retrievedFileCount_, retrievedFileCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LifecycleRetrieveJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline LifecycleRetrieveJobs& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline LifecycleRetrieveJobs& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the task was created.
      // 
      // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
      shared_ptr<string> createTime_ {};
      // The total number of files that are read in the data retrieval task.
      shared_ptr<int64_t> discoveredFileCount_ {};
      // The ID of the file system.
      shared_ptr<string> fileSystemId_ {};
      // The ID of the data retrieval task.
      shared_ptr<string> jobId_ {};
      // The execution path of the data retrieval task.
      shared_ptr<vector<string>> paths_ {};
      // The total number of files that are retrieved.
      shared_ptr<int64_t> retrievedFileCount_ {};
      // The status of the data retrieval task. Valid values:
      // 
      // *   active: The task is running.
      // *   canceled: The task is canceled.
      // *   completed: The task is completed.
      // *   failed: The task has failed.
      shared_ptr<string> status_ {};
      // The storage class.
      // 
      // *   InfrequentAccess: the IA storage class.
      // *   Archive: the Archive storage class.
      shared_ptr<string> storageType_ {};
      // The time when the task was updated.
      // 
      // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->lifecycleRetrieveJobs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // lifecycleRetrieveJobs Field Functions 
    bool hasLifecycleRetrieveJobs() const { return this->lifecycleRetrieveJobs_ != nullptr;};
    void deleteLifecycleRetrieveJobs() { this->lifecycleRetrieveJobs_ = nullptr;};
    inline const vector<ListLifecycleRetrieveJobsResponseBody::LifecycleRetrieveJobs> & getLifecycleRetrieveJobs() const { DARABONBA_PTR_GET_CONST(lifecycleRetrieveJobs_, vector<ListLifecycleRetrieveJobsResponseBody::LifecycleRetrieveJobs>) };
    inline vector<ListLifecycleRetrieveJobsResponseBody::LifecycleRetrieveJobs> getLifecycleRetrieveJobs() { DARABONBA_PTR_GET(lifecycleRetrieveJobs_, vector<ListLifecycleRetrieveJobsResponseBody::LifecycleRetrieveJobs>) };
    inline ListLifecycleRetrieveJobsResponseBody& setLifecycleRetrieveJobs(const vector<ListLifecycleRetrieveJobsResponseBody::LifecycleRetrieveJobs> & lifecycleRetrieveJobs) { DARABONBA_PTR_SET_VALUE(lifecycleRetrieveJobs_, lifecycleRetrieveJobs) };
    inline ListLifecycleRetrieveJobsResponseBody& setLifecycleRetrieveJobs(vector<ListLifecycleRetrieveJobsResponseBody::LifecycleRetrieveJobs> && lifecycleRetrieveJobs) { DARABONBA_PTR_SET_RVALUE(lifecycleRetrieveJobs_, lifecycleRetrieveJobs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLifecycleRetrieveJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLifecycleRetrieveJobsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLifecycleRetrieveJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLifecycleRetrieveJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the data retrieval tasks.
    shared_ptr<vector<ListLifecycleRetrieveJobsResponseBody::LifecycleRetrieveJobs>> lifecycleRetrieveJobs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of data retrieval tasks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
