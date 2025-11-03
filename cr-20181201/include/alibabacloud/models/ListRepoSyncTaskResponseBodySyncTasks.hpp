// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSYNCTASKRESPONSEBODYSYNCTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSYNCTASKRESPONSEBODYSYNCTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRepoSyncTaskResponseBodySyncTasksImageFrom.hpp>
#include <alibabacloud/models/ListRepoSyncTaskResponseBodySyncTasksImageTo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoSyncTaskResponseBodySyncTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoSyncTaskResponseBodySyncTasks& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListRepoSyncTaskResponseBodySyncTasks& obj) { 
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
    ListRepoSyncTaskResponseBodySyncTasks() = default ;
    ListRepoSyncTaskResponseBodySyncTasks(const ListRepoSyncTaskResponseBodySyncTasks &) = default ;
    ListRepoSyncTaskResponseBodySyncTasks(ListRepoSyncTaskResponseBodySyncTasks &&) = default ;
    ListRepoSyncTaskResponseBodySyncTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoSyncTaskResponseBodySyncTasks() = default ;
    ListRepoSyncTaskResponseBodySyncTasks& operator=(const ListRepoSyncTaskResponseBodySyncTasks &) = default ;
    ListRepoSyncTaskResponseBodySyncTasks& operator=(ListRepoSyncTaskResponseBodySyncTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->crossUser_ == nullptr && return this->customLink_ == nullptr && return this->imageFrom_ == nullptr && return this->imageTo_ == nullptr && return this->modifedTime_ == nullptr
        && return this->syncBatchTaskId_ == nullptr && return this->syncRuleId_ == nullptr && return this->syncTaskId_ == nullptr && return this->syncTransAccelerate_ == nullptr && return this->taskIssue_ == nullptr
        && return this->taskStatus_ == nullptr && return this->taskTrigger_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListRepoSyncTaskResponseBodySyncTasks& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossUser Field Functions 
    bool hasCrossUser() const { return this->crossUser_ != nullptr;};
    void deleteCrossUser() { this->crossUser_ = nullptr;};
    inline bool crossUser() const { DARABONBA_PTR_GET_DEFAULT(crossUser_, false) };
    inline ListRepoSyncTaskResponseBodySyncTasks& setCrossUser(bool crossUser) { DARABONBA_PTR_SET_VALUE(crossUser_, crossUser) };


    // customLink Field Functions 
    bool hasCustomLink() const { return this->customLink_ != nullptr;};
    void deleteCustomLink() { this->customLink_ = nullptr;};
    inline bool customLink() const { DARABONBA_PTR_GET_DEFAULT(customLink_, false) };
    inline ListRepoSyncTaskResponseBodySyncTasks& setCustomLink(bool customLink) { DARABONBA_PTR_SET_VALUE(customLink_, customLink) };


    // imageFrom Field Functions 
    bool hasImageFrom() const { return this->imageFrom_ != nullptr;};
    void deleteImageFrom() { this->imageFrom_ = nullptr;};
    inline const Models::ListRepoSyncTaskResponseBodySyncTasksImageFrom & imageFrom() const { DARABONBA_PTR_GET_CONST(imageFrom_, Models::ListRepoSyncTaskResponseBodySyncTasksImageFrom) };
    inline Models::ListRepoSyncTaskResponseBodySyncTasksImageFrom imageFrom() { DARABONBA_PTR_GET(imageFrom_, Models::ListRepoSyncTaskResponseBodySyncTasksImageFrom) };
    inline ListRepoSyncTaskResponseBodySyncTasks& setImageFrom(const Models::ListRepoSyncTaskResponseBodySyncTasksImageFrom & imageFrom) { DARABONBA_PTR_SET_VALUE(imageFrom_, imageFrom) };
    inline ListRepoSyncTaskResponseBodySyncTasks& setImageFrom(Models::ListRepoSyncTaskResponseBodySyncTasksImageFrom && imageFrom) { DARABONBA_PTR_SET_RVALUE(imageFrom_, imageFrom) };


    // imageTo Field Functions 
    bool hasImageTo() const { return this->imageTo_ != nullptr;};
    void deleteImageTo() { this->imageTo_ = nullptr;};
    inline const Models::ListRepoSyncTaskResponseBodySyncTasksImageTo & imageTo() const { DARABONBA_PTR_GET_CONST(imageTo_, Models::ListRepoSyncTaskResponseBodySyncTasksImageTo) };
    inline Models::ListRepoSyncTaskResponseBodySyncTasksImageTo imageTo() { DARABONBA_PTR_GET(imageTo_, Models::ListRepoSyncTaskResponseBodySyncTasksImageTo) };
    inline ListRepoSyncTaskResponseBodySyncTasks& setImageTo(const Models::ListRepoSyncTaskResponseBodySyncTasksImageTo & imageTo) { DARABONBA_PTR_SET_VALUE(imageTo_, imageTo) };
    inline ListRepoSyncTaskResponseBodySyncTasks& setImageTo(Models::ListRepoSyncTaskResponseBodySyncTasksImageTo && imageTo) { DARABONBA_PTR_SET_RVALUE(imageTo_, imageTo) };


    // modifedTime Field Functions 
    bool hasModifedTime() const { return this->modifedTime_ != nullptr;};
    void deleteModifedTime() { this->modifedTime_ = nullptr;};
    inline int64_t modifedTime() const { DARABONBA_PTR_GET_DEFAULT(modifedTime_, 0L) };
    inline ListRepoSyncTaskResponseBodySyncTasks& setModifedTime(int64_t modifedTime) { DARABONBA_PTR_SET_VALUE(modifedTime_, modifedTime) };


    // syncBatchTaskId Field Functions 
    bool hasSyncBatchTaskId() const { return this->syncBatchTaskId_ != nullptr;};
    void deleteSyncBatchTaskId() { this->syncBatchTaskId_ = nullptr;};
    inline string syncBatchTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncBatchTaskId_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasks& setSyncBatchTaskId(string syncBatchTaskId) { DARABONBA_PTR_SET_VALUE(syncBatchTaskId_, syncBatchTaskId) };


    // syncRuleId Field Functions 
    bool hasSyncRuleId() const { return this->syncRuleId_ != nullptr;};
    void deleteSyncRuleId() { this->syncRuleId_ = nullptr;};
    inline string syncRuleId() const { DARABONBA_PTR_GET_DEFAULT(syncRuleId_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasks& setSyncRuleId(string syncRuleId) { DARABONBA_PTR_SET_VALUE(syncRuleId_, syncRuleId) };


    // syncTaskId Field Functions 
    bool hasSyncTaskId() const { return this->syncTaskId_ != nullptr;};
    void deleteSyncTaskId() { this->syncTaskId_ = nullptr;};
    inline string syncTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncTaskId_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasks& setSyncTaskId(string syncTaskId) { DARABONBA_PTR_SET_VALUE(syncTaskId_, syncTaskId) };


    // syncTransAccelerate Field Functions 
    bool hasSyncTransAccelerate() const { return this->syncTransAccelerate_ != nullptr;};
    void deleteSyncTransAccelerate() { this->syncTransAccelerate_ = nullptr;};
    inline bool syncTransAccelerate() const { DARABONBA_PTR_GET_DEFAULT(syncTransAccelerate_, false) };
    inline ListRepoSyncTaskResponseBodySyncTasks& setSyncTransAccelerate(bool syncTransAccelerate) { DARABONBA_PTR_SET_VALUE(syncTransAccelerate_, syncTransAccelerate) };


    // taskIssue Field Functions 
    bool hasTaskIssue() const { return this->taskIssue_ != nullptr;};
    void deleteTaskIssue() { this->taskIssue_ = nullptr;};
    inline string taskIssue() const { DARABONBA_PTR_GET_DEFAULT(taskIssue_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasks& setTaskIssue(string taskIssue) { DARABONBA_PTR_SET_VALUE(taskIssue_, taskIssue) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasks& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskTrigger Field Functions 
    bool hasTaskTrigger() const { return this->taskTrigger_ != nullptr;};
    void deleteTaskTrigger() { this->taskTrigger_ = nullptr;};
    inline string taskTrigger() const { DARABONBA_PTR_GET_DEFAULT(taskTrigger_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasks& setTaskTrigger(string taskTrigger) { DARABONBA_PTR_SET_VALUE(taskTrigger_, taskTrigger) };


  protected:
    // The time when the synchronization task was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether the synchronization task is performed across Alibaba Cloud accounts. Valid values:
    // 
    // *   `true`: The image synchronization task is performed across accounts.
    // *   `false`: The image synchronization task is performed within the same account.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> crossUser_ = nullptr;
    // Indicates whether a custom synchronization link is used.
    std::shared_ptr<bool> customLink_ = nullptr;
    // The information about the source image.
    std::shared_ptr<Models::ListRepoSyncTaskResponseBodySyncTasksImageFrom> imageFrom_ = nullptr;
    // The information about the destination image.
    std::shared_ptr<Models::ListRepoSyncTaskResponseBodySyncTasksImageTo> imageTo_ = nullptr;
    // The time when the synchronization task was last modified.
    std::shared_ptr<int64_t> modifedTime_ = nullptr;
    // The ID of the image synchronization batch tasks, which is the same as the value of SyncRecordId in the request.
    // 
    // >  If an image meets multiple synchronization rules and multiple synchronization tasks are generated for the image, these synchronization tasks use the same SyncBatchTaskId.
    std::shared_ptr<string> syncBatchTaskId_ = nullptr;
    // The ID of the synchronization rule.
    std::shared_ptr<string> syncRuleId_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<string> syncTaskId_ = nullptr;
    // Indicates whether the synchronization transfer acceleration feature is enabled for the synchronization task.
    std::shared_ptr<bool> syncTransAccelerate_ = nullptr;
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
    std::shared_ptr<string> taskIssue_ = nullptr;
    // The status of the synchronization task.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The policy that is configured to trigger the synchronization task. Valid values:
    // 
    // *   `PASSIVE`: automatically triggers the synchronization task.
    // *   `INITIATIVE`: manually triggers the synchronization task.
    // 
    // Default value: `PASSIVE`.
    std::shared_ptr<string> taskTrigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
