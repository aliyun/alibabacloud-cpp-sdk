// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHDBINSTANCEHAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHDBINSTANCEHAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class SwitchDBInstanceHARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchDBInstanceHARequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchDBInstanceHARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_FROM_JSON(SwitchMode, switchMode_);
    };
    SwitchDBInstanceHARequest() = default ;
    SwitchDBInstanceHARequest(const SwitchDBInstanceHARequest &) = default ;
    SwitchDBInstanceHARequest(SwitchDBInstanceHARequest &&) = default ;
    SwitchDBInstanceHARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchDBInstanceHARequest() = default ;
    SwitchDBInstanceHARequest& operator=(const SwitchDBInstanceHARequest &) = default ;
    SwitchDBInstanceHARequest& operator=(SwitchDBInstanceHARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->nodeId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->roleIds_ == nullptr && this->switchMode_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline SwitchDBInstanceHARequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline SwitchDBInstanceHARequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SwitchDBInstanceHARequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SwitchDBInstanceHARequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SwitchDBInstanceHARequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SwitchDBInstanceHARequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline string getRoleIds() const { DARABONBA_PTR_GET_DEFAULT(roleIds_, "") };
    inline SwitchDBInstanceHARequest& setRoleIds(string roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };


    // switchMode Field Functions 
    bool hasSwitchMode() const { return this->switchMode_ != nullptr;};
    void deleteSwitchMode() { this->switchMode_ = nullptr;};
    inline int32_t getSwitchMode() const { DARABONBA_PTR_GET_DEFAULT(switchMode_, 0) };
    inline SwitchDBInstanceHARequest& setSwitchMode(int32_t switchMode) { DARABONBA_PTR_SET_VALUE(switchMode_, switchMode) };


  protected:
    // The ID of the instance
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The ID of the shard node in the sharded cluster instance.
    // 
    // > You must specify this parameter if you set the **DBInstanceId** parameter to the ID of a sharded cluster instance.
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IDs of the roles who switch the primary and secondary nodes for the instance. You can call the [DescribeRoleZoneInfo](https://help.aliyun.com/document_detail/123802.html) operation to view the IDs and information of roles of nodes.
    // 
    // > 
    // 
    // *   Separate role IDs with commas (,). If this parameter is not specified, the primary and secondary nodes are switched.
    // 
    // *   If you set the **DBInstanceId** parameter to the ID of a sharded cluster instance, the roles who switch the primary and secondary nodes for the instance must belong to one shard node.
    shared_ptr<string> roleIds_ {};
    // The time when the primary and secondary nodes are switched. Valid values:
    // 
    // *   0: The primary and secondary nodes are immediately switched.
    // *   1: The primary and secondary nodes are switched during the O\\&M time period.
    shared_ptr<int32_t> switchMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
