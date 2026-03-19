// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANLISTRESPONSEBODY_HPP_
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
  class DescribeBackupPlanListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlanListResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlanListResponseBody& obj) { 
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
    DescribeBackupPlanListResponseBody() = default ;
    DescribeBackupPlanListResponseBody(const DescribeBackupPlanListResponseBody &) = default ;
    DescribeBackupPlanListResponseBody(DescribeBackupPlanListResponseBody &&) = default ;
    DescribeBackupPlanListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlanListResponseBody() = default ;
    DescribeBackupPlanListResponseBody& operator=(const DescribeBackupPlanListResponseBody &) = default ;
    DescribeBackupPlanListResponseBody& operator=(DescribeBackupPlanListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BackupPlanDetail, backupPlanDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupPlanDetail, backupPlanDetail_);
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
      class BackupPlanDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackupPlanDetail& obj) { 
          DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
          DARABONBA_PTR_TO_JSON(BackupGatewayIdentifier, backupGatewayIdentifier_);
          DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_TO_JSON(BackupObjects, backupObjects_);
          DARABONBA_PTR_TO_JSON(BackupPeriod, backupPeriod_);
          DARABONBA_PTR_TO_JSON(BackupPlanCreateTime, backupPlanCreateTime_);
          DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
          DARABONBA_PTR_TO_JSON(BackupPlanName, backupPlanName_);
          DARABONBA_PTR_TO_JSON(BackupPlanRegion, backupPlanRegion_);
          DARABONBA_PTR_TO_JSON(BackupPlanStatus, backupPlanStatus_);
          DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadDir, backupSetDownloadDir_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadFullDataFormat, backupSetDownloadFullDataFormat_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadGatewayId, backupSetDownloadGatewayId_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadIncrementDataFormat, backupSetDownloadIncrementDataFormat_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadTargetType, backupSetDownloadTargetType_);
          DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_TO_JSON(BackupStorageType, backupStorageType_);
          DARABONBA_PTR_TO_JSON(BeginTimestampForRestore, beginTimestampForRestore_);
          DARABONBA_PTR_TO_JSON(CrossAliyunId, crossAliyunId_);
          DARABONBA_PTR_TO_JSON(CrossRoleName, crossRoleName_);
          DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
          DARABONBA_PTR_TO_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
          DARABONBA_PTR_TO_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
          DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
          DARABONBA_PTR_TO_JSON(EnableMysqlPhysicalBackupBinLog, enableMysqlPhysicalBackupBinLog_);
          DARABONBA_PTR_TO_JSON(EndTimestampForRestore, endTimestampForRestore_);
          DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
          DARABONBA_PTR_TO_JSON(IncrementBackupRetentionPeriod, incrementBackupRetentionPeriod_);
          DARABONBA_PTR_TO_JSON(IncrementDuplicationArchivePeriod, incrementDuplicationArchivePeriod_);
          DARABONBA_PTR_TO_JSON(IncrementDuplicationInfrequentAccessPeriod, incrementDuplicationInfrequentAccessPeriod_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_TO_JSON(InstanceExpiredTimestamp, instanceExpiredTimestamp_);
          DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
          DARABONBA_PTR_TO_JSON(LogDuplicationArchivePeriod, logDuplicationArchivePeriod_);
          DARABONBA_PTR_TO_JSON(LogDuplicationInfrequentAccessPeriod, logDuplicationInfrequentAccessPeriod_);
          DARABONBA_PTR_TO_JSON(OSSBucketName, OSSBucketName_);
          DARABONBA_PTR_TO_JSON(OSSBucketRegion, OSSBucketRegion_);
          DARABONBA_PTR_TO_JSON(OpenBackupSetAutoDownload, openBackupSetAutoDownload_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
          DARABONBA_PTR_TO_JSON(SourceEndpointEnableSsl, sourceEndpointEnableSsl_);
          DARABONBA_PTR_TO_JSON(SourceEndpointHost, sourceEndpointHost_);
          DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
          DARABONBA_PTR_TO_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
          DARABONBA_PTR_TO_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
          DARABONBA_PTR_TO_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
          DARABONBA_PTR_TO_JSON(SourceEndpointPort, sourceEndpointPort_);
          DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
          DARABONBA_PTR_TO_JSON(SourceEndpointUserName, sourceEndpointUserName_);
          DARABONBA_PTR_TO_JSON(StorageEncryptMethod, storageEncryptMethod_);
        };
        friend void from_json(const Darabonba::Json& j, BackupPlanDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
          DARABONBA_PTR_FROM_JSON(BackupGatewayIdentifier, backupGatewayIdentifier_);
          DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_FROM_JSON(BackupObjects, backupObjects_);
          DARABONBA_PTR_FROM_JSON(BackupPeriod, backupPeriod_);
          DARABONBA_PTR_FROM_JSON(BackupPlanCreateTime, backupPlanCreateTime_);
          DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
          DARABONBA_PTR_FROM_JSON(BackupPlanName, backupPlanName_);
          DARABONBA_PTR_FROM_JSON(BackupPlanRegion, backupPlanRegion_);
          DARABONBA_PTR_FROM_JSON(BackupPlanStatus, backupPlanStatus_);
          DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadDir, backupSetDownloadDir_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadFullDataFormat, backupSetDownloadFullDataFormat_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadGatewayId, backupSetDownloadGatewayId_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadIncrementDataFormat, backupSetDownloadIncrementDataFormat_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadTargetType, backupSetDownloadTargetType_);
          DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_FROM_JSON(BackupStorageType, backupStorageType_);
          DARABONBA_PTR_FROM_JSON(BeginTimestampForRestore, beginTimestampForRestore_);
          DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
          DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
          DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
          DARABONBA_PTR_FROM_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
          DARABONBA_PTR_FROM_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
          DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
          DARABONBA_PTR_FROM_JSON(EnableMysqlPhysicalBackupBinLog, enableMysqlPhysicalBackupBinLog_);
          DARABONBA_PTR_FROM_JSON(EndTimestampForRestore, endTimestampForRestore_);
          DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
          DARABONBA_PTR_FROM_JSON(IncrementBackupRetentionPeriod, incrementBackupRetentionPeriod_);
          DARABONBA_PTR_FROM_JSON(IncrementDuplicationArchivePeriod, incrementDuplicationArchivePeriod_);
          DARABONBA_PTR_FROM_JSON(IncrementDuplicationInfrequentAccessPeriod, incrementDuplicationInfrequentAccessPeriod_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_FROM_JSON(InstanceExpiredTimestamp, instanceExpiredTimestamp_);
          DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
          DARABONBA_PTR_FROM_JSON(LogDuplicationArchivePeriod, logDuplicationArchivePeriod_);
          DARABONBA_PTR_FROM_JSON(LogDuplicationInfrequentAccessPeriod, logDuplicationInfrequentAccessPeriod_);
          DARABONBA_PTR_FROM_JSON(OSSBucketName, OSSBucketName_);
          DARABONBA_PTR_FROM_JSON(OSSBucketRegion, OSSBucketRegion_);
          DARABONBA_PTR_FROM_JSON(OpenBackupSetAutoDownload, openBackupSetAutoDownload_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointEnableSsl, sourceEndpointEnableSsl_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointHost, sourceEndpointHost_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointPort, sourceEndpointPort_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointUserName, sourceEndpointUserName_);
          DARABONBA_PTR_FROM_JSON(StorageEncryptMethod, storageEncryptMethod_);
        };
        BackupPlanDetail() = default ;
        BackupPlanDetail(const BackupPlanDetail &) = default ;
        BackupPlanDetail(BackupPlanDetail &&) = default ;
        BackupPlanDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackupPlanDetail() = default ;
        BackupPlanDetail& operator=(const BackupPlanDetail &) = default ;
        BackupPlanDetail& operator=(BackupPlanDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && this->backupGatewayIdentifier_ == nullptr && this->backupMethod_ == nullptr && this->backupObjects_ == nullptr && this->backupPeriod_ == nullptr && this->backupPlanCreateTime_ == nullptr
        && this->backupPlanId_ == nullptr && this->backupPlanName_ == nullptr && this->backupPlanRegion_ == nullptr && this->backupPlanStatus_ == nullptr && this->backupRetentionPeriod_ == nullptr
        && this->backupSetDownloadDir_ == nullptr && this->backupSetDownloadFullDataFormat_ == nullptr && this->backupSetDownloadGatewayId_ == nullptr && this->backupSetDownloadIncrementDataFormat_ == nullptr && this->backupSetDownloadTargetType_ == nullptr
        && this->backupStartTime_ == nullptr && this->backupStorageType_ == nullptr && this->beginTimestampForRestore_ == nullptr && this->crossAliyunId_ == nullptr && this->crossRoleName_ == nullptr
        && this->databaseType_ == nullptr && this->duplicationArchivePeriod_ == nullptr && this->duplicationInfrequentAccessPeriod_ == nullptr && this->enableBackupLog_ == nullptr && this->enableMysqlPhysicalBackupBinLog_ == nullptr
        && this->endTimestampForRestore_ == nullptr && this->errMessage_ == nullptr && this->incrementBackupRetentionPeriod_ == nullptr && this->incrementDuplicationArchivePeriod_ == nullptr && this->incrementDuplicationInfrequentAccessPeriod_ == nullptr
        && this->instanceChargeType_ == nullptr && this->instanceClass_ == nullptr && this->instanceExpiredTimestamp_ == nullptr && this->logBackupRetentionPeriod_ == nullptr && this->logDuplicationArchivePeriod_ == nullptr
        && this->logDuplicationInfrequentAccessPeriod_ == nullptr && this->OSSBucketName_ == nullptr && this->OSSBucketRegion_ == nullptr && this->openBackupSetAutoDownload_ == nullptr && this->resourceGroupId_ == nullptr
        && this->sourceEndpointDatabaseName_ == nullptr && this->sourceEndpointEnableSsl_ == nullptr && this->sourceEndpointHost_ == nullptr && this->sourceEndpointInstanceID_ == nullptr && this->sourceEndpointInstanceType_ == nullptr
        && this->sourceEndpointIpPort_ == nullptr && this->sourceEndpointOracleSID_ == nullptr && this->sourceEndpointPort_ == nullptr && this->sourceEndpointRegion_ == nullptr && this->sourceEndpointUserName_ == nullptr
        && this->storageEncryptMethod_ == nullptr; };
        // backupGatewayId Field Functions 
        bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
        void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
        inline int64_t getBackupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
        inline BackupPlanDetail& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


        // backupGatewayIdentifier Field Functions 
        bool hasBackupGatewayIdentifier() const { return this->backupGatewayIdentifier_ != nullptr;};
        void deleteBackupGatewayIdentifier() { this->backupGatewayIdentifier_ = nullptr;};
        inline string getBackupGatewayIdentifier() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayIdentifier_, "") };
        inline BackupPlanDetail& setBackupGatewayIdentifier(string backupGatewayIdentifier) { DARABONBA_PTR_SET_VALUE(backupGatewayIdentifier_, backupGatewayIdentifier) };


        // backupMethod Field Functions 
        bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
        void deleteBackupMethod() { this->backupMethod_ = nullptr;};
        inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
        inline BackupPlanDetail& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


        // backupObjects Field Functions 
        bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
        void deleteBackupObjects() { this->backupObjects_ = nullptr;};
        inline string getBackupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
        inline BackupPlanDetail& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


        // backupPeriod Field Functions 
        bool hasBackupPeriod() const { return this->backupPeriod_ != nullptr;};
        void deleteBackupPeriod() { this->backupPeriod_ = nullptr;};
        inline string getBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupPeriod_, "") };
        inline BackupPlanDetail& setBackupPeriod(string backupPeriod) { DARABONBA_PTR_SET_VALUE(backupPeriod_, backupPeriod) };


        // backupPlanCreateTime Field Functions 
        bool hasBackupPlanCreateTime() const { return this->backupPlanCreateTime_ != nullptr;};
        void deleteBackupPlanCreateTime() { this->backupPlanCreateTime_ = nullptr;};
        inline int64_t getBackupPlanCreateTime() const { DARABONBA_PTR_GET_DEFAULT(backupPlanCreateTime_, 0L) };
        inline BackupPlanDetail& setBackupPlanCreateTime(int64_t backupPlanCreateTime) { DARABONBA_PTR_SET_VALUE(backupPlanCreateTime_, backupPlanCreateTime) };


        // backupPlanId Field Functions 
        bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
        void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
        inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
        inline BackupPlanDetail& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


        // backupPlanName Field Functions 
        bool hasBackupPlanName() const { return this->backupPlanName_ != nullptr;};
        void deleteBackupPlanName() { this->backupPlanName_ = nullptr;};
        inline string getBackupPlanName() const { DARABONBA_PTR_GET_DEFAULT(backupPlanName_, "") };
        inline BackupPlanDetail& setBackupPlanName(string backupPlanName) { DARABONBA_PTR_SET_VALUE(backupPlanName_, backupPlanName) };


        // backupPlanRegion Field Functions 
        bool hasBackupPlanRegion() const { return this->backupPlanRegion_ != nullptr;};
        void deleteBackupPlanRegion() { this->backupPlanRegion_ = nullptr;};
        inline string getBackupPlanRegion() const { DARABONBA_PTR_GET_DEFAULT(backupPlanRegion_, "") };
        inline BackupPlanDetail& setBackupPlanRegion(string backupPlanRegion) { DARABONBA_PTR_SET_VALUE(backupPlanRegion_, backupPlanRegion) };


        // backupPlanStatus Field Functions 
        bool hasBackupPlanStatus() const { return this->backupPlanStatus_ != nullptr;};
        void deleteBackupPlanStatus() { this->backupPlanStatus_ = nullptr;};
        inline string getBackupPlanStatus() const { DARABONBA_PTR_GET_DEFAULT(backupPlanStatus_, "") };
        inline BackupPlanDetail& setBackupPlanStatus(string backupPlanStatus) { DARABONBA_PTR_SET_VALUE(backupPlanStatus_, backupPlanStatus) };


        // backupRetentionPeriod Field Functions 
        bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
        void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
        inline int32_t getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
        inline BackupPlanDetail& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


        // backupSetDownloadDir Field Functions 
        bool hasBackupSetDownloadDir() const { return this->backupSetDownloadDir_ != nullptr;};
        void deleteBackupSetDownloadDir() { this->backupSetDownloadDir_ = nullptr;};
        inline string getBackupSetDownloadDir() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadDir_, "") };
        inline BackupPlanDetail& setBackupSetDownloadDir(string backupSetDownloadDir) { DARABONBA_PTR_SET_VALUE(backupSetDownloadDir_, backupSetDownloadDir) };


        // backupSetDownloadFullDataFormat Field Functions 
        bool hasBackupSetDownloadFullDataFormat() const { return this->backupSetDownloadFullDataFormat_ != nullptr;};
        void deleteBackupSetDownloadFullDataFormat() { this->backupSetDownloadFullDataFormat_ = nullptr;};
        inline string getBackupSetDownloadFullDataFormat() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadFullDataFormat_, "") };
        inline BackupPlanDetail& setBackupSetDownloadFullDataFormat(string backupSetDownloadFullDataFormat) { DARABONBA_PTR_SET_VALUE(backupSetDownloadFullDataFormat_, backupSetDownloadFullDataFormat) };


        // backupSetDownloadGatewayId Field Functions 
        bool hasBackupSetDownloadGatewayId() const { return this->backupSetDownloadGatewayId_ != nullptr;};
        void deleteBackupSetDownloadGatewayId() { this->backupSetDownloadGatewayId_ = nullptr;};
        inline int64_t getBackupSetDownloadGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadGatewayId_, 0L) };
        inline BackupPlanDetail& setBackupSetDownloadGatewayId(int64_t backupSetDownloadGatewayId) { DARABONBA_PTR_SET_VALUE(backupSetDownloadGatewayId_, backupSetDownloadGatewayId) };


        // backupSetDownloadIncrementDataFormat Field Functions 
        bool hasBackupSetDownloadIncrementDataFormat() const { return this->backupSetDownloadIncrementDataFormat_ != nullptr;};
        void deleteBackupSetDownloadIncrementDataFormat() { this->backupSetDownloadIncrementDataFormat_ = nullptr;};
        inline string getBackupSetDownloadIncrementDataFormat() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadIncrementDataFormat_, "") };
        inline BackupPlanDetail& setBackupSetDownloadIncrementDataFormat(string backupSetDownloadIncrementDataFormat) { DARABONBA_PTR_SET_VALUE(backupSetDownloadIncrementDataFormat_, backupSetDownloadIncrementDataFormat) };


        // backupSetDownloadTargetType Field Functions 
        bool hasBackupSetDownloadTargetType() const { return this->backupSetDownloadTargetType_ != nullptr;};
        void deleteBackupSetDownloadTargetType() { this->backupSetDownloadTargetType_ = nullptr;};
        inline string getBackupSetDownloadTargetType() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTargetType_, "") };
        inline BackupPlanDetail& setBackupSetDownloadTargetType(string backupSetDownloadTargetType) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTargetType_, backupSetDownloadTargetType) };


        // backupStartTime Field Functions 
        bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
        void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
        inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
        inline BackupPlanDetail& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


        // backupStorageType Field Functions 
        bool hasBackupStorageType() const { return this->backupStorageType_ != nullptr;};
        void deleteBackupStorageType() { this->backupStorageType_ = nullptr;};
        inline string getBackupStorageType() const { DARABONBA_PTR_GET_DEFAULT(backupStorageType_, "") };
        inline BackupPlanDetail& setBackupStorageType(string backupStorageType) { DARABONBA_PTR_SET_VALUE(backupStorageType_, backupStorageType) };


        // beginTimestampForRestore Field Functions 
        bool hasBeginTimestampForRestore() const { return this->beginTimestampForRestore_ != nullptr;};
        void deleteBeginTimestampForRestore() { this->beginTimestampForRestore_ = nullptr;};
        inline int64_t getBeginTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(beginTimestampForRestore_, 0L) };
        inline BackupPlanDetail& setBeginTimestampForRestore(int64_t beginTimestampForRestore) { DARABONBA_PTR_SET_VALUE(beginTimestampForRestore_, beginTimestampForRestore) };


        // crossAliyunId Field Functions 
        bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
        void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
        inline string getCrossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
        inline BackupPlanDetail& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


        // crossRoleName Field Functions 
        bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
        void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
        inline string getCrossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
        inline BackupPlanDetail& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


        // databaseType Field Functions 
        bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
        void deleteDatabaseType() { this->databaseType_ = nullptr;};
        inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
        inline BackupPlanDetail& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


        // duplicationArchivePeriod Field Functions 
        bool hasDuplicationArchivePeriod() const { return this->duplicationArchivePeriod_ != nullptr;};
        void deleteDuplicationArchivePeriod() { this->duplicationArchivePeriod_ = nullptr;};
        inline int32_t getDuplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationArchivePeriod_, 0) };
        inline BackupPlanDetail& setDuplicationArchivePeriod(int32_t duplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(duplicationArchivePeriod_, duplicationArchivePeriod) };


        // duplicationInfrequentAccessPeriod Field Functions 
        bool hasDuplicationInfrequentAccessPeriod() const { return this->duplicationInfrequentAccessPeriod_ != nullptr;};
        void deleteDuplicationInfrequentAccessPeriod() { this->duplicationInfrequentAccessPeriod_ = nullptr;};
        inline int32_t getDuplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationInfrequentAccessPeriod_, 0) };
        inline BackupPlanDetail& setDuplicationInfrequentAccessPeriod(int32_t duplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(duplicationInfrequentAccessPeriod_, duplicationInfrequentAccessPeriod) };


        // enableBackupLog Field Functions 
        bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
        void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
        inline bool getEnableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, false) };
        inline BackupPlanDetail& setEnableBackupLog(bool enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


        // enableMysqlPhysicalBackupBinLog Field Functions 
        bool hasEnableMysqlPhysicalBackupBinLog() const { return this->enableMysqlPhysicalBackupBinLog_ != nullptr;};
        void deleteEnableMysqlPhysicalBackupBinLog() { this->enableMysqlPhysicalBackupBinLog_ = nullptr;};
        inline bool getEnableMysqlPhysicalBackupBinLog() const { DARABONBA_PTR_GET_DEFAULT(enableMysqlPhysicalBackupBinLog_, false) };
        inline BackupPlanDetail& setEnableMysqlPhysicalBackupBinLog(bool enableMysqlPhysicalBackupBinLog) { DARABONBA_PTR_SET_VALUE(enableMysqlPhysicalBackupBinLog_, enableMysqlPhysicalBackupBinLog) };


        // endTimestampForRestore Field Functions 
        bool hasEndTimestampForRestore() const { return this->endTimestampForRestore_ != nullptr;};
        void deleteEndTimestampForRestore() { this->endTimestampForRestore_ = nullptr;};
        inline int64_t getEndTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(endTimestampForRestore_, 0L) };
        inline BackupPlanDetail& setEndTimestampForRestore(int64_t endTimestampForRestore) { DARABONBA_PTR_SET_VALUE(endTimestampForRestore_, endTimestampForRestore) };


        // errMessage Field Functions 
        bool hasErrMessage() const { return this->errMessage_ != nullptr;};
        void deleteErrMessage() { this->errMessage_ = nullptr;};
        inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
        inline BackupPlanDetail& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


        // incrementBackupRetentionPeriod Field Functions 
        bool hasIncrementBackupRetentionPeriod() const { return this->incrementBackupRetentionPeriod_ != nullptr;};
        void deleteIncrementBackupRetentionPeriod() { this->incrementBackupRetentionPeriod_ = nullptr;};
        inline string getIncrementBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(incrementBackupRetentionPeriod_, "") };
        inline BackupPlanDetail& setIncrementBackupRetentionPeriod(string incrementBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(incrementBackupRetentionPeriod_, incrementBackupRetentionPeriod) };


        // incrementDuplicationArchivePeriod Field Functions 
        bool hasIncrementDuplicationArchivePeriod() const { return this->incrementDuplicationArchivePeriod_ != nullptr;};
        void deleteIncrementDuplicationArchivePeriod() { this->incrementDuplicationArchivePeriod_ = nullptr;};
        inline string getIncrementDuplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(incrementDuplicationArchivePeriod_, "") };
        inline BackupPlanDetail& setIncrementDuplicationArchivePeriod(string incrementDuplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(incrementDuplicationArchivePeriod_, incrementDuplicationArchivePeriod) };


        // incrementDuplicationInfrequentAccessPeriod Field Functions 
        bool hasIncrementDuplicationInfrequentAccessPeriod() const { return this->incrementDuplicationInfrequentAccessPeriod_ != nullptr;};
        void deleteIncrementDuplicationInfrequentAccessPeriod() { this->incrementDuplicationInfrequentAccessPeriod_ = nullptr;};
        inline string getIncrementDuplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(incrementDuplicationInfrequentAccessPeriod_, "") };
        inline BackupPlanDetail& setIncrementDuplicationInfrequentAccessPeriod(string incrementDuplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(incrementDuplicationInfrequentAccessPeriod_, incrementDuplicationInfrequentAccessPeriod) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline BackupPlanDetail& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // instanceClass Field Functions 
        bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
        void deleteInstanceClass() { this->instanceClass_ = nullptr;};
        inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
        inline BackupPlanDetail& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


        // instanceExpiredTimestamp Field Functions 
        bool hasInstanceExpiredTimestamp() const { return this->instanceExpiredTimestamp_ != nullptr;};
        void deleteInstanceExpiredTimestamp() { this->instanceExpiredTimestamp_ = nullptr;};
        inline int64_t getInstanceExpiredTimestamp() const { DARABONBA_PTR_GET_DEFAULT(instanceExpiredTimestamp_, 0L) };
        inline BackupPlanDetail& setInstanceExpiredTimestamp(int64_t instanceExpiredTimestamp) { DARABONBA_PTR_SET_VALUE(instanceExpiredTimestamp_, instanceExpiredTimestamp) };


        // logBackupRetentionPeriod Field Functions 
        bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
        void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
        inline string getLogBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, "") };
        inline BackupPlanDetail& setLogBackupRetentionPeriod(string logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


        // logDuplicationArchivePeriod Field Functions 
        bool hasLogDuplicationArchivePeriod() const { return this->logDuplicationArchivePeriod_ != nullptr;};
        void deleteLogDuplicationArchivePeriod() { this->logDuplicationArchivePeriod_ = nullptr;};
        inline string getLogDuplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(logDuplicationArchivePeriod_, "") };
        inline BackupPlanDetail& setLogDuplicationArchivePeriod(string logDuplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(logDuplicationArchivePeriod_, logDuplicationArchivePeriod) };


        // logDuplicationInfrequentAccessPeriod Field Functions 
        bool hasLogDuplicationInfrequentAccessPeriod() const { return this->logDuplicationInfrequentAccessPeriod_ != nullptr;};
        void deleteLogDuplicationInfrequentAccessPeriod() { this->logDuplicationInfrequentAccessPeriod_ = nullptr;};
        inline string getLogDuplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(logDuplicationInfrequentAccessPeriod_, "") };
        inline BackupPlanDetail& setLogDuplicationInfrequentAccessPeriod(string logDuplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(logDuplicationInfrequentAccessPeriod_, logDuplicationInfrequentAccessPeriod) };


        // OSSBucketName Field Functions 
        bool hasOSSBucketName() const { return this->OSSBucketName_ != nullptr;};
        void deleteOSSBucketName() { this->OSSBucketName_ = nullptr;};
        inline string getOSSBucketName() const { DARABONBA_PTR_GET_DEFAULT(OSSBucketName_, "") };
        inline BackupPlanDetail& setOSSBucketName(string OSSBucketName) { DARABONBA_PTR_SET_VALUE(OSSBucketName_, OSSBucketName) };


        // OSSBucketRegion Field Functions 
        bool hasOSSBucketRegion() const { return this->OSSBucketRegion_ != nullptr;};
        void deleteOSSBucketRegion() { this->OSSBucketRegion_ = nullptr;};
        inline string getOSSBucketRegion() const { DARABONBA_PTR_GET_DEFAULT(OSSBucketRegion_, "") };
        inline BackupPlanDetail& setOSSBucketRegion(string OSSBucketRegion) { DARABONBA_PTR_SET_VALUE(OSSBucketRegion_, OSSBucketRegion) };


        // openBackupSetAutoDownload Field Functions 
        bool hasOpenBackupSetAutoDownload() const { return this->openBackupSetAutoDownload_ != nullptr;};
        void deleteOpenBackupSetAutoDownload() { this->openBackupSetAutoDownload_ = nullptr;};
        inline bool getOpenBackupSetAutoDownload() const { DARABONBA_PTR_GET_DEFAULT(openBackupSetAutoDownload_, false) };
        inline BackupPlanDetail& setOpenBackupSetAutoDownload(bool openBackupSetAutoDownload) { DARABONBA_PTR_SET_VALUE(openBackupSetAutoDownload_, openBackupSetAutoDownload) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline BackupPlanDetail& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // sourceEndpointDatabaseName Field Functions 
        bool hasSourceEndpointDatabaseName() const { return this->sourceEndpointDatabaseName_ != nullptr;};
        void deleteSourceEndpointDatabaseName() { this->sourceEndpointDatabaseName_ = nullptr;};
        inline string getSourceEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointDatabaseName_, "") };
        inline BackupPlanDetail& setSourceEndpointDatabaseName(string sourceEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceEndpointDatabaseName_, sourceEndpointDatabaseName) };


        // sourceEndpointEnableSsl Field Functions 
        bool hasSourceEndpointEnableSsl() const { return this->sourceEndpointEnableSsl_ != nullptr;};
        void deleteSourceEndpointEnableSsl() { this->sourceEndpointEnableSsl_ = nullptr;};
        inline string getSourceEndpointEnableSsl() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointEnableSsl_, "") };
        inline BackupPlanDetail& setSourceEndpointEnableSsl(string sourceEndpointEnableSsl) { DARABONBA_PTR_SET_VALUE(sourceEndpointEnableSsl_, sourceEndpointEnableSsl) };


        // sourceEndpointHost Field Functions 
        bool hasSourceEndpointHost() const { return this->sourceEndpointHost_ != nullptr;};
        void deleteSourceEndpointHost() { this->sourceEndpointHost_ = nullptr;};
        inline string getSourceEndpointHost() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointHost_, "") };
        inline BackupPlanDetail& setSourceEndpointHost(string sourceEndpointHost) { DARABONBA_PTR_SET_VALUE(sourceEndpointHost_, sourceEndpointHost) };


        // sourceEndpointInstanceID Field Functions 
        bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
        void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
        inline string getSourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
        inline BackupPlanDetail& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


        // sourceEndpointInstanceType Field Functions 
        bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
        void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
        inline string getSourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
        inline BackupPlanDetail& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


        // sourceEndpointIpPort Field Functions 
        bool hasSourceEndpointIpPort() const { return this->sourceEndpointIpPort_ != nullptr;};
        void deleteSourceEndpointIpPort() { this->sourceEndpointIpPort_ = nullptr;};
        inline string getSourceEndpointIpPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIpPort_, "") };
        inline BackupPlanDetail& setSourceEndpointIpPort(string sourceEndpointIpPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointIpPort_, sourceEndpointIpPort) };


        // sourceEndpointOracleSID Field Functions 
        bool hasSourceEndpointOracleSID() const { return this->sourceEndpointOracleSID_ != nullptr;};
        void deleteSourceEndpointOracleSID() { this->sourceEndpointOracleSID_ = nullptr;};
        inline string getSourceEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleSID_, "") };
        inline BackupPlanDetail& setSourceEndpointOracleSID(string sourceEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleSID_, sourceEndpointOracleSID) };


        // sourceEndpointPort Field Functions 
        bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
        void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
        inline string getSourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, "") };
        inline BackupPlanDetail& setSourceEndpointPort(string sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


        // sourceEndpointRegion Field Functions 
        bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
        void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
        inline string getSourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
        inline BackupPlanDetail& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


        // sourceEndpointUserName Field Functions 
        bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
        void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
        inline string getSourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
        inline BackupPlanDetail& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


        // storageEncryptMethod Field Functions 
        bool hasStorageEncryptMethod() const { return this->storageEncryptMethod_ != nullptr;};
        void deleteStorageEncryptMethod() { this->storageEncryptMethod_ = nullptr;};
        inline string getStorageEncryptMethod() const { DARABONBA_PTR_GET_DEFAULT(storageEncryptMethod_, "") };
        inline BackupPlanDetail& setStorageEncryptMethod(string storageEncryptMethod) { DARABONBA_PTR_SET_VALUE(storageEncryptMethod_, storageEncryptMethod) };


      protected:
        shared_ptr<int64_t> backupGatewayId_ {};
        shared_ptr<string> backupGatewayIdentifier_ {};
        shared_ptr<string> backupMethod_ {};
        shared_ptr<string> backupObjects_ {};
        shared_ptr<string> backupPeriod_ {};
        shared_ptr<int64_t> backupPlanCreateTime_ {};
        shared_ptr<string> backupPlanId_ {};
        shared_ptr<string> backupPlanName_ {};
        shared_ptr<string> backupPlanRegion_ {};
        shared_ptr<string> backupPlanStatus_ {};
        shared_ptr<int32_t> backupRetentionPeriod_ {};
        shared_ptr<string> backupSetDownloadDir_ {};
        shared_ptr<string> backupSetDownloadFullDataFormat_ {};
        shared_ptr<int64_t> backupSetDownloadGatewayId_ {};
        shared_ptr<string> backupSetDownloadIncrementDataFormat_ {};
        shared_ptr<string> backupSetDownloadTargetType_ {};
        shared_ptr<string> backupStartTime_ {};
        shared_ptr<string> backupStorageType_ {};
        shared_ptr<int64_t> beginTimestampForRestore_ {};
        shared_ptr<string> crossAliyunId_ {};
        shared_ptr<string> crossRoleName_ {};
        shared_ptr<string> databaseType_ {};
        shared_ptr<int32_t> duplicationArchivePeriod_ {};
        shared_ptr<int32_t> duplicationInfrequentAccessPeriod_ {};
        shared_ptr<bool> enableBackupLog_ {};
        shared_ptr<bool> enableMysqlPhysicalBackupBinLog_ {};
        shared_ptr<int64_t> endTimestampForRestore_ {};
        shared_ptr<string> errMessage_ {};
        shared_ptr<string> incrementBackupRetentionPeriod_ {};
        shared_ptr<string> incrementDuplicationArchivePeriod_ {};
        shared_ptr<string> incrementDuplicationInfrequentAccessPeriod_ {};
        shared_ptr<string> instanceChargeType_ {};
        shared_ptr<string> instanceClass_ {};
        shared_ptr<int64_t> instanceExpiredTimestamp_ {};
        shared_ptr<string> logBackupRetentionPeriod_ {};
        shared_ptr<string> logDuplicationArchivePeriod_ {};
        shared_ptr<string> logDuplicationInfrequentAccessPeriod_ {};
        shared_ptr<string> OSSBucketName_ {};
        shared_ptr<string> OSSBucketRegion_ {};
        shared_ptr<bool> openBackupSetAutoDownload_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> sourceEndpointDatabaseName_ {};
        shared_ptr<string> sourceEndpointEnableSsl_ {};
        shared_ptr<string> sourceEndpointHost_ {};
        shared_ptr<string> sourceEndpointInstanceID_ {};
        shared_ptr<string> sourceEndpointInstanceType_ {};
        shared_ptr<string> sourceEndpointIpPort_ {};
        shared_ptr<string> sourceEndpointOracleSID_ {};
        shared_ptr<string> sourceEndpointPort_ {};
        shared_ptr<string> sourceEndpointRegion_ {};
        shared_ptr<string> sourceEndpointUserName_ {};
        shared_ptr<string> storageEncryptMethod_ {};
      };

      virtual bool empty() const override { return this->backupPlanDetail_ == nullptr; };
      // backupPlanDetail Field Functions 
      bool hasBackupPlanDetail() const { return this->backupPlanDetail_ != nullptr;};
      void deleteBackupPlanDetail() { this->backupPlanDetail_ = nullptr;};
      inline const vector<Items::BackupPlanDetail> & getBackupPlanDetail() const { DARABONBA_PTR_GET_CONST(backupPlanDetail_, vector<Items::BackupPlanDetail>) };
      inline vector<Items::BackupPlanDetail> getBackupPlanDetail() { DARABONBA_PTR_GET(backupPlanDetail_, vector<Items::BackupPlanDetail>) };
      inline Items& setBackupPlanDetail(const vector<Items::BackupPlanDetail> & backupPlanDetail) { DARABONBA_PTR_SET_VALUE(backupPlanDetail_, backupPlanDetail) };
      inline Items& setBackupPlanDetail(vector<Items::BackupPlanDetail> && backupPlanDetail) { DARABONBA_PTR_SET_RVALUE(backupPlanDetail_, backupPlanDetail) };


    protected:
      shared_ptr<vector<Items::BackupPlanDetail>> backupPlanDetail_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeBackupPlanListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeBackupPlanListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeBackupPlanListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBackupPlanListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeBackupPlanListResponseBody::Items) };
    inline DescribeBackupPlanListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeBackupPlanListResponseBody::Items) };
    inline DescribeBackupPlanListResponseBody& setItems(const DescribeBackupPlanListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBackupPlanListResponseBody& setItems(DescribeBackupPlanListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeBackupPlanListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupPlanListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPlanListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupPlanListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalElements Field Functions 
    bool hasTotalElements() const { return this->totalElements_ != nullptr;};
    void deleteTotalElements() { this->totalElements_ = nullptr;};
    inline int32_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0) };
    inline DescribeBackupPlanListResponseBody& setTotalElements(int32_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeBackupPlanListResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // Error code.
    shared_ptr<string> errCode_ {};
    // Error message.
    shared_ptr<string> errMessage_ {};
    // HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<DescribeBackupPlanListResponseBody::Items> items_ {};
    // Page number.
    shared_ptr<int32_t> pageNum_ {};
    // Number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request succeeded.
    shared_ptr<bool> success_ {};
    // Total number of backup plans.
    shared_ptr<int32_t> totalElements_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
