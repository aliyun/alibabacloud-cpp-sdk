// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESTORETASKSRESPONSEBODYRESTORETASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESTORETASKSRESPONSEBODYRESTORETASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListRestoreTasksResponseBodyRestoreTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRestoreTasksResponseBodyRestoreTasks& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RestoreTaskId, restoreTaskId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ListRestoreTasksResponseBodyRestoreTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RestoreTaskId, restoreTaskId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
    };
    ListRestoreTasksResponseBodyRestoreTasks() = default ;
    ListRestoreTasksResponseBodyRestoreTasks(const ListRestoreTasksResponseBodyRestoreTasks &) = default ;
    ListRestoreTasksResponseBodyRestoreTasks(ListRestoreTasksResponseBodyRestoreTasks &&) = default ;
    ListRestoreTasksResponseBodyRestoreTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRestoreTasksResponseBodyRestoreTasks() = default ;
    ListRestoreTasksResponseBodyRestoreTasks& operator=(const ListRestoreTasksResponseBodyRestoreTasks &) = default ;
    ListRestoreTasksResponseBodyRestoreTasks& operator=(ListRestoreTasksResponseBodyRestoreTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupId_ != nullptr
        && this->createTime_ != nullptr && this->endTime_ != nullptr && this->modifiedTime_ != nullptr && this->restoreTaskId_ != nullptr && this->serviceInstanceId_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->statusDetail_ != nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline ListRestoreTasksResponseBodyRestoreTasks& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListRestoreTasksResponseBodyRestoreTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListRestoreTasksResponseBodyRestoreTasks& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListRestoreTasksResponseBodyRestoreTasks& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // restoreTaskId Field Functions 
    bool hasRestoreTaskId() const { return this->restoreTaskId_ != nullptr;};
    void deleteRestoreTaskId() { this->restoreTaskId_ = nullptr;};
    inline string restoreTaskId() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskId_, "") };
    inline ListRestoreTasksResponseBodyRestoreTasks& setRestoreTaskId(string restoreTaskId) { DARABONBA_PTR_SET_VALUE(restoreTaskId_, restoreTaskId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ListRestoreTasksResponseBodyRestoreTasks& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListRestoreTasksResponseBodyRestoreTasks& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRestoreTasksResponseBodyRestoreTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string statusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline ListRestoreTasksResponseBodyRestoreTasks& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


  protected:
    // The backup ID.
    std::shared_ptr<string> backupId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The expiration time of the service instance.
    std::shared_ptr<string> endTime_ = nullptr;
    // The update time.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the restore task.
    std::shared_ptr<string> restoreTaskId_ = nullptr;
    // The ID of the service instance.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The time when the update started.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the service instance. Valid values:
    // 
    // *   Restoring
    // *   Restored
    // *   RestoreFailed
    std::shared_ptr<string> status_ = nullptr;
    // The description of the service instance deployment information.
    std::shared_ptr<string> statusDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
