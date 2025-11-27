// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDBInstanceEndpointRequestNodeItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBInstanceEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBInstanceEndpointDescription, DBInstanceEndpointDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceEndpointType, DBInstanceEndpointType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeItems, nodeItems_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpointDescription, DBInstanceEndpointDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpointType, DBInstanceEndpointType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeItems, nodeItems_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateDBInstanceEndpointRequest() = default ;
    CreateDBInstanceEndpointRequest(const CreateDBInstanceEndpointRequest &) = default ;
    CreateDBInstanceEndpointRequest(CreateDBInstanceEndpointRequest &&) = default ;
    CreateDBInstanceEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceEndpointRequest() = default ;
    CreateDBInstanceEndpointRequest& operator=(const CreateDBInstanceEndpointRequest &) = default ;
    CreateDBInstanceEndpointRequest& operator=(CreateDBInstanceEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->connectionStringPrefix_ == nullptr && return this->DBInstanceEndpointDescription_ == nullptr && return this->DBInstanceEndpointType_ == nullptr && return this->DBInstanceId_ == nullptr && return this->nodeItems_ == nullptr
        && return this->port_ == nullptr && return this->privateIpAddress_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string connectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline CreateDBInstanceEndpointRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBInstanceEndpointDescription Field Functions 
    bool hasDBInstanceEndpointDescription() const { return this->DBInstanceEndpointDescription_ != nullptr;};
    void deleteDBInstanceEndpointDescription() { this->DBInstanceEndpointDescription_ = nullptr;};
    inline string DBInstanceEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointDescription_, "") };
    inline CreateDBInstanceEndpointRequest& setDBInstanceEndpointDescription(string DBInstanceEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointDescription_, DBInstanceEndpointDescription) };


    // DBInstanceEndpointType Field Functions 
    bool hasDBInstanceEndpointType() const { return this->DBInstanceEndpointType_ != nullptr;};
    void deleteDBInstanceEndpointType() { this->DBInstanceEndpointType_ = nullptr;};
    inline string DBInstanceEndpointType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointType_, "") };
    inline CreateDBInstanceEndpointRequest& setDBInstanceEndpointType(string DBInstanceEndpointType) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointType_, DBInstanceEndpointType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDBInstanceEndpointRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // nodeItems Field Functions 
    bool hasNodeItems() const { return this->nodeItems_ != nullptr;};
    void deleteNodeItems() { this->nodeItems_ = nullptr;};
    inline const vector<CreateDBInstanceEndpointRequestNodeItems> & nodeItems() const { DARABONBA_PTR_GET_CONST(nodeItems_, vector<CreateDBInstanceEndpointRequestNodeItems>) };
    inline vector<CreateDBInstanceEndpointRequestNodeItems> nodeItems() { DARABONBA_PTR_GET(nodeItems_, vector<CreateDBInstanceEndpointRequestNodeItems>) };
    inline CreateDBInstanceEndpointRequest& setNodeItems(const vector<CreateDBInstanceEndpointRequestNodeItems> & nodeItems) { DARABONBA_PTR_SET_VALUE(nodeItems_, nodeItems) };
    inline CreateDBInstanceEndpointRequest& setNodeItems(vector<CreateDBInstanceEndpointRequestNodeItems> && nodeItems) { DARABONBA_PTR_SET_RVALUE(nodeItems_, nodeItems) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateDBInstanceEndpointRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateDBInstanceEndpointRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceEndpointRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBInstanceEndpointRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceEndpointRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDBInstanceEndpointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The prefix of the internal endpoint.
    // 
    // When you create any type of endpoint, an internal endpoint is automatically created for the endpoint. This parameter specifies the prefix of the internal endpoint.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionStringPrefix_ = nullptr;
    // The user-defined description of the endpoint.
    std::shared_ptr<string> DBInstanceEndpointDescription_ = nullptr;
    // The endpoint type. Valid values:
    // 
    // *   Primary: read/write endpoint of the instance
    // *   Readonly: read-only endpoint of the instance
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceEndpointType_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The information about the endpoint.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateDBInstanceEndpointRequestNodeItems>> nodeItems_ = nullptr;
    // The port number of the internal endpoint. You can specify the port number for the internal endpoint.
    // 
    // Valid values: 3000 to 5999.
    // 
    // This parameter is required.
    std::shared_ptr<string> port_ = nullptr;
    // The IP address of the internal endpoint.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The resource group ID. You can call the DescribeDBInstanceAttribute operation to obtain the ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The vSwitch ID of the internal endpoint.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID of the internal endpoint.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
