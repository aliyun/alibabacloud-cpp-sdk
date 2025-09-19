// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPSNAPSHOTREQUESTBACKUPSNAPSHOTLIST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPSNAPSHOTREQUESTBACKUPSNAPSHOTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteBackupSnapshotRequestBackupSnapshotList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupSnapshotRequestBackupSnapshotList& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupSnapshotRequestBackupSnapshotList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DeleteBackupSnapshotRequestBackupSnapshotList() = default ;
    DeleteBackupSnapshotRequestBackupSnapshotList(const DeleteBackupSnapshotRequestBackupSnapshotList &) = default ;
    DeleteBackupSnapshotRequestBackupSnapshotList(DeleteBackupSnapshotRequestBackupSnapshotList &&) = default ;
    DeleteBackupSnapshotRequestBackupSnapshotList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupSnapshotRequestBackupSnapshotList() = default ;
    DeleteBackupSnapshotRequestBackupSnapshotList& operator=(const DeleteBackupSnapshotRequestBackupSnapshotList &) = default ;
    DeleteBackupSnapshotRequestBackupSnapshotList& operator=(DeleteBackupSnapshotRequestBackupSnapshotList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->snapshotId_ != nullptr && this->sourceType_ != nullptr && this->vaultId_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DeleteBackupSnapshotRequestBackupSnapshotList& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteBackupSnapshotRequestBackupSnapshotList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteBackupSnapshotRequestBackupSnapshotList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DeleteBackupSnapshotRequestBackupSnapshotList& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DeleteBackupSnapshotRequestBackupSnapshotList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DeleteBackupSnapshotRequestBackupSnapshotList& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The ID of the Cloud Backup client.
    // 
    // >  You can call the [DescribeSnapshots](~~DescribeSnapshots~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    // The ID of the server.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region in which Security Center is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: China (Hangzhou).
    // *   **ap-southeast-1**: Singapore.
    // *   **cn-beijing**: China (Beijing).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the snapshot that you want to delete.
    // 
    // >  You can call the [DescribeSnapshots](~~DescribeSnapshots~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files.
    // *   **OSS**: Object Storage Service (OSS) buckets.
    // *   **NAS**: File Storage NAS (NAS) file systems.
    // *   **OTS_TABLE**: Tablestore instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The ID of the backup vault that is used in the restoration task.
    // 
    // >  You can call the [DescribeSnapshots](~~DescribeSnapshots~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
