// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHAREDBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHAREDBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeSharedBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSharedBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSharedBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeSharedBackupsResponseBody() = default ;
    DescribeSharedBackupsResponseBody(const DescribeSharedBackupsResponseBody &) = default ;
    DescribeSharedBackupsResponseBody(DescribeSharedBackupsResponseBody &&) = default ;
    DescribeSharedBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSharedBackupsResponseBody() = default ;
    DescribeSharedBackupsResponseBody& operator=(const DescribeSharedBackupsResponseBody &) = default ;
    DescribeSharedBackupsResponseBody& operator=(DescribeSharedBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
        DARABONBA_PTR_TO_JSON(BackupId, backupId_);
        DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
        DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
        DARABONBA_PTR_TO_JSON(BackupSetSize, backupSetSize_);
        DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(BackupsLevel, backupsLevel_);
        DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(DBType, DBType_);
        DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_PTR_TO_JSON(SharerUID, sharerUID_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
        DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
        DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
        DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
        DARABONBA_PTR_FROM_JSON(BackupSetSize, backupSetSize_);
        DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(BackupsLevel, backupsLevel_);
        DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(DBType, DBType_);
        DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_PTR_FROM_JSON(SharerUID, sharerUID_);
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
      virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && this->backupId_ == nullptr && this->backupMethod_ == nullptr && this->backupMode_ == nullptr && this->backupSetSize_ == nullptr && this->backupStartTime_ == nullptr
        && this->backupStatus_ == nullptr && this->backupType_ == nullptr && this->backupsLevel_ == nullptr && this->consistentTime_ == nullptr && this->DBClusterId_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->payType_ == nullptr && this->regionId_ == nullptr && this->serverlessType_ == nullptr
        && this->shareType_ == nullptr && this->sharerUID_ == nullptr; };
      // backupEndTime Field Functions 
      bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
      void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
      inline string getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
      inline Items& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


      // backupId Field Functions 
      bool hasBackupId() const { return this->backupId_ != nullptr;};
      void deleteBackupId() { this->backupId_ = nullptr;};
      inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
      inline Items& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


      // backupMethod Field Functions 
      bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
      void deleteBackupMethod() { this->backupMethod_ = nullptr;};
      inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
      inline Items& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


      // backupMode Field Functions 
      bool hasBackupMode() const { return this->backupMode_ != nullptr;};
      void deleteBackupMode() { this->backupMode_ = nullptr;};
      inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
      inline Items& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


      // backupSetSize Field Functions 
      bool hasBackupSetSize() const { return this->backupSetSize_ != nullptr;};
      void deleteBackupSetSize() { this->backupSetSize_ = nullptr;};
      inline string getBackupSetSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetSize_, "") };
      inline Items& setBackupSetSize(string backupSetSize) { DARABONBA_PTR_SET_VALUE(backupSetSize_, backupSetSize) };


      // backupStartTime Field Functions 
      bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
      void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
      inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
      inline Items& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


      // backupStatus Field Functions 
      bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
      void deleteBackupStatus() { this->backupStatus_ = nullptr;};
      inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
      inline Items& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline Items& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // backupsLevel Field Functions 
      bool hasBackupsLevel() const { return this->backupsLevel_ != nullptr;};
      void deleteBackupsLevel() { this->backupsLevel_ = nullptr;};
      inline string getBackupsLevel() const { DARABONBA_PTR_GET_DEFAULT(backupsLevel_, "") };
      inline Items& setBackupsLevel(string backupsLevel) { DARABONBA_PTR_SET_VALUE(backupsLevel_, backupsLevel) };


      // consistentTime Field Functions 
      bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
      void deleteConsistentTime() { this->consistentTime_ = nullptr;};
      inline string getConsistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, "") };
      inline Items& setConsistentTime(string consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Items& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline Items& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // DBVersion Field Functions 
      bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
      void deleteDBVersion() { this->DBVersion_ = nullptr;};
      inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
      inline Items& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Items& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // serverlessType Field Functions 
      bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
      void deleteServerlessType() { this->serverlessType_ = nullptr;};
      inline string getServerlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
      inline Items& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline Items& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // sharerUID Field Functions 
      bool hasSharerUID() const { return this->sharerUID_ != nullptr;};
      void deleteSharerUID() { this->sharerUID_ = nullptr;};
      inline string getSharerUID() const { DARABONBA_PTR_GET_DEFAULT(sharerUID_, "") };
      inline Items& setSharerUID(string sharerUID) { DARABONBA_PTR_SET_VALUE(sharerUID_, sharerUID) };


    protected:
      // The end time of the backup, in UTC.
      shared_ptr<string> backupEndTime_ {};
      // The backup set ID.
      shared_ptr<string> backupId_ {};
      // The backup method. Only snapshot backup is supported. The value is fixed to **Snapshot**.
      shared_ptr<string> backupMethod_ {};
      // The backup mode. Valid values:
      // 
      // - **Automated**: automated backup
      // 
      // - **Manual**: manual backup
      shared_ptr<string> backupMode_ {};
      // The size of the backup set, in bytes.
      shared_ptr<string> backupSetSize_ {};
      // The start time of the backup, in UTC.
      shared_ptr<string> backupStartTime_ {};
      // The backup status. Valid values:
      // 
      // - **Success**: The backup is complete.
      // 
      // - **Failed**: The backup failed.
      shared_ptr<string> backupStatus_ {};
      // The backup type. Only full backups are supported. The value is fixed to **FullBackup**.
      shared_ptr<string> backupType_ {};
      // The backup level. Valid values:
      // 
      // - **Level-1**: Level-1 backup.
      // 
      // - **Level-2**: Level-2 backup.
      shared_ptr<string> backupsLevel_ {};
      // The UNIX timestamp of the consistent snapshot, in seconds.
      shared_ptr<string> consistentTime_ {};
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The database engine type.
      shared_ptr<string> DBType_ {};
      // The database engine version.
      shared_ptr<string> DBVersion_ {};
      // The billing method. Valid values:
      // 
      // - **Postpaid**: pay-as-you-go.
      // 
      // - **Prepaid**: prepaid (subscription)
      shared_ptr<string> payType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The Serverless type. A value of **AgileServerless** indicates a Serverless cluster, while an empty value indicates a standard cluster.
      shared_ptr<string> serverlessType_ {};
      // The share type.
      shared_ptr<string> shareType_ {};
      // The UID of the account that shared the backup set.
      shared_ptr<string> sharerUID_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeSharedBackupsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeSharedBackupsResponseBody::Items>) };
    inline vector<DescribeSharedBackupsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeSharedBackupsResponseBody::Items>) };
    inline DescribeSharedBackupsResponseBody& setItems(const vector<DescribeSharedBackupsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSharedBackupsResponseBody& setItems(vector<DescribeSharedBackupsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeSharedBackupsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline DescribeSharedBackupsResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSharedBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribeSharedBackupsResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // A list of shared backup sets.
    shared_ptr<vector<DescribeSharedBackupsResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries on the current page.
    shared_ptr<string> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total record count.
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
