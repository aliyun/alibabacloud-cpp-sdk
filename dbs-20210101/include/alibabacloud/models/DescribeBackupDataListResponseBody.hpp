// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPDATALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPDATALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeBackupDataListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupDataListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupDataListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBackupDataListResponseBody() = default ;
    DescribeBackupDataListResponseBody(const DescribeBackupDataListResponseBody &) = default ;
    DescribeBackupDataListResponseBody(DescribeBackupDataListResponseBody &&) = default ;
    DescribeBackupDataListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupDataListResponseBody() = default ;
    DescribeBackupDataListResponseBody& operator=(const DescribeBackupDataListResponseBody &) = default ;
    DescribeBackupDataListResponseBody& operator=(DescribeBackupDataListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_TO_JSON(BackupId, backupId_);
          DARABONBA_PTR_TO_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupLocation, backupLocation_);
          DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_TO_JSON(BackupName, backupName_);
          DARABONBA_PTR_TO_JSON(BackupScale, backupScale_);
          DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(BackupType, backupType_);
          DARABONBA_PTR_TO_JSON(Checksum, checksum_);
          DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
          DARABONBA_PTR_TO_JSON(Encryption, encryption_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpectExpireTime, expectExpireTime_);
          DARABONBA_PTR_TO_JSON(ExpectExpireType, expectExpireType_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
          DARABONBA_PTR_TO_JSON(PolarSnapshot, polarSnapshot_);
          DARABONBA_PTR_TO_JSON(SupportDeletion, supportDeletion_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
          DARABONBA_PTR_FROM_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupLocation, backupLocation_);
          DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_FROM_JSON(BackupName, backupName_);
          DARABONBA_PTR_FROM_JSON(BackupScale, backupScale_);
          DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
          DARABONBA_PTR_FROM_JSON(Checksum, checksum_);
          DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
          DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpectExpireTime, expectExpireTime_);
          DARABONBA_PTR_FROM_JSON(ExpectExpireType, expectExpireType_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
          DARABONBA_PTR_FROM_JSON(PolarSnapshot, polarSnapshot_);
          DARABONBA_PTR_FROM_JSON(SupportDeletion, supportDeletion_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PolarSnapshot : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PolarSnapshot& obj) { 
            DARABONBA_PTR_TO_JSON(DumpId, dumpId_);
            DARABONBA_PTR_TO_JSON(DumpSize, dumpSize_);
            DARABONBA_PTR_TO_JSON(ExpectExpireTime, expectExpireTime_);
            DARABONBA_PTR_TO_JSON(expectExpireType, expectExpireType_);
          };
          friend void from_json(const Darabonba::Json& j, PolarSnapshot& obj) { 
            DARABONBA_PTR_FROM_JSON(DumpId, dumpId_);
            DARABONBA_PTR_FROM_JSON(DumpSize, dumpSize_);
            DARABONBA_PTR_FROM_JSON(ExpectExpireTime, expectExpireTime_);
            DARABONBA_PTR_FROM_JSON(expectExpireType, expectExpireType_);
          };
          PolarSnapshot() = default ;
          PolarSnapshot(const PolarSnapshot &) = default ;
          PolarSnapshot(PolarSnapshot &&) = default ;
          PolarSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PolarSnapshot() = default ;
          PolarSnapshot& operator=(const PolarSnapshot &) = default ;
          PolarSnapshot& operator=(PolarSnapshot &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dumpId_ == nullptr
        && this->dumpSize_ == nullptr && this->expectExpireTime_ == nullptr && this->expectExpireType_ == nullptr; };
          // dumpId Field Functions 
          bool hasDumpId() const { return this->dumpId_ != nullptr;};
          void deleteDumpId() { this->dumpId_ = nullptr;};
          inline int64_t getDumpId() const { DARABONBA_PTR_GET_DEFAULT(dumpId_, 0L) };
          inline PolarSnapshot& setDumpId(int64_t dumpId) { DARABONBA_PTR_SET_VALUE(dumpId_, dumpId) };


          // dumpSize Field Functions 
          bool hasDumpSize() const { return this->dumpSize_ != nullptr;};
          void deleteDumpSize() { this->dumpSize_ = nullptr;};
          inline int64_t getDumpSize() const { DARABONBA_PTR_GET_DEFAULT(dumpSize_, 0L) };
          inline PolarSnapshot& setDumpSize(int64_t dumpSize) { DARABONBA_PTR_SET_VALUE(dumpSize_, dumpSize) };


          // expectExpireTime Field Functions 
          bool hasExpectExpireTime() const { return this->expectExpireTime_ != nullptr;};
          void deleteExpectExpireTime() { this->expectExpireTime_ = nullptr;};
          inline string getExpectExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expectExpireTime_, "") };
          inline PolarSnapshot& setExpectExpireTime(string expectExpireTime) { DARABONBA_PTR_SET_VALUE(expectExpireTime_, expectExpireTime) };


          // expectExpireType Field Functions 
          bool hasExpectExpireType() const { return this->expectExpireType_ != nullptr;};
          void deleteExpectExpireType() { this->expectExpireType_ = nullptr;};
          inline string getExpectExpireType() const { DARABONBA_PTR_GET_DEFAULT(expectExpireType_, "") };
          inline PolarSnapshot& setExpectExpireType(string expectExpireType) { DARABONBA_PTR_SET_VALUE(expectExpireType_, expectExpireType) };


        protected:
          // The dump backup ID.
          shared_ptr<int64_t> dumpId_ {};
          // The size of the dump backup. Unit: byte.
          shared_ptr<int64_t> dumpSize_ {};
          // The time when the backup set expires. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
          shared_ptr<string> expectExpireTime_ {};
          // Indicates whether the backup set expires. Valid values:
          // 
          // *   NEVER: The backup set does not expire.
          // *   EXPIRED: The backup set expired.
          // *   DELAY: The backup set expires after a specific period of time.
          shared_ptr<string> expectExpireType_ {};
        };

        virtual bool empty() const override { return this->backupDownloadURL_ == nullptr
        && this->backupEndTime_ == nullptr && this->backupId_ == nullptr && this->backupIntranetDownloadURL_ == nullptr && this->backupLocation_ == nullptr && this->backupMethod_ == nullptr
        && this->backupMode_ == nullptr && this->backupName_ == nullptr && this->backupScale_ == nullptr && this->backupSize_ == nullptr && this->backupStartTime_ == nullptr
        && this->backupStatus_ == nullptr && this->backupType_ == nullptr && this->checksum_ == nullptr && this->consistentTime_ == nullptr && this->encryption_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expectExpireTime_ == nullptr && this->expectExpireType_ == nullptr && this->instanceName_ == nullptr
        && this->isAvail_ == nullptr && this->polarSnapshot_ == nullptr && this->supportDeletion_ == nullptr; };
        // backupDownloadURL Field Functions 
        bool hasBackupDownloadURL() const { return this->backupDownloadURL_ != nullptr;};
        void deleteBackupDownloadURL() { this->backupDownloadURL_ = nullptr;};
        inline string getBackupDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupDownloadURL_, "") };
        inline Content& setBackupDownloadURL(string backupDownloadURL) { DARABONBA_PTR_SET_VALUE(backupDownloadURL_, backupDownloadURL) };


        // backupEndTime Field Functions 
        bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
        void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
        inline string getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
        inline Content& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


        // backupId Field Functions 
        bool hasBackupId() const { return this->backupId_ != nullptr;};
        void deleteBackupId() { this->backupId_ = nullptr;};
        inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
        inline Content& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


        // backupIntranetDownloadURL Field Functions 
        bool hasBackupIntranetDownloadURL() const { return this->backupIntranetDownloadURL_ != nullptr;};
        void deleteBackupIntranetDownloadURL() { this->backupIntranetDownloadURL_ = nullptr;};
        inline string getBackupIntranetDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupIntranetDownloadURL_, "") };
        inline Content& setBackupIntranetDownloadURL(string backupIntranetDownloadURL) { DARABONBA_PTR_SET_VALUE(backupIntranetDownloadURL_, backupIntranetDownloadURL) };


        // backupLocation Field Functions 
        bool hasBackupLocation() const { return this->backupLocation_ != nullptr;};
        void deleteBackupLocation() { this->backupLocation_ = nullptr;};
        inline string getBackupLocation() const { DARABONBA_PTR_GET_DEFAULT(backupLocation_, "") };
        inline Content& setBackupLocation(string backupLocation) { DARABONBA_PTR_SET_VALUE(backupLocation_, backupLocation) };


        // backupMethod Field Functions 
        bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
        void deleteBackupMethod() { this->backupMethod_ = nullptr;};
        inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
        inline Content& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


        // backupMode Field Functions 
        bool hasBackupMode() const { return this->backupMode_ != nullptr;};
        void deleteBackupMode() { this->backupMode_ = nullptr;};
        inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
        inline Content& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


        // backupName Field Functions 
        bool hasBackupName() const { return this->backupName_ != nullptr;};
        void deleteBackupName() { this->backupName_ = nullptr;};
        inline string getBackupName() const { DARABONBA_PTR_GET_DEFAULT(backupName_, "") };
        inline Content& setBackupName(string backupName) { DARABONBA_PTR_SET_VALUE(backupName_, backupName) };


        // backupScale Field Functions 
        bool hasBackupScale() const { return this->backupScale_ != nullptr;};
        void deleteBackupScale() { this->backupScale_ = nullptr;};
        inline string getBackupScale() const { DARABONBA_PTR_GET_DEFAULT(backupScale_, "") };
        inline Content& setBackupScale(string backupScale) { DARABONBA_PTR_SET_VALUE(backupScale_, backupScale) };


        // backupSize Field Functions 
        bool hasBackupSize() const { return this->backupSize_ != nullptr;};
        void deleteBackupSize() { this->backupSize_ = nullptr;};
        inline int64_t getBackupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
        inline Content& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


        // backupStartTime Field Functions 
        bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
        void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
        inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
        inline Content& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


        // backupStatus Field Functions 
        bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
        void deleteBackupStatus() { this->backupStatus_ = nullptr;};
        inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
        inline Content& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


        // backupType Field Functions 
        bool hasBackupType() const { return this->backupType_ != nullptr;};
        void deleteBackupType() { this->backupType_ = nullptr;};
        inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
        inline Content& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


        // checksum Field Functions 
        bool hasChecksum() const { return this->checksum_ != nullptr;};
        void deleteChecksum() { this->checksum_ = nullptr;};
        inline string getChecksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
        inline Content& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


        // consistentTime Field Functions 
        bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
        void deleteConsistentTime() { this->consistentTime_ = nullptr;};
        inline int64_t getConsistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, 0L) };
        inline Content& setConsistentTime(int64_t consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


        // encryption Field Functions 
        bool hasEncryption() const { return this->encryption_ != nullptr;};
        void deleteEncryption() { this->encryption_ = nullptr;};
        inline string getEncryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
        inline Content& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline Content& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline Content& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // expectExpireTime Field Functions 
        bool hasExpectExpireTime() const { return this->expectExpireTime_ != nullptr;};
        void deleteExpectExpireTime() { this->expectExpireTime_ = nullptr;};
        inline string getExpectExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expectExpireTime_, "") };
        inline Content& setExpectExpireTime(string expectExpireTime) { DARABONBA_PTR_SET_VALUE(expectExpireTime_, expectExpireTime) };


        // expectExpireType Field Functions 
        bool hasExpectExpireType() const { return this->expectExpireType_ != nullptr;};
        void deleteExpectExpireType() { this->expectExpireType_ = nullptr;};
        inline string getExpectExpireType() const { DARABONBA_PTR_GET_DEFAULT(expectExpireType_, "") };
        inline Content& setExpectExpireType(string expectExpireType) { DARABONBA_PTR_SET_VALUE(expectExpireType_, expectExpireType) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Content& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // isAvail Field Functions 
        bool hasIsAvail() const { return this->isAvail_ != nullptr;};
        void deleteIsAvail() { this->isAvail_ = nullptr;};
        inline int32_t getIsAvail() const { DARABONBA_PTR_GET_DEFAULT(isAvail_, 0) };
        inline Content& setIsAvail(int32_t isAvail) { DARABONBA_PTR_SET_VALUE(isAvail_, isAvail) };


        // polarSnapshot Field Functions 
        bool hasPolarSnapshot() const { return this->polarSnapshot_ != nullptr;};
        void deletePolarSnapshot() { this->polarSnapshot_ = nullptr;};
        inline const Content::PolarSnapshot & getPolarSnapshot() const { DARABONBA_PTR_GET_CONST(polarSnapshot_, Content::PolarSnapshot) };
        inline Content::PolarSnapshot getPolarSnapshot() { DARABONBA_PTR_GET(polarSnapshot_, Content::PolarSnapshot) };
        inline Content& setPolarSnapshot(const Content::PolarSnapshot & polarSnapshot) { DARABONBA_PTR_SET_VALUE(polarSnapshot_, polarSnapshot) };
        inline Content& setPolarSnapshot(Content::PolarSnapshot && polarSnapshot) { DARABONBA_PTR_SET_RVALUE(polarSnapshot_, polarSnapshot) };


        // supportDeletion Field Functions 
        bool hasSupportDeletion() const { return this->supportDeletion_ != nullptr;};
        void deleteSupportDeletion() { this->supportDeletion_ = nullptr;};
        inline int32_t getSupportDeletion() const { DARABONBA_PTR_GET_DEFAULT(supportDeletion_, 0) };
        inline Content& setSupportDeletion(int32_t supportDeletion) { DARABONBA_PTR_SET_VALUE(supportDeletion_, supportDeletion) };


      protected:
        // The URL that is used to download the backup set over the Internet.
        // 
        // >  This parameter is returned only when the value of BackupMethod is **Physical** or **Logical**.
        shared_ptr<string> backupDownloadURL_ {};
        // The end time of the backup. The time is in the yyyy-MM-ddTHH:mm:ssZ format. The time is in UTC.
        shared_ptr<string> backupEndTime_ {};
        // The ID of the backup set.
        shared_ptr<string> backupId_ {};
        // The URL that is used to download the backup set over the internal network.
        // 
        // >  This parameter is returned only when the value of BackupMethod is **Physical** or **Logical**.
        shared_ptr<string> backupIntranetDownloadURL_ {};
        // The storage path of backup files.
        shared_ptr<string> backupLocation_ {};
        // The backup method. Valid values:
        // 
        // *   **Physical**
        // *   **Logical**
        // *   **Snapshot**
        shared_ptr<string> backupMethod_ {};
        // The backup mode. Valid values:
        // 
        // *   **Automated**
        // *   **Manual**
        shared_ptr<string> backupMode_ {};
        // The name of the backup set.
        shared_ptr<string> backupName_ {};
        // The backup scale. Valid values:
        // 
        // *   **DBInstance**
        // *   **DBTable**
        shared_ptr<string> backupScale_ {};
        // The size of the backup set. Unit: byte.
        shared_ptr<int64_t> backupSize_ {};
        // The start time of the backup. The time is in the yyyy-MM-ddTHH:mm:ssZ format. The time is in UTC.
        shared_ptr<string> backupStartTime_ {};
        // The status of the backup set. Valid values:
        // 
        // *   **OK**: The backup succeeded.
        // *   **ERROR**: The backup failed.
        shared_ptr<string> backupStatus_ {};
        // The backup type. Valid values:
        // 
        // *   **FullBackup**
        // *   **IncrementBackup**
        shared_ptr<string> backupType_ {};
        // The checksum value.
        shared_ptr<string> checksum_ {};
        // The snapshot checkpoint time. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> consistentTime_ {};
        // The information about the encryption.
        shared_ptr<string> encryption_ {};
        // The type of the database engine.
        shared_ptr<string> engine_ {};
        // The engine version.
        shared_ptr<string> engineVersion_ {};
        // The time when the backup set expires. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> expectExpireTime_ {};
        // Indicates whether the backup set expires. Valid values:
        // 
        // *   NEVER: The backup set does not expire.
        // *   EXPIRED: The backup set expired.
        // *   DELAY: The backup set expires after a specific period of time.
        shared_ptr<string> expectExpireType_ {};
        // The instance ID.
        shared_ptr<string> instanceName_ {};
        // Indicates whether the backup set is available. Valid values:
        // 
        // *   **1**: The backup set is available.
        // *   **0**: The backup set is unavailable.
        shared_ptr<int32_t> isAvail_ {};
        // The information about the PolarDB level-2 dump.
        // 
        // >  This parameter is returned only if the level-2 dump feature is enabled for the PolarDB for MySQL cluster and the level-1 backup is dumped.
        shared_ptr<Content::PolarSnapshot> polarSnapshot_ {};
        // Indicates whether the backup set can be deleted. Valid values:
        // 
        // *   **0**: The backup set can be deleted.
        // *   **1**: The backup set cannot be deleted.
        shared_ptr<int32_t> supportDeletion_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->extra_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalElements Field Functions 
      bool hasTotalElements() const { return this->totalElements_ != nullptr;};
      void deleteTotalElements() { this->totalElements_ = nullptr;};
      inline int64_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0L) };
      inline Data& setTotalElements(int64_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int64_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
      inline Data& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // The information about the task.
      shared_ptr<vector<Data::Content>> content_ {};
      // The additional information.
      shared_ptr<string> extra_ {};
      // The page number of the returned page.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of backup sets.
      shared_ptr<int64_t> totalElements_ {};
      // The total number of pages returned.
      shared_ptr<int64_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeBackupDataListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeBackupDataListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeBackupDataListResponseBody::Data) };
    inline DescribeBackupDataListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeBackupDataListResponseBody::Data) };
    inline DescribeBackupDataListResponseBody& setData(const DescribeBackupDataListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeBackupDataListResponseBody& setData(DescribeBackupDataListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeBackupDataListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeBackupDataListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBackupDataListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupDataListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeBackupDataListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeBackupDataListResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
