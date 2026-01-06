// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalEcsSnapshotSize, totalEcsSnapshotSize_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalEcsSnapshotSize, totalEcsSnapshotSize_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeBackupsResponseBody() = default ;
    DescribeBackupsResponseBody(const DescribeBackupsResponseBody &) = default ;
    DescribeBackupsResponseBody(DescribeBackupsResponseBody &&) = default ;
    DescribeBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBody() = default ;
    DescribeBackupsResponseBody& operator=(const DescribeBackupsResponseBody &) = default ;
    DescribeBackupsResponseBody& operator=(DescribeBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Backup, backup_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Backup, backup_);
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
      class Backup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Backup& obj) { 
          DARABONBA_PTR_TO_JSON(BackupDownloadLinkByDB, backupDownloadLinkByDB_);
          DARABONBA_PTR_TO_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_TO_JSON(BackupId, backupId_);
          DARABONBA_PTR_TO_JSON(BackupInitiator, backupInitiator_);
          DARABONBA_PTR_TO_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(BackupType, backupType_);
          DARABONBA_PTR_TO_JSON(Checksum, checksum_);
          DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
          DARABONBA_PTR_TO_JSON(CopyOnlyBackup, copyOnlyBackup_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(Encryption, encryption_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpectExpireTime, expectExpireTime_);
          DARABONBA_PTR_TO_JSON(HostInstanceID, hostInstanceID_);
          DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
          DARABONBA_PTR_TO_JSON(MetaStatus, metaStatus_);
          DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_TO_JSON(StoreStatus, storeStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Backup& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupDownloadLinkByDB, backupDownloadLinkByDB_);
          DARABONBA_PTR_FROM_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
          DARABONBA_PTR_FROM_JSON(BackupInitiator, backupInitiator_);
          DARABONBA_PTR_FROM_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
          DARABONBA_PTR_FROM_JSON(Checksum, checksum_);
          DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
          DARABONBA_PTR_FROM_JSON(CopyOnlyBackup, copyOnlyBackup_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpectExpireTime, expectExpireTime_);
          DARABONBA_PTR_FROM_JSON(HostInstanceID, hostInstanceID_);
          DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
          DARABONBA_PTR_FROM_JSON(MetaStatus, metaStatus_);
          DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_FROM_JSON(StoreStatus, storeStatus_);
        };
        Backup() = default ;
        Backup(const Backup &) = default ;
        Backup(Backup &&) = default ;
        Backup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Backup() = default ;
        Backup& operator=(const Backup &) = default ;
        Backup& operator=(Backup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BackupDownloadLinkByDB : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BackupDownloadLinkByDB& obj) { 
            DARABONBA_PTR_TO_JSON(BackupDownloadLinkByDB, backupDownloadLinkByDB_);
          };
          friend void from_json(const Darabonba::Json& j, BackupDownloadLinkByDB& obj) { 
            DARABONBA_PTR_FROM_JSON(BackupDownloadLinkByDB, backupDownloadLinkByDB_);
          };
          BackupDownloadLinkByDB() = default ;
          BackupDownloadLinkByDB(const BackupDownloadLinkByDB &) = default ;
          BackupDownloadLinkByDB(BackupDownloadLinkByDB &&) = default ;
          BackupDownloadLinkByDB(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BackupDownloadLinkByDB() = default ;
          BackupDownloadLinkByDB& operator=(const BackupDownloadLinkByDB &) = default ;
          BackupDownloadLinkByDB& operator=(BackupDownloadLinkByDB &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BackupDownloadLinkByDBItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BackupDownloadLinkByDBItem& obj) { 
              DARABONBA_PTR_TO_JSON(DataBase, dataBase_);
              DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
              DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
            };
            friend void from_json(const Darabonba::Json& j, BackupDownloadLinkByDBItem& obj) { 
              DARABONBA_PTR_FROM_JSON(DataBase, dataBase_);
              DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
              DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
            };
            BackupDownloadLinkByDBItem() = default ;
            BackupDownloadLinkByDBItem(const BackupDownloadLinkByDBItem &) = default ;
            BackupDownloadLinkByDBItem(BackupDownloadLinkByDBItem &&) = default ;
            BackupDownloadLinkByDBItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BackupDownloadLinkByDBItem() = default ;
            BackupDownloadLinkByDBItem& operator=(const BackupDownloadLinkByDBItem &) = default ;
            BackupDownloadLinkByDBItem& operator=(BackupDownloadLinkByDBItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->dataBase_ == nullptr
        && this->downloadLink_ == nullptr && this->intranetDownloadLink_ == nullptr; };
            // dataBase Field Functions 
            bool hasDataBase() const { return this->dataBase_ != nullptr;};
            void deleteDataBase() { this->dataBase_ = nullptr;};
            inline string getDataBase() const { DARABONBA_PTR_GET_DEFAULT(dataBase_, "") };
            inline BackupDownloadLinkByDBItem& setDataBase(string dataBase) { DARABONBA_PTR_SET_VALUE(dataBase_, dataBase) };


            // downloadLink Field Functions 
            bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
            void deleteDownloadLink() { this->downloadLink_ = nullptr;};
            inline string getDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
            inline BackupDownloadLinkByDBItem& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


            // intranetDownloadLink Field Functions 
            bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
            void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
            inline string getIntranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
            inline BackupDownloadLinkByDBItem& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


          protected:
            // The name of the database.
            shared_ptr<string> dataBase_ {};
            // The public URL from which you can download the backup set.
            shared_ptr<string> downloadLink_ {};
            // The internal URL from which you can download the backup set.
            shared_ptr<string> intranetDownloadLink_ {};
          };

          virtual bool empty() const override { return this->backupDownloadLinkByDB_ == nullptr; };
          // backupDownloadLinkByDB Field Functions 
          bool hasBackupDownloadLinkByDB() const { return this->backupDownloadLinkByDB_ != nullptr;};
          void deleteBackupDownloadLinkByDB() { this->backupDownloadLinkByDB_ = nullptr;};
          inline const vector<BackupDownloadLinkByDB::BackupDownloadLinkByDBItem> & getBackupDownloadLinkByDB() const { DARABONBA_PTR_GET_CONST(backupDownloadLinkByDB_, vector<BackupDownloadLinkByDB::BackupDownloadLinkByDBItem>) };
          inline vector<BackupDownloadLinkByDB::BackupDownloadLinkByDBItem> getBackupDownloadLinkByDB() { DARABONBA_PTR_GET(backupDownloadLinkByDB_, vector<BackupDownloadLinkByDB::BackupDownloadLinkByDBItem>) };
          inline BackupDownloadLinkByDB& setBackupDownloadLinkByDB(const vector<BackupDownloadLinkByDB::BackupDownloadLinkByDBItem> & backupDownloadLinkByDB) { DARABONBA_PTR_SET_VALUE(backupDownloadLinkByDB_, backupDownloadLinkByDB) };
          inline BackupDownloadLinkByDB& setBackupDownloadLinkByDB(vector<BackupDownloadLinkByDB::BackupDownloadLinkByDBItem> && backupDownloadLinkByDB) { DARABONBA_PTR_SET_RVALUE(backupDownloadLinkByDB_, backupDownloadLinkByDB) };


        protected:
          shared_ptr<vector<BackupDownloadLinkByDB::BackupDownloadLinkByDBItem>> backupDownloadLinkByDB_ {};
        };

        virtual bool empty() const override { return this->backupDownloadLinkByDB_ == nullptr
        && this->backupDownloadURL_ == nullptr && this->backupEndTime_ == nullptr && this->backupId_ == nullptr && this->backupInitiator_ == nullptr && this->backupIntranetDownloadURL_ == nullptr
        && this->backupMethod_ == nullptr && this->backupMode_ == nullptr && this->backupSize_ == nullptr && this->backupStartTime_ == nullptr && this->backupStatus_ == nullptr
        && this->backupType_ == nullptr && this->checksum_ == nullptr && this->consistentTime_ == nullptr && this->copyOnlyBackup_ == nullptr && this->DBInstanceId_ == nullptr
        && this->encryption_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expectExpireTime_ == nullptr && this->hostInstanceID_ == nullptr
        && this->isAvail_ == nullptr && this->metaStatus_ == nullptr && this->storageClass_ == nullptr && this->storeStatus_ == nullptr; };
        // backupDownloadLinkByDB Field Functions 
        bool hasBackupDownloadLinkByDB() const { return this->backupDownloadLinkByDB_ != nullptr;};
        void deleteBackupDownloadLinkByDB() { this->backupDownloadLinkByDB_ = nullptr;};
        inline const Backup::BackupDownloadLinkByDB & getBackupDownloadLinkByDB() const { DARABONBA_PTR_GET_CONST(backupDownloadLinkByDB_, Backup::BackupDownloadLinkByDB) };
        inline Backup::BackupDownloadLinkByDB getBackupDownloadLinkByDB() { DARABONBA_PTR_GET(backupDownloadLinkByDB_, Backup::BackupDownloadLinkByDB) };
        inline Backup& setBackupDownloadLinkByDB(const Backup::BackupDownloadLinkByDB & backupDownloadLinkByDB) { DARABONBA_PTR_SET_VALUE(backupDownloadLinkByDB_, backupDownloadLinkByDB) };
        inline Backup& setBackupDownloadLinkByDB(Backup::BackupDownloadLinkByDB && backupDownloadLinkByDB) { DARABONBA_PTR_SET_RVALUE(backupDownloadLinkByDB_, backupDownloadLinkByDB) };


        // backupDownloadURL Field Functions 
        bool hasBackupDownloadURL() const { return this->backupDownloadURL_ != nullptr;};
        void deleteBackupDownloadURL() { this->backupDownloadURL_ = nullptr;};
        inline string getBackupDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupDownloadURL_, "") };
        inline Backup& setBackupDownloadURL(string backupDownloadURL) { DARABONBA_PTR_SET_VALUE(backupDownloadURL_, backupDownloadURL) };


        // backupEndTime Field Functions 
        bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
        void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
        inline string getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
        inline Backup& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


        // backupId Field Functions 
        bool hasBackupId() const { return this->backupId_ != nullptr;};
        void deleteBackupId() { this->backupId_ = nullptr;};
        inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
        inline Backup& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


        // backupInitiator Field Functions 
        bool hasBackupInitiator() const { return this->backupInitiator_ != nullptr;};
        void deleteBackupInitiator() { this->backupInitiator_ = nullptr;};
        inline string getBackupInitiator() const { DARABONBA_PTR_GET_DEFAULT(backupInitiator_, "") };
        inline Backup& setBackupInitiator(string backupInitiator) { DARABONBA_PTR_SET_VALUE(backupInitiator_, backupInitiator) };


        // backupIntranetDownloadURL Field Functions 
        bool hasBackupIntranetDownloadURL() const { return this->backupIntranetDownloadURL_ != nullptr;};
        void deleteBackupIntranetDownloadURL() { this->backupIntranetDownloadURL_ = nullptr;};
        inline string getBackupIntranetDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupIntranetDownloadURL_, "") };
        inline Backup& setBackupIntranetDownloadURL(string backupIntranetDownloadURL) { DARABONBA_PTR_SET_VALUE(backupIntranetDownloadURL_, backupIntranetDownloadURL) };


        // backupMethod Field Functions 
        bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
        void deleteBackupMethod() { this->backupMethod_ = nullptr;};
        inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
        inline Backup& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


        // backupMode Field Functions 
        bool hasBackupMode() const { return this->backupMode_ != nullptr;};
        void deleteBackupMode() { this->backupMode_ = nullptr;};
        inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
        inline Backup& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


        // backupSize Field Functions 
        bool hasBackupSize() const { return this->backupSize_ != nullptr;};
        void deleteBackupSize() { this->backupSize_ = nullptr;};
        inline int64_t getBackupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
        inline Backup& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


        // backupStartTime Field Functions 
        bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
        void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
        inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
        inline Backup& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


        // backupStatus Field Functions 
        bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
        void deleteBackupStatus() { this->backupStatus_ = nullptr;};
        inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
        inline Backup& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


        // backupType Field Functions 
        bool hasBackupType() const { return this->backupType_ != nullptr;};
        void deleteBackupType() { this->backupType_ = nullptr;};
        inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
        inline Backup& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


        // checksum Field Functions 
        bool hasChecksum() const { return this->checksum_ != nullptr;};
        void deleteChecksum() { this->checksum_ = nullptr;};
        inline string getChecksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
        inline Backup& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


        // consistentTime Field Functions 
        bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
        void deleteConsistentTime() { this->consistentTime_ = nullptr;};
        inline int64_t getConsistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, 0L) };
        inline Backup& setConsistentTime(int64_t consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


        // copyOnlyBackup Field Functions 
        bool hasCopyOnlyBackup() const { return this->copyOnlyBackup_ != nullptr;};
        void deleteCopyOnlyBackup() { this->copyOnlyBackup_ = nullptr;};
        inline string getCopyOnlyBackup() const { DARABONBA_PTR_GET_DEFAULT(copyOnlyBackup_, "") };
        inline Backup& setCopyOnlyBackup(string copyOnlyBackup) { DARABONBA_PTR_SET_VALUE(copyOnlyBackup_, copyOnlyBackup) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline Backup& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // encryption Field Functions 
        bool hasEncryption() const { return this->encryption_ != nullptr;};
        void deleteEncryption() { this->encryption_ = nullptr;};
        inline string getEncryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
        inline Backup& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline Backup& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline Backup& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // expectExpireTime Field Functions 
        bool hasExpectExpireTime() const { return this->expectExpireTime_ != nullptr;};
        void deleteExpectExpireTime() { this->expectExpireTime_ = nullptr;};
        inline string getExpectExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expectExpireTime_, "") };
        inline Backup& setExpectExpireTime(string expectExpireTime) { DARABONBA_PTR_SET_VALUE(expectExpireTime_, expectExpireTime) };


        // hostInstanceID Field Functions 
        bool hasHostInstanceID() const { return this->hostInstanceID_ != nullptr;};
        void deleteHostInstanceID() { this->hostInstanceID_ = nullptr;};
        inline string getHostInstanceID() const { DARABONBA_PTR_GET_DEFAULT(hostInstanceID_, "") };
        inline Backup& setHostInstanceID(string hostInstanceID) { DARABONBA_PTR_SET_VALUE(hostInstanceID_, hostInstanceID) };


        // isAvail Field Functions 
        bool hasIsAvail() const { return this->isAvail_ != nullptr;};
        void deleteIsAvail() { this->isAvail_ = nullptr;};
        inline int32_t getIsAvail() const { DARABONBA_PTR_GET_DEFAULT(isAvail_, 0) };
        inline Backup& setIsAvail(int32_t isAvail) { DARABONBA_PTR_SET_VALUE(isAvail_, isAvail) };


        // metaStatus Field Functions 
        bool hasMetaStatus() const { return this->metaStatus_ != nullptr;};
        void deleteMetaStatus() { this->metaStatus_ = nullptr;};
        inline string getMetaStatus() const { DARABONBA_PTR_GET_DEFAULT(metaStatus_, "") };
        inline Backup& setMetaStatus(string metaStatus) { DARABONBA_PTR_SET_VALUE(metaStatus_, metaStatus) };


        // storageClass Field Functions 
        bool hasStorageClass() const { return this->storageClass_ != nullptr;};
        void deleteStorageClass() { this->storageClass_ = nullptr;};
        inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
        inline Backup& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


        // storeStatus Field Functions 
        bool hasStoreStatus() const { return this->storeStatus_ != nullptr;};
        void deleteStoreStatus() { this->storeStatus_ = nullptr;};
        inline string getStoreStatus() const { DARABONBA_PTR_GET_DEFAULT(storeStatus_, "") };
        inline Backup& setStoreStatus(string storeStatus) { DARABONBA_PTR_SET_VALUE(storeStatus_, storeStatus) };


      protected:
        // An array consisting of URLs from which you can download backup sets of individual databases.
        shared_ptr<Backup::BackupDownloadLinkByDB> backupDownloadLinkByDB_ {};
        // The URL that is used to download the backup set over the Internet. If the backup set cannot be downloaded, null is returned.
        // 
        // >  For example, if BackupMethod of an ApsaraDB RDS for SQL Server instance is set to **Snapshot**, a null string is returned.
        shared_ptr<string> backupDownloadURL_ {};
        // The end time of the backup task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> backupEndTime_ {};
        // The ID of the backup set.
        shared_ptr<string> backupId_ {};
        // The initiator of the backup task. Valid values:
        // 
        // *   **System**
        // *   **User**
        shared_ptr<string> backupInitiator_ {};
        // The URL that is used to download the backup set over an internal network. If the backup set cannot be downloaded, null is returned.
        // 
        // >  For example, if BackupMethod of an ApsaraDB RDS for SQL Server instance is set to **Snapshot**, a null string is returned.
        shared_ptr<string> backupIntranetDownloadURL_ {};
        // The method that is used to generate the backup set. Valid values:
        // 
        // *   **Logical**: logical backup
        // *   **Physical**: physical backup
        // *   **Snapshot**: snapshot backup
        shared_ptr<string> backupMethod_ {};
        // The backup mode of the backup set. Valid values:
        // 
        // *   **Automated**
        // *   **Manual**
        shared_ptr<string> backupMode_ {};
        // The size of the data backup file. Unit: bytes.
        shared_ptr<int64_t> backupSize_ {};
        // The start time of the backup. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> backupStartTime_ {};
        // The state of the backup set.
        shared_ptr<string> backupStatus_ {};
        // The backup type of the backup set. Valid values:
        // 
        // *   **FullBackup**
        // *   **IncrementalBackup**
        shared_ptr<string> backupType_ {};
        // The checksum. The value of this parameter is calculated by using the CRC64 algorithm.
        shared_ptr<string> checksum_ {};
        // The point in time at which the data in the backup set is consistent. The return value of this parameter is a timestamp.
        // 
        // >  If the instance runs MySQL 5.6, a timestamp is returned. Otherwise, the value 0 is returned.
        shared_ptr<int64_t> consistentTime_ {};
        // The backup mode of the backup set. Valid values:
        // 
        // *   0: the standard mode. This mode supports full backups and incremental backups.
        // *   1: the copy-only mode. This mode supports only full backups.
        // 
        // >  This parameter is returned only when the instance runs SQL Server.
        shared_ptr<string> copyOnlyBackup_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The encryption information about the backup set.
        shared_ptr<string> encryption_ {};
        // The type of the database engine. Valid values:
        // 
        // *   MySQL
        // *   SQLServer
        // *   PostgreSQL
        // *   MariaDB
        shared_ptr<string> engine_ {};
        // The version of the database engine.
        shared_ptr<string> engineVersion_ {};
        shared_ptr<string> expectExpireTime_ {};
        // The ID of the instance that generates the backup set. This parameter is used to indicate whether the instance that generates the backup set is a primary instance or a secondary instance.
        shared_ptr<string> hostInstanceID_ {};
        // Indicates whether the backup set is available. Valid values:
        // 
        // *   **0**: The backup set is unavailable.
        // *   **1**: The backup set is available.
        shared_ptr<int32_t> isAvail_ {};
        // The status of the backup set that is used to restore individual databases or tables. Valid values:
        // 
        // *   **OK**: The data backup file is normal.
        // *   **LARGE**: The data backup file contains an abnormally large number of tables. It cannot be used to restore individual databases or tables.
        // *   **EMPTY**: The data backup file is generated from a failed backup task.
        // 
        // >  If an empty string is returned, the data backup file cannot be used to restore individual databases or tables.
        shared_ptr<string> metaStatus_ {};
        // The storage class of the backup set. Valid values:
        // 
        // *   **0**: regular storage
        // *   **1**: archive storage
        shared_ptr<string> storageClass_ {};
        // Indicates whether the backup set can be deleted. Valid values:
        // 
        // *   **Enabled**: The backup set can be deleted.
        // *   **Disabled**: The backup set cannot be deleted.
        shared_ptr<string> storeStatus_ {};
      };

      virtual bool empty() const override { return this->backup_ == nullptr; };
      // backup Field Functions 
      bool hasBackup() const { return this->backup_ != nullptr;};
      void deleteBackup() { this->backup_ = nullptr;};
      inline const vector<Items::Backup> & getBackup() const { DARABONBA_PTR_GET_CONST(backup_, vector<Items::Backup>) };
      inline vector<Items::Backup> getBackup() { DARABONBA_PTR_GET(backup_, vector<Items::Backup>) };
      inline Items& setBackup(const vector<Items::Backup> & backup) { DARABONBA_PTR_SET_VALUE(backup_, backup) };
      inline Items& setBackup(vector<Items::Backup> && backup) { DARABONBA_PTR_SET_RVALUE(backup_, backup) };


    protected:
      shared_ptr<vector<Items::Backup>> backup_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalEcsSnapshotSize_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBackupsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeBackupsResponseBody::Items) };
    inline DescribeBackupsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeBackupsResponseBody::Items) };
    inline DescribeBackupsResponseBody& setItems(const DescribeBackupsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBackupsResponseBody& setItems(DescribeBackupsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeBackupsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline DescribeBackupsResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalEcsSnapshotSize Field Functions 
    bool hasTotalEcsSnapshotSize() const { return this->totalEcsSnapshotSize_ != nullptr;};
    void deleteTotalEcsSnapshotSize() { this->totalEcsSnapshotSize_ = nullptr;};
    inline int64_t getTotalEcsSnapshotSize() const { DARABONBA_PTR_GET_DEFAULT(totalEcsSnapshotSize_, 0L) };
    inline DescribeBackupsResponseBody& setTotalEcsSnapshotSize(int64_t totalEcsSnapshotSize) { DARABONBA_PTR_SET_VALUE(totalEcsSnapshotSize_, totalEcsSnapshotSize) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribeBackupsResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The returned backup sets.
    shared_ptr<DescribeBackupsResponseBody::Items> items_ {};
    // The page number of the returned page.
    shared_ptr<string> pageNumber_ {};
    // The number of backup sets on the current page.
    shared_ptr<string> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The size of the snapshot chain of the instance. Unit: bytes.
    shared_ptr<int64_t> totalEcsSnapshotSize_ {};
    // The total number of entries returned.
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
