// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEENDPOINTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEENDPOINTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBInstanceEndpointShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceEndpointShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBInstanceEndpointDescription, DBInstanceEndpointDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceEndpointType, DBInstanceEndpointType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeItems, nodeItemsShrink_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceEndpointShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpointDescription, DBInstanceEndpointDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpointType, DBInstanceEndpointType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeItems, nodeItemsShrink_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateDBInstanceEndpointShrinkRequest() = default ;
    CreateDBInstanceEndpointShrinkRequest(const CreateDBInstanceEndpointShrinkRequest &) = default ;
    CreateDBInstanceEndpointShrinkRequest(CreateDBInstanceEndpointShrinkRequest &&) = default ;
    CreateDBInstanceEndpointShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceEndpointShrinkRequest() = default ;
    CreateDBInstanceEndpointShrinkRequest& operator=(const CreateDBInstanceEndpointShrinkRequest &) = default ;
    CreateDBInstanceEndpointShrinkRequest& operator=(CreateDBInstanceEndpointShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->connectionStringPrefix_ == nullptr && this->DBInstanceEndpointDescription_ == nullptr && this->DBInstanceEndpointType_ == nullptr && this->DBInstanceId_ == nullptr && this->nodeItemsShrink_ == nullptr
        && this->port_ == nullptr && this->privateIpAddress_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerId_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string getConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBInstanceEndpointDescription Field Functions 
    bool hasDBInstanceEndpointDescription() const { return this->DBInstanceEndpointDescription_ != nullptr;};
    void deleteDBInstanceEndpointDescription() { this->DBInstanceEndpointDescription_ = nullptr;};
    inline string getDBInstanceEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointDescription_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setDBInstanceEndpointDescription(string DBInstanceEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointDescription_, DBInstanceEndpointDescription) };


    // DBInstanceEndpointType Field Functions 
    bool hasDBInstanceEndpointType() const { return this->DBInstanceEndpointType_ != nullptr;};
    void deleteDBInstanceEndpointType() { this->DBInstanceEndpointType_ = nullptr;};
    inline string getDBInstanceEndpointType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointType_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setDBInstanceEndpointType(string DBInstanceEndpointType) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointType_, DBInstanceEndpointType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // nodeItemsShrink Field Functions 
    bool hasNodeItemsShrink() const { return this->nodeItemsShrink_ != nullptr;};
    void deleteNodeItemsShrink() { this->nodeItemsShrink_ = nullptr;};
    inline string getNodeItemsShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeItemsShrink_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setNodeItemsShrink(string nodeItemsShrink) { DARABONBA_PTR_SET_VALUE(nodeItemsShrink_, nodeItemsShrink) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBInstanceEndpointShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDBInstanceEndpointShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> connectionStringPrefix_ {};
    shared_ptr<string> DBInstanceEndpointDescription_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceEndpointType_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // This parameter is required.
    shared_ptr<string> nodeItemsShrink_ {};
    // This parameter is required.
    shared_ptr<string> port_ {};
    shared_ptr<string> privateIpAddress_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
