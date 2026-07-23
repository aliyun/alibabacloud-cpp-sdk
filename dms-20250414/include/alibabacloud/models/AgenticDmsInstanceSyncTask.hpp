// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICDMSINSTANCESYNCTASK_HPP_
#define ALIBABACLOUD_MODELS_AGENTICDMSINSTANCESYNCTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgenticDmsInstanceSyncTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticDmsInstanceSyncTask& obj) { 
      DARABONBA_PTR_TO_JSON(ActorId, actorId_);
      DARABONBA_PTR_TO_JSON(ActorName, actorName_);
      DARABONBA_PTR_TO_JSON(ActorType, actorType_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorSummary, errorSummary_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(SkippedCount, skippedCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(SyncUserDataPermission, syncUserDataPermission_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticDmsInstanceSyncTask& obj) { 
      DARABONBA_PTR_FROM_JSON(ActorId, actorId_);
      DARABONBA_PTR_FROM_JSON(ActorName, actorName_);
      DARABONBA_PTR_FROM_JSON(ActorType, actorType_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorSummary, errorSummary_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(SkippedCount, skippedCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(SyncUserDataPermission, syncUserDataPermission_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    AgenticDmsInstanceSyncTask() = default ;
    AgenticDmsInstanceSyncTask(const AgenticDmsInstanceSyncTask &) = default ;
    AgenticDmsInstanceSyncTask(AgenticDmsInstanceSyncTask &&) = default ;
    AgenticDmsInstanceSyncTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticDmsInstanceSyncTask() = default ;
    AgenticDmsInstanceSyncTask& operator=(const AgenticDmsInstanceSyncTask &) = default ;
    AgenticDmsInstanceSyncTask& operator=(AgenticDmsInstanceSyncTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actorId_ == nullptr
        && this->actorName_ == nullptr && this->actorType_ == nullptr && this->errorCode_ == nullptr && this->errorSummary_ == nullptr && this->failedCount_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->skippedCount_ == nullptr && this->status_ == nullptr && this->successCount_ == nullptr
        && this->syncUserDataPermission_ == nullptr && this->taskId_ == nullptr && this->totalCount_ == nullptr; };
    // actorId Field Functions 
    bool hasActorId() const { return this->actorId_ != nullptr;};
    void deleteActorId() { this->actorId_ = nullptr;};
    inline string getActorId() const { DARABONBA_PTR_GET_DEFAULT(actorId_, "") };
    inline AgenticDmsInstanceSyncTask& setActorId(string actorId) { DARABONBA_PTR_SET_VALUE(actorId_, actorId) };


    // actorName Field Functions 
    bool hasActorName() const { return this->actorName_ != nullptr;};
    void deleteActorName() { this->actorName_ = nullptr;};
    inline string getActorName() const { DARABONBA_PTR_GET_DEFAULT(actorName_, "") };
    inline AgenticDmsInstanceSyncTask& setActorName(string actorName) { DARABONBA_PTR_SET_VALUE(actorName_, actorName) };


    // actorType Field Functions 
    bool hasActorType() const { return this->actorType_ != nullptr;};
    void deleteActorType() { this->actorType_ = nullptr;};
    inline string getActorType() const { DARABONBA_PTR_GET_DEFAULT(actorType_, "") };
    inline AgenticDmsInstanceSyncTask& setActorType(string actorType) { DARABONBA_PTR_SET_VALUE(actorType_, actorType) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AgenticDmsInstanceSyncTask& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorSummary Field Functions 
    bool hasErrorSummary() const { return this->errorSummary_ != nullptr;};
    void deleteErrorSummary() { this->errorSummary_ = nullptr;};
    inline string getErrorSummary() const { DARABONBA_PTR_GET_DEFAULT(errorSummary_, "") };
    inline AgenticDmsInstanceSyncTask& setErrorSummary(string errorSummary) { DARABONBA_PTR_SET_VALUE(errorSummary_, errorSummary) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline AgenticDmsInstanceSyncTask& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline AgenticDmsInstanceSyncTask& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline AgenticDmsInstanceSyncTask& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // skippedCount Field Functions 
    bool hasSkippedCount() const { return this->skippedCount_ != nullptr;};
    void deleteSkippedCount() { this->skippedCount_ = nullptr;};
    inline int32_t getSkippedCount() const { DARABONBA_PTR_GET_DEFAULT(skippedCount_, 0) };
    inline AgenticDmsInstanceSyncTask& setSkippedCount(int32_t skippedCount) { DARABONBA_PTR_SET_VALUE(skippedCount_, skippedCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AgenticDmsInstanceSyncTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline AgenticDmsInstanceSyncTask& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // syncUserDataPermission Field Functions 
    bool hasSyncUserDataPermission() const { return this->syncUserDataPermission_ != nullptr;};
    void deleteSyncUserDataPermission() { this->syncUserDataPermission_ = nullptr;};
    inline bool getSyncUserDataPermission() const { DARABONBA_PTR_GET_DEFAULT(syncUserDataPermission_, false) };
    inline AgenticDmsInstanceSyncTask& setSyncUserDataPermission(bool syncUserDataPermission) { DARABONBA_PTR_SET_VALUE(syncUserDataPermission_, syncUserDataPermission) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AgenticDmsInstanceSyncTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline AgenticDmsInstanceSyncTask& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> actorId_ {};
    shared_ptr<string> actorName_ {};
    shared_ptr<string> actorType_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorSummary_ {};
    shared_ptr<int32_t> failedCount_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int32_t> skippedCount_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int32_t> successCount_ {};
    shared_ptr<bool> syncUserDataPermission_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
