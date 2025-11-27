// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBPROXYENDPOINTADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBPROXYENDPOINTADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBProxyEndpointAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBProxyEndpointAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBProxyConnectStringNetType, DBProxyConnectStringNetType_);
      DARABONBA_PTR_TO_JSON(DBProxyEndpointId, DBProxyEndpointId_);
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DBProxyNewConnectString, DBProxyNewConnectString_);
      DARABONBA_PTR_TO_JSON(DBProxyNewConnectStringPort, DBProxyNewConnectStringPort_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBProxyEndpointAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBProxyConnectStringNetType, DBProxyConnectStringNetType_);
      DARABONBA_PTR_FROM_JSON(DBProxyEndpointId, DBProxyEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DBProxyNewConnectString, DBProxyNewConnectString_);
      DARABONBA_PTR_FROM_JSON(DBProxyNewConnectStringPort, DBProxyNewConnectStringPort_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDBProxyEndpointAddressRequest() = default ;
    ModifyDBProxyEndpointAddressRequest(const ModifyDBProxyEndpointAddressRequest &) = default ;
    ModifyDBProxyEndpointAddressRequest(ModifyDBProxyEndpointAddressRequest &&) = default ;
    ModifyDBProxyEndpointAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBProxyEndpointAddressRequest() = default ;
    ModifyDBProxyEndpointAddressRequest& operator=(const ModifyDBProxyEndpointAddressRequest &) = default ;
    ModifyDBProxyEndpointAddressRequest& operator=(ModifyDBProxyEndpointAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->DBProxyConnectStringNetType_ == nullptr && return this->DBProxyEndpointId_ == nullptr && return this->DBProxyEngineType_ == nullptr && return this->DBProxyNewConnectString_ == nullptr && return this->DBProxyNewConnectStringPort_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBProxyEndpointAddressRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBProxyConnectStringNetType Field Functions 
    bool hasDBProxyConnectStringNetType() const { return this->DBProxyConnectStringNetType_ != nullptr;};
    void deleteDBProxyConnectStringNetType() { this->DBProxyConnectStringNetType_ = nullptr;};
    inline string DBProxyConnectStringNetType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringNetType_, "") };
    inline ModifyDBProxyEndpointAddressRequest& setDBProxyConnectStringNetType(string DBProxyConnectStringNetType) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringNetType_, DBProxyConnectStringNetType) };


    // DBProxyEndpointId Field Functions 
    bool hasDBProxyEndpointId() const { return this->DBProxyEndpointId_ != nullptr;};
    void deleteDBProxyEndpointId() { this->DBProxyEndpointId_ = nullptr;};
    inline string DBProxyEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointId_, "") };
    inline ModifyDBProxyEndpointAddressRequest& setDBProxyEndpointId(string DBProxyEndpointId) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointId_, DBProxyEndpointId) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string DBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline ModifyDBProxyEndpointAddressRequest& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // DBProxyNewConnectString Field Functions 
    bool hasDBProxyNewConnectString() const { return this->DBProxyNewConnectString_ != nullptr;};
    void deleteDBProxyNewConnectString() { this->DBProxyNewConnectString_ = nullptr;};
    inline string DBProxyNewConnectString() const { DARABONBA_PTR_GET_DEFAULT(DBProxyNewConnectString_, "") };
    inline ModifyDBProxyEndpointAddressRequest& setDBProxyNewConnectString(string DBProxyNewConnectString) { DARABONBA_PTR_SET_VALUE(DBProxyNewConnectString_, DBProxyNewConnectString) };


    // DBProxyNewConnectStringPort Field Functions 
    bool hasDBProxyNewConnectStringPort() const { return this->DBProxyNewConnectStringPort_ != nullptr;};
    void deleteDBProxyNewConnectStringPort() { this->DBProxyNewConnectStringPort_ = nullptr;};
    inline string DBProxyNewConnectStringPort() const { DARABONBA_PTR_GET_DEFAULT(DBProxyNewConnectStringPort_, "") };
    inline ModifyDBProxyEndpointAddressRequest& setDBProxyNewConnectStringPort(string DBProxyNewConnectStringPort) { DARABONBA_PTR_SET_VALUE(DBProxyNewConnectStringPort_, DBProxyNewConnectStringPort) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBProxyEndpointAddressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBProxyEndpointAddressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBProxyEndpointAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The network type of the database proxy endpoint. Valid values:
    // 
    // *   **Public**
    // *   **VPC** (default)
    // 
    // >  If the RDS instance runs MySQL, this parameter is required.
    std::shared_ptr<string> DBProxyConnectStringNetType_ = nullptr;
    // The ID of the database proxy endpoint. You can call the DescribeDBProxyEndpoint operation to query the ID of the database proxy endpoint.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBProxyEndpointId_ = nullptr;
    // A deprecated parameter. You do not need to specify this parameter.
    std::shared_ptr<string> DBProxyEngineType_ = nullptr;
    // The prefix of the new database proxy endpoint. A custom value is supported.
    // 
    // >  You must specify at least one of the **DBProxyNewConnectString** and **DBProxyNewConnectStringPort** parameters.
    std::shared_ptr<string> DBProxyNewConnectString_ = nullptr;
    // The port number that is associated with the database proxy endpoint. A custom value is supported.
    // 
    // >  You must specify at least one of the **DBProxyNewConnectString** and **DBProxyNewConnectStringPort** parameters.
    std::shared_ptr<string> DBProxyNewConnectStringPort_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
