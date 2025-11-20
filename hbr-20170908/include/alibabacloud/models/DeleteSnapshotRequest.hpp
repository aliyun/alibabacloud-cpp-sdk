// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DeleteSnapshotRequest() = default ;
    DeleteSnapshotRequest(const DeleteSnapshotRequest &) = default ;
    DeleteSnapshotRequest(DeleteSnapshotRequest &&) = default ;
    DeleteSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotRequest() = default ;
    DeleteSnapshotRequest& operator=(const DeleteSnapshotRequest &) = default ;
    DeleteSnapshotRequest& operator=(DeleteSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && return this->force_ == nullptr && return this->instanceId_ == nullptr && return this->snapshotId_ == nullptr && return this->sourceType_ == nullptr && return this->token_ == nullptr
        && return this->vaultId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DeleteSnapshotRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteSnapshotRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteSnapshotRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DeleteSnapshotRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DeleteSnapshotRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DeleteSnapshotRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DeleteSnapshotRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The ID of the Cloud Backup client. If you delete a backup snapshot for Elastic Compute Service (ECS) instances, you must specify one of the ClientId and **InstanceId** parameters.
    std::shared_ptr<string> clientId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<bool> force_ = nullptr;
    // The ID of the ECS instance. If you delete a backup snapshot for ECS instances, you must specify one of the InstanceId and **ClientId** parameters.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the backup snapshot.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The type of the backup source. Valid values:
    // 
    // *   **ECS_FILE**: backup snapshots for ECS files
    // *   **OSS**: backup snapshots for Object Storage Service (OSS) buckets
    // *   **NAS**: backup snapshots for Apsara File Storage NAS (NAS) file systems
    std::shared_ptr<string> sourceType_ = nullptr;
    // The token that you want to delete.
    std::shared_ptr<string> token_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
