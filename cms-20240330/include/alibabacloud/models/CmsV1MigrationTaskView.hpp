// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CMSV1MIGRATIONTASKVIEW_HPP_
#define ALIBABACLOUD_MODELS_CMSV1MIGRATIONTASKVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CmsV1MigrationTaskView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CmsV1MigrationTaskView& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
      DARABONBA_PTR_TO_JSON(canRecover, canRecover_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(observeGroupId, observeGroupId_);
      DARABONBA_PTR_TO_JSON(originGroupId, originGroupId_);
      DARABONBA_PTR_TO_JSON(sourceReadOnly, sourceReadOnly_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(takeoverStage, takeoverStage_);
      DARABONBA_PTR_TO_JSON(targetGroupName, targetGroupName_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CmsV1MigrationTaskView& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
      DARABONBA_PTR_FROM_JSON(canRecover, canRecover_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(observeGroupId, observeGroupId_);
      DARABONBA_PTR_FROM_JSON(originGroupId, originGroupId_);
      DARABONBA_PTR_FROM_JSON(sourceReadOnly, sourceReadOnly_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(takeoverStage, takeoverStage_);
      DARABONBA_PTR_FROM_JSON(targetGroupName, targetGroupName_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    CmsV1MigrationTaskView() = default ;
    CmsV1MigrationTaskView(const CmsV1MigrationTaskView &) = default ;
    CmsV1MigrationTaskView(CmsV1MigrationTaskView &&) = default ;
    CmsV1MigrationTaskView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CmsV1MigrationTaskView() = default ;
    CmsV1MigrationTaskView& operator=(const CmsV1MigrationTaskView &) = default ;
    CmsV1MigrationTaskView& operator=(CmsV1MigrationTaskView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->canRecover_ == nullptr && this->errorMessage_ == nullptr && this->groupName_ == nullptr && this->observeGroupId_ == nullptr && this->originGroupId_ == nullptr
        && this->sourceReadOnly_ == nullptr && this->status_ == nullptr && this->takeoverStage_ == nullptr && this->targetGroupName_ == nullptr && this->taskId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline CmsV1MigrationTaskView& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // canRecover Field Functions 
    bool hasCanRecover() const { return this->canRecover_ != nullptr;};
    void deleteCanRecover() { this->canRecover_ = nullptr;};
    inline bool getCanRecover() const { DARABONBA_PTR_GET_DEFAULT(canRecover_, false) };
    inline CmsV1MigrationTaskView& setCanRecover(bool canRecover) { DARABONBA_PTR_SET_VALUE(canRecover_, canRecover) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CmsV1MigrationTaskView& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CmsV1MigrationTaskView& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // observeGroupId Field Functions 
    bool hasObserveGroupId() const { return this->observeGroupId_ != nullptr;};
    void deleteObserveGroupId() { this->observeGroupId_ = nullptr;};
    inline string getObserveGroupId() const { DARABONBA_PTR_GET_DEFAULT(observeGroupId_, "") };
    inline CmsV1MigrationTaskView& setObserveGroupId(string observeGroupId) { DARABONBA_PTR_SET_VALUE(observeGroupId_, observeGroupId) };


    // originGroupId Field Functions 
    bool hasOriginGroupId() const { return this->originGroupId_ != nullptr;};
    void deleteOriginGroupId() { this->originGroupId_ = nullptr;};
    inline string getOriginGroupId() const { DARABONBA_PTR_GET_DEFAULT(originGroupId_, "") };
    inline CmsV1MigrationTaskView& setOriginGroupId(string originGroupId) { DARABONBA_PTR_SET_VALUE(originGroupId_, originGroupId) };


    // sourceReadOnly Field Functions 
    bool hasSourceReadOnly() const { return this->sourceReadOnly_ != nullptr;};
    void deleteSourceReadOnly() { this->sourceReadOnly_ = nullptr;};
    inline bool getSourceReadOnly() const { DARABONBA_PTR_GET_DEFAULT(sourceReadOnly_, false) };
    inline CmsV1MigrationTaskView& setSourceReadOnly(bool sourceReadOnly) { DARABONBA_PTR_SET_VALUE(sourceReadOnly_, sourceReadOnly) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CmsV1MigrationTaskView& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // takeoverStage Field Functions 
    bool hasTakeoverStage() const { return this->takeoverStage_ != nullptr;};
    void deleteTakeoverStage() { this->takeoverStage_ = nullptr;};
    inline string getTakeoverStage() const { DARABONBA_PTR_GET_DEFAULT(takeoverStage_, "") };
    inline CmsV1MigrationTaskView& setTakeoverStage(string takeoverStage) { DARABONBA_PTR_SET_VALUE(takeoverStage_, takeoverStage) };


    // targetGroupName Field Functions 
    bool hasTargetGroupName() const { return this->targetGroupName_ != nullptr;};
    void deleteTargetGroupName() { this->targetGroupName_ = nullptr;};
    inline string getTargetGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetGroupName_, "") };
    inline CmsV1MigrationTaskView& setTargetGroupName(string targetGroupName) { DARABONBA_PTR_SET_VALUE(targetGroupName_, targetGroupName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CmsV1MigrationTaskView& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The migration batch ID.
    shared_ptr<string> batchId_ {};
    // Indicates whether to provide a recovery prompt for existing frozen tasks. This field does not grant authorization. Each recovery re-verifies the original bindings. Tasks with the SUCCESS status are not retried.
    shared_ptr<bool> canRecover_ {};
    // The task failure description.
    shared_ptr<string> errorMessage_ {};
    // The source application group name.
    shared_ptr<string> groupName_ {};
    // The target observation group ID.
    shared_ptr<string> observeGroupId_ {};
    // The source CloudMonitor 1.0 application group ID.
    shared_ptr<string> originGroupId_ {};
    // Indicates whether the source 1.0 group is persistently set to read-only.
    shared_ptr<bool> sourceReadOnly_ {};
    // The migration task status. Valid values: PENDING, RUNNING, SUCCESS, SKIPPED, and FAILED.
    shared_ptr<string> status_ {};
    // The takeover stage. Valid values: PENDING, SOURCE_LOCKED, TARGET_CREATED, READ_ONLY, and NEEDS_REVIEW.
    shared_ptr<string> takeoverStage_ {};
    // The target observation group name.
    shared_ptr<string> targetGroupName_ {};
    // The migration task ID.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
