// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteBackupSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRegionIdList, backupRegionIdList_);
      DARABONBA_PTR_TO_JSON(BackupSnapshotList, backupSnapshotList_);
      DARABONBA_PTR_TO_JSON(RetainLatestSnapshot, retainLatestSnapshot_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRegionIdList, backupRegionIdList_);
      DARABONBA_PTR_FROM_JSON(BackupSnapshotList, backupSnapshotList_);
      DARABONBA_PTR_FROM_JSON(RetainLatestSnapshot, retainLatestSnapshot_);
    };
    DeleteBackupSnapshotRequest() = default ;
    DeleteBackupSnapshotRequest(const DeleteBackupSnapshotRequest &) = default ;
    DeleteBackupSnapshotRequest(DeleteBackupSnapshotRequest &&) = default ;
    DeleteBackupSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupSnapshotRequest() = default ;
    DeleteBackupSnapshotRequest& operator=(const DeleteBackupSnapshotRequest &) = default ;
    DeleteBackupSnapshotRequest& operator=(DeleteBackupSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupSnapshotList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupSnapshotList& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      };
      friend void from_json(const Darabonba::Json& j, BackupSnapshotList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
      };
      BackupSnapshotList() = default ;
      BackupSnapshotList(const BackupSnapshotList &) = default ;
      BackupSnapshotList(BackupSnapshotList &&) = default ;
      BackupSnapshotList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupSnapshotList() = default ;
      BackupSnapshotList& operator=(const BackupSnapshotList &) = default ;
      BackupSnapshotList& operator=(BackupSnapshotList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->snapshotId_ == nullptr && this->sourceType_ == nullptr && this->vaultId_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline BackupSnapshotList& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline BackupSnapshotList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline BackupSnapshotList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline BackupSnapshotList& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline BackupSnapshotList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // vaultId Field Functions 
      bool hasVaultId() const { return this->vaultId_ != nullptr;};
      void deleteVaultId() { this->vaultId_ = nullptr;};
      inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
      inline BackupSnapshotList& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    protected:
      // The ID of the backup client.
      // 
      // > You can call the [DescribeSnapshots](~~DescribeSnapshots~~) operation to obtain this parameter.
      // 
      // This parameter is required.
      shared_ptr<string> clientId_ {};
      // The ID of the server instance.
      // 
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // The region of the Security Center instance. Valid values:
      // 
      // - **cn-hangzhou**: China (Hangzhou).
      // - **ap-southeast-1**: Singapore.
      // - **cn-beijing**: China (Beijing).
      // 
      // This parameter is required.
      shared_ptr<string> regionId_ {};
      // The ID of the snapshot to delete.
      // >You can call the [DescribeSnapshots](~~DescribeSnapshots~~) operation to obtain this parameter.
      // 
      // This parameter is required.
      shared_ptr<string> snapshotId_ {};
      // The type of the data source. Valid values:
      // 
      // - **ECS_FILE**: backup snapshot of ECS files.
      // - **OSS**: backup snapshot of Alibaba Cloud OSS.
      // - **NAS**: backup snapshot of Alibaba Cloud NAS.
      // - **OTS_TABLE**: backup snapshot of Alibaba Cloud Tablestore.
      // 
      // This parameter is required.
      shared_ptr<string> sourceType_ {};
      // The ID of the backup vault for the restoration task.
      // >You can call the [DescribeSnapshots](~~DescribeSnapshots~~) operation to obtain this parameter.
      // 
      // This parameter is required.
      shared_ptr<string> vaultId_ {};
    };

    virtual bool empty() const override { return this->backupRegionIdList_ == nullptr
        && this->backupSnapshotList_ == nullptr && this->retainLatestSnapshot_ == nullptr; };
    // backupRegionIdList Field Functions 
    bool hasBackupRegionIdList() const { return this->backupRegionIdList_ != nullptr;};
    void deleteBackupRegionIdList() { this->backupRegionIdList_ = nullptr;};
    inline const vector<string> & getBackupRegionIdList() const { DARABONBA_PTR_GET_CONST(backupRegionIdList_, vector<string>) };
    inline vector<string> getBackupRegionIdList() { DARABONBA_PTR_GET(backupRegionIdList_, vector<string>) };
    inline DeleteBackupSnapshotRequest& setBackupRegionIdList(const vector<string> & backupRegionIdList) { DARABONBA_PTR_SET_VALUE(backupRegionIdList_, backupRegionIdList) };
    inline DeleteBackupSnapshotRequest& setBackupRegionIdList(vector<string> && backupRegionIdList) { DARABONBA_PTR_SET_RVALUE(backupRegionIdList_, backupRegionIdList) };


    // backupSnapshotList Field Functions 
    bool hasBackupSnapshotList() const { return this->backupSnapshotList_ != nullptr;};
    void deleteBackupSnapshotList() { this->backupSnapshotList_ = nullptr;};
    inline const vector<DeleteBackupSnapshotRequest::BackupSnapshotList> & getBackupSnapshotList() const { DARABONBA_PTR_GET_CONST(backupSnapshotList_, vector<DeleteBackupSnapshotRequest::BackupSnapshotList>) };
    inline vector<DeleteBackupSnapshotRequest::BackupSnapshotList> getBackupSnapshotList() { DARABONBA_PTR_GET(backupSnapshotList_, vector<DeleteBackupSnapshotRequest::BackupSnapshotList>) };
    inline DeleteBackupSnapshotRequest& setBackupSnapshotList(const vector<DeleteBackupSnapshotRequest::BackupSnapshotList> & backupSnapshotList) { DARABONBA_PTR_SET_VALUE(backupSnapshotList_, backupSnapshotList) };
    inline DeleteBackupSnapshotRequest& setBackupSnapshotList(vector<DeleteBackupSnapshotRequest::BackupSnapshotList> && backupSnapshotList) { DARABONBA_PTR_SET_RVALUE(backupSnapshotList_, backupSnapshotList) };


    // retainLatestSnapshot Field Functions 
    bool hasRetainLatestSnapshot() const { return this->retainLatestSnapshot_ != nullptr;};
    void deleteRetainLatestSnapshot() { this->retainLatestSnapshot_ = nullptr;};
    inline bool getRetainLatestSnapshot() const { DARABONBA_PTR_GET_DEFAULT(retainLatestSnapshot_, false) };
    inline DeleteBackupSnapshotRequest& setRetainLatestSnapshot(bool retainLatestSnapshot) { DARABONBA_PTR_SET_VALUE(retainLatestSnapshot_, retainLatestSnapshot) };


  protected:
    // The backup regions.
    shared_ptr<vector<string>> backupRegionIdList_ {};
    // The backup snapshots.
    shared_ptr<vector<DeleteBackupSnapshotRequest::BackupSnapshotList>> backupSnapshotList_ {};
    // Specifies whether to retain the latest snapshot. Valid values:
    // - **true**: retains the latest snapshot.
    // - **false**: does not retain the latest snapshot.
    shared_ptr<bool> retainLatestSnapshot_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
