// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyDBInstanceConnectionStringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceConnectionStringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ForceModifySuffix, forceModifySuffix_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NewConnectionString, newConnectionString_);
      DARABONBA_PTR_TO_JSON(NewPort, newPort_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PortModifyOnly, portModifyOnly_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceConnectionStringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ForceModifySuffix, forceModifySuffix_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NewConnectionString, newConnectionString_);
      DARABONBA_PTR_FROM_JSON(NewPort, newPort_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PortModifyOnly, portModifyOnly_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDBInstanceConnectionStringRequest() = default ;
    ModifyDBInstanceConnectionStringRequest(const ModifyDBInstanceConnectionStringRequest &) = default ;
    ModifyDBInstanceConnectionStringRequest(ModifyDBInstanceConnectionStringRequest &&) = default ;
    ModifyDBInstanceConnectionStringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceConnectionStringRequest() = default ;
    ModifyDBInstanceConnectionStringRequest& operator=(const ModifyDBInstanceConnectionStringRequest &) = default ;
    ModifyDBInstanceConnectionStringRequest& operator=(ModifyDBInstanceConnectionStringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentConnectionString_ == nullptr
        && this->DBInstanceId_ == nullptr && this->forceModifySuffix_ == nullptr && this->networkType_ == nullptr && this->newConnectionString_ == nullptr && this->newPort_ == nullptr
        && this->nodeId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->portModifyOnly_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // currentConnectionString Field Functions 
    bool hasCurrentConnectionString() const { return this->currentConnectionString_ != nullptr;};
    void deleteCurrentConnectionString() { this->currentConnectionString_ = nullptr;};
    inline string getCurrentConnectionString() const { DARABONBA_PTR_GET_DEFAULT(currentConnectionString_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setCurrentConnectionString(string currentConnectionString) { DARABONBA_PTR_SET_VALUE(currentConnectionString_, currentConnectionString) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // forceModifySuffix Field Functions 
    bool hasForceModifySuffix() const { return this->forceModifySuffix_ != nullptr;};
    void deleteForceModifySuffix() { this->forceModifySuffix_ = nullptr;};
    inline bool getForceModifySuffix() const { DARABONBA_PTR_GET_DEFAULT(forceModifySuffix_, false) };
    inline ModifyDBInstanceConnectionStringRequest& setForceModifySuffix(bool forceModifySuffix) { DARABONBA_PTR_SET_VALUE(forceModifySuffix_, forceModifySuffix) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // newConnectionString Field Functions 
    bool hasNewConnectionString() const { return this->newConnectionString_ != nullptr;};
    void deleteNewConnectionString() { this->newConnectionString_ = nullptr;};
    inline string getNewConnectionString() const { DARABONBA_PTR_GET_DEFAULT(newConnectionString_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setNewConnectionString(string newConnectionString) { DARABONBA_PTR_SET_VALUE(newConnectionString_, newConnectionString) };


    // newPort Field Functions 
    bool hasNewPort() const { return this->newPort_ != nullptr;};
    void deleteNewPort() { this->newPort_ = nullptr;};
    inline int32_t getNewPort() const { DARABONBA_PTR_GET_DEFAULT(newPort_, 0) };
    inline ModifyDBInstanceConnectionStringRequest& setNewPort(int32_t newPort) { DARABONBA_PTR_SET_VALUE(newPort_, newPort) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceConnectionStringRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // portModifyOnly Field Functions 
    bool hasPortModifyOnly() const { return this->portModifyOnly_ != nullptr;};
    void deletePortModifyOnly() { this->portModifyOnly_ = nullptr;};
    inline bool getPortModifyOnly() const { DARABONBA_PTR_GET_DEFAULT(portModifyOnly_, false) };
    inline ModifyDBInstanceConnectionStringRequest& setPortModifyOnly(bool portModifyOnly) { DARABONBA_PTR_SET_VALUE(portModifyOnly_, portModifyOnly) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceConnectionStringRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The current connection address—the address to modify.
    shared_ptr<string> currentConnectionString_ {};
    // The ID of the instance.
    // 
    // > If you specify the ID of a sharded cluster instance, you must also specify the **NodeId** parameter.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<bool> forceModifySuffix_ {};
    shared_ptr<string> networkType_ {};
    // The new connection address. It must meet these requirements:
    // 
    // - Start with a lowercase letter.
    // 
    // - End with a lowercase letter or digit.
    // 
    // - Contain only lowercase letters, digits, and hyphens (-).
    // 
    // - Be 8 to 63 characters long.
    // 
    // > Specify only the prefix of the connection address. You cannot change any part beyond the prefix.
    shared_ptr<string> newConnectionString_ {};
    // The new port number. Valid values are from 1000 to 65535.
    // 
    // > This parameter is valid only when **DBInstanceId** specifies the ID of a cloud disk instance.
    shared_ptr<int32_t> newPort_ {};
    // The ID of a Mongos node in a sharded cluster instance. You can specify only one Mongos node ID per call.
    // 
    // > This parameter is valid only when **DBInstanceId** specifies the ID of a sharded cluster instance.
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<bool> portModifyOnly_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
