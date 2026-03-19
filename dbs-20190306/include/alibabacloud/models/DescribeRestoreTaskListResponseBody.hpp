// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORETASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORETASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeRestoreTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeRestoreTaskListResponseBody() = default ;
    DescribeRestoreTaskListResponseBody(const DescribeRestoreTaskListResponseBody &) = default ;
    DescribeRestoreTaskListResponseBody(DescribeRestoreTaskListResponseBody &&) = default ;
    DescribeRestoreTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreTaskListResponseBody() = default ;
    DescribeRestoreTaskListResponseBody& operator=(const DescribeRestoreTaskListResponseBody &) = default ;
    DescribeRestoreTaskListResponseBody& operator=(DescribeRestoreTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(RestoreTaskDetail, restoreTaskDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(RestoreTaskDetail, restoreTaskDetail_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RestoreTaskDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RestoreTaskDetail& obj) { 
          DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
          DARABONBA_PTR_TO_JSON(BackupGatewayIdentifier, backupGatewayIdentifier_);
          DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
          DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
          DARABONBA_PTR_TO_JSON(BackupSourceOssRegion, backupSourceOssRegion_);
          DARABONBA_PTR_TO_JSON(ContinuousRestoreProgress, continuousRestoreProgress_);
          DARABONBA_PTR_TO_JSON(CrossAliyunId, crossAliyunId_);
          DARABONBA_PTR_TO_JSON(CrossRoleName, crossRoleName_);
          DARABONBA_PTR_TO_JSON(DestinationEndpointDatabaseName, destinationEndpointDatabaseName_);
          DARABONBA_PTR_TO_JSON(DestinationEndpointEnableSsl, destinationEndpointEnableSsl_);
          DARABONBA_PTR_TO_JSON(DestinationEndpointHost, destinationEndpointHost_);
          DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
          DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceType, destinationEndpointInstanceType_);
          DARABONBA_PTR_TO_JSON(DestinationEndpointIpPort, destinationEndpointIpPort_);
          DARABONBA_PTR_TO_JSON(DestinationEndpointOracleSID, destinationEndpointOracleSID_);
          DARABONBA_PTR_TO_JSON(DestinationEndpointPort, destinationEndpointPort_);
          DARABONBA_PTR_TO_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
          DARABONBA_PTR_TO_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
          DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
          DARABONBA_PTR_TO_JSON(FullDataRestoreProgress, fullDataRestoreProgress_);
          DARABONBA_PTR_TO_JSON(FullStruAfterRestoreProgress, fullStruAfterRestoreProgress_);
          DARABONBA_PTR_TO_JSON(FullStruforeRestoreProgress, fullStruforeRestoreProgress_);
          DARABONBA_PTR_TO_JSON(PhysicalBackupRecoverProgress, physicalBackupRecoverProgress_);
          DARABONBA_PTR_TO_JSON(PhysicalDatabaseOnlineProgress, physicalDatabaseOnlineProgress_);
          DARABONBA_PTR_TO_JSON(PhysicalFullAndIncrementBackupRecoverProgress, physicalFullAndIncrementBackupRecoverProgress_);
          DARABONBA_PTR_TO_JSON(PhysicalFullBackupRecoverProgress, physicalFullBackupRecoverProgress_);
          DARABONBA_PTR_TO_JSON(PhysicalIncrementBackupRecoverProgress, physicalIncrementBackupRecoverProgress_);
          DARABONBA_PTR_TO_JSON(RestoreDestinationMode, restoreDestinationMode_);
          DARABONBA_PTR_TO_JSON(RestoreDir, restoreDir_);
          DARABONBA_PTR_TO_JSON(RestoreObjects, restoreObjects_);
          DARABONBA_PTR_TO_JSON(RestoreStatus, restoreStatus_);
          DARABONBA_PTR_TO_JSON(RestoreTaskCreateTime, restoreTaskCreateTime_);
          DARABONBA_PTR_TO_JSON(RestoreTaskFinishTime, restoreTaskFinishTime_);
          DARABONBA_PTR_TO_JSON(RestoreTaskId, restoreTaskId_);
          DARABONBA_PTR_TO_JSON(RestoreTaskName, restoreTaskName_);
          DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
        };
        friend void from_json(const Darabonba::Json& j, RestoreTaskDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
          DARABONBA_PTR_FROM_JSON(BackupGatewayIdentifier, backupGatewayIdentifier_);
          DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
          DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
          DARABONBA_PTR_FROM_JSON(BackupSourceOssRegion, backupSourceOssRegion_);
          DARABONBA_PTR_FROM_JSON(ContinuousRestoreProgress, continuousRestoreProgress_);
          DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
          DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpointDatabaseName, destinationEndpointDatabaseName_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpointEnableSsl, destinationEndpointEnableSsl_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpointHost, destinationEndpointHost_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceType, destinationEndpointInstanceType_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpointIpPort, destinationEndpointIpPort_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpointOracleSID, destinationEndpointOracleSID_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpointPort, destinationEndpointPort_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
          DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
          DARABONBA_PTR_FROM_JSON(FullDataRestoreProgress, fullDataRestoreProgress_);
          DARABONBA_PTR_FROM_JSON(FullStruAfterRestoreProgress, fullStruAfterRestoreProgress_);
          DARABONBA_PTR_FROM_JSON(FullStruforeRestoreProgress, fullStruforeRestoreProgress_);
          DARABONBA_PTR_FROM_JSON(PhysicalBackupRecoverProgress, physicalBackupRecoverProgress_);
          DARABONBA_PTR_FROM_JSON(PhysicalDatabaseOnlineProgress, physicalDatabaseOnlineProgress_);
          DARABONBA_PTR_FROM_JSON(PhysicalFullAndIncrementBackupRecoverProgress, physicalFullAndIncrementBackupRecoverProgress_);
          DARABONBA_PTR_FROM_JSON(PhysicalFullBackupRecoverProgress, physicalFullBackupRecoverProgress_);
          DARABONBA_PTR_FROM_JSON(PhysicalIncrementBackupRecoverProgress, physicalIncrementBackupRecoverProgress_);
          DARABONBA_PTR_FROM_JSON(RestoreDestinationMode, restoreDestinationMode_);
          DARABONBA_PTR_FROM_JSON(RestoreDir, restoreDir_);
          DARABONBA_PTR_FROM_JSON(RestoreObjects, restoreObjects_);
          DARABONBA_PTR_FROM_JSON(RestoreStatus, restoreStatus_);
          DARABONBA_PTR_FROM_JSON(RestoreTaskCreateTime, restoreTaskCreateTime_);
          DARABONBA_PTR_FROM_JSON(RestoreTaskFinishTime, restoreTaskFinishTime_);
          DARABONBA_PTR_FROM_JSON(RestoreTaskId, restoreTaskId_);
          DARABONBA_PTR_FROM_JSON(RestoreTaskName, restoreTaskName_);
          DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
        };
        RestoreTaskDetail() = default ;
        RestoreTaskDetail(const RestoreTaskDetail &) = default ;
        RestoreTaskDetail(RestoreTaskDetail &&) = default ;
        RestoreTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RestoreTaskDetail() = default ;
        RestoreTaskDetail& operator=(const RestoreTaskDetail &) = default ;
        RestoreTaskDetail& operator=(RestoreTaskDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && this->backupGatewayIdentifier_ == nullptr && this->backupPlanId_ == nullptr && this->backupSetId_ == nullptr && this->backupSourceOssRegion_ == nullptr && this->continuousRestoreProgress_ == nullptr
        && this->crossAliyunId_ == nullptr && this->crossRoleName_ == nullptr && this->destinationEndpointDatabaseName_ == nullptr && this->destinationEndpointEnableSsl_ == nullptr && this->destinationEndpointHost_ == nullptr
        && this->destinationEndpointInstanceID_ == nullptr && this->destinationEndpointInstanceType_ == nullptr && this->destinationEndpointIpPort_ == nullptr && this->destinationEndpointOracleSID_ == nullptr && this->destinationEndpointPort_ == nullptr
        && this->destinationEndpointRegion_ == nullptr && this->destinationEndpointUserName_ == nullptr && this->errMessage_ == nullptr && this->fullDataRestoreProgress_ == nullptr && this->fullStruAfterRestoreProgress_ == nullptr
        && this->fullStruforeRestoreProgress_ == nullptr && this->physicalBackupRecoverProgress_ == nullptr && this->physicalDatabaseOnlineProgress_ == nullptr && this->physicalFullAndIncrementBackupRecoverProgress_ == nullptr && this->physicalFullBackupRecoverProgress_ == nullptr
        && this->physicalIncrementBackupRecoverProgress_ == nullptr && this->restoreDestinationMode_ == nullptr && this->restoreDir_ == nullptr && this->restoreObjects_ == nullptr && this->restoreStatus_ == nullptr
        && this->restoreTaskCreateTime_ == nullptr && this->restoreTaskFinishTime_ == nullptr && this->restoreTaskId_ == nullptr && this->restoreTaskName_ == nullptr && this->restoreTime_ == nullptr; };
        // backupGatewayId Field Functions 
        bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
        void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
        inline int64_t getBackupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
        inline RestoreTaskDetail& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


        // backupGatewayIdentifier Field Functions 
        bool hasBackupGatewayIdentifier() const { return this->backupGatewayIdentifier_ != nullptr;};
        void deleteBackupGatewayIdentifier() { this->backupGatewayIdentifier_ = nullptr;};
        inline string getBackupGatewayIdentifier() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayIdentifier_, "") };
        inline RestoreTaskDetail& setBackupGatewayIdentifier(string backupGatewayIdentifier) { DARABONBA_PTR_SET_VALUE(backupGatewayIdentifier_, backupGatewayIdentifier) };


        // backupPlanId Field Functions 
        bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
        void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
        inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
        inline RestoreTaskDetail& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


        // backupSetId Field Functions 
        bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
        void deleteBackupSetId() { this->backupSetId_ = nullptr;};
        inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
        inline RestoreTaskDetail& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


        // backupSourceOssRegion Field Functions 
        bool hasBackupSourceOssRegion() const { return this->backupSourceOssRegion_ != nullptr;};
        void deleteBackupSourceOssRegion() { this->backupSourceOssRegion_ = nullptr;};
        inline string getBackupSourceOssRegion() const { DARABONBA_PTR_GET_DEFAULT(backupSourceOssRegion_, "") };
        inline RestoreTaskDetail& setBackupSourceOssRegion(string backupSourceOssRegion) { DARABONBA_PTR_SET_VALUE(backupSourceOssRegion_, backupSourceOssRegion) };


        // continuousRestoreProgress Field Functions 
        bool hasContinuousRestoreProgress() const { return this->continuousRestoreProgress_ != nullptr;};
        void deleteContinuousRestoreProgress() { this->continuousRestoreProgress_ = nullptr;};
        inline int32_t getContinuousRestoreProgress() const { DARABONBA_PTR_GET_DEFAULT(continuousRestoreProgress_, 0) };
        inline RestoreTaskDetail& setContinuousRestoreProgress(int32_t continuousRestoreProgress) { DARABONBA_PTR_SET_VALUE(continuousRestoreProgress_, continuousRestoreProgress) };


        // crossAliyunId Field Functions 
        bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
        void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
        inline string getCrossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
        inline RestoreTaskDetail& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


        // crossRoleName Field Functions 
        bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
        void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
        inline string getCrossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
        inline RestoreTaskDetail& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


        // destinationEndpointDatabaseName Field Functions 
        bool hasDestinationEndpointDatabaseName() const { return this->destinationEndpointDatabaseName_ != nullptr;};
        void deleteDestinationEndpointDatabaseName() { this->destinationEndpointDatabaseName_ = nullptr;};
        inline string getDestinationEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointDatabaseName_, "") };
        inline RestoreTaskDetail& setDestinationEndpointDatabaseName(string destinationEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(destinationEndpointDatabaseName_, destinationEndpointDatabaseName) };


        // destinationEndpointEnableSsl Field Functions 
        bool hasDestinationEndpointEnableSsl() const { return this->destinationEndpointEnableSsl_ != nullptr;};
        void deleteDestinationEndpointEnableSsl() { this->destinationEndpointEnableSsl_ = nullptr;};
        inline string getDestinationEndpointEnableSsl() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointEnableSsl_, "") };
        inline RestoreTaskDetail& setDestinationEndpointEnableSsl(string destinationEndpointEnableSsl) { DARABONBA_PTR_SET_VALUE(destinationEndpointEnableSsl_, destinationEndpointEnableSsl) };


        // destinationEndpointHost Field Functions 
        bool hasDestinationEndpointHost() const { return this->destinationEndpointHost_ != nullptr;};
        void deleteDestinationEndpointHost() { this->destinationEndpointHost_ = nullptr;};
        inline string getDestinationEndpointHost() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointHost_, "") };
        inline RestoreTaskDetail& setDestinationEndpointHost(string destinationEndpointHost) { DARABONBA_PTR_SET_VALUE(destinationEndpointHost_, destinationEndpointHost) };


        // destinationEndpointInstanceID Field Functions 
        bool hasDestinationEndpointInstanceID() const { return this->destinationEndpointInstanceID_ != nullptr;};
        void deleteDestinationEndpointInstanceID() { this->destinationEndpointInstanceID_ = nullptr;};
        inline string getDestinationEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceID_, "") };
        inline RestoreTaskDetail& setDestinationEndpointInstanceID(string destinationEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceID_, destinationEndpointInstanceID) };


        // destinationEndpointInstanceType Field Functions 
        bool hasDestinationEndpointInstanceType() const { return this->destinationEndpointInstanceType_ != nullptr;};
        void deleteDestinationEndpointInstanceType() { this->destinationEndpointInstanceType_ = nullptr;};
        inline string getDestinationEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceType_, "") };
        inline RestoreTaskDetail& setDestinationEndpointInstanceType(string destinationEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceType_, destinationEndpointInstanceType) };


        // destinationEndpointIpPort Field Functions 
        bool hasDestinationEndpointIpPort() const { return this->destinationEndpointIpPort_ != nullptr;};
        void deleteDestinationEndpointIpPort() { this->destinationEndpointIpPort_ = nullptr;};
        inline string getDestinationEndpointIpPort() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointIpPort_, "") };
        inline RestoreTaskDetail& setDestinationEndpointIpPort(string destinationEndpointIpPort) { DARABONBA_PTR_SET_VALUE(destinationEndpointIpPort_, destinationEndpointIpPort) };


        // destinationEndpointOracleSID Field Functions 
        bool hasDestinationEndpointOracleSID() const { return this->destinationEndpointOracleSID_ != nullptr;};
        void deleteDestinationEndpointOracleSID() { this->destinationEndpointOracleSID_ = nullptr;};
        inline string getDestinationEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointOracleSID_, "") };
        inline RestoreTaskDetail& setDestinationEndpointOracleSID(string destinationEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(destinationEndpointOracleSID_, destinationEndpointOracleSID) };


        // destinationEndpointPort Field Functions 
        bool hasDestinationEndpointPort() const { return this->destinationEndpointPort_ != nullptr;};
        void deleteDestinationEndpointPort() { this->destinationEndpointPort_ = nullptr;};
        inline string getDestinationEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointPort_, "") };
        inline RestoreTaskDetail& setDestinationEndpointPort(string destinationEndpointPort) { DARABONBA_PTR_SET_VALUE(destinationEndpointPort_, destinationEndpointPort) };


        // destinationEndpointRegion Field Functions 
        bool hasDestinationEndpointRegion() const { return this->destinationEndpointRegion_ != nullptr;};
        void deleteDestinationEndpointRegion() { this->destinationEndpointRegion_ = nullptr;};
        inline string getDestinationEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointRegion_, "") };
        inline RestoreTaskDetail& setDestinationEndpointRegion(string destinationEndpointRegion) { DARABONBA_PTR_SET_VALUE(destinationEndpointRegion_, destinationEndpointRegion) };


        // destinationEndpointUserName Field Functions 
        bool hasDestinationEndpointUserName() const { return this->destinationEndpointUserName_ != nullptr;};
        void deleteDestinationEndpointUserName() { this->destinationEndpointUserName_ = nullptr;};
        inline string getDestinationEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointUserName_, "") };
        inline RestoreTaskDetail& setDestinationEndpointUserName(string destinationEndpointUserName) { DARABONBA_PTR_SET_VALUE(destinationEndpointUserName_, destinationEndpointUserName) };


        // errMessage Field Functions 
        bool hasErrMessage() const { return this->errMessage_ != nullptr;};
        void deleteErrMessage() { this->errMessage_ = nullptr;};
        inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
        inline RestoreTaskDetail& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


        // fullDataRestoreProgress Field Functions 
        bool hasFullDataRestoreProgress() const { return this->fullDataRestoreProgress_ != nullptr;};
        void deleteFullDataRestoreProgress() { this->fullDataRestoreProgress_ = nullptr;};
        inline int32_t getFullDataRestoreProgress() const { DARABONBA_PTR_GET_DEFAULT(fullDataRestoreProgress_, 0) };
        inline RestoreTaskDetail& setFullDataRestoreProgress(int32_t fullDataRestoreProgress) { DARABONBA_PTR_SET_VALUE(fullDataRestoreProgress_, fullDataRestoreProgress) };


        // fullStruAfterRestoreProgress Field Functions 
        bool hasFullStruAfterRestoreProgress() const { return this->fullStruAfterRestoreProgress_ != nullptr;};
        void deleteFullStruAfterRestoreProgress() { this->fullStruAfterRestoreProgress_ = nullptr;};
        inline int32_t getFullStruAfterRestoreProgress() const { DARABONBA_PTR_GET_DEFAULT(fullStruAfterRestoreProgress_, 0) };
        inline RestoreTaskDetail& setFullStruAfterRestoreProgress(int32_t fullStruAfterRestoreProgress) { DARABONBA_PTR_SET_VALUE(fullStruAfterRestoreProgress_, fullStruAfterRestoreProgress) };


        // fullStruforeRestoreProgress Field Functions 
        bool hasFullStruforeRestoreProgress() const { return this->fullStruforeRestoreProgress_ != nullptr;};
        void deleteFullStruforeRestoreProgress() { this->fullStruforeRestoreProgress_ = nullptr;};
        inline int32_t getFullStruforeRestoreProgress() const { DARABONBA_PTR_GET_DEFAULT(fullStruforeRestoreProgress_, 0) };
        inline RestoreTaskDetail& setFullStruforeRestoreProgress(int32_t fullStruforeRestoreProgress) { DARABONBA_PTR_SET_VALUE(fullStruforeRestoreProgress_, fullStruforeRestoreProgress) };


        // physicalBackupRecoverProgress Field Functions 
        bool hasPhysicalBackupRecoverProgress() const { return this->physicalBackupRecoverProgress_ != nullptr;};
        void deletePhysicalBackupRecoverProgress() { this->physicalBackupRecoverProgress_ = nullptr;};
        inline int32_t getPhysicalBackupRecoverProgress() const { DARABONBA_PTR_GET_DEFAULT(physicalBackupRecoverProgress_, 0) };
        inline RestoreTaskDetail& setPhysicalBackupRecoverProgress(int32_t physicalBackupRecoverProgress) { DARABONBA_PTR_SET_VALUE(physicalBackupRecoverProgress_, physicalBackupRecoverProgress) };


        // physicalDatabaseOnlineProgress Field Functions 
        bool hasPhysicalDatabaseOnlineProgress() const { return this->physicalDatabaseOnlineProgress_ != nullptr;};
        void deletePhysicalDatabaseOnlineProgress() { this->physicalDatabaseOnlineProgress_ = nullptr;};
        inline int32_t getPhysicalDatabaseOnlineProgress() const { DARABONBA_PTR_GET_DEFAULT(physicalDatabaseOnlineProgress_, 0) };
        inline RestoreTaskDetail& setPhysicalDatabaseOnlineProgress(int32_t physicalDatabaseOnlineProgress) { DARABONBA_PTR_SET_VALUE(physicalDatabaseOnlineProgress_, physicalDatabaseOnlineProgress) };


        // physicalFullAndIncrementBackupRecoverProgress Field Functions 
        bool hasPhysicalFullAndIncrementBackupRecoverProgress() const { return this->physicalFullAndIncrementBackupRecoverProgress_ != nullptr;};
        void deletePhysicalFullAndIncrementBackupRecoverProgress() { this->physicalFullAndIncrementBackupRecoverProgress_ = nullptr;};
        inline int32_t getPhysicalFullAndIncrementBackupRecoverProgress() const { DARABONBA_PTR_GET_DEFAULT(physicalFullAndIncrementBackupRecoverProgress_, 0) };
        inline RestoreTaskDetail& setPhysicalFullAndIncrementBackupRecoverProgress(int32_t physicalFullAndIncrementBackupRecoverProgress) { DARABONBA_PTR_SET_VALUE(physicalFullAndIncrementBackupRecoverProgress_, physicalFullAndIncrementBackupRecoverProgress) };


        // physicalFullBackupRecoverProgress Field Functions 
        bool hasPhysicalFullBackupRecoverProgress() const { return this->physicalFullBackupRecoverProgress_ != nullptr;};
        void deletePhysicalFullBackupRecoverProgress() { this->physicalFullBackupRecoverProgress_ = nullptr;};
        inline int32_t getPhysicalFullBackupRecoverProgress() const { DARABONBA_PTR_GET_DEFAULT(physicalFullBackupRecoverProgress_, 0) };
        inline RestoreTaskDetail& setPhysicalFullBackupRecoverProgress(int32_t physicalFullBackupRecoverProgress) { DARABONBA_PTR_SET_VALUE(physicalFullBackupRecoverProgress_, physicalFullBackupRecoverProgress) };


        // physicalIncrementBackupRecoverProgress Field Functions 
        bool hasPhysicalIncrementBackupRecoverProgress() const { return this->physicalIncrementBackupRecoverProgress_ != nullptr;};
        void deletePhysicalIncrementBackupRecoverProgress() { this->physicalIncrementBackupRecoverProgress_ = nullptr;};
        inline int32_t getPhysicalIncrementBackupRecoverProgress() const { DARABONBA_PTR_GET_DEFAULT(physicalIncrementBackupRecoverProgress_, 0) };
        inline RestoreTaskDetail& setPhysicalIncrementBackupRecoverProgress(int32_t physicalIncrementBackupRecoverProgress) { DARABONBA_PTR_SET_VALUE(physicalIncrementBackupRecoverProgress_, physicalIncrementBackupRecoverProgress) };


        // restoreDestinationMode Field Functions 
        bool hasRestoreDestinationMode() const { return this->restoreDestinationMode_ != nullptr;};
        void deleteRestoreDestinationMode() { this->restoreDestinationMode_ = nullptr;};
        inline string getRestoreDestinationMode() const { DARABONBA_PTR_GET_DEFAULT(restoreDestinationMode_, "") };
        inline RestoreTaskDetail& setRestoreDestinationMode(string restoreDestinationMode) { DARABONBA_PTR_SET_VALUE(restoreDestinationMode_, restoreDestinationMode) };


        // restoreDir Field Functions 
        bool hasRestoreDir() const { return this->restoreDir_ != nullptr;};
        void deleteRestoreDir() { this->restoreDir_ = nullptr;};
        inline string getRestoreDir() const { DARABONBA_PTR_GET_DEFAULT(restoreDir_, "") };
        inline RestoreTaskDetail& setRestoreDir(string restoreDir) { DARABONBA_PTR_SET_VALUE(restoreDir_, restoreDir) };


        // restoreObjects Field Functions 
        bool hasRestoreObjects() const { return this->restoreObjects_ != nullptr;};
        void deleteRestoreObjects() { this->restoreObjects_ = nullptr;};
        inline string getRestoreObjects() const { DARABONBA_PTR_GET_DEFAULT(restoreObjects_, "") };
        inline RestoreTaskDetail& setRestoreObjects(string restoreObjects) { DARABONBA_PTR_SET_VALUE(restoreObjects_, restoreObjects) };


        // restoreStatus Field Functions 
        bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
        void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
        inline string getRestoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
        inline RestoreTaskDetail& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


        // restoreTaskCreateTime Field Functions 
        bool hasRestoreTaskCreateTime() const { return this->restoreTaskCreateTime_ != nullptr;};
        void deleteRestoreTaskCreateTime() { this->restoreTaskCreateTime_ = nullptr;};
        inline int64_t getRestoreTaskCreateTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskCreateTime_, 0L) };
        inline RestoreTaskDetail& setRestoreTaskCreateTime(int64_t restoreTaskCreateTime) { DARABONBA_PTR_SET_VALUE(restoreTaskCreateTime_, restoreTaskCreateTime) };


        // restoreTaskFinishTime Field Functions 
        bool hasRestoreTaskFinishTime() const { return this->restoreTaskFinishTime_ != nullptr;};
        void deleteRestoreTaskFinishTime() { this->restoreTaskFinishTime_ = nullptr;};
        inline int64_t getRestoreTaskFinishTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskFinishTime_, 0L) };
        inline RestoreTaskDetail& setRestoreTaskFinishTime(int64_t restoreTaskFinishTime) { DARABONBA_PTR_SET_VALUE(restoreTaskFinishTime_, restoreTaskFinishTime) };


        // restoreTaskId Field Functions 
        bool hasRestoreTaskId() const { return this->restoreTaskId_ != nullptr;};
        void deleteRestoreTaskId() { this->restoreTaskId_ = nullptr;};
        inline string getRestoreTaskId() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskId_, "") };
        inline RestoreTaskDetail& setRestoreTaskId(string restoreTaskId) { DARABONBA_PTR_SET_VALUE(restoreTaskId_, restoreTaskId) };


        // restoreTaskName Field Functions 
        bool hasRestoreTaskName() const { return this->restoreTaskName_ != nullptr;};
        void deleteRestoreTaskName() { this->restoreTaskName_ = nullptr;};
        inline string getRestoreTaskName() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskName_, "") };
        inline RestoreTaskDetail& setRestoreTaskName(string restoreTaskName) { DARABONBA_PTR_SET_VALUE(restoreTaskName_, restoreTaskName) };


        // restoreTime Field Functions 
        bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
        void deleteRestoreTime() { this->restoreTime_ = nullptr;};
        inline int64_t getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, 0L) };
        inline RestoreTaskDetail& setRestoreTime(int64_t restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


      protected:
        shared_ptr<int64_t> backupGatewayId_ {};
        shared_ptr<string> backupGatewayIdentifier_ {};
        shared_ptr<string> backupPlanId_ {};
        shared_ptr<string> backupSetId_ {};
        shared_ptr<string> backupSourceOssRegion_ {};
        shared_ptr<int32_t> continuousRestoreProgress_ {};
        shared_ptr<string> crossAliyunId_ {};
        shared_ptr<string> crossRoleName_ {};
        shared_ptr<string> destinationEndpointDatabaseName_ {};
        shared_ptr<string> destinationEndpointEnableSsl_ {};
        shared_ptr<string> destinationEndpointHost_ {};
        shared_ptr<string> destinationEndpointInstanceID_ {};
        shared_ptr<string> destinationEndpointInstanceType_ {};
        shared_ptr<string> destinationEndpointIpPort_ {};
        shared_ptr<string> destinationEndpointOracleSID_ {};
        shared_ptr<string> destinationEndpointPort_ {};
        shared_ptr<string> destinationEndpointRegion_ {};
        shared_ptr<string> destinationEndpointUserName_ {};
        shared_ptr<string> errMessage_ {};
        shared_ptr<int32_t> fullDataRestoreProgress_ {};
        shared_ptr<int32_t> fullStruAfterRestoreProgress_ {};
        shared_ptr<int32_t> fullStruforeRestoreProgress_ {};
        shared_ptr<int32_t> physicalBackupRecoverProgress_ {};
        shared_ptr<int32_t> physicalDatabaseOnlineProgress_ {};
        shared_ptr<int32_t> physicalFullAndIncrementBackupRecoverProgress_ {};
        shared_ptr<int32_t> physicalFullBackupRecoverProgress_ {};
        shared_ptr<int32_t> physicalIncrementBackupRecoverProgress_ {};
        shared_ptr<string> restoreDestinationMode_ {};
        shared_ptr<string> restoreDir_ {};
        shared_ptr<string> restoreObjects_ {};
        shared_ptr<string> restoreStatus_ {};
        shared_ptr<int64_t> restoreTaskCreateTime_ {};
        shared_ptr<int64_t> restoreTaskFinishTime_ {};
        shared_ptr<string> restoreTaskId_ {};
        shared_ptr<string> restoreTaskName_ {};
        shared_ptr<int64_t> restoreTime_ {};
      };

      virtual bool empty() const override { return this->restoreTaskDetail_ == nullptr; };
      // restoreTaskDetail Field Functions 
      bool hasRestoreTaskDetail() const { return this->restoreTaskDetail_ != nullptr;};
      void deleteRestoreTaskDetail() { this->restoreTaskDetail_ = nullptr;};
      inline const vector<Items::RestoreTaskDetail> & getRestoreTaskDetail() const { DARABONBA_PTR_GET_CONST(restoreTaskDetail_, vector<Items::RestoreTaskDetail>) };
      inline vector<Items::RestoreTaskDetail> getRestoreTaskDetail() { DARABONBA_PTR_GET(restoreTaskDetail_, vector<Items::RestoreTaskDetail>) };
      inline Items& setRestoreTaskDetail(const vector<Items::RestoreTaskDetail> & restoreTaskDetail) { DARABONBA_PTR_SET_VALUE(restoreTaskDetail_, restoreTaskDetail) };
      inline Items& setRestoreTaskDetail(vector<Items::RestoreTaskDetail> && restoreTaskDetail) { DARABONBA_PTR_SET_RVALUE(restoreTaskDetail_, restoreTaskDetail) };


    protected:
      shared_ptr<vector<Items::RestoreTaskDetail>> restoreTaskDetail_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeRestoreTaskListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeRestoreTaskListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeRestoreTaskListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeRestoreTaskListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeRestoreTaskListResponseBody::Items) };
    inline DescribeRestoreTaskListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeRestoreTaskListResponseBody::Items) };
    inline DescribeRestoreTaskListResponseBody& setItems(const DescribeRestoreTaskListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeRestoreTaskListResponseBody& setItems(DescribeRestoreTaskListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeRestoreTaskListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRestoreTaskListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRestoreTaskListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalElements Field Functions 
    bool hasTotalElements() const { return this->totalElements_ != nullptr;};
    void deleteTotalElements() { this->totalElements_ = nullptr;};
    inline int32_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0) };
    inline DescribeRestoreTaskListResponseBody& setTotalElements(int32_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeRestoreTaskListResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<DescribeRestoreTaskListResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of restore jobs.
    shared_ptr<int32_t> totalElements_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
