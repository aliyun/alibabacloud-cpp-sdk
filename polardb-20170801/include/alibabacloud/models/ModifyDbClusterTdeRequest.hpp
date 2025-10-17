// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERTDEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERTDEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterTDERequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterTDERequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_TO_JSON(EncryptNewTables, encryptNewTables_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(TDEStatus, TDEStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterTDERequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_FROM_JSON(EncryptNewTables, encryptNewTables_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(TDEStatus, TDEStatus_);
    };
    ModifyDBClusterTDERequest() = default ;
    ModifyDBClusterTDERequest(const ModifyDBClusterTDERequest &) = default ;
    ModifyDBClusterTDERequest(ModifyDBClusterTDERequest &&) = default ;
    ModifyDBClusterTDERequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterTDERequest() = default ;
    ModifyDBClusterTDERequest& operator=(const ModifyDBClusterTDERequest &) = default ;
    ModifyDBClusterTDERequest& operator=(ModifyDBClusterTDERequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->enableAutomaticRotation_ == nullptr && return this->encryptNewTables_ == nullptr && return this->encryptionKey_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->roleArn_ == nullptr && return this->TDEStatus_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterTDERequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableAutomaticRotation Field Functions 
    bool hasEnableAutomaticRotation() const { return this->enableAutomaticRotation_ != nullptr;};
    void deleteEnableAutomaticRotation() { this->enableAutomaticRotation_ = nullptr;};
    inline string enableAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(enableAutomaticRotation_, "") };
    inline ModifyDBClusterTDERequest& setEnableAutomaticRotation(string enableAutomaticRotation) { DARABONBA_PTR_SET_VALUE(enableAutomaticRotation_, enableAutomaticRotation) };


    // encryptNewTables Field Functions 
    bool hasEncryptNewTables() const { return this->encryptNewTables_ != nullptr;};
    void deleteEncryptNewTables() { this->encryptNewTables_ = nullptr;};
    inline string encryptNewTables() const { DARABONBA_PTR_GET_DEFAULT(encryptNewTables_, "") };
    inline ModifyDBClusterTDERequest& setEncryptNewTables(string encryptNewTables) { DARABONBA_PTR_SET_VALUE(encryptNewTables_, encryptNewTables) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline ModifyDBClusterTDERequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterTDERequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterTDERequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterTDERequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterTDERequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline ModifyDBClusterTDERequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // TDEStatus Field Functions 
    bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
    void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
    inline string TDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, "") };
    inline ModifyDBClusterTDERequest& setTDEStatus(string TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to allow the TDE key of the cluster to be automatically rotated within the next maintenance window after a lapse of the rotation period when a change in the KMS key version is detected. This parameter is supported only for custom keys. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is supported only for a PolarDB for PostgreSQL or PolarDB for PostgreSQL (Compatible with Oracle) cluster.
    std::shared_ptr<string> enableAutomaticRotation_ = nullptr;
    // Specifies whether to enable automatic encryption for new tables. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    // 
    // >  This parameter takes effect only for a PolarDB for MySQL cluster.
    std::shared_ptr<string> encryptNewTables_ = nullptr;
    // The ID of the custom key.
    std::shared_ptr<string> encryptionKey_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the RAM role. A RAM role is a virtual identity that you can create within your Alibaba Cloud account. For more information, see [RAM role overview](https://help.aliyun.com/document_detail/93689.html).
    std::shared_ptr<string> roleArn_ = nullptr;
    // Modifies the TDE status. Set the value to **Enable**.
    // 
    // This parameter is required.
    std::shared_ptr<string> TDEStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
