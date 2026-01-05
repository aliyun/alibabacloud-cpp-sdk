// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBENDPOINTADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBENDPOINTADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBEndpointAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBEndpointAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateZoneAddressPrefix, privateZoneAddressPrefix_);
      DARABONBA_PTR_TO_JSON(PrivateZoneName, privateZoneName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBEndpointAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateZoneAddressPrefix, privateZoneAddressPrefix_);
      DARABONBA_PTR_FROM_JSON(PrivateZoneName, privateZoneName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDBEndpointAddressRequest() = default ;
    ModifyDBEndpointAddressRequest(const ModifyDBEndpointAddressRequest &) = default ;
    ModifyDBEndpointAddressRequest(ModifyDBEndpointAddressRequest &&) = default ;
    ModifyDBEndpointAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBEndpointAddressRequest() = default ;
    ModifyDBEndpointAddressRequest& operator=(const ModifyDBEndpointAddressRequest &) = default ;
    ModifyDBEndpointAddressRequest& operator=(ModifyDBEndpointAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionStringPrefix_ == nullptr
        && this->DBClusterId_ == nullptr && this->DBEndpointId_ == nullptr && this->netType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->port_ == nullptr && this->privateZoneAddressPrefix_ == nullptr && this->privateZoneName_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string getConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline ModifyDBEndpointAddressRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBEndpointAddressRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline ModifyDBEndpointAddressRequest& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline ModifyDBEndpointAddressRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBEndpointAddressRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBEndpointAddressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ModifyDBEndpointAddressRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateZoneAddressPrefix Field Functions 
    bool hasPrivateZoneAddressPrefix() const { return this->privateZoneAddressPrefix_ != nullptr;};
    void deletePrivateZoneAddressPrefix() { this->privateZoneAddressPrefix_ = nullptr;};
    inline string getPrivateZoneAddressPrefix() const { DARABONBA_PTR_GET_DEFAULT(privateZoneAddressPrefix_, "") };
    inline ModifyDBEndpointAddressRequest& setPrivateZoneAddressPrefix(string privateZoneAddressPrefix) { DARABONBA_PTR_SET_VALUE(privateZoneAddressPrefix_, privateZoneAddressPrefix) };


    // privateZoneName Field Functions 
    bool hasPrivateZoneName() const { return this->privateZoneName_ != nullptr;};
    void deletePrivateZoneName() { this->privateZoneName_ = nullptr;};
    inline string getPrivateZoneName() const { DARABONBA_PTR_GET_DEFAULT(privateZoneName_, "") };
    inline ModifyDBEndpointAddressRequest& setPrivateZoneName(string privateZoneName) { DARABONBA_PTR_SET_VALUE(privateZoneName_, privateZoneName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBEndpointAddressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBEndpointAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The prefix of the new endpoint. The prefix must meet the following requirements:
    // 
    // *   It can contain lowercase letters, digits, and hyphens (-).
    // *   It must start with a letter and end with a digit or a letter.
    // *   It must be 6 to 30 characters in length.
    shared_ptr<string> connectionStringPrefix_ {};
    // The ID of cluster.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of the clusters that belong to your Alibaba Cloud account, such as cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The ID of the endpoint.
    // 
    // > You can call the [DescribeDBClusterEndpoints](https://help.aliyun.com/document_detail/98205.html) operation to query endpoint IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBEndpointId_ {};
    // The network type of the endpoint. Valid values:
    // 
    // *   **Public**
    // *   **Private**
    // 
    // This parameter is required.
    shared_ptr<string> netType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The port number. Valid values: 3000 to 5999.
    // 
    // > This parameter is valid only for PolarDB for MySQL clusters. If you leave this parameter empty, the default port 3306 is used.
    shared_ptr<string> port_ {};
    // The prefix of the private domain name. The prefix must meet the following requirements:
    // 
    // *   The prefix can contain lowercase letters, digits, and hyphens (-).
    // *   The prefix must start with a letter and end with a digit or a letter.
    // *   The prefix must be 6 to 30 characters in length.
    // 
    // >- You can bind each internal endpoint of PolarDB to a private domain name. The private domain name takes effect only in the specified virtual private clouds (VPCs) in the current region. Private domain names are managed by using PrivateZone. You can use the CNAME record of PrivateZone to map domain names to PolarDB. You are charged a small fee for this feature. For more information, see [Pricing](https://help.aliyun.com/document_detail/71338.html).
    // >- This parameter takes effect only if you set **NetType** to Private.
    shared_ptr<string> privateZoneAddressPrefix_ {};
    // The name of the private zone.
    // 
    // > This parameter takes effect only when **NetType** is set to Private.
    shared_ptr<string> privateZoneName_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
