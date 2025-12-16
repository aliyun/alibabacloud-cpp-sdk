// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVAULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVAULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateVaultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVaultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(Replication, replication_);
      DARABONBA_PTR_TO_JSON(VaultName, vaultName_);
      DARABONBA_PTR_TO_JSON(VaultRegionId, vaultRegionId_);
      DARABONBA_PTR_TO_JSON(VaultStorageClass, vaultStorageClass_);
      DARABONBA_PTR_TO_JSON(VaultType, vaultType_);
      DARABONBA_PTR_TO_JSON(WormEnabled, wormEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVaultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(Replication, replication_);
      DARABONBA_PTR_FROM_JSON(VaultName, vaultName_);
      DARABONBA_PTR_FROM_JSON(VaultRegionId, vaultRegionId_);
      DARABONBA_PTR_FROM_JSON(VaultStorageClass, vaultStorageClass_);
      DARABONBA_PTR_FROM_JSON(VaultType, vaultType_);
      DARABONBA_PTR_FROM_JSON(WormEnabled, wormEnabled_);
    };
    CreateVaultRequest() = default ;
    CreateVaultRequest(const CreateVaultRequest &) = default ;
    CreateVaultRequest(CreateVaultRequest &&) = default ;
    CreateVaultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVaultRequest() = default ;
    CreateVaultRequest& operator=(const CreateVaultRequest &) = default ;
    CreateVaultRequest& operator=(CreateVaultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->encryptType_ == nullptr && return this->kmsKeyId_ == nullptr && return this->replication_ == nullptr && return this->vaultName_ == nullptr && return this->vaultRegionId_ == nullptr
        && return this->vaultStorageClass_ == nullptr && return this->vaultType_ == nullptr && return this->wormEnabled_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVaultRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline CreateVaultRequest& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateVaultRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // replication Field Functions 
    bool hasReplication() const { return this->replication_ != nullptr;};
    void deleteReplication() { this->replication_ = nullptr;};
    inline bool replication() const { DARABONBA_PTR_GET_DEFAULT(replication_, false) };
    inline CreateVaultRequest& setReplication(bool replication) { DARABONBA_PTR_SET_VALUE(replication_, replication) };


    // vaultName Field Functions 
    bool hasVaultName() const { return this->vaultName_ != nullptr;};
    void deleteVaultName() { this->vaultName_ = nullptr;};
    inline string vaultName() const { DARABONBA_PTR_GET_DEFAULT(vaultName_, "") };
    inline CreateVaultRequest& setVaultName(string vaultName) { DARABONBA_PTR_SET_VALUE(vaultName_, vaultName) };


    // vaultRegionId Field Functions 
    bool hasVaultRegionId() const { return this->vaultRegionId_ != nullptr;};
    void deleteVaultRegionId() { this->vaultRegionId_ = nullptr;};
    inline string vaultRegionId() const { DARABONBA_PTR_GET_DEFAULT(vaultRegionId_, "") };
    inline CreateVaultRequest& setVaultRegionId(string vaultRegionId) { DARABONBA_PTR_SET_VALUE(vaultRegionId_, vaultRegionId) };


    // vaultStorageClass Field Functions 
    bool hasVaultStorageClass() const { return this->vaultStorageClass_ != nullptr;};
    void deleteVaultStorageClass() { this->vaultStorageClass_ = nullptr;};
    inline string vaultStorageClass() const { DARABONBA_PTR_GET_DEFAULT(vaultStorageClass_, "") };
    inline CreateVaultRequest& setVaultStorageClass(string vaultStorageClass) { DARABONBA_PTR_SET_VALUE(vaultStorageClass_, vaultStorageClass) };


    // vaultType Field Functions 
    bool hasVaultType() const { return this->vaultType_ != nullptr;};
    void deleteVaultType() { this->vaultType_ = nullptr;};
    inline string vaultType() const { DARABONBA_PTR_GET_DEFAULT(vaultType_, "") };
    inline CreateVaultRequest& setVaultType(string vaultType) { DARABONBA_PTR_SET_VALUE(vaultType_, vaultType) };


    // wormEnabled Field Functions 
    bool hasWormEnabled() const { return this->wormEnabled_ != nullptr;};
    void deleteWormEnabled() { this->wormEnabled_ = nullptr;};
    inline bool wormEnabled() const { DARABONBA_PTR_GET_DEFAULT(wormEnabled_, false) };
    inline CreateVaultRequest& setWormEnabled(bool wormEnabled) { DARABONBA_PTR_SET_VALUE(wormEnabled_, wormEnabled) };


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
    std::shared_ptr<bool> replication_ = nullptr;
    // The name of the backup vault. The name must be 1 to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultName_ = nullptr;
    // The ID of the region where the backup vault resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultRegionId_ = nullptr;
    // The storage type of the backup vault.
    // 
    // *   **STANDARD**: standard storage.
    // *   **ARCHIVE**: This parameter is deprecated.
    // *   **COLD_ARCHIVE**: This parameter is deprecated.
    // *   **IA**: This parameter is deprecated.
    std::shared_ptr<string> vaultStorageClass_ = nullptr;
    // The type of the backup vault. Valid values:
    // 
    // *   **STANDARD**: standard backup vault
    // *   **OTS_BACKUP**: backup vault for Tablestore
    std::shared_ptr<string> vaultType_ = nullptr;
    // Specifies whether to enable the immutable backup feature.
    std::shared_ptr<bool> wormEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
