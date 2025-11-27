// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPGHBACONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPGHBACONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyPGHbaConfigRequestHbaItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyPGHbaConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPGHbaConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(HbaItem, hbaItem_);
      DARABONBA_PTR_TO_JSON(OpsType, opsType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPGHbaConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(HbaItem, hbaItem_);
      DARABONBA_PTR_FROM_JSON(OpsType, opsType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyPGHbaConfigRequest() = default ;
    ModifyPGHbaConfigRequest(const ModifyPGHbaConfigRequest &) = default ;
    ModifyPGHbaConfigRequest(ModifyPGHbaConfigRequest &&) = default ;
    ModifyPGHbaConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPGHbaConfigRequest() = default ;
    ModifyPGHbaConfigRequest& operator=(const ModifyPGHbaConfigRequest &) = default ;
    ModifyPGHbaConfigRequest& operator=(ModifyPGHbaConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->hbaItem_ == nullptr && return this->opsType_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyPGHbaConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyPGHbaConfigRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // hbaItem Field Functions 
    bool hasHbaItem() const { return this->hbaItem_ != nullptr;};
    void deleteHbaItem() { this->hbaItem_ = nullptr;};
    inline const vector<ModifyPGHbaConfigRequestHbaItem> & hbaItem() const { DARABONBA_PTR_GET_CONST(hbaItem_, vector<ModifyPGHbaConfigRequestHbaItem>) };
    inline vector<ModifyPGHbaConfigRequestHbaItem> hbaItem() { DARABONBA_PTR_GET(hbaItem_, vector<ModifyPGHbaConfigRequestHbaItem>) };
    inline ModifyPGHbaConfigRequest& setHbaItem(const vector<ModifyPGHbaConfigRequestHbaItem> & hbaItem) { DARABONBA_PTR_SET_VALUE(hbaItem_, hbaItem) };
    inline ModifyPGHbaConfigRequest& setHbaItem(vector<ModifyPGHbaConfigRequestHbaItem> && hbaItem) { DARABONBA_PTR_SET_RVALUE(hbaItem_, hbaItem) };


    // opsType Field Functions 
    bool hasOpsType() const { return this->opsType_ != nullptr;};
    void deleteOpsType() { this->opsType_ = nullptr;};
    inline string opsType() const { DARABONBA_PTR_GET_DEFAULT(opsType_, "") };
    inline ModifyPGHbaConfigRequest& setOpsType(string opsType) { DARABONBA_PTR_SET_VALUE(opsType_, opsType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyPGHbaConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPGHbaConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPGHbaConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPGHbaConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // A reserved parameter. You do not need to specify this parameter.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // An array that consists of the details of the AD domain services.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ModifyPGHbaConfigRequestHbaItem>> hbaItem_ = nullptr;
    // The method that you use to modify the pg_hba.conf file. Valid values:
    // 
    // *   **add**: adds one or more records. If you use this method, make sure that the value of the PriorityId parameter for each new record is different from the value of the PriorityId parameter for any existing record.
    // *   **delete**: deletes one or more records. If you use this method, the record that corresponds to the specified value of the **PriorityId** parameter is deleted from the pg_hba.conf file.
    // *   **modify**: modifies one or more records. If you use this method, the record that corresponds to the specified value of the **PriorityId** parameter is modified.
    // *   **update**: overwrites the existing configuration in the pg_hba.conf file by using the new configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> opsType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
