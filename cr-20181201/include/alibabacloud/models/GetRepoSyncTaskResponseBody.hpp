// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOSYNCTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOSYNCTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRepoSyncTaskResponseBodyImageFrom.hpp>
#include <alibabacloud/models/GetRepoSyncTaskResponseBodyImageTo.hpp>
#include <vector>
#include <alibabacloud/models/GetRepoSyncTaskResponseBodyLayerTasks.hpp>
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
    virtual bool empty() const override { this->code_ != nullptr
        && this->crossUser_ != nullptr && this->imageFrom_ != nullptr && this->imageTo_ != nullptr && this->isSuccess_ != nullptr && this->layerTasks_ != nullptr
        && this->progress_ != nullptr && this->requestId_ != nullptr && this->syncBatchTaskId_ != nullptr && this->syncRuleId_ != nullptr && this->syncTaskId_ != nullptr
        && this->syncTransAccelerate_ != nullptr && this->syncedSize_ != nullptr && this->taskIssue_ != nullptr && this->taskStatus_ != nullptr && this->taskTrigger_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRepoSyncTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // crossUser Field Functions 
    bool hasCrossUser() const { return this->crossUser_ != nullptr;};
    void deleteCrossUser() { this->crossUser_ = nullptr;};
    inline bool crossUser() const { DARABONBA_PTR_GET_DEFAULT(crossUser_, false) };
    inline GetRepoSyncTaskResponseBody& setCrossUser(bool crossUser) { DARABONBA_PTR_SET_VALUE(crossUser_, crossUser) };


    // imageFrom Field Functions 
    bool hasImageFrom() const { return this->imageFrom_ != nullptr;};
    void deleteImageFrom() { this->imageFrom_ = nullptr;};
    inline const GetRepoSyncTaskResponseBodyImageFrom & imageFrom() const { DARABONBA_PTR_GET_CONST(imageFrom_, GetRepoSyncTaskResponseBodyImageFrom) };
    inline GetRepoSyncTaskResponseBodyImageFrom imageFrom() { DARABONBA_PTR_GET(imageFrom_, GetRepoSyncTaskResponseBodyImageFrom) };
    inline GetRepoSyncTaskResponseBody& setImageFrom(const GetRepoSyncTaskResponseBodyImageFrom & imageFrom) { DARABONBA_PTR_SET_VALUE(imageFrom_, imageFrom) };
    inline GetRepoSyncTaskResponseBody& setImageFrom(GetRepoSyncTaskResponseBodyImageFrom && imageFrom) { DARABONBA_PTR_SET_RVALUE(imageFrom_, imageFrom) };


    // imageTo Field Functions 
    bool hasImageTo() const { return this->imageTo_ != nullptr;};
    void deleteImageTo() { this->imageTo_ = nullptr;};
    inline const GetRepoSyncTaskResponseBodyImageTo & imageTo() const { DARABONBA_PTR_GET_CONST(imageTo_, GetRepoSyncTaskResponseBodyImageTo) };
    inline GetRepoSyncTaskResponseBodyImageTo imageTo() { DARABONBA_PTR_GET(imageTo_, GetRepoSyncTaskResponseBodyImageTo) };
    inline GetRepoSyncTaskResponseBody& setImageTo(const GetRepoSyncTaskResponseBodyImageTo & imageTo) { DARABONBA_PTR_SET_VALUE(imageTo_, imageTo) };
    inline GetRepoSyncTaskResponseBody& setImageTo(GetRepoSyncTaskResponseBodyImageTo && imageTo) { DARABONBA_PTR_SET_RVALUE(imageTo_, imageTo) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetRepoSyncTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // layerTasks Field Functions 
    bool hasLayerTasks() const { return this->layerTasks_ != nullptr;};
    void deleteLayerTasks() { this->layerTasks_ = nullptr;};
    inline const vector<GetRepoSyncTaskResponseBodyLayerTasks> & layerTasks() const { DARABONBA_PTR_GET_CONST(layerTasks_, vector<GetRepoSyncTaskResponseBodyLayerTasks>) };
    inline vector<GetRepoSyncTaskResponseBodyLayerTasks> layerTasks() { DARABONBA_PTR_GET(layerTasks_, vector<GetRepoSyncTaskResponseBodyLayerTasks>) };
    inline GetRepoSyncTaskResponseBody& setLayerTasks(const vector<GetRepoSyncTaskResponseBodyLayerTasks> & layerTasks) { DARABONBA_PTR_SET_VALUE(layerTasks_, layerTasks) };
    inline GetRepoSyncTaskResponseBody& setLayerTasks(vector<GetRepoSyncTaskResponseBodyLayerTasks> && layerTasks) { DARABONBA_PTR_SET_RVALUE(layerTasks_, layerTasks) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline GetRepoSyncTaskResponseBody& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRepoSyncTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncBatchTaskId Field Functions 
    bool hasSyncBatchTaskId() const { return this->syncBatchTaskId_ != nullptr;};
    void deleteSyncBatchTaskId() { this->syncBatchTaskId_ = nullptr;};
    inline string syncBatchTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncBatchTaskId_, "") };
    inline GetRepoSyncTaskResponseBody& setSyncBatchTaskId(string syncBatchTaskId) { DARABONBA_PTR_SET_VALUE(syncBatchTaskId_, syncBatchTaskId) };


    // syncRuleId Field Functions 
    bool hasSyncRuleId() const { return this->syncRuleId_ != nullptr;};
    void deleteSyncRuleId() { this->syncRuleId_ = nullptr;};
    inline string syncRuleId() const { DARABONBA_PTR_GET_DEFAULT(syncRuleId_, "") };
    inline GetRepoSyncTaskResponseBody& setSyncRuleId(string syncRuleId) { DARABONBA_PTR_SET_VALUE(syncRuleId_, syncRuleId) };


    // syncTaskId Field Functions 
    bool hasSyncTaskId() const { return this->syncTaskId_ != nullptr;};
    void deleteSyncTaskId() { this->syncTaskId_ = nullptr;};
    inline string syncTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncTaskId_, "") };
    inline GetRepoSyncTaskResponseBody& setSyncTaskId(string syncTaskId) { DARABONBA_PTR_SET_VALUE(syncTaskId_, syncTaskId) };


    // syncTransAccelerate Field Functions 
    bool hasSyncTransAccelerate() const { return this->syncTransAccelerate_ != nullptr;};
    void deleteSyncTransAccelerate() { this->syncTransAccelerate_ = nullptr;};
    inline bool syncTransAccelerate() const { DARABONBA_PTR_GET_DEFAULT(syncTransAccelerate_, false) };
    inline GetRepoSyncTaskResponseBody& setSyncTransAccelerate(bool syncTransAccelerate) { DARABONBA_PTR_SET_VALUE(syncTransAccelerate_, syncTransAccelerate) };


    // syncedSize Field Functions 
    bool hasSyncedSize() const { return this->syncedSize_ != nullptr;};
    void deleteSyncedSize() { this->syncedSize_ = nullptr;};
    inline int64_t syncedSize() const { DARABONBA_PTR_GET_DEFAULT(syncedSize_, 0L) };
    inline GetRepoSyncTaskResponseBody& setSyncedSize(int64_t syncedSize) { DARABONBA_PTR_SET_VALUE(syncedSize_, syncedSize) };


    // taskIssue Field Functions 
    bool hasTaskIssue() const { return this->taskIssue_ != nullptr;};
    void deleteTaskIssue() { this->taskIssue_ = nullptr;};
    inline string taskIssue() const { DARABONBA_PTR_GET_DEFAULT(taskIssue_, "") };
    inline GetRepoSyncTaskResponseBody& setTaskIssue(string taskIssue) { DARABONBA_PTR_SET_VALUE(taskIssue_, taskIssue) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetRepoSyncTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskTrigger Field Functions 
    bool hasTaskTrigger() const { return this->taskTrigger_ != nullptr;};
    void deleteTaskTrigger() { this->taskTrigger_ = nullptr;};
    inline string taskTrigger() const { DARABONBA_PTR_GET_DEFAULT(taskTrigger_, "") };
    inline GetRepoSyncTaskResponseBody& setTaskTrigger(string taskTrigger) { DARABONBA_PTR_SET_VALUE(taskTrigger_, taskTrigger) };


  protected:
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the synchronization task is performed across Alibaba Cloud accounts.
    std::shared_ptr<bool> crossUser_ = nullptr;
    // The source address of the image.
    std::shared_ptr<GetRepoSyncTaskResponseBodyImageFrom> imageFrom_ = nullptr;
    // The destination address of the image.
    std::shared_ptr<GetRepoSyncTaskResponseBodyImageTo> imageTo_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The synchronization tasks for the image layer.
    std::shared_ptr<vector<GetRepoSyncTaskResponseBodyLayerTasks>> layerTasks_ = nullptr;
    // The synchronization progress. Valid values:
    // 
    // *   `0`: The synchronization starts or failed.
    // *   `1`: The synchronization is successful.
    std::shared_ptr<int64_t> progress_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the synchronization task in which multiple images are synchronized at a time.
    std::shared_ptr<string> syncBatchTaskId_ = nullptr;
    // The ID of the synchronization rule.
    std::shared_ptr<string> syncRuleId_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<string> syncTaskId_ = nullptr;
    // Indicates whether transfer acceleration is enabled in the synchronization process.
    std::shared_ptr<bool> syncTransAccelerate_ = nullptr;
    // The size of the image layer that is synchronized. Unit: bytes.
    std::shared_ptr<int64_t> syncedSize_ = nullptr;
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
    std::shared_ptr<string> taskIssue_ = nullptr;
    // The status of the task. Valid values:
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The policy that is used to trigger the synchronization task.
    std::shared_ptr<string> taskTrigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
