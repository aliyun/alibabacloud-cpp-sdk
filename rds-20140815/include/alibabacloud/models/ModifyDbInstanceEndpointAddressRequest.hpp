// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEENDPOINTADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEENDPOINTADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceEndpointAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceEndpointAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBInstanceEndpointId, DBInstanceEndpointId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceEndpointAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpointId, DBInstanceEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ModifyDBInstanceEndpointAddressRequest() = default ;
    ModifyDBInstanceEndpointAddressRequest(const ModifyDBInstanceEndpointAddressRequest &) = default ;
    ModifyDBInstanceEndpointAddressRequest(ModifyDBInstanceEndpointAddressRequest &&) = default ;
    ModifyDBInstanceEndpointAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceEndpointAddressRequest() = default ;
    ModifyDBInstanceEndpointAddressRequest& operator=(const ModifyDBInstanceEndpointAddressRequest &) = default ;
    ModifyDBInstanceEndpointAddressRequest& operator=(ModifyDBInstanceEndpointAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->connectionString_ == nullptr && return this->connectionStringPrefix_ == nullptr && return this->DBInstanceEndpointId_ == nullptr && return this->DBInstanceId_ == nullptr && return this->port_ == nullptr
        && return this->privateIpAddress_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDBInstanceEndpointAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline ModifyDBInstanceEndpointAddressRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string connectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline ModifyDBInstanceEndpointAddressRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBInstanceEndpointId Field Functions 
    bool hasDBInstanceEndpointId() const { return this->DBInstanceEndpointId_ != nullptr;};
    void deleteDBInstanceEndpointId() { this->DBInstanceEndpointId_ = nullptr;};
    inline string DBInstanceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointId_, "") };
    inline ModifyDBInstanceEndpointAddressRequest& setDBInstanceEndpointId(string DBInstanceEndpointId) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointId_, DBInstanceEndpointId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceEndpointAddressRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ModifyDBInstanceEndpointAddressRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline ModifyDBInstanceEndpointAddressRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceEndpointAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyDBInstanceEndpointAddressRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyDBInstanceEndpointAddressRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The endpoint that you want to modify. The endpoint can be a public endpoint or an internal endpoint.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The prefix of the new endpoint. You can modify only the prefix of the endpoint that is specified by the ConnectionString parameter.
    std::shared_ptr<string> connectionStringPrefix_ = nullptr;
    // The endpoint ID of the instance. You can call the DescribeDBInstanceEndpoints operation to query the endpoint ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceEndpointId_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The port number of the new endpoint.
    std::shared_ptr<string> port_ = nullptr;
    // The IP address of the internal endpoint.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The vSwitch ID of the internal endpoint.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID of the internal endpoint.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
