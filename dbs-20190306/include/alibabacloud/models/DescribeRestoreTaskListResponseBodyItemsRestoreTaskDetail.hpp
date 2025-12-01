// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORETASKLISTRESPONSEBODYITEMSRESTORETASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORETASKLISTRESPONSEBODYITEMSRESTORETASKDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(ContinuousRestoreProgress, continuousRestoreProgress_);
      DARABONBA_PTR_TO_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_TO_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointDatabaseName, destinationEndpointDatabaseName_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceType, destinationEndpointInstanceType_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointIpPort, destinationEndpointIpPort_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointOracleSID, destinationEndpointOracleSID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(FullDataRestoreProgress, fullDataRestoreProgress_);
      DARABONBA_PTR_TO_JSON(FullStruAfterRestoreProgress, fullStruAfterRestoreProgress_);
      DARABONBA_PTR_TO_JSON(FullStruforeRestoreProgress, fullStruforeRestoreProgress_);
      DARABONBA_PTR_TO_JSON(RestoreDir, restoreDir_);
      DARABONBA_PTR_TO_JSON(RestoreObjects, restoreObjects_);
      DARABONBA_PTR_TO_JSON(RestoreStatus, restoreStatus_);
      DARABONBA_PTR_TO_JSON(RestoreTaskCreateTime, restoreTaskCreateTime_);
      DARABONBA_PTR_TO_JSON(RestoreTaskFinishTime, restoreTaskFinishTime_);
      DARABONBA_PTR_TO_JSON(RestoreTaskId, restoreTaskId_);
      DARABONBA_PTR_TO_JSON(RestoreTaskName, restoreTaskName_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(ContinuousRestoreProgress, continuousRestoreProgress_);
      DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointDatabaseName, destinationEndpointDatabaseName_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceType, destinationEndpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointIpPort, destinationEndpointIpPort_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointOracleSID, destinationEndpointOracleSID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(FullDataRestoreProgress, fullDataRestoreProgress_);
      DARABONBA_PTR_FROM_JSON(FullStruAfterRestoreProgress, fullStruAfterRestoreProgress_);
      DARABONBA_PTR_FROM_JSON(FullStruforeRestoreProgress, fullStruforeRestoreProgress_);
      DARABONBA_PTR_FROM_JSON(RestoreDir, restoreDir_);
      DARABONBA_PTR_FROM_JSON(RestoreObjects, restoreObjects_);
      DARABONBA_PTR_FROM_JSON(RestoreStatus, restoreStatus_);
      DARABONBA_PTR_FROM_JSON(RestoreTaskCreateTime, restoreTaskCreateTime_);
      DARABONBA_PTR_FROM_JSON(RestoreTaskFinishTime, restoreTaskFinishTime_);
      DARABONBA_PTR_FROM_JSON(RestoreTaskId, restoreTaskId_);
      DARABONBA_PTR_FROM_JSON(RestoreTaskName, restoreTaskName_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
    };
    DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail() = default ;
    DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail(const DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail &) = default ;
    DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail(DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail &&) = default ;
    DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail() = default ;
    DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& operator=(const DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail &) = default ;
    DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& operator=(DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && return this->backupPlanId_ == nullptr && return this->backupSetId_ == nullptr && return this->continuousRestoreProgress_ == nullptr && return this->crossAliyunId_ == nullptr && return this->crossRoleName_ == nullptr
        && return this->destinationEndpointDatabaseName_ == nullptr && return this->destinationEndpointInstanceID_ == nullptr && return this->destinationEndpointInstanceType_ == nullptr && return this->destinationEndpointIpPort_ == nullptr && return this->destinationEndpointOracleSID_ == nullptr
        && return this->destinationEndpointRegion_ == nullptr && return this->destinationEndpointUserName_ == nullptr && return this->errMessage_ == nullptr && return this->fullDataRestoreProgress_ == nullptr && return this->fullStruAfterRestoreProgress_ == nullptr
        && return this->fullStruforeRestoreProgress_ == nullptr && return this->restoreDir_ == nullptr && return this->restoreObjects_ == nullptr && return this->restoreStatus_ == nullptr && return this->restoreTaskCreateTime_ == nullptr
        && return this->restoreTaskFinishTime_ == nullptr && return this->restoreTaskId_ == nullptr && return this->restoreTaskName_ == nullptr && return this->restoreTime_ == nullptr; };
    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t backupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // continuousRestoreProgress Field Functions 
    bool hasContinuousRestoreProgress() const { return this->continuousRestoreProgress_ != nullptr;};
    void deleteContinuousRestoreProgress() { this->continuousRestoreProgress_ = nullptr;};
    inline int32_t continuousRestoreProgress() const { DARABONBA_PTR_GET_DEFAULT(continuousRestoreProgress_, 0) };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setContinuousRestoreProgress(int32_t continuousRestoreProgress) { DARABONBA_PTR_SET_VALUE(continuousRestoreProgress_, continuousRestoreProgress) };


    // crossAliyunId Field Functions 
    bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
    void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
    inline string crossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


    // crossRoleName Field Functions 
    bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
    void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
    inline string crossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


    // destinationEndpointDatabaseName Field Functions 
    bool hasDestinationEndpointDatabaseName() const { return this->destinationEndpointDatabaseName_ != nullptr;};
    void deleteDestinationEndpointDatabaseName() { this->destinationEndpointDatabaseName_ = nullptr;};
    inline string destinationEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointDatabaseName_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setDestinationEndpointDatabaseName(string destinationEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(destinationEndpointDatabaseName_, destinationEndpointDatabaseName) };


    // destinationEndpointInstanceID Field Functions 
    bool hasDestinationEndpointInstanceID() const { return this->destinationEndpointInstanceID_ != nullptr;};
    void deleteDestinationEndpointInstanceID() { this->destinationEndpointInstanceID_ = nullptr;};
    inline string destinationEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceID_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setDestinationEndpointInstanceID(string destinationEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceID_, destinationEndpointInstanceID) };


    // destinationEndpointInstanceType Field Functions 
    bool hasDestinationEndpointInstanceType() const { return this->destinationEndpointInstanceType_ != nullptr;};
    void deleteDestinationEndpointInstanceType() { this->destinationEndpointInstanceType_ = nullptr;};
    inline string destinationEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceType_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setDestinationEndpointInstanceType(string destinationEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceType_, destinationEndpointInstanceType) };


    // destinationEndpointIpPort Field Functions 
    bool hasDestinationEndpointIpPort() const { return this->destinationEndpointIpPort_ != nullptr;};
    void deleteDestinationEndpointIpPort() { this->destinationEndpointIpPort_ = nullptr;};
    inline string destinationEndpointIpPort() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointIpPort_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setDestinationEndpointIpPort(string destinationEndpointIpPort) { DARABONBA_PTR_SET_VALUE(destinationEndpointIpPort_, destinationEndpointIpPort) };


    // destinationEndpointOracleSID Field Functions 
    bool hasDestinationEndpointOracleSID() const { return this->destinationEndpointOracleSID_ != nullptr;};
    void deleteDestinationEndpointOracleSID() { this->destinationEndpointOracleSID_ = nullptr;};
    inline string destinationEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointOracleSID_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setDestinationEndpointOracleSID(string destinationEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(destinationEndpointOracleSID_, destinationEndpointOracleSID) };


    // destinationEndpointRegion Field Functions 
    bool hasDestinationEndpointRegion() const { return this->destinationEndpointRegion_ != nullptr;};
    void deleteDestinationEndpointRegion() { this->destinationEndpointRegion_ = nullptr;};
    inline string destinationEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointRegion_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setDestinationEndpointRegion(string destinationEndpointRegion) { DARABONBA_PTR_SET_VALUE(destinationEndpointRegion_, destinationEndpointRegion) };


    // destinationEndpointUserName Field Functions 
    bool hasDestinationEndpointUserName() const { return this->destinationEndpointUserName_ != nullptr;};
    void deleteDestinationEndpointUserName() { this->destinationEndpointUserName_ = nullptr;};
    inline string destinationEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointUserName_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setDestinationEndpointUserName(string destinationEndpointUserName) { DARABONBA_PTR_SET_VALUE(destinationEndpointUserName_, destinationEndpointUserName) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // fullDataRestoreProgress Field Functions 
    bool hasFullDataRestoreProgress() const { return this->fullDataRestoreProgress_ != nullptr;};
    void deleteFullDataRestoreProgress() { this->fullDataRestoreProgress_ = nullptr;};
    inline int32_t fullDataRestoreProgress() const { DARABONBA_PTR_GET_DEFAULT(fullDataRestoreProgress_, 0) };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setFullDataRestoreProgress(int32_t fullDataRestoreProgress) { DARABONBA_PTR_SET_VALUE(fullDataRestoreProgress_, fullDataRestoreProgress) };


    // fullStruAfterRestoreProgress Field Functions 
    bool hasFullStruAfterRestoreProgress() const { return this->fullStruAfterRestoreProgress_ != nullptr;};
    void deleteFullStruAfterRestoreProgress() { this->fullStruAfterRestoreProgress_ = nullptr;};
    inline int32_t fullStruAfterRestoreProgress() const { DARABONBA_PTR_GET_DEFAULT(fullStruAfterRestoreProgress_, 0) };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setFullStruAfterRestoreProgress(int32_t fullStruAfterRestoreProgress) { DARABONBA_PTR_SET_VALUE(fullStruAfterRestoreProgress_, fullStruAfterRestoreProgress) };


    // fullStruforeRestoreProgress Field Functions 
    bool hasFullStruforeRestoreProgress() const { return this->fullStruforeRestoreProgress_ != nullptr;};
    void deleteFullStruforeRestoreProgress() { this->fullStruforeRestoreProgress_ = nullptr;};
    inline int32_t fullStruforeRestoreProgress() const { DARABONBA_PTR_GET_DEFAULT(fullStruforeRestoreProgress_, 0) };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setFullStruforeRestoreProgress(int32_t fullStruforeRestoreProgress) { DARABONBA_PTR_SET_VALUE(fullStruforeRestoreProgress_, fullStruforeRestoreProgress) };


    // restoreDir Field Functions 
    bool hasRestoreDir() const { return this->restoreDir_ != nullptr;};
    void deleteRestoreDir() { this->restoreDir_ = nullptr;};
    inline string restoreDir() const { DARABONBA_PTR_GET_DEFAULT(restoreDir_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setRestoreDir(string restoreDir) { DARABONBA_PTR_SET_VALUE(restoreDir_, restoreDir) };


    // restoreObjects Field Functions 
    bool hasRestoreObjects() const { return this->restoreObjects_ != nullptr;};
    void deleteRestoreObjects() { this->restoreObjects_ = nullptr;};
    inline string restoreObjects() const { DARABONBA_PTR_GET_DEFAULT(restoreObjects_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setRestoreObjects(string restoreObjects) { DARABONBA_PTR_SET_VALUE(restoreObjects_, restoreObjects) };


    // restoreStatus Field Functions 
    bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
    void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
    inline string restoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


    // restoreTaskCreateTime Field Functions 
    bool hasRestoreTaskCreateTime() const { return this->restoreTaskCreateTime_ != nullptr;};
    void deleteRestoreTaskCreateTime() { this->restoreTaskCreateTime_ = nullptr;};
    inline int64_t restoreTaskCreateTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskCreateTime_, 0L) };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setRestoreTaskCreateTime(int64_t restoreTaskCreateTime) { DARABONBA_PTR_SET_VALUE(restoreTaskCreateTime_, restoreTaskCreateTime) };


    // restoreTaskFinishTime Field Functions 
    bool hasRestoreTaskFinishTime() const { return this->restoreTaskFinishTime_ != nullptr;};
    void deleteRestoreTaskFinishTime() { this->restoreTaskFinishTime_ = nullptr;};
    inline int64_t restoreTaskFinishTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskFinishTime_, 0L) };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setRestoreTaskFinishTime(int64_t restoreTaskFinishTime) { DARABONBA_PTR_SET_VALUE(restoreTaskFinishTime_, restoreTaskFinishTime) };


    // restoreTaskId Field Functions 
    bool hasRestoreTaskId() const { return this->restoreTaskId_ != nullptr;};
    void deleteRestoreTaskId() { this->restoreTaskId_ = nullptr;};
    inline string restoreTaskId() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskId_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setRestoreTaskId(string restoreTaskId) { DARABONBA_PTR_SET_VALUE(restoreTaskId_, restoreTaskId) };


    // restoreTaskName Field Functions 
    bool hasRestoreTaskName() const { return this->restoreTaskName_ != nullptr;};
    void deleteRestoreTaskName() { this->restoreTaskName_ = nullptr;};
    inline string restoreTaskName() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskName_, "") };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setRestoreTaskName(string restoreTaskName) { DARABONBA_PTR_SET_VALUE(restoreTaskName_, restoreTaskName) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline int64_t restoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, 0L) };
    inline DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail& setRestoreTime(int64_t restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


  protected:
    // The ID of the backup gateway.
    std::shared_ptr<int64_t> backupGatewayId_ = nullptr;
    // The ID of the backup schedule.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The ID of the full backup set that is used in the restore task.
    std::shared_ptr<string> backupSetId_ = nullptr;
    // The restore progress of the incremental log files.
    std::shared_ptr<int32_t> continuousRestoreProgress_ = nullptr;
    // The unique ID (UID) of the Alibaba Cloud account to which the backup schedule belongs.
    std::shared_ptr<string> crossAliyunId_ = nullptr;
    // The name of the RAM role that can be used to perform backups across Alibaba Cloud accounts.
    std::shared_ptr<string> crossRoleName_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> destinationEndpointDatabaseName_ = nullptr;
    // The ID of the database instance.
    std::shared_ptr<string> destinationEndpointInstanceID_ = nullptr;
    // The location of the database. Valid values:
    // 
    // *   RDS
    // *   ECS
    // *   Express: The database is connected to DBS by using Express Connect, VPN Gateway, or Smart Access Gateway.
    // *   Agent: The database is connected to DBS over a DBS backup gateway.
    // *   DDS: The database is an ApsaraDB for MongoDB database.
    // *   Other: The database is connected to DBS by using the IP address and port of the database.
    std::shared_ptr<string> destinationEndpointInstanceType_ = nullptr;
    // The endpoint that is used to connect to the database.
    std::shared_ptr<string> destinationEndpointIpPort_ = nullptr;
    // The SID of the Oracle database.
    std::shared_ptr<string> destinationEndpointOracleSID_ = nullptr;
    // The region in which the database is deployed.
    std::shared_ptr<string> destinationEndpointRegion_ = nullptr;
    // The username of the account that is used to connect to the database.
    std::shared_ptr<string> destinationEndpointUserName_ = nullptr;
    // The error message.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The restore progress of the full backup data.
    std::shared_ptr<int32_t> fullDataRestoreProgress_ = nullptr;
    // The progress of schema restore after full data restore.
    std::shared_ptr<int32_t> fullStruAfterRestoreProgress_ = nullptr;
    // The progress of schema restore before full data restore.
    std::shared_ptr<int32_t> fullStruforeRestoreProgress_ = nullptr;
    // The directory of the destination database to which the objects were restored.
    std::shared_ptr<string> restoreDir_ = nullptr;
    // The objects to be restored.
    std::shared_ptr<string> restoreObjects_ = nullptr;
    // The status of the restore task. Valid values:
    // 
    // *   init: The restore task is not started or does not pass the precheck.
    // *   running: The restore task is running.
    // *   stop: The restore task failed.
    // *   pause: The restore task is stopped.
    // *   check_pass: The restore task passed the precheck.
    std::shared_ptr<string> restoreStatus_ = nullptr;
    // The time when the restore task was created, such as 1554560477000.
    std::shared_ptr<int64_t> restoreTaskCreateTime_ = nullptr;
    // The time when the restore task was complete, such as 1554560477000.
    std::shared_ptr<int64_t> restoreTaskFinishTime_ = nullptr;
    // The ID of the restore task.
    std::shared_ptr<string> restoreTaskId_ = nullptr;
    // The name of the restore task.
    std::shared_ptr<string> restoreTaskName_ = nullptr;
    // The time to run the restore task, such as 1554560477000.
    std::shared_ptr<int64_t> restoreTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
