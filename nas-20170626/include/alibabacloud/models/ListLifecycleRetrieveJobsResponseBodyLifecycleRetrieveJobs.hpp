// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIFECYCLERETRIEVEJOBSRESPONSEBODYLIFECYCLERETRIEVEJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTLIFECYCLERETRIEVEJOBSRESPONSEBODYLIFECYCLERETRIEVEJOBS_HPP_
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
  class ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& obj) { 
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
    ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs() = default ;
    ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs(const ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs &) = default ;
    ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs(ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs &&) = default ;
    ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs() = default ;
    ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& operator=(const ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs &) = default ;
    ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& operator=(ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->discoveredFileCount_ != nullptr && this->fileSystemId_ != nullptr && this->jobId_ != nullptr && this->paths_ != nullptr && this->retrievedFileCount_ != nullptr
        && this->status_ != nullptr && this->storageType_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // discoveredFileCount Field Functions 
    bool hasDiscoveredFileCount() const { return this->discoveredFileCount_ != nullptr;};
    void deleteDiscoveredFileCount() { this->discoveredFileCount_ = nullptr;};
    inline int64_t discoveredFileCount() const { DARABONBA_PTR_GET_DEFAULT(discoveredFileCount_, 0L) };
    inline ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& setDiscoveredFileCount(int64_t discoveredFileCount) { DARABONBA_PTR_SET_VALUE(discoveredFileCount_, discoveredFileCount) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // retrievedFileCount Field Functions 
    bool hasRetrievedFileCount() const { return this->retrievedFileCount_ != nullptr;};
    void deleteRetrievedFileCount() { this->retrievedFileCount_ = nullptr;};
    inline int64_t retrievedFileCount() const { DARABONBA_PTR_GET_DEFAULT(retrievedFileCount_, 0L) };
    inline ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& setRetrievedFileCount(int64_t retrievedFileCount) { DARABONBA_PTR_SET_VALUE(retrievedFileCount_, retrievedFileCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the task was created.
    // 
    // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The total number of files that are read in the data retrieval task.
    std::shared_ptr<int64_t> discoveredFileCount_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The ID of the data retrieval task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The execution path of the data retrieval task.
    std::shared_ptr<vector<string>> paths_ = nullptr;
    // The total number of files that are retrieved.
    std::shared_ptr<int64_t> retrievedFileCount_ = nullptr;
    // The status of the data retrieval task. Valid values:
    // 
    // *   active: The task is running.
    // *   canceled: The task is canceled.
    // *   completed: The task is completed.
    // *   failed: The task has failed.
    std::shared_ptr<string> status_ = nullptr;
    // The storage class.
    // 
    // *   InfrequentAccess: the IA storage class.
    // *   Archive: the Archive storage class.
    std::shared_ptr<string> storageType_ = nullptr;
    // The time when the task was updated.
    // 
    // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
