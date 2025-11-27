// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEAUTOUPGRADEMINORVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEAUTOUPGRADEMINORVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceAutoUpgradeMinorVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceAutoUpgradeMinorVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUpgradeMinorVersion, autoUpgradeMinorVersion_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceAutoUpgradeMinorVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUpgradeMinorVersion, autoUpgradeMinorVersion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDBInstanceAutoUpgradeMinorVersionRequest() = default ;
    ModifyDBInstanceAutoUpgradeMinorVersionRequest(const ModifyDBInstanceAutoUpgradeMinorVersionRequest &) = default ;
    ModifyDBInstanceAutoUpgradeMinorVersionRequest(ModifyDBInstanceAutoUpgradeMinorVersionRequest &&) = default ;
    ModifyDBInstanceAutoUpgradeMinorVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceAutoUpgradeMinorVersionRequest() = default ;
    ModifyDBInstanceAutoUpgradeMinorVersionRequest& operator=(const ModifyDBInstanceAutoUpgradeMinorVersionRequest &) = default ;
    ModifyDBInstanceAutoUpgradeMinorVersionRequest& operator=(ModifyDBInstanceAutoUpgradeMinorVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUpgradeMinorVersion_ == nullptr
        && return this->clientToken_ == nullptr && return this->DBInstanceId_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // autoUpgradeMinorVersion Field Functions 
    bool hasAutoUpgradeMinorVersion() const { return this->autoUpgradeMinorVersion_ != nullptr;};
    void deleteAutoUpgradeMinorVersion() { this->autoUpgradeMinorVersion_ = nullptr;};
    inline string autoUpgradeMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeMinorVersion_, "") };
    inline ModifyDBInstanceAutoUpgradeMinorVersionRequest& setAutoUpgradeMinorVersion(string autoUpgradeMinorVersion) { DARABONBA_PTR_SET_VALUE(autoUpgradeMinorVersion_, autoUpgradeMinorVersion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDBInstanceAutoUpgradeMinorVersionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceAutoUpgradeMinorVersionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceAutoUpgradeMinorVersionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceAutoUpgradeMinorVersionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceAutoUpgradeMinorVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The method that is used to update the minor engine version of the instance. Valid values:
    // 
    // *   **Auto:** automatic update.
    // *   **Manual**: manual update. ApsaraDB RDS automatically updates the current minor engine version of the instance only when the current minor engine version is phased out.
    // 
    // This parameter is required.
    std::shared_ptr<string> autoUpgradeMinorVersion_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
