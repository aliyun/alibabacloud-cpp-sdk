// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOSYNCTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOSYNCTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoSyncTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoSyncTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CrossUser, crossUser_);
      DARABONBA_PTR_TO_JSON(ImageFrom, imageFrom_);
      DARABONBA_PTR_TO_JSON(ImageTo, imageTo_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(LayerTasks, layerTasks_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncBatchTaskId, syncBatchTaskId_);
      DARABONBA_PTR_TO_JSON(SyncRuleId, syncRuleId_);
      DARABONBA_PTR_TO_JSON(SyncTaskId, syncTaskId_);
      DARABONBA_PTR_TO_JSON(SyncTransAccelerate, syncTransAccelerate_);
      DARABONBA_PTR_TO_JSON(SyncedSize, syncedSize_);
      DARABONBA_PTR_TO_JSON(TaskIssue, taskIssue_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskTrigger, taskTrigger_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoSyncTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CrossUser, crossUser_);
      DARABONBA_PTR_FROM_JSON(ImageFrom, imageFrom_);
      DARABONBA_PTR_FROM_JSON(ImageTo, imageTo_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(LayerTasks, layerTasks_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncBatchTaskId, syncBatchTaskId_);
      DARABONBA_PTR_FROM_JSON(SyncRuleId, syncRuleId_);
      DARABONBA_PTR_FROM_JSON(SyncTaskId, syncTaskId_);
      DARABONBA_PTR_FROM_JSON(SyncTransAccelerate, syncTransAccelerate_);
      DARABONBA_PTR_FROM_JSON(SyncedSize, syncedSize_);
      DARABONBA_PTR_FROM_JSON(TaskIssue, taskIssue_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskTrigger, taskTrigger_);
    };
    GetRepoSyncTaskResponseBody() = default ;
    GetRepoSyncTaskResponseBody(const GetRepoSyncTaskResponseBody &) = default ;
    GetRepoSyncTaskResponseBody(GetRepoSyncTaskResponseBody &&) = default ;
    GetRepoSyncTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoSyncTaskResponseBody() = default ;
    GetRepoSyncTaskResponseBody& operator=(const GetRepoSyncTaskResponseBody &) = default ;
    GetRepoSyncTaskResponseBody& operator=(GetRepoSyncTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LayerTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LayerTasks& obj) { 
        DARABONBA_PTR_TO_JSON(ArtifactDigest, artifactDigest_);
        DARABONBA_PTR_TO_JSON(Digest, digest_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(SyncLayerTaskId, syncLayerTaskId_);
        DARABONBA_PTR_TO_JSON(SyncedSize, syncedSize_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, LayerTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(ArtifactDigest, artifactDigest_);
        DARABONBA_PTR_FROM_JSON(Digest, digest_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(SyncLayerTaskId, syncLayerTaskId_);
        DARABONBA_PTR_FROM_JSON(SyncedSize, syncedSize_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      };
      LayerTasks() = default ;
      LayerTasks(const LayerTasks &) = default ;
      LayerTasks(LayerTasks &&) = default ;
      LayerTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LayerTasks() = default ;
      LayerTasks& operator=(const LayerTasks &) = default ;
      LayerTasks& operator=(LayerTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->artifactDigest_ == nullptr
        && this->digest_ == nullptr && this->size_ == nullptr && this->syncLayerTaskId_ == nullptr && this->syncedSize_ == nullptr && this->taskStatus_ == nullptr; };
      // artifactDigest Field Functions 
      bool hasArtifactDigest() const { return this->artifactDigest_ != nullptr;};
      void deleteArtifactDigest() { this->artifactDigest_ = nullptr;};
      inline string getArtifactDigest() const { DARABONBA_PTR_GET_DEFAULT(artifactDigest_, "") };
      inline LayerTasks& setArtifactDigest(string artifactDigest) { DARABONBA_PTR_SET_VALUE(artifactDigest_, artifactDigest) };


      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline LayerTasks& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline LayerTasks& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // syncLayerTaskId Field Functions 
      bool hasSyncLayerTaskId() const { return this->syncLayerTaskId_ != nullptr;};
      void deleteSyncLayerTaskId() { this->syncLayerTaskId_ = nullptr;};
      inline string getSyncLayerTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncLayerTaskId_, "") };
      inline LayerTasks& setSyncLayerTaskId(string syncLayerTaskId) { DARABONBA_PTR_SET_VALUE(syncLayerTaskId_, syncLayerTaskId) };


      // syncedSize Field Functions 
      bool hasSyncedSize() const { return this->syncedSize_ != nullptr;};
      void deleteSyncedSize() { this->syncedSize_ = nullptr;};
      inline int64_t getSyncedSize() const { DARABONBA_PTR_GET_DEFAULT(syncedSize_, 0L) };
      inline LayerTasks& setSyncedSize(int64_t syncedSize) { DARABONBA_PTR_SET_VALUE(syncedSize_, syncedSize) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline LayerTasks& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      // The digest of the artifact.
      shared_ptr<string> artifactDigest_ {};
      // The digest of the image layer.
      shared_ptr<string> digest_ {};
      // The size of synchronized image layers.
      shared_ptr<int64_t> size_ {};
      // The ID of the synchronization task for the image layer.
      shared_ptr<string> syncLayerTaskId_ {};
      // The size of the image layer that is synchronized.
      shared_ptr<int64_t> syncedSize_ {};
      // The status of the synchronization task. Valid values:
      shared_ptr<string> taskStatus_ {};
    };

    class ImageTo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageTo& obj) { 
        DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
      };
      friend void from_json(const Darabonba::Json& j, ImageTo& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
      };
      ImageTo() = default ;
      ImageTo(const ImageTo &) = default ;
      ImageTo(ImageTo &&) = default ;
      ImageTo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageTo() = default ;
      ImageTo& operator=(const ImageTo &) = default ;
      ImageTo& operator=(ImageTo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageTag_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->repoName_ == nullptr && this->repoNamespaceName_ == nullptr; };
      // imageTag Field Functions 
      bool hasImageTag() const { return this->imageTag_ != nullptr;};
      void deleteImageTag() { this->imageTag_ = nullptr;};
      inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
      inline ImageTo& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ImageTo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ImageTo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline ImageTo& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespaceName Field Functions 
      bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
      void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
      inline string getRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
      inline ImageTo& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


    protected:
      // The tag of the image.
      shared_ptr<string> imageTag_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The name of the namespace.
      shared_ptr<string> repoNamespaceName_ {};
    };

    class ImageFrom : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageFrom& obj) { 
        DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
      };
      friend void from_json(const Darabonba::Json& j, ImageFrom& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
      };
      ImageFrom() = default ;
      ImageFrom(const ImageFrom &) = default ;
      ImageFrom(ImageFrom &&) = default ;
      ImageFrom(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageFrom() = default ;
      ImageFrom& operator=(const ImageFrom &) = default ;
      ImageFrom& operator=(ImageFrom &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageTag_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->repoName_ == nullptr && this->repoNamespaceName_ == nullptr; };
      // imageTag Field Functions 
      bool hasImageTag() const { return this->imageTag_ != nullptr;};
      void deleteImageTag() { this->imageTag_ = nullptr;};
      inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
      inline ImageFrom& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ImageFrom& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ImageFrom& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline ImageFrom& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespaceName Field Functions 
      bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
      void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
      inline string getRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
      inline ImageFrom& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


    protected:
      // The tag of the image.
      shared_ptr<string> imageTag_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The name of the namespace.
      shared_ptr<string> repoNamespaceName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->crossUser_ == nullptr && this->imageFrom_ == nullptr && this->imageTo_ == nullptr && this->isSuccess_ == nullptr && this->layerTasks_ == nullptr
        && this->progress_ == nullptr && this->requestId_ == nullptr && this->syncBatchTaskId_ == nullptr && this->syncRuleId_ == nullptr && this->syncTaskId_ == nullptr
        && this->syncTransAccelerate_ == nullptr && this->syncedSize_ == nullptr && this->taskIssue_ == nullptr && this->taskStatus_ == nullptr && this->taskTrigger_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRepoSyncTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // crossUser Field Functions 
    bool hasCrossUser() const { return this->crossUser_ != nullptr;};
    void deleteCrossUser() { this->crossUser_ = nullptr;};
    inline bool getCrossUser() const { DARABONBA_PTR_GET_DEFAULT(crossUser_, false) };
    inline GetRepoSyncTaskResponseBody& setCrossUser(bool crossUser) { DARABONBA_PTR_SET_VALUE(crossUser_, crossUser) };


    // imageFrom Field Functions 
    bool hasImageFrom() const { return this->imageFrom_ != nullptr;};
    void deleteImageFrom() { this->imageFrom_ = nullptr;};
    inline const GetRepoSyncTaskResponseBody::ImageFrom & getImageFrom() const { DARABONBA_PTR_GET_CONST(imageFrom_, GetRepoSyncTaskResponseBody::ImageFrom) };
    inline GetRepoSyncTaskResponseBody::ImageFrom getImageFrom() { DARABONBA_PTR_GET(imageFrom_, GetRepoSyncTaskResponseBody::ImageFrom) };
    inline GetRepoSyncTaskResponseBody& setImageFrom(const GetRepoSyncTaskResponseBody::ImageFrom & imageFrom) { DARABONBA_PTR_SET_VALUE(imageFrom_, imageFrom) };
    inline GetRepoSyncTaskResponseBody& setImageFrom(GetRepoSyncTaskResponseBody::ImageFrom && imageFrom) { DARABONBA_PTR_SET_RVALUE(imageFrom_, imageFrom) };


    // imageTo Field Functions 
    bool hasImageTo() const { return this->imageTo_ != nullptr;};
    void deleteImageTo() { this->imageTo_ = nullptr;};
    inline const GetRepoSyncTaskResponseBody::ImageTo & getImageTo() const { DARABONBA_PTR_GET_CONST(imageTo_, GetRepoSyncTaskResponseBody::ImageTo) };
    inline GetRepoSyncTaskResponseBody::ImageTo getImageTo() { DARABONBA_PTR_GET(imageTo_, GetRepoSyncTaskResponseBody::ImageTo) };
    inline GetRepoSyncTaskResponseBody& setImageTo(const GetRepoSyncTaskResponseBody::ImageTo & imageTo) { DARABONBA_PTR_SET_VALUE(imageTo_, imageTo) };
    inline GetRepoSyncTaskResponseBody& setImageTo(GetRepoSyncTaskResponseBody::ImageTo && imageTo) { DARABONBA_PTR_SET_RVALUE(imageTo_, imageTo) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetRepoSyncTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // layerTasks Field Functions 
    bool hasLayerTasks() const { return this->layerTasks_ != nullptr;};
    void deleteLayerTasks() { this->layerTasks_ = nullptr;};
    inline const vector<GetRepoSyncTaskResponseBody::LayerTasks> & getLayerTasks() const { DARABONBA_PTR_GET_CONST(layerTasks_, vector<GetRepoSyncTaskResponseBody::LayerTasks>) };
    inline vector<GetRepoSyncTaskResponseBody::LayerTasks> getLayerTasks() { DARABONBA_PTR_GET(layerTasks_, vector<GetRepoSyncTaskResponseBody::LayerTasks>) };
    inline GetRepoSyncTaskResponseBody& setLayerTasks(const vector<GetRepoSyncTaskResponseBody::LayerTasks> & layerTasks) { DARABONBA_PTR_SET_VALUE(layerTasks_, layerTasks) };
    inline GetRepoSyncTaskResponseBody& setLayerTasks(vector<GetRepoSyncTaskResponseBody::LayerTasks> && layerTasks) { DARABONBA_PTR_SET_RVALUE(layerTasks_, layerTasks) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline GetRepoSyncTaskResponseBody& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRepoSyncTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncBatchTaskId Field Functions 
    bool hasSyncBatchTaskId() const { return this->syncBatchTaskId_ != nullptr;};
    void deleteSyncBatchTaskId() { this->syncBatchTaskId_ = nullptr;};
    inline string getSyncBatchTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncBatchTaskId_, "") };
    inline GetRepoSyncTaskResponseBody& setSyncBatchTaskId(string syncBatchTaskId) { DARABONBA_PTR_SET_VALUE(syncBatchTaskId_, syncBatchTaskId) };


    // syncRuleId Field Functions 
    bool hasSyncRuleId() const { return this->syncRuleId_ != nullptr;};
    void deleteSyncRuleId() { this->syncRuleId_ = nullptr;};
    inline string getSyncRuleId() const { DARABONBA_PTR_GET_DEFAULT(syncRuleId_, "") };
    inline GetRepoSyncTaskResponseBody& setSyncRuleId(string syncRuleId) { DARABONBA_PTR_SET_VALUE(syncRuleId_, syncRuleId) };


    // syncTaskId Field Functions 
    bool hasSyncTaskId() const { return this->syncTaskId_ != nullptr;};
    void deleteSyncTaskId() { this->syncTaskId_ = nullptr;};
    inline string getSyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncTaskId_, "") };
    inline GetRepoSyncTaskResponseBody& setSyncTaskId(string syncTaskId) { DARABONBA_PTR_SET_VALUE(syncTaskId_, syncTaskId) };


    // syncTransAccelerate Field Functions 
    bool hasSyncTransAccelerate() const { return this->syncTransAccelerate_ != nullptr;};
    void deleteSyncTransAccelerate() { this->syncTransAccelerate_ = nullptr;};
    inline bool getSyncTransAccelerate() const { DARABONBA_PTR_GET_DEFAULT(syncTransAccelerate_, false) };
    inline GetRepoSyncTaskResponseBody& setSyncTransAccelerate(bool syncTransAccelerate) { DARABONBA_PTR_SET_VALUE(syncTransAccelerate_, syncTransAccelerate) };


    // syncedSize Field Functions 
    bool hasSyncedSize() const { return this->syncedSize_ != nullptr;};
    void deleteSyncedSize() { this->syncedSize_ = nullptr;};
    inline int64_t getSyncedSize() const { DARABONBA_PTR_GET_DEFAULT(syncedSize_, 0L) };
    inline GetRepoSyncTaskResponseBody& setSyncedSize(int64_t syncedSize) { DARABONBA_PTR_SET_VALUE(syncedSize_, syncedSize) };


    // taskIssue Field Functions 
    bool hasTaskIssue() const { return this->taskIssue_ != nullptr;};
    void deleteTaskIssue() { this->taskIssue_ = nullptr;};
    inline string getTaskIssue() const { DARABONBA_PTR_GET_DEFAULT(taskIssue_, "") };
    inline GetRepoSyncTaskResponseBody& setTaskIssue(string taskIssue) { DARABONBA_PTR_SET_VALUE(taskIssue_, taskIssue) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetRepoSyncTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskTrigger Field Functions 
    bool hasTaskTrigger() const { return this->taskTrigger_ != nullptr;};
    void deleteTaskTrigger() { this->taskTrigger_ = nullptr;};
    inline string getTaskTrigger() const { DARABONBA_PTR_GET_DEFAULT(taskTrigger_, "") };
    inline GetRepoSyncTaskResponseBody& setTaskTrigger(string taskTrigger) { DARABONBA_PTR_SET_VALUE(taskTrigger_, taskTrigger) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the synchronization task is performed across Alibaba Cloud accounts.
    shared_ptr<bool> crossUser_ {};
    // The source address of the image.
    shared_ptr<GetRepoSyncTaskResponseBody::ImageFrom> imageFrom_ {};
    // The destination address of the image.
    shared_ptr<GetRepoSyncTaskResponseBody::ImageTo> imageTo_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The synchronization tasks for the image layer.
    shared_ptr<vector<GetRepoSyncTaskResponseBody::LayerTasks>> layerTasks_ {};
    // The synchronization progress. Valid values:
    // 
    // *   `0`: The synchronization starts or failed.
    // *   `1`: The synchronization is successful.
    shared_ptr<int64_t> progress_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the synchronization task in which multiple images are synchronized at a time.
    shared_ptr<string> syncBatchTaskId_ {};
    // The ID of the synchronization rule.
    shared_ptr<string> syncRuleId_ {};
    // The ID of the synchronization task.
    shared_ptr<string> syncTaskId_ {};
    // Indicates whether transfer acceleration is enabled in the synchronization process.
    shared_ptr<bool> syncTransAccelerate_ {};
    // The size of the image layer that is synchronized. Unit: bytes.
    shared_ptr<int64_t> syncedSize_ {};
    // The error message that is returned if the synchronization task fails.
    // 
    // >  The system uses this parameter to return an error message if the synchronization task fails.
    // 
    // Valid values:
    // 
    // *   OSS_POLICY_UNAUTHORIZED: Container Registry is not granted permissions to use Object Storage Service (OSS).
    // *   TAG_CONFLICT: The destination repository contains an image that has the same tag as the source image, and image tag immutability is enabled for the destination repository.
    // *   UNSUPPORTED_FORMAT: The manifest and config formats of the image to be synchronized are not supported.
    // *   INTERNAL_ERROR: The synchronization task failed due to internal issues on the server.
    // *   NETWORK_ERROR: The synchronization task failed due to unstable network connection.
    // *   DATA_LENGTH_EXCEEDED: The manifest or config of the image is oversized.
    shared_ptr<string> taskIssue_ {};
    // The status of the task. Valid values:
    shared_ptr<string> taskStatus_ {};
    // The policy that is used to trigger the synchronization task.
    shared_ptr<string> taskTrigger_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
