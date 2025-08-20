// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOSYNCTASKRESPONSEBODYLAYERTASKS_HPP_
#define ALIBABACLOUD_MODELS_GETREPOSYNCTASKRESPONSEBODYLAYERTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoSyncTaskResponseBodyLayerTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoSyncTaskResponseBodyLayerTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactDigest, artifactDigest_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SyncLayerTaskId, syncLayerTaskId_);
      DARABONBA_PTR_TO_JSON(SyncedSize, syncedSize_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoSyncTaskResponseBodyLayerTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactDigest, artifactDigest_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SyncLayerTaskId, syncLayerTaskId_);
      DARABONBA_PTR_FROM_JSON(SyncedSize, syncedSize_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetRepoSyncTaskResponseBodyLayerTasks() = default ;
    GetRepoSyncTaskResponseBodyLayerTasks(const GetRepoSyncTaskResponseBodyLayerTasks &) = default ;
    GetRepoSyncTaskResponseBodyLayerTasks(GetRepoSyncTaskResponseBodyLayerTasks &&) = default ;
    GetRepoSyncTaskResponseBodyLayerTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoSyncTaskResponseBodyLayerTasks() = default ;
    GetRepoSyncTaskResponseBodyLayerTasks& operator=(const GetRepoSyncTaskResponseBodyLayerTasks &) = default ;
    GetRepoSyncTaskResponseBodyLayerTasks& operator=(GetRepoSyncTaskResponseBodyLayerTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactDigest_ != nullptr
        && this->digest_ != nullptr && this->size_ != nullptr && this->syncLayerTaskId_ != nullptr && this->syncedSize_ != nullptr && this->taskStatus_ != nullptr; };
    // artifactDigest Field Functions 
    bool hasArtifactDigest() const { return this->artifactDigest_ != nullptr;};
    void deleteArtifactDigest() { this->artifactDigest_ = nullptr;};
    inline string artifactDigest() const { DARABONBA_PTR_GET_DEFAULT(artifactDigest_, "") };
    inline GetRepoSyncTaskResponseBodyLayerTasks& setArtifactDigest(string artifactDigest) { DARABONBA_PTR_SET_VALUE(artifactDigest_, artifactDigest) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline GetRepoSyncTaskResponseBodyLayerTasks& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetRepoSyncTaskResponseBodyLayerTasks& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // syncLayerTaskId Field Functions 
    bool hasSyncLayerTaskId() const { return this->syncLayerTaskId_ != nullptr;};
    void deleteSyncLayerTaskId() { this->syncLayerTaskId_ = nullptr;};
    inline string syncLayerTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncLayerTaskId_, "") };
    inline GetRepoSyncTaskResponseBodyLayerTasks& setSyncLayerTaskId(string syncLayerTaskId) { DARABONBA_PTR_SET_VALUE(syncLayerTaskId_, syncLayerTaskId) };


    // syncedSize Field Functions 
    bool hasSyncedSize() const { return this->syncedSize_ != nullptr;};
    void deleteSyncedSize() { this->syncedSize_ = nullptr;};
    inline int64_t syncedSize() const { DARABONBA_PTR_GET_DEFAULT(syncedSize_, 0L) };
    inline GetRepoSyncTaskResponseBodyLayerTasks& setSyncedSize(int64_t syncedSize) { DARABONBA_PTR_SET_VALUE(syncedSize_, syncedSize) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetRepoSyncTaskResponseBodyLayerTasks& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The digest of the artifact.
    std::shared_ptr<string> artifactDigest_ = nullptr;
    // The digest of the image layer.
    std::shared_ptr<string> digest_ = nullptr;
    // The size of synchronized image layers.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The ID of the synchronization task for the image layer.
    std::shared_ptr<string> syncLayerTaskId_ = nullptr;
    // The size of the image layer that is synchronized.
    std::shared_ptr<int64_t> syncedSize_ = nullptr;
    // The status of the synchronization task. Valid values:
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
