// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSYNCTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSYNCTASKRESPONSEBODY_HPP_
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
  class ListRepoSyncTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoSyncTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncTasks, syncTasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoSyncTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncTasks, syncTasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRepoSyncTaskResponseBody() = default ;
    ListRepoSyncTaskResponseBody(const ListRepoSyncTaskResponseBody &) = default ;
    ListRepoSyncTaskResponseBody(ListRepoSyncTaskResponseBody &&) = default ;
    ListRepoSyncTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoSyncTaskResponseBody() = default ;
    ListRepoSyncTaskResponseBody& operator=(const ListRepoSyncTaskResponseBody &) = default ;
    ListRepoSyncTaskResponseBody& operator=(ListRepoSyncTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SyncTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SyncTasks& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CrossUser, crossUser_);
        DARABONBA_PTR_TO_JSON(CustomLink, customLink_);
        DARABONBA_PTR_TO_JSON(ImageFrom, imageFrom_);
        DARABONBA_PTR_TO_JSON(ImageTo, imageTo_);
        DARABONBA_PTR_TO_JSON(ModifedTime, modifedTime_);
        DARABONBA_PTR_TO_JSON(SyncBatchTaskId, syncBatchTaskId_);
        DARABONBA_PTR_TO_JSON(SyncRuleId, syncRuleId_);
        DARABONBA_PTR_TO_JSON(SyncTaskId, syncTaskId_);
        DARABONBA_PTR_TO_JSON(SyncTransAccelerate, syncTransAccelerate_);
        DARABONBA_PTR_TO_JSON(TaskIssue, taskIssue_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskTrigger, taskTrigger_);
      };
      friend void from_json(const Darabonba::Json& j, SyncTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CrossUser, crossUser_);
        DARABONBA_PTR_FROM_JSON(CustomLink, customLink_);
        DARABONBA_PTR_FROM_JSON(ImageFrom, imageFrom_);
        DARABONBA_PTR_FROM_JSON(ImageTo, imageTo_);
        DARABONBA_PTR_FROM_JSON(ModifedTime, modifedTime_);
        DARABONBA_PTR_FROM_JSON(SyncBatchTaskId, syncBatchTaskId_);
        DARABONBA_PTR_FROM_JSON(SyncRuleId, syncRuleId_);
        DARABONBA_PTR_FROM_JSON(SyncTaskId, syncTaskId_);
        DARABONBA_PTR_FROM_JSON(SyncTransAccelerate, syncTransAccelerate_);
        DARABONBA_PTR_FROM_JSON(TaskIssue, taskIssue_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskTrigger, taskTrigger_);
      };
      SyncTasks() = default ;
      SyncTasks(const SyncTasks &) = default ;
      SyncTasks(SyncTasks &&) = default ;
      SyncTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SyncTasks() = default ;
      SyncTasks& operator=(const SyncTasks &) = default ;
      SyncTasks& operator=(SyncTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // The image tag.
        shared_ptr<string> imageTag_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The repository name.
        shared_ptr<string> repoName_ {};
        // The namespace to which the repository belongs.
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
        // The image tag.
        shared_ptr<string> imageTag_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The repository name.
        shared_ptr<string> repoName_ {};
        // The namespace to which the repository belongs.
        shared_ptr<string> repoNamespaceName_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->crossUser_ == nullptr && this->customLink_ == nullptr && this->imageFrom_ == nullptr && this->imageTo_ == nullptr && this->modifedTime_ == nullptr
        && this->syncBatchTaskId_ == nullptr && this->syncRuleId_ == nullptr && this->syncTaskId_ == nullptr && this->syncTransAccelerate_ == nullptr && this->taskIssue_ == nullptr
        && this->taskStatus_ == nullptr && this->taskTrigger_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline SyncTasks& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // crossUser Field Functions 
      bool hasCrossUser() const { return this->crossUser_ != nullptr;};
      void deleteCrossUser() { this->crossUser_ = nullptr;};
      inline bool getCrossUser() const { DARABONBA_PTR_GET_DEFAULT(crossUser_, false) };
      inline SyncTasks& setCrossUser(bool crossUser) { DARABONBA_PTR_SET_VALUE(crossUser_, crossUser) };


      // customLink Field Functions 
      bool hasCustomLink() const { return this->customLink_ != nullptr;};
      void deleteCustomLink() { this->customLink_ = nullptr;};
      inline bool getCustomLink() const { DARABONBA_PTR_GET_DEFAULT(customLink_, false) };
      inline SyncTasks& setCustomLink(bool customLink) { DARABONBA_PTR_SET_VALUE(customLink_, customLink) };


      // imageFrom Field Functions 
      bool hasImageFrom() const { return this->imageFrom_ != nullptr;};
      void deleteImageFrom() { this->imageFrom_ = nullptr;};
      inline const SyncTasks::ImageFrom & getImageFrom() const { DARABONBA_PTR_GET_CONST(imageFrom_, SyncTasks::ImageFrom) };
      inline SyncTasks::ImageFrom getImageFrom() { DARABONBA_PTR_GET(imageFrom_, SyncTasks::ImageFrom) };
      inline SyncTasks& setImageFrom(const SyncTasks::ImageFrom & imageFrom) { DARABONBA_PTR_SET_VALUE(imageFrom_, imageFrom) };
      inline SyncTasks& setImageFrom(SyncTasks::ImageFrom && imageFrom) { DARABONBA_PTR_SET_RVALUE(imageFrom_, imageFrom) };


      // imageTo Field Functions 
      bool hasImageTo() const { return this->imageTo_ != nullptr;};
      void deleteImageTo() { this->imageTo_ = nullptr;};
      inline const SyncTasks::ImageTo & getImageTo() const { DARABONBA_PTR_GET_CONST(imageTo_, SyncTasks::ImageTo) };
      inline SyncTasks::ImageTo getImageTo() { DARABONBA_PTR_GET(imageTo_, SyncTasks::ImageTo) };
      inline SyncTasks& setImageTo(const SyncTasks::ImageTo & imageTo) { DARABONBA_PTR_SET_VALUE(imageTo_, imageTo) };
      inline SyncTasks& setImageTo(SyncTasks::ImageTo && imageTo) { DARABONBA_PTR_SET_RVALUE(imageTo_, imageTo) };


      // modifedTime Field Functions 
      bool hasModifedTime() const { return this->modifedTime_ != nullptr;};
      void deleteModifedTime() { this->modifedTime_ = nullptr;};
      inline int64_t getModifedTime() const { DARABONBA_PTR_GET_DEFAULT(modifedTime_, 0L) };
      inline SyncTasks& setModifedTime(int64_t modifedTime) { DARABONBA_PTR_SET_VALUE(modifedTime_, modifedTime) };


      // syncBatchTaskId Field Functions 
      bool hasSyncBatchTaskId() const { return this->syncBatchTaskId_ != nullptr;};
      void deleteSyncBatchTaskId() { this->syncBatchTaskId_ = nullptr;};
      inline string getSyncBatchTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncBatchTaskId_, "") };
      inline SyncTasks& setSyncBatchTaskId(string syncBatchTaskId) { DARABONBA_PTR_SET_VALUE(syncBatchTaskId_, syncBatchTaskId) };


      // syncRuleId Field Functions 
      bool hasSyncRuleId() const { return this->syncRuleId_ != nullptr;};
      void deleteSyncRuleId() { this->syncRuleId_ = nullptr;};
      inline string getSyncRuleId() const { DARABONBA_PTR_GET_DEFAULT(syncRuleId_, "") };
      inline SyncTasks& setSyncRuleId(string syncRuleId) { DARABONBA_PTR_SET_VALUE(syncRuleId_, syncRuleId) };


      // syncTaskId Field Functions 
      bool hasSyncTaskId() const { return this->syncTaskId_ != nullptr;};
      void deleteSyncTaskId() { this->syncTaskId_ = nullptr;};
      inline string getSyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncTaskId_, "") };
      inline SyncTasks& setSyncTaskId(string syncTaskId) { DARABONBA_PTR_SET_VALUE(syncTaskId_, syncTaskId) };


      // syncTransAccelerate Field Functions 
      bool hasSyncTransAccelerate() const { return this->syncTransAccelerate_ != nullptr;};
      void deleteSyncTransAccelerate() { this->syncTransAccelerate_ = nullptr;};
      inline bool getSyncTransAccelerate() const { DARABONBA_PTR_GET_DEFAULT(syncTransAccelerate_, false) };
      inline SyncTasks& setSyncTransAccelerate(bool syncTransAccelerate) { DARABONBA_PTR_SET_VALUE(syncTransAccelerate_, syncTransAccelerate) };


      // taskIssue Field Functions 
      bool hasTaskIssue() const { return this->taskIssue_ != nullptr;};
      void deleteTaskIssue() { this->taskIssue_ = nullptr;};
      inline string getTaskIssue() const { DARABONBA_PTR_GET_DEFAULT(taskIssue_, "") };
      inline SyncTasks& setTaskIssue(string taskIssue) { DARABONBA_PTR_SET_VALUE(taskIssue_, taskIssue) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline SyncTasks& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskTrigger Field Functions 
      bool hasTaskTrigger() const { return this->taskTrigger_ != nullptr;};
      void deleteTaskTrigger() { this->taskTrigger_ = nullptr;};
      inline string getTaskTrigger() const { DARABONBA_PTR_GET_DEFAULT(taskTrigger_, "") };
      inline SyncTasks& setTaskTrigger(string taskTrigger) { DARABONBA_PTR_SET_VALUE(taskTrigger_, taskTrigger) };


    protected:
      // The time when the synchronization task was created.
      shared_ptr<int64_t> createTime_ {};
      // Indicates whether the synchronization task is performed across Alibaba Cloud accounts. Valid values:
      // 
      // *   `true`: The image synchronization task is performed across accounts.
      // *   `false`: The image synchronization task is performed within the same account.
      // 
      // Default value: `false`.
      shared_ptr<bool> crossUser_ {};
      // Indicates whether a custom synchronization link is used.
      shared_ptr<bool> customLink_ {};
      // The information about the source image.
      shared_ptr<SyncTasks::ImageFrom> imageFrom_ {};
      // The information about the destination image.
      shared_ptr<SyncTasks::ImageTo> imageTo_ {};
      // The time when the synchronization task was last modified.
      shared_ptr<int64_t> modifedTime_ {};
      // The ID of the image synchronization batch tasks, which is the same as the value of SyncRecordId in the request.
      // 
      // >  If an image meets multiple synchronization rules and multiple synchronization tasks are generated for the image, these synchronization tasks use the same SyncBatchTaskId.
      shared_ptr<string> syncBatchTaskId_ {};
      // The ID of the synchronization rule.
      shared_ptr<string> syncRuleId_ {};
      // The ID of the synchronization task.
      shared_ptr<string> syncTaskId_ {};
      // Indicates whether the synchronization transfer acceleration feature is enabled for the synchronization task.
      shared_ptr<bool> syncTransAccelerate_ {};
      // The error message that is returned if the synchronization task fails.
      // 
      // >  The system uses this parameter to return an error message if the synchronization task fails.
      // 
      // Valid value:
      // 
      // *   OSS_POLICY_UNAUTHORIZED: Container Registry is not granted permissions to access Object Storage Service (OSS).
      // *   TAG_CONFLICT: The destination repository contains an image that has the same tag as the source image, and image tag immutability is enabled for the destination repository.
      // *   UNSUPPORTED_FORMAT: The manifest or config format of the image to be synchronized is not supported.
      // *   INTERNAL_ERROR: The synchronization task failed due to internal issues on the server.
      // *   NETWORK_ERROR: The synchronization task failed due to unstable network connection.
      // *   DATA_LENGTH_EXCEEDED: The manifest or config of the image is oversized.
      shared_ptr<string> taskIssue_ {};
      // The status of the synchronization task.
      shared_ptr<string> taskStatus_ {};
      // The policy that is configured to trigger the synchronization task. Valid values:
      // 
      // *   `PASSIVE`: automatically triggers the synchronization task.
      // *   `INITIATIVE`: manually triggers the synchronization task.
      // 
      // Default value: `PASSIVE`.
      shared_ptr<string> taskTrigger_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->syncTasks_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoSyncTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoSyncTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoSyncTaskResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoSyncTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoSyncTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncTasks Field Functions 
    bool hasSyncTasks() const { return this->syncTasks_ != nullptr;};
    void deleteSyncTasks() { this->syncTasks_ = nullptr;};
    inline const vector<ListRepoSyncTaskResponseBody::SyncTasks> & getSyncTasks() const { DARABONBA_PTR_GET_CONST(syncTasks_, vector<ListRepoSyncTaskResponseBody::SyncTasks>) };
    inline vector<ListRepoSyncTaskResponseBody::SyncTasks> getSyncTasks() { DARABONBA_PTR_GET(syncTasks_, vector<ListRepoSyncTaskResponseBody::SyncTasks>) };
    inline ListRepoSyncTaskResponseBody& setSyncTasks(const vector<ListRepoSyncTaskResponseBody::SyncTasks> & syncTasks) { DARABONBA_PTR_SET_VALUE(syncTasks_, syncTasks) };
    inline ListRepoSyncTaskResponseBody& setSyncTasks(vector<ListRepoSyncTaskResponseBody::SyncTasks> && syncTasks) { DARABONBA_PTR_SET_RVALUE(syncTasks_, syncTasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRepoSyncTaskResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried synchronization tasks.
    shared_ptr<vector<ListRepoSyncTaskResponseBody::SyncTasks>> syncTasks_ {};
    // The total number of the queried synchronization tasks.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
