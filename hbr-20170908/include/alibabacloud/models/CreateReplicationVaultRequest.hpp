// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPLICATIONVAULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPLICATIONVAULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateReplicationVaultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReplicationVaultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(RedundancyType, redundancyType_);
      DARABONBA_PTR_TO_JSON(ReplicationSourceRegionId, replicationSourceRegionId_);
      DARABONBA_PTR_TO_JSON(ReplicationSourceVaultId, replicationSourceVaultId_);
      DARABONBA_PTR_TO_JSON(VaultName, vaultName_);
      DARABONBA_PTR_TO_JSON(VaultRegionId, vaultRegionId_);
      DARABONBA_PTR_TO_JSON(VaultStorageClass, vaultStorageClass_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReplicationVaultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(RedundancyType, redundancyType_);
      DARABONBA_PTR_FROM_JSON(ReplicationSourceRegionId, replicationSourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ReplicationSourceVaultId, replicationSourceVaultId_);
      DARABONBA_PTR_FROM_JSON(VaultName, vaultName_);
      DARABONBA_PTR_FROM_JSON(VaultRegionId, vaultRegionId_);
      DARABONBA_PTR_FROM_JSON(VaultStorageClass, vaultStorageClass_);
    };
    CreateReplicationVaultRequest() = default ;
    CreateReplicationVaultRequest(const CreateReplicationVaultRequest &) = default ;
    CreateReplicationVaultRequest(CreateReplicationVaultRequest &&) = default ;
    CreateReplicationVaultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReplicationVaultRequest() = default ;
    CreateReplicationVaultRequest& operator=(const CreateReplicationVaultRequest &) = default ;
    CreateReplicationVaultRequest& operator=(CreateReplicationVaultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->encryptType_ == nullptr && return this->kmsKeyId_ == nullptr && return this->redundancyType_ == nullptr && return this->replicationSourceRegionId_ == nullptr && return this->replicationSourceVaultId_ == nullptr
        && return this->vaultName_ == nullptr && return this->vaultRegionId_ == nullptr && return this->vaultStorageClass_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateReplicationVaultRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline CreateReplicationVaultRequest& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateReplicationVaultRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // redundancyType Field Functions 
    bool hasRedundancyType() const { return this->redundancyType_ != nullptr;};
    void deleteRedundancyType() { this->redundancyType_ = nullptr;};
    inline string redundancyType() const { DARABONBA_PTR_GET_DEFAULT(redundancyType_, "") };
    inline CreateReplicationVaultRequest& setRedundancyType(string redundancyType) { DARABONBA_PTR_SET_VALUE(redundancyType_, redundancyType) };


    // replicationSourceRegionId Field Functions 
    bool hasReplicationSourceRegionId() const { return this->replicationSourceRegionId_ != nullptr;};
    void deleteReplicationSourceRegionId() { this->replicationSourceRegionId_ = nullptr;};
    inline string replicationSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceRegionId_, "") };
    inline CreateReplicationVaultRequest& setReplicationSourceRegionId(string replicationSourceRegionId) { DARABONBA_PTR_SET_VALUE(replicationSourceRegionId_, replicationSourceRegionId) };


    // replicationSourceVaultId Field Functions 
    bool hasReplicationSourceVaultId() const { return this->replicationSourceVaultId_ != nullptr;};
    void deleteReplicationSourceVaultId() { this->replicationSourceVaultId_ = nullptr;};
    inline string replicationSourceVaultId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceVaultId_, "") };
    inline CreateReplicationVaultRequest& setReplicationSourceVaultId(string replicationSourceVaultId) { DARABONBA_PTR_SET_VALUE(replicationSourceVaultId_, replicationSourceVaultId) };


    // vaultName Field Functions 
    bool hasVaultName() const { return this->vaultName_ != nullptr;};
    void deleteVaultName() { this->vaultName_ = nullptr;};
    inline string vaultName() const { DARABONBA_PTR_GET_DEFAULT(vaultName_, "") };
    inline CreateReplicationVaultRequest& setVaultName(string vaultName) { DARABONBA_PTR_SET_VALUE(vaultName_, vaultName) };


    // vaultRegionId Field Functions 
    bool hasVaultRegionId() const { return this->vaultRegionId_ != nullptr;};
    void deleteVaultRegionId() { this->vaultRegionId_ = nullptr;};
    inline string vaultRegionId() const { DARABONBA_PTR_GET_DEFAULT(vaultRegionId_, "") };
    inline CreateReplicationVaultRequest& setVaultRegionId(string vaultRegionId) { DARABONBA_PTR_SET_VALUE(vaultRegionId_, vaultRegionId) };


    // vaultStorageClass Field Functions 
    bool hasVaultStorageClass() const { return this->vaultStorageClass_ != nullptr;};
    void deleteVaultStorageClass() { this->vaultStorageClass_ = nullptr;};
    inline string vaultStorageClass() const { DARABONBA_PTR_GET_DEFAULT(vaultStorageClass_, "") };
    inline CreateReplicationVaultRequest& setVaultStorageClass(string vaultStorageClass) { DARABONBA_PTR_SET_VALUE(vaultStorageClass_, vaultStorageClass) };


  protected:
    // The description of the backup vault. The description must be 0 to 255 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The method that is used to encrypt the source data. This parameter is valid only if you set the VaultType parameter to STANDARD or OTS_BACKUP. Valid values:
    // 
    // *   **HBR_PRIVATE**: The source data is encrypted by using the built-in encryption method of Hybrid Backup Recovery (HBR).
    // *   **KMS**: The source data is encrypted by using Key Management Service (KMS).
    std::shared_ptr<string> encryptType_ = nullptr;
    // The customer master key (CMK) created in KMS or the alias of the key. This parameter is required only if you set the EncryptType parameter to KMS.
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    // The data redundancy type of the backup vault. Valid values:
    // 
    // *   LRS: standard locally redundant storage (LRS). Cloud Backup stores the copies of each object on multiple devices of different facilities in the same zone. This way, Cloud Backup ensures data durability and availability even if hardware failures occur.
    // *   ZRS: standard zone-redundant storage (ZRS). Cloud Backup uses the multi-zone mechanism to distribute data across three zones within the same region. If a zone fails, the data that is stored in the other two zones is still accessible.
    std::shared_ptr<string> redundancyType_ = nullptr;
    // The ID of the region where the source vault resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> replicationSourceRegionId_ = nullptr;
    // The ID of the source vault.
    // 
    // This parameter is required.
    std::shared_ptr<string> replicationSourceVaultId_ = nullptr;
    // The name of the backup vault. The name must be 1 to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultName_ = nullptr;
    // The ID of the region where the backup vault resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultRegionId_ = nullptr;
    // The storage type of the backup vault. Valid value: **STANDARD**, which indicates standard storage.
    std::shared_ptr<string> vaultStorageClass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
