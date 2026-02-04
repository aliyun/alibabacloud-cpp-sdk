// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Backups, backups_);
      DARABONBA_PTR_TO_JSON(FreeSize, freeSize_);
      DARABONBA_PTR_TO_JSON(FullStorageSize, fullStorageSize_);
      DARABONBA_PTR_TO_JSON(LogStorageSize, logStorageSize_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Backups, backups_);
      DARABONBA_PTR_FROM_JSON(FreeSize, freeSize_);
      DARABONBA_PTR_FROM_JSON(FullStorageSize, fullStorageSize_);
      DARABONBA_PTR_FROM_JSON(LogStorageSize, logStorageSize_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
    class Backups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Backups& obj) { 
        DARABONBA_PTR_TO_JSON(Backup, backup_);
      };
      friend void from_json(const Darabonba::Json& j, Backups& obj) { 
        DARABONBA_PTR_FROM_JSON(Backup, backup_);
      };
      Backups() = default ;
      Backups(const Backups &) = default ;
      Backups(Backups &&) = default ;
      Backups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Backups() = default ;
      Backups& operator=(const Backups &) = default ;
      Backups& operator=(Backups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Backup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Backup& obj) { 
          DARABONBA_PTR_TO_JSON(BackupDBNames, backupDBNames_);
          DARABONBA_PTR_TO_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_TO_JSON(BackupId, backupId_);
          DARABONBA_PTR_TO_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupJobID, backupJobID_);
          DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(BackupType, backupType_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpectExpireTime, expectExpireTime_);
          DARABONBA_PTR_TO_JSON(NodeInstanceId, nodeInstanceId_);
          DARABONBA_PTR_TO_JSON(RecoverConfigMode, recoverConfigMode_);
        };
        friend void from_json(const Darabonba::Json& j, Backup& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupDBNames, backupDBNames_);
          DARABONBA_PTR_FROM_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
          DARABONBA_PTR_FROM_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupJobID, backupJobID_);
          DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpectExpireTime, expectExpireTime_);
          DARABONBA_PTR_FROM_JSON(NodeInstanceId, nodeInstanceId_);
          DARABONBA_PTR_FROM_JSON(RecoverConfigMode, recoverConfigMode_);
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
        virtual bool empty() const override { return this->backupDBNames_ == nullptr
        && this->backupDownloadURL_ == nullptr && this->backupEndTime_ == nullptr && this->backupId_ == nullptr && this->backupIntranetDownloadURL_ == nullptr && this->backupJobID_ == nullptr
        && this->backupMethod_ == nullptr && this->backupMode_ == nullptr && this->backupSize_ == nullptr && this->backupStartTime_ == nullptr && this->backupStatus_ == nullptr
        && this->backupType_ == nullptr && this->engineVersion_ == nullptr && this->expectExpireTime_ == nullptr && this->nodeInstanceId_ == nullptr && this->recoverConfigMode_ == nullptr; };
        // backupDBNames Field Functions 
        bool hasBackupDBNames() const { return this->backupDBNames_ != nullptr;};
        void deleteBackupDBNames() { this->backupDBNames_ = nullptr;};
        inline string getBackupDBNames() const { DARABONBA_PTR_GET_DEFAULT(backupDBNames_, "") };
        inline Backup& setBackupDBNames(string backupDBNames) { DARABONBA_PTR_SET_VALUE(backupDBNames_, backupDBNames) };


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
        inline int64_t getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, 0L) };
        inline Backup& setBackupId(int64_t backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


        // backupIntranetDownloadURL Field Functions 
        bool hasBackupIntranetDownloadURL() const { return this->backupIntranetDownloadURL_ != nullptr;};
        void deleteBackupIntranetDownloadURL() { this->backupIntranetDownloadURL_ = nullptr;};
        inline string getBackupIntranetDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupIntranetDownloadURL_, "") };
        inline Backup& setBackupIntranetDownloadURL(string backupIntranetDownloadURL) { DARABONBA_PTR_SET_VALUE(backupIntranetDownloadURL_, backupIntranetDownloadURL) };


        // backupJobID Field Functions 
        bool hasBackupJobID() const { return this->backupJobID_ != nullptr;};
        void deleteBackupJobID() { this->backupJobID_ = nullptr;};
        inline int64_t getBackupJobID() const { DARABONBA_PTR_GET_DEFAULT(backupJobID_, 0L) };
        inline Backup& setBackupJobID(int64_t backupJobID) { DARABONBA_PTR_SET_VALUE(backupJobID_, backupJobID) };


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


        // nodeInstanceId Field Functions 
        bool hasNodeInstanceId() const { return this->nodeInstanceId_ != nullptr;};
        void deleteNodeInstanceId() { this->nodeInstanceId_ = nullptr;};
        inline string getNodeInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceId_, "") };
        inline Backup& setNodeInstanceId(string nodeInstanceId) { DARABONBA_PTR_SET_VALUE(nodeInstanceId_, nodeInstanceId) };


        // recoverConfigMode Field Functions 
        bool hasRecoverConfigMode() const { return this->recoverConfigMode_ != nullptr;};
        void deleteRecoverConfigMode() { this->recoverConfigMode_ = nullptr;};
        inline string getRecoverConfigMode() const { DARABONBA_PTR_GET_DEFAULT(recoverConfigMode_, "") };
        inline Backup& setRecoverConfigMode(string recoverConfigMode) { DARABONBA_PTR_SET_VALUE(recoverConfigMode_, recoverConfigMode) };


      protected:
        // The names of the databases that are backed up. The default value is **all**, which indicates that all databases are backed up.
        shared_ptr<string> backupDBNames_ {};
        // The public download URL of the backup file.
        shared_ptr<string> backupDownloadURL_ {};
        // The end time of the backup.
        shared_ptr<string> backupEndTime_ {};
        // The ID of the backup file.
        shared_ptr<int64_t> backupId_ {};
        // The internal download URL of the backup file.
        // 
        // >  You can use this URL to download the backup file from an Elastic Compute Service (ECS) instance that is connected to the Tair instance. The ECS instance must belong to the same classic network or reside in the same virtual private cloud (VPC) as the Tair instance.
        shared_ptr<string> backupIntranetDownloadURL_ {};
        // The ID of the backup task.
        shared_ptr<int64_t> backupJobID_ {};
        // The backup method. Valid values:
        // 
        // *   **Logical**
        // *   **Physical**
        shared_ptr<string> backupMethod_ {};
        // The backup mode. Valid values:
        // 
        // *   **Automated**
        // *   **Manual**
        shared_ptr<string> backupMode_ {};
        // The size of the backup file.
        shared_ptr<int64_t> backupSize_ {};
        // The start time of the backup.
        shared_ptr<string> backupStartTime_ {};
        // The status of the backup. Valid values:
        // 
        // *   **Success**
        // *   **Failed**
        shared_ptr<string> backupStatus_ {};
        // The backup type. Valid values:
        // 
        // *   **FullBackup**
        // *   **IncrementalBackup**
        shared_ptr<string> backupType_ {};
        // The engine version (major version) of the instance.
        shared_ptr<string> engineVersion_ {};
        shared_ptr<string> expectExpireTime_ {};
        // The node ID.
        // 
        // >  If the instance uses the standard architecture, this parameter returns the instance ID.
        shared_ptr<string> nodeInstanceId_ {};
        // If the backup includes account information, kernel parameters and whitelist details.
        shared_ptr<string> recoverConfigMode_ {};
      };

      virtual bool empty() const override { return this->backup_ == nullptr; };
      // backup Field Functions 
      bool hasBackup() const { return this->backup_ != nullptr;};
      void deleteBackup() { this->backup_ = nullptr;};
      inline const vector<Backups::Backup> & getBackup() const { DARABONBA_PTR_GET_CONST(backup_, vector<Backups::Backup>) };
      inline vector<Backups::Backup> getBackup() { DARABONBA_PTR_GET(backup_, vector<Backups::Backup>) };
      inline Backups& setBackup(const vector<Backups::Backup> & backup) { DARABONBA_PTR_SET_VALUE(backup_, backup) };
      inline Backups& setBackup(vector<Backups::Backup> && backup) { DARABONBA_PTR_SET_RVALUE(backup_, backup) };


    protected:
      shared_ptr<vector<Backups::Backup>> backup_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> authAction_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> authPrincipalType_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> noPermissionType_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->backups_ == nullptr && this->freeSize_ == nullptr && this->fullStorageSize_ == nullptr && this->logStorageSize_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeBackupsResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeBackupsResponseBody::AccessDeniedDetail) };
    inline DescribeBackupsResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeBackupsResponseBody::AccessDeniedDetail) };
    inline DescribeBackupsResponseBody& setAccessDeniedDetail(const DescribeBackupsResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeBackupsResponseBody& setAccessDeniedDetail(DescribeBackupsResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // backups Field Functions 
    bool hasBackups() const { return this->backups_ != nullptr;};
    void deleteBackups() { this->backups_ = nullptr;};
    inline const DescribeBackupsResponseBody::Backups & getBackups() const { DARABONBA_PTR_GET_CONST(backups_, DescribeBackupsResponseBody::Backups) };
    inline DescribeBackupsResponseBody::Backups getBackups() { DARABONBA_PTR_GET(backups_, DescribeBackupsResponseBody::Backups) };
    inline DescribeBackupsResponseBody& setBackups(const DescribeBackupsResponseBody::Backups & backups) { DARABONBA_PTR_SET_VALUE(backups_, backups) };
    inline DescribeBackupsResponseBody& setBackups(DescribeBackupsResponseBody::Backups && backups) { DARABONBA_PTR_SET_RVALUE(backups_, backups) };


    // freeSize Field Functions 
    bool hasFreeSize() const { return this->freeSize_ != nullptr;};
    void deleteFreeSize() { this->freeSize_ = nullptr;};
    inline int64_t getFreeSize() const { DARABONBA_PTR_GET_DEFAULT(freeSize_, 0L) };
    inline DescribeBackupsResponseBody& setFreeSize(int64_t freeSize) { DARABONBA_PTR_SET_VALUE(freeSize_, freeSize) };


    // fullStorageSize Field Functions 
    bool hasFullStorageSize() const { return this->fullStorageSize_ != nullptr;};
    void deleteFullStorageSize() { this->fullStorageSize_ = nullptr;};
    inline int64_t getFullStorageSize() const { DARABONBA_PTR_GET_DEFAULT(fullStorageSize_, 0L) };
    inline DescribeBackupsResponseBody& setFullStorageSize(int64_t fullStorageSize) { DARABONBA_PTR_SET_VALUE(fullStorageSize_, fullStorageSize) };


    // logStorageSize Field Functions 
    bool hasLogStorageSize() const { return this->logStorageSize_ != nullptr;};
    void deleteLogStorageSize() { this->logStorageSize_ = nullptr;};
    inline int64_t getLogStorageSize() const { DARABONBA_PTR_GET_DEFAULT(logStorageSize_, 0L) };
    inline DescribeBackupsResponseBody& setLogStorageSize(int64_t logStorageSize) { DARABONBA_PTR_SET_VALUE(logStorageSize_, logStorageSize) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBackupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The following parameters are no longer used. Ignore the parameters.
    shared_ptr<DescribeBackupsResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The queried backup sets.
    shared_ptr<DescribeBackupsResponseBody::Backups> backups_ {};
    // This parameter does not take effect. Ignore this parameter.
    shared_ptr<int64_t> freeSize_ {};
    // The size of the full backup file of the instance. Unit: bytes. Full backups originate from scheduled backups, manual backups, and backups generated during cache analysis.
    // 
    // >  The value of this parameter is independent of the number and size of the returned backup sets. Instead, it reflects the total size of all valid full backups of the instance.
    shared_ptr<int64_t> fullStorageSize_ {};
    // The size of the log backup file of the instance. Unit: bytes. This value is valid only when flashback is enabled.
    // 
    // >  The value of this parameter is independent of the number and size of the returned backup sets. Instead, it reflects the total size of all valid log backups of the instance.
    shared_ptr<int64_t> logStorageSize_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of backup files that were returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
